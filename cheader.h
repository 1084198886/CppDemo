//
// Created by Administrator on 2022/2/22.
//
#include <string>
#include <cstdio>
/**
 * C++头文件和std命名空间
 */

#ifndef C__DEMO_CHEADER_H
#define C__DEMO_CHEADER_H

void func();

#endif //C__DEMO_CHEADER_H

//using namespace std;  都使用命名空间 std，可以将它声明在全局范围中

void cppHeaderTest() {
    //声明命名空间std
    using namespace std;
    string str;
    int age;
    //从控制台获取用户输入
    cin >> str >> age;
    //将数据输出到控制台
    cout << str << " has station " << age << " years !" << endl;

    func();
}

void func() {
    //命名空间std的作用范围仅限于函数内部，如果其它函数中使用，要重新声明
    using namespace std;
    cout << "func out !" << endl;
}
