/* ===========================================================================
COMP-1410 Assignment 3
==============================================================================
Student name: Sartaj Sidhu

Replace the error with statement citing any sources of outside help:
no help

=========================================================================== */

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Linked list node that holds a student record
struct snode {
  int id;
  char * name;
  struct snode * next;
};

// Student list structure
struct slist {
  struct snode * front;
};

// create_list() returns an empty newly-created list of students
// note: caller must free using free_list
struct slist * create_list(){
	struct slist * llist;
	llist = (struct slist*)malloc(1* sizeof (struct slist));
	llist->front=NULL;
	return llist;
}

// insert_student(id, name, lst) attempts to add a student with given id and
//   name into the given list lst; if a student with that id is already in the
//   list then return false, otherwise lst is modified and true is returned
bool insert_student(int id, char name[], struct slist * lst){
	struct snode * curnode;
	curnode=lst->front;
	while(curnode!=NULL){
		if(curnode->id == id){
			return false;
		}
		curnode = curnode->next;
	}

	if(lst->front==NULL || id < lst->front->id){
		struct snode *newfront;
		newfront = (struct snode*)malloc(1*sizeof(struct snode));
		newfront->id = id;
		newfront->name = (char *)malloc(strlen(name)*sizeof(char));
		strcpy(newfront->name,name);
		newfront->next = lst->front;
		lst->front = newfront;
		return true;
	}

	else{
		struct snode * infront = lst->front;
		while(infront->next!=NULL && id > infront->next->id){
			infront = infront->next;
		}
		struct snode *newnode;
		newnode = (struct snode*)malloc(1*sizeof(struct snode));
		newnode->id = id;
		newnode->name = (char *)malloc(strlen(name)*sizeof(char));
		strcpy(newnode->name, name);
		newnode->next = infront->next;
		infront->next = newnode;
		return true;
	}
}


// function used to remove the student if it is at the front of the list
void remove_front(struct slist *lst){
	struct snode *oldfront = lst->front;
	free(oldfront->name);
	free(oldfront);
	lst->front = lst->front->next;
	
}

// remove_student(id, lst) attempts to remove a student with given id from the
//   given list and free the memory allocated to that student; true is returned
//   if successful and false otherwise

bool remove_student(int id, struct slist *lst) {
    if (lst->front == NULL){
        return false;
    } 
    if (lst->front->id == id){
        remove_front(lst);
        return true;
    }
    struct snode *before = lst->front;
    while (before->next!=NULL && id != before->next->id) {
        before = before->next;
    }
    if (before->next == NULL){
        return false;
    }
    struct snode *old_node = before->next;
    before->next = before->next->next;
    free(old_node->name);
    free(old_node);
    return true;
}

// find_student(id, lst) returns the name of the student with given id in the
//   given list lst in a dynamically-allocated string (that the caller must
//   free) or NULL if no student has that id
char * find_student(int id, struct slist * lst){
	struct snode * curnode;
	curnode=lst->front;
	while(curnode!=NULL){
		if(curnode->id == id){
			return (curnode->name);
		}
		curnode = curnode->next;
	}
	return NULL;
}

// free_list (lst) deallocates all memory associated with the given list lst
//   including the memory used by the student records in the list


void free_list(struct slist * lst){
	struct snode *curnode = lst->front;
	struct snode *nextnode = NULL;
	while(curnode!=NULL){
		nextnode = curnode->next;
		free(curnode->name);
		free(curnode);
		curnode = nextnode;
	}
	free(lst);
}


// merge_lists(out, lst1, lst2) merges the student records from lst1 and lst2
//   into the list out with the students in sorted order;
//   lst1 and lst2 are then freed
// requires: out starts as an empty list
void merge_lists(struct slist * out, struct slist * lst1, struct slist * lst2){
	struct snode* curnode = lst1->front;
	out->front = lst2->front;
	while(curnode!=NULL){
		insert_student(curnode->id,curnode->name,out);
		curnode = curnode->next;
	}
	free(lst1);
	free(lst2);
}
// Testing function for mergelist
bool check_list(struct slist * lst){
	if(lst==NULL){
		return true;
	}
	struct snode * curnode;
	curnode=lst->front;
	while(curnode->next!=NULL){
		if(curnode->id > curnode->next->id){
			return false;
		}
		curnode =curnode->next;
	}
	return true;
}

