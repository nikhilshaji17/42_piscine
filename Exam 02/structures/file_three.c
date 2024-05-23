// Assigning values to members of the structures

struct Student
{
	int rollno;
	char name[25];
	float marks;
} s3 = {1, "Hello", 35}; 
//This is also valid syntax

#include <stdio.h>

int main(void)
{
	struct Student s1 = {1, "Nikhil", 25}; //This is compile time initialization. The order of declaration should be the same.
	struct Student s2 = {1}; //This is partial initialization. rollno would be 1 and the other two would automatically be NULL.
	printf("%i \n", s1.rollno); //This is how you need to access the rollno of s1
	s2 = s1; //This is also a valid way to initialise s2 values as s1's values
	printf("%s \n", s2.name);
}