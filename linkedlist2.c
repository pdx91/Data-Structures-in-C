#include<stdio.h>
#include<stdlib.h>

typedef struct Node_def {
	int data;
	struct Node_def* next;
} Node;

Node* head;

void Insert(int dat, int n) {
	Node* temp1 = (Node*)malloc(sizeof(Node));
	temp1->data=dat;
	temp1->next=NULL;

	if (n==1) {
		temp1->next=head;
		head=temp1;
		return;
	}

	Node* temp2=head;
	int i;
	for(i=0;i<n-2;i+=1) {
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;

}

void Print() {
	Node* temp=head;
	while(temp!=NULL) {
		printf("%d ", temp->data);
		temp=temp->next;
	}
}

int main() {

	head = NULL;

	Insert(2,1); // List: 2
	Insert(4,2); // List: 2, 4
	Insert(8,1); // List: 8, 2, 4
	Insert(1,3); // List: 8, 2, 1, 4
	Print();

	return 0;
}