void print_list(struct slist *lst){
	struct snode * curnode;
	curnode=lst->front;
	while(curnode!=NULL){
		printf("Name:%s \t ID:%d\n",curnode->name,curnode->id);
		curnode =curnode->next;
	}
	printf("\n");
}


// Tree node holding the numeric value that a word compresses to
struct treenode {
  char word[10];
  int value;
  struct treenode * left;
  struct treenode * right;
};


// insert_node(word, value, tree) inserts a new node containing the given word
//   and value into the tree with given root (or NULL denoting an empty tree)
//   returns the root node of the tree following the insert
// requires: word is not already in the given tree
//           tree satisfies the ordering property
struct treenode * create_node(char word[], int value){
    struct treenode * newnode;
    newnode = (struct treenode*)malloc(1* sizeof (struct treenode));
    strcpy(newnode->word,word);
    newnode->value = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// insert_node(word, value, tree) inserts a new node containing the given word
//   and value into the tree with given root (or NULL denoting an empty tree)
//   returns the root node of the tree following the insert
// requires: word is not already in the given tree
//           tree satisfies the ordering property
struct treenode * insert_node(char word[], int value, struct treenode * tree){
    if(tree==NULL){
        return create_node(word,value);
    }
    if (strcmp(word,tree->word)<0){
        if (tree->left!=NULL){
            insert_node(word, value, tree->left);
        }
        else{
            tree->left = insert_node(word,value,tree->right);
        }
    }
    else if(strcmp(word,tree->word)>0){
        if(tree->right!=NULL){
            insert_node(word, value, tree->right);
        }
        else{
            tree->right = insert_node(word,value,tree->right);
        }
    }
}

// lookup_word(word, tree) returns the numeric value associated with the given
//   word in the given tree (or 0 if the word does not appear in the tree);
//   tree points to the root node or is NULL (denoting an empty tree)
// requires: tree satisfies the ordering property
int lookup_word(char word[], struct treenode * tree){
	if(tree==NULL){
		return 0;
	}
	if(strcmp(word,tree->word)==0){
		return tree->value;
	}
  	else {
    	return lookup_word(word, tree->left)+lookup_word(word, tree->right);
  	}
}


// free_tree(tree) frees all memory associated in the tree with given root node
void free_tree(struct treenode * tree){
  if (tree==NULL){
    return;
  }
  free_tree(tree->left);
  free_tree(tree->right);
  free(tree);
}


int main(void) {
  // Perform your testing here
	struct slist * llst = create_list();
	struct slist * list2 = create_list();
	struct slist * mrge = create_list();

	insert_student(2178,"Jatt",llst);
	insert_student(2179,"Mark",llst);
	insert_student(1000,"Jake",llst);
	insert_student(500,"Jakeyboy",llst);

	insert_student(3000,"Sartaj",list2);
	insert_student(2100,"Sidhu",list2);
	insert_student(1500,"Blem",list2);
	insert_student(100,"Drake",list2);

	assert(strcmp(find_student(3000,list2),"Sartaj")==0);
	assert(strcmp(find_student(2179,llst),"Mark")==0);
	assert(find_student(120,llst)==NULL);

	merge_lists(mrge,llst,list2);
	assert(check_list(mrge)==true);
	print_list(mrge);
                 
	struct treenode * ntree = create_node("hey",1);
	insert_node("bye",2,ntree);
	insert_node("your",3,ntree);
	insert_node("dawg",4,ntree);

	assert(lookup_word("bye",ntree)==2);
	assert(lookup_word("hey",ntree)==1);
	assert(lookup_word("jake",ntree)==0);
	assert(lookup_word("dawg",ntree)==4);
	free_tree(ntree);

	char  word[10];
	int val=1;
	while(strcmp(word,".")!=0){
    	scanf("%s",word);
    	if(lookup_word(word,ntree)==0){
      		printf("%s ",word);
      		insert_node(word,val,ntree);
      		val++;
    	}
    	else{
      		printf("%d ",lookup_word(word,ntree));
      		break;
    	}
  	}
	free_list(mrge);
	printf("\nAll tests passed successfully.\n");
}