#include <bits/stdc++.h>
using namespace std;

int main()
{
   map<int, set<string>> map_mark;
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int mark;
      string name;
      cin >> mark >> name;
      map_mark[mark].insert(name);
   }
   auto cu_it = --map_mark.end();
   while (true)
   {
      auto &student = cu_it->second;
      auto &marks = cu_it->first;
      for (auto &students : student)
      {
         cout << students << " " << marks << endl;
      }
      if (cu_it == map_mark.begin())

         break;
      --cu_it;
   }

   return 0;
}