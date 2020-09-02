// author -: Sheikh Farhan //
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