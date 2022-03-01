//
// Created by Administrator on 2022/3/1.
//
/**
 * 析构函数的调用时机
 */
#include <string>
#include <iostream>

#ifndef C__DEMO_CXIGOUFUNCINVOKE_H
using namespace std;

class Demo {
private:
    string m_str;
public:
    Demo(string s);

    ~Demo();
};

Demo::Demo(string str) : m_str(str) {
}

Demo::~Demo() {
    cout << m_str << endl;
}

void func() {
    Demo obj1("1");
}

Demo obj2("2");  //全局对象


void xigouFuncInvokeTime() {
    // 局部对象
    Demo obj3("3");
    // 在堆上创建对象；
    Demo *pobj4 = new Demo("4");
    func();
    cout << "main" << endl;
//    delete  pobj4;   // 堆上的内存如果不调用delete 不会自动清理内存；
}

#define C__DEMO_CXIGOUFUNCINVOKE_H

#endif //C__DEMO_CXIGOUFUNCINVOKE_H
