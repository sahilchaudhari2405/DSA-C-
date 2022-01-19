#include<iostream>
using namespace std;
struct binary
{
  int data;
  struct binary* left;
    struct binary* right;
    binary(int val){
      data=val;
      left=NULL;
      right=NULL;
    }

};
void printb(struct binary* root){
	cout<<root->data<<endl;
	root->left;
	root->right;
}
int main()
{
	struct binary* root=new binary(1);
	root->left=new binary(2);
	root->right=new binary(3);
		root->left->left=new binary(4);
			root->left->right=new binary(5);
		root->right->left=new binary(6);
	root->right->right=new binary(7);
	return 0;
}