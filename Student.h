#include <string>
using namespace std;


class Student {
private:
    string name;
    string group;
    int time;
public:
    Student* next;
    Student();
    Student(string name, string group, int time);

    string getName()const;
    string getGroup()const;
    int getTime()const;

    void setName(string name);
    void setGroup(string group);
    void setTime(int minutes);

 
   
};