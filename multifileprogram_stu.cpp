//
// Created by Administrator on 2022/4/1.
//
/**
 * 多文件编程-文件定义
 */

//#include "multifileprogram_stu.h"
#include "iostream"

const int score = 11;
using namespace std;

void MyStudent::say() {
    cout << this->name << " age is " << this->age << ",score is " << this->score << endl;
}