//
// Created by Administrator on 2022/3/4.
//
/**
 * template  函数模板 和类模板
 */
#ifndef C__DEMO_CTEMPLATE_H

//声明函数模板
template<typename T>
void Swap(T &a, T &b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

/**
 * 类模板
 */

template<typename T1, typename T2>
class Point {

private:
    T1 m_x;
    T2 m_y;
public:
    Point(T1 x, T2 y);

    T1 getx() const;

    void setx(T1 x);

    T2 gety() const;

    int sety(T2 y);
};

template<typename T1, typename T2>
T1 Point<T1, T2>::getx() const {
    return this->m_x;
}

template<typename T1, typename T2>
Point<T1, T2>::Point(T1 x, T2 y):m_x(x), m_y(y) {}

template<typename T1, typename T2>
void Point<T1, T2>::setx(T1 x) {
    this->m_x = x;
}

template<typename T1, typename T2>
T2 Point<T1, T2>::gety() const {
    return this->m_y;
}

void templateTest() {
    /**
     * 函数模板
     */
    int a = 1, b = 2;
    int &p1 = a;
    int &p2 = b;
    Swap(p1, p2);
    cout << "a=" << a << ",b=" << b << endl;

    /**
     * 类模板
     */
    Point<int, int> *point = new Point<int, int>(1, 2);
    cout << "x=" << point->getx() << endl;
    Point<float, int> *pointf = new Point<float, int>(1.1f, 2);
    cout << "float x=" << pointf->getx() << endl;

    Point<string, string> *pointstr = new Point<string, string>("x str", "y str");
    cout << "string x=" << pointstr->getx() << endl;
}


template<typename T1, typename T2>
int Point<T1, T2>::sety(T2 y) {
    return this->m_y = y;
}

#define C__DEMO_CTEMPLATE_H

#endif //C__DEMO_CTEMPLATE_H
