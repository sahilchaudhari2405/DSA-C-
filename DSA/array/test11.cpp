#include <bits/stdc++.h>
using namespace std;
int main()
{
    int physics;
    //declaration//
    cout << "physics\n";
    //cout is use for show output & \n is for line break//
    cin >> physics;
    //cin is use for taking input//
    int chemistry;
    cout << "chemistry\n";
    cin >> chemistry;
    int english;
    cout << "english\n";
    cin >> english;
    int math;
    cout << "math\n";
    cin >> math;
    int computer;
    cout << "computer\n";
    cin >> computer;
    float percentage = ((physics + chemistry + english + math + computer) / 500) * 100;
    cout << percentage << " ";
    //cout is use for show output//
    return 0;
}