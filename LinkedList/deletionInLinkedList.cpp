#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
}*first=NULL;

void create(int a[],int n){
	struct node *t,*last;
	first = new node;
	first->data=a[0];
	first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++){
		t= new node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
		
	}
}

void display(struct node *p){
	if(p){
		cout<<p->data<<" ";
		display(p->next);
	}
}


//to delete from the linked list
int delet(struct node *p,int pos){
	struct node *t;
	int x=0;
	//if deletion happens on first node
	if(pos==0){
		t=first;
		first=first->next;
		x=first->data;
		delete t;
		return x;
	}
	//all the other nodes
	else{
	
		for(int i=0;i<pos-1;i++){
			t=p;
			p=p->next;
			
		}
		t->next=p->next;
		x=p->data;
		delete p;
		return x;
	}
	
}

int main(){
	int a[]={1,2,3,4,5,6,5,6,7,8,9};
	create(a,11);
	delet(first,11);
	display(first);
}
