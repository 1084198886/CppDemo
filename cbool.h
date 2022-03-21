//
// Created by Administrator on 2022/2/22.
//
/**
 * C++ 布尔变量
 */
#ifndef C__DEMO_CBOOL_H

const int F = 11;
using namespace std;
void boolTest() {
    int a = 1, b = 2;
    bool flag = false;
    flag = a > b;
    if (flag) {
        std::cout << "flag=" << true << endl;
    } else {
        cout << "flag=" << false << endl;
    }
}

#define C__DEMO_CBOOL_H

#endif //C__DEMO_CBOOL_H


