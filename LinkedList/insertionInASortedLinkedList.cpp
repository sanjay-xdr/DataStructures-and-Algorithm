//insertion in a sorted list
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void create(int a[],int n){
	struct Node *t,*last;
	first =new Node;
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++){
		t=new Node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
}

void display(struct Node *p){
	if(p){

	cout<<p->data<<" ";
	display(p->next);
}
	
}

int count(struct Node *p){
	
	if(p){

	return count(p->next)+1;
}
	
}

//insertion in a sorted array
void SortedInsert(struct Node *p,int x){
	struct Node *t,*q;
	t=new Node;
	t->data=x;
	t->next=NULL;
	
	//if linked list is not created
	if(first==NULL){
		first=t;
	}
	
	else{
		while(p && p->data<x){
			q=p;
			p=p->next;
		}
		
		//if we have to insert at first position
		if(p==first){
			t->next=first;
			first=t;
		}
		else{
			t->next=q->next;
			q->next=t;
		}
	
	}
}


int main(){
	int a[]={10,20,30,40,50,60,70,80,90};
	create(a,9);
//	cout<<"\nthe counts"<<count(first)<<"\n";
SortedInsert(first,34);
SortedInsert(first,35);
	display(first);
	
}
