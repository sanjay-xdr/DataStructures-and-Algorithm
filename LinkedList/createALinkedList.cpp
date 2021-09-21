#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first;

void create(int a[],int n){
	int i;
	struct Node *t,*last;
	first=new Node;
	first->data=a[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++){
		t=new Node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
	
}

void display(struct Node *p){
	
	while(p){
		cout<<p->data<<"\n";
		p=p->next;
	}
	
	
}


//recursive display of linked list
void display2(struct Node *p){
	if(p){
		
		cout<<p->data<<"\n";
		display2(p->next);
		
	}
}


//recursive reverse display of linked list
void displayreverse(struct Node *p){
	if(p){
		
		display2(p->next);
		cout<<p->data<<"\n";
		
		
	}
}

int main(){
	
	int a[]={1,2,3,4,5};
	create(a,5);
	display2(first);
	
	
	return 0;
}
