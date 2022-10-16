#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

int globalID = 100;
class person
{
    string name;
    int id;
    float salary;

public:
    person()
    {
        name = "";
        id = -1;
        salary = -1.0;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    person(string name, float salary)
    {
        setName(name);
        setSalary(salary);
        this->id = globalID;
        globalID++;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
    int getId()
    {
        return id;
    }
    void print()
    {
        cout << name << " | " << id << " | " << salary << endl;
    }
};

int main()
{
    Stack<person> st;
    // create object
    person p1("Atiqur Rahman", 102.5);
    person p2("Habibur Rahman", 156.7);
    person p3("Abul Bashar", 198.9);
    // push on stack
    st.push(p1);
    st.push(p2);
    st.push(p3);
    // while (!st.empty())
    // {
    //     person printObj;
    //     printObj = st.pop();
    //     printObj.print();
    // }
    person printObj;
    printObj = st.Top();
    printObj.print();
    cout << st.size() << endl;

    return 0;
}