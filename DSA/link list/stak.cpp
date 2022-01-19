#include <bits/stdc++.h>
using namespace std;
#define n 100
class stac
{
    int *arr;
    int top;

public:
    stac()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack over flow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    int TOP()
    {
        if (top == -1)
        {
            cout << "no element in there" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    stac st;
    st.push(1);
    st.push(2);
    st.push(3);
  cout<<st.TOP()<<endl;
    return 0;
}