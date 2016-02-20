#include<stdio.h>
#include<stdlib.h>

int main() {

	typedef struct {
		char name[25];
		char roll_no[3];
		float gpa[8];
		float cgpa[8];
	} stud_rec;

	stud_rec *stud1;
	stud1=(stud_rec*)malloc(1*sizeof(stud_rec));

	printf("Enter name of student: \n");
	scanf("%s", stud1->name); fflush(stdin);

	printf("Enter roll no of student: \n");
	scanf("%s",stud1->roll_no); fflush(stdin);

	printf("Name: %s\n",stud1->name);
	printf("Roll no: %s\n", stud1->roll_no);

	return 0;
}
