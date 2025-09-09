#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node * next;

    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

//traversing a linked list
void print(Node * &head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp -> next;
    }
    cout<<"nullptr"<<endl;
}

//gives length of linked list
int getLength(Node * head){
    int length = 0;
    Node * temp = head;
    while(temp != NULL){
        length++;
        temp = temp -> next;
    }
    return length;
}

//inserting at Head
void insertAtHead(Node * &head, int value){
    //Step-1 : Creating the new Node.
    Node * temp = new Node(value);

    //Step-2 : Pointing the next of temp to head.
    temp -> next = head;

    //Step-3 : Pointing the prev of head to temp.
    head -> prev = temp;

    //Step-4 : Moving the head pointer from old head to new head(i.e. temp).
    head = temp;
    //Done
}

//inserting at Tail
void insertAtTail(Node * &tail, int value){
    
}

int main(){
    Node * node1 = new Node(10);
    Node * head = node1;
    print(head);
    int len = getLength(head);
    cout<<"The length of the Linked List is : "<<len<<endl;

    insertAtHead(head,11);
    print(head);
    insertAtHead(head,8);
    print(head);
    insertAtHead(head,13);
    print(head);
    return 0;
}