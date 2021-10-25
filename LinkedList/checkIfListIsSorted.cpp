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
bool isSorted(struct node *p){
	int x=INT_MIN;
	while(p){
		if(p->data<x)
		return false;
		x=p->data;
		p=p->next;
	}
	return true;
}

void display(struct node *p){
	if(p){
		cout<<p->data<<" ";
		display(p->next);
	}
}

int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	create(a,9);
	display(first);
	bool ans=isSorted(first);
	if(ans)
	cout<<"\n"<<"Sorted";
	else{
		cout<<"\n"<<"Not sorted";
	}
}

