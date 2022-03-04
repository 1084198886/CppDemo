//
// Created by Administrator on 2022/3/4.
//
/**
 * C++ 运算符重载
 */
#ifndef C__DEMO_CFLAGOVERIDE_H

class Complex {
public:
    Complex();

    Complex(double real, double imag);

public:
    //声明运算符重载
    Complex operator+(const Complex &flag) const;

    void display() const;

private:
    double m_real;  //实部
    double m_imag;  //虚部
};

Complex::Complex() {}

Complex::Complex(double real, double imag) : m_real(real), m_imag(imag) {}

//实现运算符重载
Complex Complex::operator+(const Complex &flag) const {
    Complex B;
    B.m_real = this->m_real + flag.m_real;
    B.m_imag = this->m_imag + flag.m_imag;
    return B;
}

void Complex::display() const {
    cout << m_real << " + " << m_imag << "i" << endl;
}


void flagOverideTest() {
    Complex c1(4.3, 5.1);
    Complex c2(1.1, 2.1);
    Complex c3 = c1 + c2;
    c3.display();
}

#define C__DEMO_CFLAGOVERIDE_H

#endif //C__DEMO_CFLAGOVERIDE_H
