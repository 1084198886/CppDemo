//
// Created by Administrator on 2022/2/22.
//
/**
 * C++ 布尔变量
 */
#ifndef C__DEMO_CBOOL_H

const int F = 11;
#define C__DEMO_CBOOL_H

#endif //C__DEMO_CBOOL_H


void boolTest() {
    int a = 1, b = 2;
    bool flag = false;
    using namespace std;
    flag = a > b;
    if (flag) {
        cout << "flag=" << true << endl;
    } else {
        cout << "flag=" << false << endl;
    }
}