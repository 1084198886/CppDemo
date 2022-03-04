//
// Created by Administrator on 2022/3/3.
//
/**
 * C++  向上转型
 */
#ifndef C__DEMO_CUPCASTING_H

//基类
class E {
public:
    E(int a);

public:
    void display();

public:
    int m_a;
};

E::E(int a) : m_a(a) {}

void E::display() {
    cout << "Class E: m_a=" << m_a << endl;
}

//派生类
class F : public E {
public:
    F(int a, int b);

public:
    void display();

public:
    int m_b;
};

F::F(int a, int b) : E(a), m_b(b) {}

void F::display() {
    cout << "Class F: m_a=" << m_a << ", m_b=" << m_b << endl;
}

void upcastTest() {
    E e(1);
    F f(2, 3);
    e.display();
    f.display();
    cout << "--------------" << endl;
    e = f;  // 派生类赋值给基类；
    e.display();
    f.display();
}


#define C__DEMO_CUPCASTING_H

#endif //C__DEMO_CUPCASTING_H
