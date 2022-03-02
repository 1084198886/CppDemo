//
// Created by Administrator on 2022/3/1.
//
/**
 * static 静态成员
 */
#ifndef C__DEMO_STATICMEMBER_H
using namespace std;

class Student {
private:
    int age;
    static int score;
public:
    static int m_total;  // 声明静态成员变量，表示学生人数
    int aa;
public:
    Student(int age);

    static int getTotal();
};

Student::Student(int age) {
    this->age = age;
    m_total++;
}

int Student::m_total = 0; //static成员的初始化；
int Student::score = 22;

// 静态函数的定义
int Student::getTotal() {
    return m_total;
}

void staticMember() {
    Student *p = new Student(22);
    cout << "total num is :" << p->m_total << endl;
    cout << "total is :" << Student::getTotal() << endl;
}

#define C__DEMO_STATICMEMBER_H

#endif //C__DEMO_STATICMEMBER_H
