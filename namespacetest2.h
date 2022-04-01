//
// Created by Administrator on 2022/4/1.
//
/**
 * 多文件命名空间2
 */
#ifndef C__DEMO_NAMESPACETEST2_H
#define C__DEMO_NAMESPACETEST2_H

#include "iostream"

namespace Han {
    using namespace std;

    class Student {
    public:
        void display() {
            cout << "Han::display()" << endl;
        }
    };
}


namespace Li {
    using namespace std;

    void say() {
        cout << "Li:say()" << endl;
    }

    class Lei {
    public:
        void show() {
            cout << "Lei:show()" << endl;
        }
    };
}
#endif //C__DEMO_NAMESPACETEST2_H
