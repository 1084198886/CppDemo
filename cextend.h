//
// Created by Administrator on 2022/3/3.
//
/**
 * C++ 继承
 */

#ifndef C__DEMO_CEXTEND_H

void constructTest();

void destructorTest();

void multExtends();

//基类 Pelple
class People {
protected:
    float m_height;

    void setheight(float height);

private:
    char *m_name;
    int m_age;
public:
    int m_level;

    void setname(char *name);

    char *getname();

    void setage(int age);

    int getage();

    float getheight();

    void eatfood();

    void eatfood(bool issmile);

    void setlevel(int level);

    int getlevel();
};

void People::setname(char *name) { this->m_name = name; }

char *People::getname() { return this->m_name; }

void People::setage(int age) { this->m_age = age; }

int People::getage() { return this->m_age; }

float People::getheight() {
    return this->m_height;
}

void People::setheight(float height) {
    this->m_height = height;
}

void People::eatfood() {
    cout << "people eat food !" << endl;
}

void People::setlevel(int level) {
    this->m_level = level;
}

int People::getlevel() {
    return this->m_level;
}

void People::eatfood(bool smile) {
    cout << "people eat food smile !" << endl;
}

//派生类 Student
class Student4 : public People {
private:
    float m_score;
public:
    int m_level;
    using People::m_height; //使用  using 将protected改为public
    void eatfood();

public:
    void setscore(float score);

    float getscore();

    void setlevel(int level);

    int getlevel();

    using People::setheight;  //使用  using 将protected的函数 改为public
};

void Student4::setscore(float score) { this->m_score = score; }

float Student4::getscore() { return this->m_score; }

void Student4::eatfood() {
    cout << "student4 eat food!" << endl;
}

void Student4::setlevel(int level) {
    this->m_level = level;
}

int Student4::getlevel() {
    return this->m_level;
}


//派生类 Student5  protected
class Student5 : protected People {

};

void extendTest() {
    Student4 stu;
    stu.setname("zhangsan");
    stu.setage(11);
    stu.setscore(11.2);
    stu.setheight(11);
    stu.setlevel(22);
    cout << stu.getname() << " age is: " << stu.getage() << ", level is: " << stu.getlevel() << ", score is: "
         << stu.getscore() << endl;

    stu.eatfood(); // 名字遮蔽，会调用 派生类中的函数；
//    stu.eatfood(true);  // compile error   无法调用基类的  eatfood(bool issmile)
    stu.People::eatfood();  // 手动调用基类的方法；

    constructTest();
    destructorTest();
    cout << endl << endl;
    multExtends();
}


/**
 * 基类和派生类的构造函数
 */

class Parent {
protected:
    char *m_name;
    int m_age;
public:
    Parent();  //基类默认构造函数

    Parent(char *, int);
};

Parent::Parent(char *name, int age) : m_name(name), m_age(age) {}

Parent::Parent() : m_name("xxx"), m_age(0) {}


class Child : public Parent {
private:
    float m_score;
public:
    Child();

    Child(char *name, int age, float score);

    void display();
};

//Parent(name, age) 就是调用基类的构造函数。并将 name 和 age 作为实参传递给它，m_score(score)是派生类的参数初始化表
Child::Child(char *name, int age, float score) : Parent(name, age), m_score(score) {}

void Child::display() {
    cout << m_name << " age is " << m_age << ", score is " << m_score << endl;
}

Child::Child() : m_score(0.0) {}  //派生类默认构造函数

void constructTest() {
    Child cld;
    cld.display();

    Child child("zhangsan", 22, 2.22);
    child.display();
}

/**
 * 基类和派生类的  析构函数
 */
class A {
public:
    A() { cout << "A constructor" << endl; };

    ~A() { cout << "~A destructor" << endl; };
};

class B : public A {
public:
    B() { cout << "B constructor" << endl; };

    ~B() { cout << "~B destructor" << endl; };
};

void destructorTest() {
    B b;
}

/**
 * 多重继承
 */
//基类
class BaseA {
public:
    BaseA(int a, int b);

    ~BaseA();

    void show();

protected:
    int m_a;
    int m_b;
};

BaseA::BaseA(int a, int b) : m_a(a), m_b(b) {
    cout << "BaseA constructor" << endl;
}

BaseA::~BaseA() {
    cout << "BaseA destructor" << endl;
}

void BaseA::show() {
    cout << "m_a = " << m_a << endl;
    cout << "m_b = " << m_b << endl;
}

//基类
class BaseB {
public:
    BaseB(int c, int d);

    ~BaseB();

    void show();

protected:
    int m_c;
    int m_d;
};

BaseB::BaseB(int c, int d) : m_c(c), m_d(d) {
    cout << "BaseB constructor" << endl;
}

BaseB::~BaseB() {
    cout << "BaseB destructor" << endl;
}

void BaseB::show() {
    cout << "m_c = " << m_c << endl;
    cout << "m_d = " << m_d << endl;
}

// 多重继承，派生类
class Derived : public BaseA, public BaseB {

public:
    Derived(int a, int b, int c, int d, int e);

    ~Derived();

    void display();

private:
    int m_e;
};

Derived::Derived(int a, int b, int c, int d, int e) : BaseA(a, b), BaseB(c, d), m_e(e) {
    cout << "Derived constructor" << endl;
}

Derived::~Derived() {
    cout << "Derived destructor" << endl;
}

void Derived::display() {
    BaseA::show();  //调用BaseA类的show()函数
    BaseB::show();  //调用BaseB类的show()函数
    cout << m_a << ", " << m_b << ", " << m_c << ", " << m_d << ", " << m_e << endl;
}

void multExtends() {
    Derived obj(1, 2, 3, 4, 5);
    obj.display();
}

#define C__DEMO_CEXTEND_H

#endif //C__DEMO_CEXTEND_H
