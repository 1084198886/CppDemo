//
// Created by Administrator on 2022/2/25.
//
/**
 * C++   new 用来动态分配内存，delete 用来释放内存
 */
#include <cstdio>
#include <cstdlib>

#ifndef C__DEMO_NEWDELETE_H
#define C__DEMO_NEWDELETE_H

#endif //C__DEMO_NEWDELETE_H


void newdelete() {
    //C 中使用  malloc 和  free 申请和释放内存
    int *p = (int *) malloc(sizeof(int) * 4);//分配10个int型的内存空间
    free(p);

    //C++
    int *p1 = new int;  //分配1个int型的内存空间
    delete p1;

    int *p2 = new int[10];  //分配10个int型的内存空间
    delete[]p2;
}