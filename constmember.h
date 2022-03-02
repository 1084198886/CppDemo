//
// Created by Administrator on 2022/3/1.
//
/**
 * const 成员函数和变量
 */
#ifndef C__DEMO_CONSTMEMBER_H
using namespace std;

class Student2 {
public:
    const int m_total;

    Student2(int total);
    float getscore();

    int getage() const;  //声明常成员函数

private:
    int age;
    string name;
    float score;

};

int Student2::getage() const {  //定义常成员函数
    return this->age;
}

Student2::Student2(int total) : m_total(total) {
    this->age = 11;
    this->name = "zhangsan";
    this->score = 22.2;
}

float Student2::getscore() {
    return score;
}

void constMember() {
    // 常对象以及常对象指针，它们都只能调用 const 成员函数。
    const Student2 *p = new Student2(11);
    cout << p->getage() << endl;
}

#define C__DEMO_CONSTMEMBER_H

#endif //C__DEMO_CONSTMEMBER_H
