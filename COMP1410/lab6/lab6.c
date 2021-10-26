/* ===========================================================================
COMP -1410 Lab 6
==============================================================================
Student name: Sartaj Singh Sidhu
Replace the error with a statement citing any sources of outside help: no help
ERROR_NO_INTEGRITY_STATEMENT
=========================================================================== */
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
// Definition of structure for storing student information
struct student {
int id;
char * name;
};
// create_student(id, name) creates a new student record with given id and name;
// allocates memory to store structure and name (caller must free)
// requires: name is a valid string
struct student * create_student(int id, char * name){
	struct student *ptr; 
	ptr = (struct student*)malloc(1 * sizeof(struct student)); 
	ptr->name = (char *)malloc(strlen(name)* sizeof(char *));
	ptr->id = id;
	ptr->name = name;
	return ptr;
}

// free_student(s) frees the memory associated with the student record s
// requires: s is a student record created using dynamic memory allocation
void free_student(struct student * s){
	free(s->name);
	free(s);
	s=NULL;
}
// change_name(s, new_name) renames the student s to have the name given by
// new_name; allocates memory to hold new_name (caller must free)
// returns true if the name was successfully changed and false otherwise
// requires: s points to a valid student and new_name points to a valid
// string created using dynamic memory allocation
bool change_name(struct student * s, char * new_name){
	s->name = (char *)malloc(strlen(new_name)*sizeof(char *));
	if(s->name==NULL){
		return false;
	}
	else{
		strcpy(s->name,new_name);
		return true;	
	}
}

int main(void) {
char * a={"Sartaj"};
char * b={"Jatt"};
char * c={"lebron"};

char * x={"King"};
char * y={"Lelouche"};
char * z={"James"};

struct student * s1 = create_student(110039107,a);
struct student * s2 = create_student(100000000,b);
struct student * s3 = create_student(232323232,c);


// Implement your test code here
assert(strcmp(s1->name,a)==0);
assert(strcmp(s2->name,b)==0);
assert(strcmp(s3->name,c)==0); 

change_name(s1,x); //sartaj to king
change_name(s2,y); // jatt to lelouche
change_name(s3,z); // lebron to james

assert(strcmp(s1->name,x)==0);
assert(strcmp(s2->name,y)==0);
assert(strcmp(s3->name,z)==0); 

free_student(s1);
free_student(s2);
free_student(s3);

printf("All tests passed successfully.\n");
}

struct llist{
	struct strnode * front;	
};

struct llist *create_list(void){
	struct llist * newlist = malloc(sizeof(struct llist));
	newlist->front = NULL;
	return newlist;
}
void addfront(char str[5],struct llist * list){
	struct strnode * new = malloc(sizeof(struct strnode));
	new->str = str;  
	new->next=list->front;
	list->front=new;
}
void list_destroy(struct llist * list){
	struct strnode * curnode = list->front;
	while(curnode!=NULL){
		struct strnode * next = curnode->next;
		free(curnode);
		curnode=next;
	}
}