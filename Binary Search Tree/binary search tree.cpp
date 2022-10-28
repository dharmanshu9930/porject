/*
	Design an algorithm to perform insert operation in a BST.
*/

#include<iostream>
#include<queue>

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};


void printInOrder(node* root) {
	if(root == NULL) {
		return;
	}

	printInOrder(root->left);
	cout << root->data << " ";
	printInOrder(root->right);
}

void printLevelOrder(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* front = q.front(); q.pop();
		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << front->data << " ";
			if(front->left) q.push(front->left);
			if(front->right)q.push(front->right);
		}
	}
}

node* insert(node* root, int data) {

	// base case
	if(!root) { // root == NULL
		root = new node(data);
		return root;		
	}

	// recursive case

	if(data < root->data) {
		// insert data in the leftSubtree -> ask your friend
		root->left = insert(root->left, data);

	} else {
		// insert data in the rightSubtree -> ask your friend
		root->right = insert(root->right, data);
	}

	return root;

}

int main() {

	node* root = NULL;

	root = insert(root, 10);
	
	root = insert(root, 5);
	root = insert(root, 3);
	root = insert(root, 7);

	root = insert(root, 15);
	root = insert(root, 13);
	root = insert(root, 17);
	
	printLevelOrder(root);

	cout << endl;

	printInOrder(root);

	cout << endl;

	return 0;
}
