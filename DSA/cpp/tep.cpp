#include<bits/stdc++.h>
using namespace std;
void printstr(int num,string str[]){
	if (num==0)
	{
		return;
	}
	printstr(num/10,str);
	cout<<str[num%10]<<" 450";

}

int main(){
   int num;
   cin>>num;
   string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
   printstr(num,str);
   return 0;

}
