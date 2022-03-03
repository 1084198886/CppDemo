//
// Created by Administrator on 2022/3/2.
//
/**
 * C++的 引用
 */
#ifndef C__DEMO_CPPQUOTE_H
using namespace std;

void swapVal(int &m, int &n);

void ff(string &m, const string &n);

// 引用类型作为返回值
int &plus10(int &r) {
    r += 10;
    return r;
}

int quoteTest() {
    int a = 1;
    int &b = a;
    b = 2;
    cout << "b=" << b << endl;

    int c = 33;
    swapVal(b, c);
    cout << "b=" << b << ",c=" << c << endl;

    // const类型的变量，无法修改
    int const &d = c;

    int c2 = 6;
    int &e = c2;
    int f = plus10(e);
    cout << "f=" << f << endl;

//    C++引用不能绑定到临时数据
    int m = 1, n = 2;
//    int *p = &(m + n);


    string ss = "S1";
    const char *ss2 = "S2";
    cout << "&ss=" << &ss << "   &ss2=" << &ss2 << endl;
    ff(ss, ss2);
    return 0;
}

void ff(string &m, const string &n) {
    cout << "ff  &m=" << &m << endl;
    cout << "ff  &n=" << &n << endl; // const变量地址发生了变化
}

// 交换数值
void swapVal(int &m, int &n) {
    int tmp = m;
    m = n;
    n = tmp;
}

#define C__DEMO_CPPQUOTE_H


#endif //C__DEMO_CPPQUOTE_H
