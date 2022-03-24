//
// Created by Administrator on 2022/3/16.
//
/**
 * cout格式化输出
 */
#ifndef C__DEMO_COUTFMT_H

#include <iomanip>
#include <fstream>


void coutFmtTest() {
    double a = 133.333333;
    cout.precision(4);  //设置输出浮点数的精度为 n
    cout << "precision  a=" << a << endl;

    cout.setf(ios::scientific);
    cout << "scientific a=" << a << endl;

    //删除之前有关浮点表示的设定
    cout.unsetf(ios::floatfield);
    cout << "unsetf a=" << a << endl;


    //以十六进制输出整数
    cout << hex << "16  hex=" << 16 << endl;
    //删除之前设定的进制格式，以默认的 10 进制输出整数
    cout << resetiosflags(ios::basefield) << 16 << endl;

    double b = 123;
    //以科学计数法的方式输出浮点数
    cout << scientific << b << endl;
    //删除之前设定的科学计数法的方法
    cout << resetiosflags(ios::scientific) << endl;
    cout << "b=" << b << endl;


    cout << "Hello world !" << endl;  // inserts a newline, then flushes the buffer
    cout << "Hello world !" << ends; // inserts a null, then flushes the buffer
    cout << "Hello world !" << flush; // flushes the buffer; adds no data

    cin.tie(&cout);
    ostream *old_tie = cin.tie();
    cin.tie(0);
    cin.tie(old_tie);


    // 流的重定向
    ifstream fin;
    fin.open("demo.txt");
    streambuf *backup = cin.rdbuf();
    cin.rdbuf(fin.rdbuf());

    // cin will read from file;
    char *c1 = NULL, *c2 = NULL;
    cin >> c1;

    cout << c1 << c2 << endl;

    cin.rdbuf(backup);

}

#define C__DEMO_COUTFMT_H

#endif //C__DEMO_COUTFMT_H
