#include<bits/stdc++.h>

using namespace std;

//Node Structure Creation
struct Node{
    int data;
    Node * next;
    
    Node(int value){
        data = value;
        next = nullptr;
    }
};

//Traversing the list and printing the data of each Node.
void printValue(Node * head){
    Node * current = head;
    while(current != nullptr){
        cout<<current -> data<<" -> ";
        current = current -> next;
    }
    cout<<"nullptr"<<endl;
}

//Inserting a new Node with a given value at the beginning of the Linked List
Node * insertAtBegin(Node * head,int value){
    Node * newNode = new Node(value);
    newNode ->next = head;
    return newNode;
}

//Inserting a new Node with a given value at the end of the Linked List
void insertAtEnd(Node * head, int value){
    Node * newNode = new Node(value);
    
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node * current = head;
    while(current ->next != nullptr){
        current = current -> next;
    }
    current -> next = newNode;
}

//Finding the middle of the Linked List using slow and fast pointer 
Node * middleValue(Node * head){
    Node * slow = head;
    Node * fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

int main(){
    //Manually creating a Linked list with three nodes.
    Node * head = new Node (1);
    Node * second = new Node(2);
    Node * third = new Node(3);

    //Linking all the Nodes together.
    head -> next = second;
    second -> next =  third;

    head = insertAtBegin(head,00);
    insertAtEnd(head,50);
    
    cout<<"The created linked list is : ";
    printValue(head);
    cout<<"The middle value is : ";
    Node * mid = middleValue(head);
    cout<<mid->data<<" "<<endl;
    return 0;

}


