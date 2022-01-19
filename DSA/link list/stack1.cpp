#include <iostream>
#include <stack>
using namespace std;
bool isvalid(string s)
{
    int n = s.length();
    stack<char> st;
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (!st.empty() and s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (!st.empty() and s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (!st.empty() and s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (st.empty())
        return false;
    return ans;
}

int main()
{
    string s = "({[]})";
    if (isvalid)
    {
        cout << "valid string" << endl;
    }
    else
    {
        cout << "it not valid" << endl;
    }
    return 0;
}