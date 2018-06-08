//Given a Linked list of size N, the list is in alternating ascending and descending orders, 
//your task is to complete the function sort() that sorts the given linked list in non-decreasing order.
{
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
void sort(Node **head);
// A utility function to create a new node
Node* newNode(int key)
{
	Node *temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}
void append(struct Node** headRef, int newData)
{
	struct Node* new_node = newNode(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)last = last->next;
	last->next = new_node;
}
// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, k);
	    }
	    sort(&head);
	    printList(head);
	}
	return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Structure of Node of the linked list is as
struct Node
{
	int data;
	struct Node *next;
};
*/
void splitList(Node *head, Node **ascH, Node **desH){
    
    *ascH = newNode(0);
    *desH = newNode(0);
    
    Node *asc = *ascH;
    Node *des = *desH;
    Node *curr = head;
    
    while(curr){
        asc->next = curr;
        asc = asc->next;
        curr = curr->next;
        
        if(curr){
            des->next = curr;
            des = des->next;
            curr = curr->next;
        }
    }
    
    asc->next = NULL;
    des->next = NULL;
    *ascH = (*ascH)->next;
    *desH = (*desH)->next;
}

void reverselist(Node **root){
    Node *prev = NULL, *curr = *root, *next;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *root = prev;
}

Node* mergeList(Node *a, Node *b){
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    Node *temp = NULL;
    if(a->data<=b->data){
        temp  = a;
        temp->next = mergeList(a->next,b);
    }
    else{
        temp = b;
        temp->next = mergeList(a,b->next);
    }
    return temp;
}
// your task is to complete this function
void sort(Node **head)
{
     // Code here
     Node *ascH,*desH; 
     splitList(*head,&ascH,&desH);
     reverselist(&desH);
     *head  = mergeList(ascH,desH);
}
