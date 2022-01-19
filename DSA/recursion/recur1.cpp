#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"};
    vector<string> result;
    result.push_back("");
    cout << result.size() << "\n";
    string digits = {"23"};
    cout << digits.size() << "\n";
    int c1 = 0, c2 = 0, c3 = 0;
    for (auto digit : digits)
    {
        vector<string> tmp;

        for (auto candidate : pad[digit - '0'])
        {
            c1++;
            for (auto s : result)
            {
                tmp.push_back(s + candidate);
                c2++;
            }
        }
        c3++;
        result=tmp;
    }
    for (auto it : result)
    {
        cout << it << " ";
    }
}