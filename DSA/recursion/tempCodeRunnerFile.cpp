#include <bits/stdc++.h>
using namespace std;
int prints(int i, int n)
{
  if (n == 0)
  {

    return 1;
  }
  int ans = prints(i, n / 2);
  if (n % 2 == 0)
  {
    return ans * ans;
  }
  else
  {
    return ans * ans * i;
  }
}

int main()
{

  cout << prints(3, 6);
  return 0;
}
