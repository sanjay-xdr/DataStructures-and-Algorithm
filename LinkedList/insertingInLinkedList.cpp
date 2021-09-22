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

//insertion in a linked list
void insert(struct Node *p,int pos,int value){
	struct Node *t;
	if(pos<0 || pos>count(p)){
		cout<<"\n Invalid position "<<"\n";
	}
	t=new Node;
	t->data=value;
	t->next=NULL;
	//at the beginning
	if(pos==0){
		t->next=first;
		first=t;
	}
	//any else position
	else{
		for(int i=0;i<pos-1;i++)
			p=p->next;
			
			t->next=p->next;
			p->next=t;
		
	}
}

int main(){
	int a[]={1,2,3,4,5,45,43,34,556};
	create(a,9);
//	cout<<"\nthe counts"<<count(first)<<"\n";
insert(first,9,10878);
	display(first);
	
}
