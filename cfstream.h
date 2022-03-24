//
// Created by Administrator on 2022/3/22.
//
/**
 * C++文件流
 */
#ifndef C__DEMO_CFSTREAM_H

#include <fstream>

using namespace std;

void fstreamTest() {
//    fstream f;
//    const char *str = "I am a programer";
//    f.open("stream.txt", ios::out);
//    f.write(str, 30);  // 写入字符串
//    f.close();

    // open 打开文件
    ifstream inFile;
    inFile.open("F:\\file.txt", ios::in);
    if (inFile) {  //条件成立，则说明文件打开成功
        char str[10];
        inFile.getline(str, 8);
        printf("open in  file.txt suc, str=%s\n", str);
        inFile.close();
    } else {
        printf("open file.txt fail\n");
    }

    ofstream outFile;
    outFile.open("F:\\file.txt", ios::out);
    if (outFile) {
        char str[] = "HH";
        outFile.write(str, sizeof(str) - 1);
        printf("open out file.txt suc\n");
        outFile.close();
    } else {
        printf("open out file.txt fail\n");
    }

    outFile.open("F:\\file.txt", ios::app);   // append模式打开
    if (outFile) {
        char str[] = "AA";
        outFile.write(str, sizeof(str) - 1);
        printf("open append file.txt suc\n");
        outFile.close();
    } else {
        printf("open append file.txt fail\n");
    }

    fstream ioFile;
    ioFile.open("F:\\file.txt", ios::out | ios::in);  //可读可写 文件刚打开时，原有内容保持不变
    if (ioFile) {
        char str[] = "KKK";
        ioFile.write(str, sizeof(str) - 1);   // 会覆盖掉原有内容的前3个字符，其它字符保持不变；
        printf("sizeof: %d\n", sizeof(str));   // 3
        printf("open ioFile file.txt suc\n");
        ioFile.close();
    } else {
        printf("open ioFile file.txt fail\n");
    }

    ioFile.open("F:\\file.txt", ios::out | ios::in | ios::trunc);  //可读可写，打开先清除
    if (ioFile) {
        char str[] = "LLLL";
        ioFile.write(str, sizeof(str) - 1);
        printf("open ioFile file.txt suc\n");
        ioFile.close();
    } else {
        printf("open ioFile file.txt fail\n");
    }
}

#define C__DEMO_CFSTREAM_H

#endif //C__DEMO_CFSTREAM_H
