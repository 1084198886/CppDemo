//
// Created by Administrator on 2022/3/2.
//
/**
 * C++   struct
 */

#ifndef C__DEMO_CPPSTRUCT_H

class ClassA;

//template<class ClassA>
//template<struct StructA>;

struct StructA {
    string name;
    int age;

public:
    void setAge(int age);
};

void StructA::setAge(int age) {
    this->age = age;
}

class ClassA {
    string name;
    int age;
public:
    void setAge(int age);
};

void ClassA::setAge(int age) {
    this->age = age;
}

void cppStruct() {
    StructA structA;
    structA.setAge(1);
    cout << "struct age:" << structA.age << endl;

    ClassA classA;
    classA.setAge(1);
//    cout << "class age:" << classA.age << endl;   // class变量默认private     struct默认public
}

#define C__DEMO_CPPSTRUCT_H

#endif //C__DEMO_CPPSTRUCT_H
