// BinaryTree.cpp : Binary tree studies
// Pedro Bianchini de Quadros

//////////////////////////////////////////////////////////////////////////
//       Reference : https://www.programiz.com/dsa/binary-tree         //
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdlib.h>

using namespace std;

class Node
{
public:
	int data;
	Node * left, * right;
};

Node* newNode(int data);
void traversePreOrder(Node* tempNode);
void traversePostOrder(Node* tempNode);
void traverseInOrder(Node* tempNode);


int main()
{
    std::cout << "Binary tree \n";
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);

	cout << "Pre order traversal : ";
	traversePreOrder( root );

	cout << '\n' << "In order traversal : ";
	traverseInOrder( root );

	cout << '\n' << "Post order traversal : ";
	traversePostOrder( root );
}

Node* newNode(int data) {

	Node* node;
	node = new Node;

	if (node)
	{
		node->data = data;

		node->left = NULL;
		node->right = NULL;
		return node;
	}
	else
	{
		cout << "Não foi possivel alocar memória \n";
	}

	return NULL;
}

void traversePreOrder(Node* tempNode) {
	if (tempNode != NULL)
	{
		cout << " " << tempNode->data;
		traversePreOrder(tempNode->left);
		traversePreOrder(tempNode->right);
	}
}

void traversePostOrder(Node* tempNode) {
	if (tempNode != NULL)
	{
		traversePostOrder(tempNode->left);
		traversePostOrder(tempNode->right);
		cout << " " << tempNode->data;
	}
}

void traverseInOrder(Node* tempNode) {
	if (tempNode != NULL)
	{
		traverseInOrder(tempNode->left);
		cout << " " << tempNode->data;
		traverseInOrder(tempNode->right);
	}
}
