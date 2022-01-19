#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};
Node *inserted(Node *root, int val)
{
	if (root == NULL)
	{
		return new Node(val);
	}
	if (val < root->data)
	{
		root->left = inserted(root->left, val);
	}
	else
	{
		root->right = inserted(root->right, val);
	}
	return root;
}
void show(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	show(root->left);
	cout << root->data << " ";
	show(root->right);
	cout << root->data << " ";
}
int main()
{
	Node *root = NULL;
	root = inserted(root, 5);
	inserted(root, 1);
	inserted(root, 3);
	inserted(root, 4);
	inserted(root, 2);
	inserted(root, 7);
	show(root);
	cout << endl;

	return 0;
}