// author -: Sheikh Farhan //
//Insertion of a node in Linked List (in sorted form)//
// O(n) //
# include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
};
node* head;
void insert(int value){
	node* temp = new node(); temp->data = value; temp->next = NULL;
	if(head == NULL){head = temp;return;}
	node* oper = head;
	node* prev = NULL;
	while(true){
		if(oper->data >= value){
			if(prev == NULL){
				temp->next = head;
				head= temp;
			}
			else{temp->next = prev->next;
			prev->next = temp;}
			break;
		}
		else if(oper->next == NULL){
			temp->next = NULL;
			oper->next = temp;
			break;
		}
		prev = oper;
		oper = oper->next;
	}
}
void print(){
	node* temp1  = head;
	while(temp1 != NULL){
		cout<<temp1->data<<" ";
		temp1 =temp1->next;
	}
}
int main(){
	head =NULL;
	insert(5); insert(10); insert(7); insert(3);insert(1); insert(9);
	print(); 
	cout<<endl;
}