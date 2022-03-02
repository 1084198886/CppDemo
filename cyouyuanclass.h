//
// Created by Administrator on 2022/3/2.
//
/**
 * 友元类
 */
#ifndef C__DEMO_CYOUYUANCLASS_H
#define C__DEMO_CYOUYUANCLASS_H
using namespace std;

class Address;  //提前声明Address类

class Student3 {
public:
    Student3(string name, int age, float score);

public:
    void show(Address *addr);

private:
    int m_age;
    string m_name;
    float m_score;
};


class Address {
public:
    Address(char *province, char *city, char *district);

public:
    friend void Student3::show(Address *addr);      //将Student类中的成员函数show()声明为友元函数
    friend void show(Address *addr);    //将非成员函数声明为友元函数
//    friend  class  Student3;  // 将整个Student3类声明为Adress的友元类；

private:
    char *m_province;  //省份
    char *m_city;  //城市
    char *m_district;  //区（市区）
};


// 实现Student3
Student3::Student3(string name, int age, float score) {
    this->m_name = name;
    this->m_age = age;
    this->m_score = score;
}

void Student3::show(Address *addr) {
    cout << m_name << "age is " << m_age << ",score is " << m_score << endl;
    cout << "addr: " << addr->m_province << "  province " << addr->m_city << "  city  " << addr->m_district
         << "  district " << endl;
}

// 不属于任何的类，也可以被声明为友元函数
void show(Address *addr) {
    cout << "stuOutMethod ||| addr: " << addr->m_province << "  province " << addr->m_city << "  city  " << addr->m_district
         << "  district " << endl;
}

// 实现Address
Address::Address(char *province, char *city, char *district) {
    this->m_province = province;
    this->m_city = city;
    this->m_district = district;
}


void youyuanFuncTest() {
    Student3 stu("xiaoming", 16, 95.5f);
    Address addr("shanxi", "xian", "yanta");
    stu.show(&addr);
    show(&addr);
}

#endif //C__DEMO_CYOUYUANCLASS_H
