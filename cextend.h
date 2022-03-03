//
// Created by Administrator on 2022/3/3.
//
/**
 * C++ 继承
 */

#ifndef C__DEMO_CEXTEND_H

//基类 Pelple
class People {
protected:
    float m_height;

    void setheight(float height);

private:
    char *m_name;
    int m_age;
public:
    int m_level;

    void setname(char *name);

    char *getname();

    void setage(int age);

    int getage();

    float getheight();

    void eatfood();

    void eatfood(bool issmile);

    void setlevel(int level);

    int getlevel();
};

void People::setname(char *name) { this->m_name = name; }

char *People::getname() { return this->m_name; }

void People::setage(int age) { this->m_age = age; }

int People::getage() { return this->m_age; }

float People::getheight() {
    return this->m_height;
}

void People::setheight(float height) {
    this->m_height = height;
}

void People::eatfood() {
    cout << "people eat food !" << endl;
}

void People::setlevel(int level) {
    this->m_level = level;
}

int People::getlevel() {
    return this->m_level;
}

void People::eatfood(bool smile) {
    cout << "people eat food smile !" << endl;
}

//派生类 Student
class Student4 : public People {
private:
    float m_score;
public:
    int m_level;
    using People::m_height; //使用  using 将protected改为public
    void eatfood();

public:
    void setscore(float score);

    float getscore();

    void setlevel(int level);

    int getlevel();

    using People::setheight;  //使用  using 将protected的函数 改为public
};

void Student4::setscore(float score) { this->m_score = score; }

float Student4::getscore() { return this->m_score; }

void Student4::eatfood() {
    cout << "student4 eat food!" << endl;
}

void Student4::setlevel(int level) {
    this->m_level = level;
}

int Student4::getlevel() {
    return this->m_level;
}


//派生类 Student5  protected
class Student5 : protected People {

};

void extendTest() {
    Student4 stu;
    stu.setname("zhangsan");
    stu.setage(11);
    stu.setscore(11.2);
    stu.setheight(11);
    stu.setlevel(22);
    cout << stu.getname() << " age is: " << stu.getage() << ", level is: " << stu.getlevel() << ", score is: "
         << stu.getscore() << endl;

    stu.eatfood(); // 名字遮蔽，会调用 派生类中的函数；
//    stu.eatfood(true);  // compile error   无法调用基类的  eatfood(bool issmile)
    stu.People::eatfood();  // 手动调用基类的方法；
}

#define C__DEMO_CEXTEND_H

#endif //C__DEMO_CEXTEND_H
