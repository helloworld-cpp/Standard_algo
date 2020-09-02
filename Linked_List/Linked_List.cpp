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


//Compare two strings represented as linked lists//
// O(n+m) //
# include <bits/stdc++.h>
using namespace std;
struct node{
	char data;
	node* next;
	node(char c){
		this->data = c;
		this->next = NULL;
	}
};

int compare(node* list1, node* list2){
	while(list1 != NULL && list2 != NULL && list1->data == list2->data){
		list1 = list1->next;
		list2 = list2->next;
	}
	if(list1 == NULL && list2 != NULL){return 1;}
	if(list1 != NULL && list2 == NULL){return -1;}
	if(list1 == NULL && list2 == NULL){return 0;}
	if(list1->data > list2->data){return -1;}
	if(list1->data < list2->data){return 1;}
}

int main(){
	node* list1 = new node('g');
	list1->next = new node('e');
	list1->next->next = new node('e');
	list1->next->next->next = new node('k');
	list1->next->next->next->next = new node('s');
	list1->next->next->next->next->next = new node('b');

	node* list2 = new node('g');
	list2->next = new node('e');
	list2->next->next = new node('e');
	list2->next->next->next = new node('k');
	list2->next->next->next->next = new node('s');
	list2->next->next->next->next->next = new node('a');

	cout<<compare(list1 , list2)<<endl;

}


//Compare two strings represented as linked lists//
// O(n+m) //
# include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
	node(int value){
		this->data = value;
		this->next = NULL;
	}	
};
int a=0,b=0;
node* head;

void generate1(node* list1){
	if(list1 == NULL) return;
	a = 10*a+list1->data;
	return generate1(list1->next);
}
void generate2(node* list2){
	if(list2 == NULL) return;
	b = 10*b+list2->data;
	return generate2(list2->next);
}

void combine(int c){
	if(c<=0)return;
	node* temp = new node(c%10);
	if(head == NULL){head = temp;}
	else{temp->next = head; head =temp;}
	combine(c/10);
}

void print(){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
	head = NULL;
	node* list1 = new node(9);
	list1->next = new node(9);
	list1->next->next = new node(9);
	generate1(list1);
	node* list2 = new node(1);
	list2->next = new node(8);
	generate2(list2);
	int c= a+b;
	combine(c);
	print(); cout<<endl;
}



