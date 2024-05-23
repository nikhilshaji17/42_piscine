// Declaring a structure.

// Structures:

// Structures allow us to store different types of data in a single location. 

// Think of it like a box which contains all these different data types.

// Structures allow us to create arrays which contains multiple different data types essentially.

// Structure is a user-defined data type. We define it using the primitive data types like int float char etc.


struct Student
{
	int rollno;
	char name[25];
	float marks;
};

int main(void)
{
	struct Student s1; // declaring a structure object
}

// rollno, marks and name are the members of the structure, and the structure name (aka structure tag) is Student.
// in the above example, a total of 4 (int) + 20 (string) + 4 (float) bytes will be allocated if we create an object of type struct Student.

// initializing values within a structure is not allowed.

//example

struct  example
{
	int a = 0;
	float b;
	char s[20];
};

//the above is not allowed. This is because when we write the above code, no memory is actually allocated, just a template of the data type you 
// want to use is created. So we have no location to actually store the data.
