//
// Created by Administrator on 2022/3/2.
//
/**
 * C++ 字符串  string
 */
#ifndef C__DEMO_MYCSTRING_H

#include <string>

using namespace std;

void stringTest() {
    // 定义 string 变量
    string s1;
    string s2 = "abcdefg";
    string s3 = s2;
    string s4(5, 's');
    cout << "s4=" << s4 << "  len=" << s4.length() << endl;

    // 转换为C风格的字符串
    string path = "C://demo.txt";
    FILE *fp = fopen(path.c_str(), "rt");

//    访问字符串中的字符
    string s = "0123456789";
    for (int i = 0; i < s.length(); ++i) {
        cout << s[i] << " ";
    }
    cout << endl;
    s[5] = '|';
    cout << s << endl;

//    字符串的拼接
    string s11 = "first ";
    string s21 = "second ";
    char *s31 = "third ";
    char s41[] = "fourth ";
    char ch = '@';
    string s5 = s11 + s21;
    string s6 = s11 + s31;
    string s7 = s11 + s41;
    string s8 = s11 + ch;

    cout << s5 << endl << s6 << endl << s7 << endl << s8 << endl;

//    string 字符串的增删改查
    string s_1 = "123456";
    s_1.insert(1, "|");
    cout << "insert: " << s_1 << endl;

    s_1.erase(0, 1);
    cout << "erase:  " << s_1 << endl;

//    提取子字符串
    string s_new = s_1.substr(0, 2);
    cout << "substr:    " << s_new << endl;


    // 字符串查找
    string st1 = "abbccbbddbb";
    string st2 = "b";
    int index = st1.find(st2, 1);
    cout << "find: index=" << index << endl;

    int index2 = st1.rfind(st2, 5);
    cout << "rfind: index2=" << index2 << endl;

    int index3 = st1.find_first_of("ccdd", 0);
    cout << "find_first_of: index=" << index3 << endl;
}

#define C__DEMO_MYCSTRING_H

#endif //C__DEMO_MYCSTRING_H
