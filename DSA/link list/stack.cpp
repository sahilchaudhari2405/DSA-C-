#include <iostream>
#include <stack>
using namespace std;
void stackreverse(string st)
{
    stack<string> s;
    for (int i = 0; i < st.length(); i++)
    {
        string word = "";
        while (st[i] != ' ' && i < st.length())

        {
            word += st[i];
            i++;
        }
        s.push(word);
    }
    while (!st.empty())

    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    string st = "have a nice day!";
    stackreverse(st);
    return 0;
}