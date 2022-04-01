//
// Created by Administrator on 2022/3/31.
//
/**
 * 移动和获取文件读写指针
 *
 * 示例：在 students.dat 文件中用折半查找的方法找到姓名为 Jack 的学生记录，
 * 并将其年龄改为 20（假设文件很大，无法全部读入内存）
 */
#include <cstring>

#ifndef C__DEMO_CSEEKFILEPTR_H
using namespace std;

class CStu {
public:
    char sName[20];
    int age;
};

void seekFilePtr() {
    CStu stu;
    fstream ioFile("E:\\out.dat", ios::in | ios::out);
    if (!ioFile) {
        cout << "error" << endl;
        return;
    }
    cout << "init ioFile success!" << endl;
    ioFile.seekg(0, ios::end);  //定位读指针到文件尾部，以便用以后tellg 获取文件长度

    int L = 0, R;
    R = ioFile.tellg() / sizeof(CStu) - 1;  // L是折半查找范围内第一个记录的序号。R是折半查找范围内最后一个记录的序号
    //首次查找范围的最后一个记录的序号就是: 记录总数- 1
    do {
        int mid = (L + R) / 2;  //要用查找范围正中的记录和待查找的名字比对
        ioFile.seekp(mid * sizeof(CStu), ios::beg);
        ioFile.read((char *) &stu, sizeof(CStu));
        int tmp = strcmp(stu.sName, "Jack");  // 字符串比较；
        if (tmp == 0) {
            /**
             * 找到了。
             */
            stu.age = 20;
            ioFile.seekp(mid * sizeof(CStu), ios::beg);
            ioFile.write((char *) &stu, sizeof(CStu));
            break;
        } else if (tmp > 0) {
            //继续到前一半查找
            L = mid - 1;
        } else {
            //继续到后一半查找
            L = mid + 1;
        }
    } while (L <= R);
    ioFile.close();
}

#define C__DEMO_CSEEKFILEPTR_H

#endif //C__DEMO_CSEEKFILEPTR_H
