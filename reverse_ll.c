#include<stdio.h>
#include<stdlib.h>

typedef struct Node_def {
	int data;
	struct Node_def* next;
} Node;

Node* head;
int counter;

void Insert(int dat) {
	Node* temp1=(Node*)malloc(sizeof(Node));
	temp1->data=dat;
	temp1->next=NULL;

	Node* temp2=head;
	while(temp2->next != NULL) temp2=temp2->next;
	temp2->next=temp1;
}

void Print() {
	counter = 0;
	Node* temp=head;
	printf("List: ");
	while(temp != NULL) {
		printf("%d ", temp->data);
		counter+=1;
		temp=temp->next;
	}
	printf("\n");
}

void Delete(int x) {
	Node* temp1 = head;
	int i;
	if (x > counter) {
		printf("Invalid position!\n");
		return;
	}

	if (x == 1) {
		head = temp1->next;
		free(temp1);
		return;
	}

	Node* temp2;
	for(i=0;i<x-2;i+=1) {
		temp1 = temp1->next;
	}
	temp2=temp1->next;
	temp1->next=temp2->next;
	free(temp2);
}

void Reverse() {
	Node *current, *prev, *next;
	int i;
	current = head;
	prev = NULL;
	while(current != NULL) {
		next = current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head = prev;	
}

int main() {
	head=NULL;
	int n, i, dat, x;
	char r;

	printf("Enter number of elements: \n");
	scanf("%d", &n);

	printf("Enter the elements: \n");
	scanf("%d", &dat);

	head = (Node*)malloc(sizeof(Node));
	head->data=dat;
	head->next=NULL;
	for(i=0;i<n-1;i+=1) {
		scanf("%d", &dat);
		Insert(dat);
	}
	Print();

	printf("Reversing...\n");
	Reverse();
	Print();

	printf("Enter the position of the element to delete: \n");
	scanf("%d", &x);
	Delete(x);
	Print();		

	return 0;
}
