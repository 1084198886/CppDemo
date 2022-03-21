//
// Created by Administrator on 2022/3/11.
//
#include <iostream>
/**
 * 输入输出流
 */
#ifndef C__DEMO_CIOSTREAM_H

using namespace std;

void iostreamTest() {
    string url = "http://baidu.com";
    cout << "out:" << url << endl;   // cout 和 clog 都设有缓冲区
//    cin >>url;
    cerr << "err:" << url << endl;
    clog << "log:" << url << endl;

    bool flag = false;
    if (flag) {

    }
}

#define C__DEMO_CIOSTREAM_H

#endif //C__DEMO_CIOSTREAM_H
