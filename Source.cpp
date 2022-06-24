#include <iostream>
#include<fstream>
#include"LinkedList.h"
using namespace std;
int main()
{
    linkedList a;
    int minutes=0;
    ifstream file;
    file.open("students.txt");
    if (file.fail()) {
        cout << "Unable to open the file";
        return -1;
    }
    while (!file.eof()&&minutes<2)
    {
     string name;
     string group;
     file >> name;
     file >> group;
     a.add(name, group, minutes);
     minutes++;
     }
    while (!file.eof()) {
        string name;
        string group;
        file >> name;
        file >> group;
        a.compare(name, group, minutes);
        if (minutes % 2 == 0) {
            a.peak(minutes);
            a.pop();
        }
        minutes++;
    }
    minutes++;
    while (!a.isEmpty()) {
        a.peak(minutes);
        a.pop();
        minutes+=2;
    }
    file.close();
    return 0;
}
