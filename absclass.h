//
// Created by Administrator on 2022/3/4.
//
/**
 * 纯虚函数 和抽象类
 */
#ifndef C__DEMO_ABSCLASS_H

class Line {
protected:
    float m_len;

public:
    Line(float len);

    virtual float area() = 0; // 定义纯虚函数

    virtual float volume() = 0;
};

Line::Line(float len) : m_len(len) {}

//矩形
class Rect : public Line {
protected:
    float m_width;
public:
    Rect(float width, float len);

    float area();  // 实现了area方法，但未实现volume方法  还是抽象类
};

Rect::Rect(float width, float len) : Line(len), m_width(width) {}

float Rect::area() { return m_width * m_len; }

// 长方体
class Cuboid : public Rect {
private:
    float m_height;

public:
    Cuboid(float width, float len, float height);

    float area();    // 同时实现了area 和 volume函数，可以被实例化了。

    float volume();
};

Cuboid::Cuboid(float width, float len, float height) : Rect(width, len), m_height(height) {}

float Cuboid::area() {
    cout << "Cuboid::area  " << endl;
    return 2 * (m_len * m_width + m_len * m_height + m_width * m_height);
}

float Cuboid::volume() {
    cout << "Cuboid::volume  " << endl;
    return this->m_width * this->m_len * this->m_height;
}

void absClass() {
    Rect *rect = new Cuboid(1, 2, 3);
    cout << rect->area() << endl;
    cout << rect->volume() << endl;
}

#define C__DEMO_ABSCLASS_H

#endif //C__DEMO_ABSCLASS_H
