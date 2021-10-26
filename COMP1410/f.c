#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

// Linked list node storing a string of at most 4 characters
struct node {
	int value;
	struct node * next;
};

// create_node(str, next) creates a strnode containing the string str
//   and given next pointer; caller must free allocated memory using free_node
// requires: str has length at most 4
//           next is NULL or points to a strnode
// note: returns NULL if memory cannot be allocated
struct node * create_node(int str, struct node * next){
	struct node *nde = (struct node *)malloc(1* sizeof(struct node));
	nde->value = str;
	nde->next=next;
	return nde;
}
void remove_dupes(struct node * head){
	struct node * outer = head;
	struct node *temp;
	while (outer!=NULL){
		struct node * inner = outer;
		while(inner->next!=NULL){
			temp = inner->next->next;
			if(outer->value == inner->next->value){
				inner->next = temp;
			}
			inner=inner->next;
		}
		outer=outer->next;
	}
}
void print_list(struct node *hd){
	while(hd!=NULL){
		printf("ID: %d\n",hd->value);
		hd = hd->next;
	}
	printf("\n");
}
int main(void) {
  struct node * fifth = create_node(5,NULL);
  struct node * forth = create_node(4,fifth);
  struct node * third = create_node(3,forth);
  struct node * second = create_node(2,third);
  struct node * blah = create_node(3,second);
  struct node * first = create_node(1,blah);
  remove_dupes(first);
  print_list(first);
 

}