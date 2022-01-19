#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter a number:";
    cin >> n1 >> n2;
    char op;
    cout << "enter a opretor:";
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '%':
        cout << n1 % n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    default:
        cout << "pls try again" << endl;
        break;
    }
    return 0;
}