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

void  Removeduplicate(struct node *p){
	struct node *q=p->next;
	while(q){
		if(p->data!=q->data){
			p=q;
			q=q->next;
		}else{
			p->next=q->next;
			delete q;
			q=p->next;
		}
	}
}

void display(struct node *p){
	if(p){
		cout<<p->data<<" ";
		display(p->next);
	}
}

int main(){
	int a[]={3,5,5,8,8,8,8,8,8};
	create(a,9);
	display(first);
	Removeduplicate(first);
	cout<<"\nafter removing duplicate\n";
	display(first);

}

