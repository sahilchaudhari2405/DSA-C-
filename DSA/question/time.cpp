#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3};
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    v.pop_back();
    v.pop_back();
    v.push_back(5);

    vector<int> v3(3, 50);
    swap(v, v3);
    for (auto i : v)
    {
        cout << i << endl;
    }
    for (auto i : v3)
    {
        cout << i << endl;
    }

    return 0;
}