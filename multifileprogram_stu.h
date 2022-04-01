//
// Created by Administrator on 2022/4/1.
//
/**
 * 多文件编程-件声明文
 */
#ifndef C__DEMO_MULTIFILEPROGRAM_STU_H
#define C__DEMO_MULTIFILEPROGRAM_STU_H

const int num = 1;  // 头文件定义const常量

extern  const int score;

class MyStudent {
public:
    const char *name;
    int age;
    float score;

    void say();
};

#include "multifileprogram_stu.cpp"

#endif //C__DEMO_MULTIFILEPROGRAM_STU_H
