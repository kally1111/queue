#include"Student.h";
#include<string>


Student::Student() {
    name = "";
    group = "";
    time = 0;
}

Student::Student(string n, string gr, int minutes)
{
    name = n;
    group = gr;
    time = minutes;
    next = nullptr;
}

string Student::getName() const
{
    return name;
}

string Student::getGroup()const
{
    return group;
}

int Student::getTime()const
{
    return time;
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setGroup(string group)
{
  this->group = group;
}

void Student::setTime(int minutes)
{
    this->time=minutes;
}

