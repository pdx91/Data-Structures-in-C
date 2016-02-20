#include<stdio.h>
#include<stdlib.h>


int main() {

	int i, j;
	float x;

	struct {
		char name[25];
		char roll_no[3];
		float gpa[8];
		float cgpa[8];
	} student;

	/* Scan all information */	
	printf("Enter name of the student: ");
	scanf("%s", student.name); fflush(stdin);
	
	printf("Enter the roll number: ");
	scanf("%s", student.roll_no); fflush(stdin);

	printf("Enter the number of semesters completed: ");
	scanf("%d", &j); 
	
	/* Calculate GPA */
	printf("Enter GPA for each semester: ");
	for(i=0; i<j; i+=1) {
		scanf("%f", &(student.gpa[i])); 
	}

	for(x=0.0, i=0; i<j; i+=1) {
		x = (x*i + student.gpa[i])/(i+1);
		student.cgpa[i] = x;
	}

	/* Print results */
	printf("%s\n%s\n", student.name, student.roll_no);

	for(i=0; i<j; i+=1) {
		printf("The GPA for Semester %d: %5.2f and the CGPA: %5.2f\n", (i+1), student.gpa[i], student.cgpa[i]);
	}

	return 0;
}
