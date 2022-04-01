//
// Created by Administrator on 2022/4/1.
//
/**
 * 多文件命名空间1
 */
#ifndef C__DEMO_NAMESPACEMAIN_H
#define C__DEMO_NAMESPACEMAIN_H

#include "namespacetest1.h"
#include "namespacetest2.h"
#include "iostream"

void namespaceTest() {
    Li::Student liStu;
    liStu.display();
    Li::say();
    Li::Lei leiStu;
    leiStu.show();

    Han::Student hanStu;
    hanStu.display();
}

#endif //C__DEMO_NAMESPACEMAIN_H
