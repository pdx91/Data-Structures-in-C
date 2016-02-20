/**
  *	Linked List data structure 
  * Insert and Print Functions
	* Insertion of new node at the beginning of the list
	* Prints list in reverse order
	* Created at: 02/14/2016
	* Created by: Pradyumna Shembekar
	*
**/

#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int dat) {
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = dat;
	temp->next = head;
	head = temp;
}

void Print() {
	struct Node* temp = head;
	printf("List is:  ");
	while(temp != NULL) {
		printf("%d ", temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main() {

	head = NULL;
	int n,i,dat;
	printf("Enter number of elements: \n");
	scanf("%d", &n);

	printf("Enter elements: \n");
	for(i=0;i<n;i+=1) {
		scanf("%d", &dat);
		Insert(dat);
		Print();
	}

	return 0;
}
