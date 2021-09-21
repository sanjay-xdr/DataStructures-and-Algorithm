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
		
		cout<<p->data<<"\n";
		display(p->next);
	}
}


//counting the number of nodes recursivly
int count(struct Node *p){
	
	if(p) return count(p->next)+1;
	
}


//adding the data of linked list recursivly
int sum(struct Node *p){
	
	if(p) return sum(p->next)+(p->data);
	
}

int main(){
	int a[]={1,2,3,4,5,45,43,23,45,332};
	create(a,10);
	display(first);
	cout<<"\nthis is the count "<<count(first)<<" ";
	cout<<"\n this is the sum "<<sum(first)<<" ";
	return 0;
	
}
