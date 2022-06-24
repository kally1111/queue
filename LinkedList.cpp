#include"LinkedList.h"
#include <cstddef>
#include<iostream>

linkedList:: linkedList()
{
    head = NULL;
    tail = NULL;
}

void linkedList::add(string name, string group, int minutes)

    {
        Student* tmp = new Student;
        tmp->setName(name);
        tmp->setGroup(group);
        tmp->setTime(minutes);
        tmp->next = NULL;

        if (head != NULL)
        {
            tail->next = tmp;
            tail = tail->next;
        }
        else
        {
            head = tmp;
            tail = tmp;
            
        }
    }


void linkedList::peak(int& t)

    {
        Student* tmp;
        tmp = head;
        cout << tmp->getName() << " " << tmp->getGroup() << " " << (t - tmp->getTime()) << "m" << endl;
        
    }


void linkedList::compare(string name, string group, int minutes)

    {
        Student* tmp;
        tmp = head;
        while (tmp != NULL)
        {
            if (tmp->getGroup() == group) {
                after(tmp, name, group, minutes);
                break;
            }
            else if (tmp == tail) {
                add(name, group, minutes);
                break;
            }
            tmp = tmp->next;
        }
    }


    void linkedList::after(Student * a, string name, string group, int minutes)
    {
            Student* p = new Student;
            p->setName(name);
            p->setGroup(group);
            p->setTime(minutes);
            p->next = a->next;
            a->next = p;
    }

    void linkedList::pop()
    {
        Student* tmp;

        tmp = head;

        head = head->next;

        free(tmp);
    }

    bool linkedList::isEmpty()
    {

        if (head != NULL) {
            return false;
        }
        return true;
    }
