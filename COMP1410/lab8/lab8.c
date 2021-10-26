/* ===========================================================================
COMP -1410 Lab 8
==============================================================================
Student name: Sartaj Sidhu
Replace the error with a statement citing any sources of outside help: no help
=========================================================================== */
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
// Tree node storing an integer
struct node {
int item;
struct node * left;
struct node * right;
};
// create_node(item , left , right) creates and returns a tree node containing
// given item and left/right pointers; caller must free allocated memory
// requires: left , right are NULL or point to tree nodes
// note: returns NULL if memory cannot be allocated
struct node * create_node(int item , struct node * left , struct node * right){
	struct node * newnode; 
	newnode = (struct node*)malloc(1* sizeof (struct node));
	newnode->item = item;
	newnode->left = left;
	newnode->right = right;
	return newnode;
}
// free_tree(node) frees the memory associated with the given node and
// all of the node's children
// requires: root is the root of a tree allocated dynamically
void free_tree(struct node * root){
	if(root==NULL){
		return;
	}
	free_tree(root->left);
	free_tree(root->right);
	free(root);
}
// height(root) returns the height of the tree with given root
// requires: root is NULL or points to a tree node
int height(struct node * root){
	int left = 0;
	int right =0;
	if(root==NULL){
		return 0;
	}
	left=height(root->left);
	right=height(root->right);
	if(left>right){
		return left+1;
	}
	return right+1;
}
// num_leaves(root) returns the number of leaf nodes in the tree with
// given root
// requires: root is NULL or points to a tree node
int num_leaves(struct node * root){
	if(root==NULL){
		return 0;
	}
	return (num_leaves(root->left)+num_leaves(root->right)+1);
}
int main(void) {
// Implement your test code here

	struct node * l4 = create_node(30,NULL,NULL);
	struct node * l3 = create_node(10,NULL,NULL);
	struct node * l1 = create_node(20,l3,l4);

	struct node * l5 = create_node(60,NULL,NULL);
	struct node * l2 = create_node(50,NULL,l5);
	
	struct node * root = create_node(40,l1,l2);

	struct node * empty = NULL;

	struct node * one = create_node(100,NULL,NULL);

	assert(num_leaves(root)==6); // main tree
	assert(height(root)==3);
	assert(num_leaves(empty)==0);
	assert(height(empty)==0);
	assert(num_leaves(one)==1);
	assert(height(one)==1);
	
	assert(num_leaves(l2)==2); // subtree with first right node
	assert(height(l2)==2);
	
	assert(num_leaves(l1)==3); // subtree with first left node
	assert(height(l1)==2);

	free_tree(root);
	free_tree(one);	
	printf("All tests passed successfully.\n");
}
