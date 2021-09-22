#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void create(int a[],int n){
	struct Node *t,*last;
	first=new Node;
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++){
		t= new Node;
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

struct Node * linearSearch(struct Node *p,int key){
	struct Node *q;
	
	while(p){
		if(key==(p->data)){
			q->next=p->next;
			p->next=first;
			first=p;
		
		return p;
	}
		q=p;
		p=p->next;
	}
}



int main(){
	
	struct Node *temp;
	int a[]={1,2,3,45,65,453,20};
	create(a,7);
//	display(first);
	temp=linearSearch(first,6);
	display(first);
	if(temp)
	cout<<"\nkey is found "<<temp->data;
	else
	cout<<"\nnot found";
	
}
