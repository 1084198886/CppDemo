//
// Created by Administrator on 2022/2/21.
//
/**
 * 命令空间  namespace
 */
#ifndef C__DEMO_CNAMESPACE_H

#include <cstdio>

#define C__DEMO_CNAMESPACE_H


#endif //C__DEMO_CNAMESPACE_H

namespace Li {
    FILE *fp = NULL;
}
namespace Han {
    FILE *fp = NULL;

    class Student {
    public:
        char *name;
        int age;
        float score;

        void eat() {
            printf("eat food !\n");
        }

    public:
        void say() {
            printf("%s's age is:%d, score is:%f\n", name, age, score);
        }
    };
}

void namespaceTest() {
    Li::fp = fopen("demo.txt", "r");
    printf("open file success !\n");

//    也可以采用 using 关键字声明
    using Han::fp;
    fp = fopen("demo.txt", "r+b");
//也可以用于声明整个命名空间
    using namespace Han;
    fp = fopen("demo.txt", "rb");

    Han::Student stu;
    stu.name = "zhangsan";
    stu.age = 10;
    stu.score = 11.2f;
    stu.eat();
    stu.say();
}