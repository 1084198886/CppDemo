//
// Created by Administrator on 2022/2/28.
//
/**
 * 类成员访问权限
 */
#ifndef C__DEMO_CPPCLASS2_H
using namespace std;

class Student2 {
private:
    char *m_name;
    int m_age;
    float m_score;

public:
    // 函数声明
    void setname(char *name);

    // 声明构造函数
    Student2();

    Student2(char *name, int age, float score);

    Student2(char *name, int age);

    void setage(int age);

    void setscore(float score);

    void show();
};

// 函数定义
void Student2::setname(char *name) {
    m_name = name;
}

void Student2::setage(int age) {
    m_age = age;
}

void Student2::setscore(float score) {
    m_score = score;
}

void Student2::show() {
    cout << "name=" << m_name << ",age=" << m_age << ",score=" << m_score << endl;
}

//定义构造函数
Student2::Student2(char *name, int age, float score) {
    m_name = name;
    m_age = age;
    m_score = score;
}

//定义构造函数
Student2::Student2() {
    m_name = NULL;
    m_age = 0;
    m_score = 0.0f;
}

class CLA {
    const int m_len; //
    int *m_arr;
public:
    CLA(int len);
};

CLA::CLA(int len) : m_len(len) {
    m_arr = int[len];
}

void testClass2() {
    //在栈上创建对象
    Student2 stu;
    stu.setname("wangliu");
    stu.setage(33);
    stu.setscore(22.3);
    stu.show();

    //在堆上创建对象
    Student2 *p = new Student2;
    p->setname("wangliu2");
    p->setage(22.3);
    p->setscore(33.5);
    p->show();

    Student2 stu2("wangliu3", 66, 3.3);
    stu2.show();
    Student2 *p2 = new Student2("wangliu4", 45, 33.6);
    p2->show();


    CLA *pp = new CLA(22);
}

#define C__DEMO_CPPCLASS2_H

#endif //C__DEMO_CPPCLASS2_H
