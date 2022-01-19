#include <bits/stdc++.h>
using namespace std;
#define n 20
class Queue
{
  int *arr;
  int front;
  int back;

public:
  Queue()
  {
    arr = new int[n];
    front = -1;
    back = -1;
  }
  void push(int x)
  {
    if (back == n - 1)
    {
      cout << "overflow" << endl;
      return;
    }
    back++;
    arr[back] = x;
    if (front == -1)
    {
      front++;
    }
  }
};

int main()
{
  Queue d;
  d.push(1);
  d.push(2);
  d.push(3);
  d.push(4);
  return 0;
}