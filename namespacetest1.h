//
// Created by Administrator on 2022/4/1.
//
/**
 * 多文件命名空间1
 */
#ifndef C__DEMO_NAMESPACETEST1_H
#define C__DEMO_NAMESPACETEST1_H

#include "iostream"

namespace Li {
    using namespace std;

    class Student {
    public:
        void display() {
            cout << "Li::display()" << endl;
        }
    };
}
#endif //C__DEMO_NAMESPACETEST1_H
