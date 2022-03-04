//
// Created by Administrator on 2022/3/4.
//
/**
 * 虚函数
 */
#ifndef C__DEMO_CVIRTUALFUNC_H

//基类People2
class People2 {
public:
    string flag = "People2";

    People2(char *name, int age);

//    void display();//声明为虚函数
    virtual  void display();
    virtual string getflag();

protected:
    char *m_name;
    int m_age;
};

People2::People2(char *name, int age) : m_name(name), m_age(age) {}

void People2::display() {
    cout << m_name << " is : " << m_age << ", is a teacher" << ",flag=" << flag << endl;
}

string People2::getflag() {
    return this->flag;
}

//派生类Teacher
class Teacher : public People2 {
public:
    string flag = "teacher";

    Teacher(char *name, int age, int salary);

//    void display();//声明为虚函数
    virtual  void display();
    virtual string getflag();
    int getsalary();

private:
    int m_salary;
};

Teacher::Teacher(char *name, int age, int salary) : People2(name, age), m_salary(salary) {}

void Teacher::display() {
    cout << m_name << " is : " << m_age << ", is a teacher salary is:" << m_salary << ",flag=" << flag << endl;
}

int Teacher::getsalary() {
    return this->m_salary;
}

string Teacher::getflag() {
    return this->flag;
}

void virtualFunc() {
    People2 *p = new People2("zhangsan", 22);
    p->display();
    p = new Teacher("lisi", 23, 1000);
//    p->display(); // 会调用基类的函数，而不是派生类的。
    p->display(); // 声明为虚函数后，会调用派生类中和基类中同名的函数。

    cout << "flag=" << p->getflag() << endl;
    delete p;
}

#define C__DEMO_CVIRTUALFUNC_H

#endif //C__DEMO_CVIRTUALFUNC_H
