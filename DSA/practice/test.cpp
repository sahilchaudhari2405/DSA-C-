#include <iostream>
#include <bits\stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;
    void printInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};

int main()
{
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;

    }
    for (int i = 0; i < 3;i++)
    {
        arr[i].printInfo();
    }
    return 0;
}