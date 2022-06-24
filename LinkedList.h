
#include <cstddef>
#include <string>
#include"Student.h"
class linkedList
{
private:
    Student* head, * tail;
public:
    linkedList();
    void add(string name, string group, int minutes);
    void peak(int& t);
    void compare(string name, string group, int minutes);
    void after(Student* a, string name, string group, int minutes);
    void pop();
    bool isEmpty();
 
};
