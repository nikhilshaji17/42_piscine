// Decalring objects of structures

struct {
	int rollno_one;
	char name_one[25];
	float marks_one;
} example; //This is another way to declare a structure. 
//The issue with this method is that we cannot create new objects in main, since the struct does not have
//a name.

struct Student
{
	int rollno;
	char name[25];
	float marks;
}s2, s3; //This is also a valid way to declare multiple objects



// To declare an object of Student in main, the syntax would be:

int main(void)
{
	struct Student s1; //This is valid and it occupies 25 + 4 + 4 bytes of memory.
	// Student s1; //This is invalid
	struct Student s4,s5; //Also valid
}