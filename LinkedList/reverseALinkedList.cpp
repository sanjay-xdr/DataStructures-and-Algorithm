#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
}*first=NULL;

void create(int a[],int n){
	struct node *t,*last;
	first=new node;
	first->data=a[0];
	first->next=NULL;
	
	last=first;
	for(int i=1;i<n;i++){
		t=new node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
		
	}
	
}

//non recursive function to reverse a linked list
void  Reversing(struct node *p){
	struct node *q=NULL,*r=NULL;
	while(p){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
		first=q;
	
		
}

//recursive function to reverse a linked list
void reverse2(struct node *q,struct node *p){
	if(p){
		reverse2(p,p->next);
		p->next=q;
	}else{
		first=q;
	}
}


void display(struct node *p){
	if(p){
		cout<<p->data<<" ";
		display(p->next);
	}
}

int main(){
	int a[]={1,2,3,4,5,6};
	create(a,6);
	display(first);
	reverse2(NULL,first);
	cout<<"\nafter Reversing \n";
	display(first);

}

