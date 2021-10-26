/* ===========================================================================
COMP-1410 Lab 7
==============================================================================
Student name: Sartaj Sidhu

Replace the error with a statement citing any sources of outside help: No help
ERROR_NO_INTEGRITY_STATEMENT


=========================================================================== */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

// Linked list node storing a string of at most 4 characters
struct strnode {
	char str[5];
	struct strnode * next;
};

// create_node(str, next) creates a strnode containing the string str
//   and given next pointer; caller must free allocated memory using free_node
// requires: str has length at most 4
//           next is NULL or points to a strnode
// note: returns NULL if memory cannot be allocated
struct strnode * create_node(char str[], struct strnode * next){
	struct strnode *node= (struct strnode *)malloc(1* sizeof(struct strnode));
	strcpy(node->str,str);
	node->next=next;
	return node;
}

// free_node(node) frees the memory associated with the given node; returns a
//   pointer to the next node in the list previously headed by the given node
// requires: node is a valid strnode allocated dynamically
struct strnode * free_node(struct strnode * node){
	struct strnode *next = node->next; 
	free(node);
	return next;
}

// concat_nodes(head, str) modifies str to be a string representation of the
//   contents of the list with given head
// requires: str points to enough memory to store the output string
//           head is NULL or points to a strnode
void concat_nodes(struct strnode * head, char * str){
	if(head==NULL){
		strcat(str,"\0");
		return;
	}
	strcat(str,head->str);
	if(head->next!=NULL){
		strcat(str," ");
	}
	concat_nodes(head->next,str);
}

int main(void) {
  struct strnode *third = create_node("Tall",NULL);
  struct strnode *second = create_node("Gary",third);
  struct strnode *first = create_node("Jatt",second);

  struct strnode *alphabet = NULL; 

  char * test1 = "Jatt Gary Tall";
  char * test2 = "Gary Tall";
  char * test3 = "Tall";
  char * test4 = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";

  char ans1[16]="";
  char ans2[8] = "";
  char ans3[5] = "";
  char ans4[52] = "";

  concat_nodes(first,ans1);
  assert(strcmp(test1,ans1)==0);

  concat_nodes(second,ans2);
  assert(strcmp(test2,ans2)==0);

  concat_nodes(third,ans3);
  assert(strcmp(test3,ans3)==0);

  char * letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char curchar[2]="";

  for(int i=25;i>=0;i--){
    strncpy(curchar,letters+i,1);
    alphabet = create_node(curchar,alphabet);
  }
  concat_nodes(alphabet,ans4);
  assert(strcmp(test4,ans4)==0);

  free_node(first);
  free_node(second);
  free_node(third);
  free_node(alphabet);

  printf("All tests passed successfully.\n");
}