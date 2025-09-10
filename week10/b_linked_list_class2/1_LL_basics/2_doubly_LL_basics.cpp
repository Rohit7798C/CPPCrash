//Doubly Linked List
// 1) Insertion : start, middle, end
// 2) Traverse
// 3) Deletion
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
void insertAtHead(Node * &head, Node * &tail, int value){

    //Empty List (There is no Node at the start).
    if(head == NULL){
        Node * temp = new Node(value);
        head = temp;
        tail = temp;
    }
    //Non-Empty List
    else{
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
}

//inserting at Tail
void insertAtTail(Node * &tail, Node * &head, int value){
    if(tail == NULL){
        Node * temp = new Node(value);
        head = temp;
        tail = temp;
    }
    else{
        //Step-1 : Creating the new Node.
        Node * temp = new Node(value);
    
        //Step-2 : Pointing the next of tail to the new temp
        tail -> next = temp;
    
        //Step-3 : Pointing the prev of new temp to the tail
        temp -> prev = tail;
    
        //Step-4 : Moving the tail pointer from old tail to new tail(i.e. temp).
        tail = temp;
    }
}

void insertAtPosition(Node * &head, Node * &tail, int position, int value){
    //inserting at the start
    if(position == 1){
        insertAtHead(head,tail, value);
        return;
    }

    //inserting at some Middle Position
    Node * temp = head;
    int count = 1;
    while(count<position-1 && temp != NULL){
        temp = temp -> next;
        count++;
    } 

    //inserting at the tail
    if (temp == NULL){
        cout << "Error: Position out of bounds" << endl;
        return;
    }
    if(temp -> next == NULL){
        insertAtTail(tail,head, value);
        return;
    }
    Node * nodeToInsert = new Node(value);
    nodeToInsert -> next = temp -> next;
    nodeToInsert -> prev = temp;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
}

int main(){
    // Node * node1 = new Node(10);
    // Node * head = node1;
    // Node * tail = node1;

    // If there is no Node or Value in the Linked List
    Node * head = nullptr;
    Node * tail = nullptr;

    print(head);

    //inserting at head
    insertAtHead(head,tail, 15);
    print(head);
    insertAtHead(head,tail, 20);
    print(head);
    insertAtHead(head,tail, 30);
    print(head);
    insertAtHead(head,tail, 40);
    print(head);
    insertAtHead(head,tail, 50);
    print(head);

    //inserting at tail
    insertAtTail(tail,head, 5);
    print(head);


    //inserting at given position
    // insertAtPosition(head, tail, 2, 100);
    // print(head);

    // insertAtPosition(head, tail, 1, 101);
    // print(head);

    insertAtPosition(head, tail, 7, 102);
    print(head);

    cout<<head -> data<<" "<<endl;
    cout<<tail -> data<<" "<<endl;
    //printing the length
    int len = getLength(head);
    cout<<"The length of the Linked List is : "<<len<<endl;
    return 0;
}
