//
// Created by Administrator on 2022/3/29.
//
/**
 * read()和write()函数读写二进制文件
 */
#ifndef C__DEMO_READWRITEBINARYFILE_H

class CStudent {
public:
    char sName[20];
    int age;
    char stuempno[2];
};

void readWriteFile() {
    printf("write start...\n");
    CStudent stu;
    ofstream outFile("E:\\out.dat", ios::out | ios::binary);
    int sum = 0;
    while (cin >> stu.sName >> stu.age && sum < 2) {
        sum++;
        outFile.write((char *) &stu, sizeof(stu));
    }
    outFile.close();

    printf("read start...\n");
    CStudent readStu;
    ifstream inFile("E:\\out.dat", ios::in | ios::binary);
    if (!inFile) {
        cout << "error" << endl;
    }
    while (inFile.read((char *) &readStu, sizeof(readStu))) {
        int gcount = inFile.gcount();
        cout << "byte cnt:" << gcount <<" "<< readStu.sName << " " << readStu.age << endl;
    }
    inFile.close();
}

#define C__DEMO_READWRITEBINARYFILE_H

#endif //C__DEMO_READWRITEBINARYFILE_H
