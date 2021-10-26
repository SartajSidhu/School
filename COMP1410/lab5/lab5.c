/* ===========================================================================
COMP -1410 Lab 5
==============================================================================
Student name: Sartaj Sidhu
Replace the error with a statement citing any sources of outside help: no help
ERROR_NO_INTEGRITY_STATEMENT
=========================================================================== */
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>
// Definition of structure for storing student information
struct student {
int id;
char name[20];
};
// find_id(id, arr, n, found_name) searches for a student with given id in arr;
// returns true if such a student is found and found_name is updated to
// hold the student's name; otherwise returns false
// requires: arr has length n
// students in arr have unique ids
// found_name points to enough memory to hold a name
bool find_id(int id, struct student arr[], int n, char * found_name){
	for(int i=0;i<n;i++){
		if(arr[i].id==id){
			found_name=arr[i].name;
			return true;
		}
	}
	return false;
}

// find_name(name , arr, n, ids) searches for student(s) with given name in arr;
// returns the number of students found and the array ids is updated to
// contain the id numbers of those students
// requires: arr has length n
// students in arr have unique ids
// ids points to enough memory to hold the found student ids
int find_name(char * name , struct student arr[], int n, int ids[]){
	int tot = 0;
	for(int i=0;i<n;i++){
		if(strcmp(arr[i].name,name)==0){
			ids[i]=arr[i].id;
			tot+=1;
		}
	}
	return tot;
}

// change_name(s, new_name) renames the student s to have the name given by
// new_name
// requires: s points to a valid student that can be modified
// new_name points to a valid string of length at most 19
void change_name(struct student * s, char * new_name){
	strcpy(s->name,new_name);
}

int main(void) {
struct student s1 = {1234567 , "Alice"};
struct student s2 = {3141593 , "Bob"};
struct student s3 = {8675309 , "Eve"};
struct student s4 = {3454504 , "Sartaj"};
struct student s5 = {0000000 , "Eve"};
int idz[5];
struct student a[5]={s1,s2,s3,s4,s5};
// Implement your test code here
 
struct student * b = &s2; 
struct student * c = &s4; 
struct student * d = &s1;

char * x="hey";
char * y="Bob";
char * z="Jake";
char * m="Eve";


assert(find_id(3454504,a,5,x)==true); // sartaj id - changes x to sartaj
assert(find_id(3141593,a,5,x)==true); // bob id - changes x to bob
assert(find_id(1111111,a,5,x)==false); // no id - leaves x as bob

assert(find_name(y,a,5,idz)==1); // bob name
assert(find_name(m,a,5,idz)==2); // eve name
assert(find_name(z,a,5,idz)==0); // jake name not found

change_name(b,z); // changes bob name to  jake
change_name(c,m); // changes sartaj name to eve
change_name(d,y); // changes alice name to bob
assert(strcmp(b->name,z)==0);
assert(strcmp(c->name,m)==0);
assert(strcmp(d->name,y)==0); 

printf("All tests passed successfully.\n");
}
