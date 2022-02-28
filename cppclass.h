//
// Created by Administrator on 2022/2/28.
//
/**
 * C++  类
 */

#ifndef C__DEMO_CPPCLASS_H
using namespace std;

class Student {
public:
    //成员变量
    int age;
    char *name;
    float score;

public:
    //成员函数
    void say() {
        cout << name << "'s age is" << age << ",name is:" << name << endl;
    }

    void eat();  // 类中声明，类体外定义；
    void drink();
};

void Student::eat() {
    // 定义
}

inline void Student::drink() {
    // 内联函数
}

void testCppClass() {
    // 创建对象
    Student stu;
    Student arr[10]; // 对象数组

    stu.name = "zhangsan";
    stu.age = 11;
    stu.score = 111.1;
    stu.say();
    printf("name:%s \n", stu.name);

    // 对象指针；
    Student *p = &stu;
    p->name = "lisi";
    p->age = 111;
    printf("name2:%s   age2=%d \n", stu.name, stu.age);

    // 通过new创建对象；
    Student *pStu = new Student;
    pStu->name = "wangwu";
    pStu->age = 222;
    printf("pStu  name3:%s   age3=%d \n", pStu->name, pStu->age);
    delete pStu; // 释放；
}

#define C__DEMO_CPPCLASS_H

#endif //C__DEMO_CPPCLASS_H
