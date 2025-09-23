//Doubly Linked List
// 1) Insertion : start, middle, end
// 2) Traversing the Doubly Linked List
// 3) Deletion : start, middle, end
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node * next;

    //Node Constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data : "<<value<<endl;
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

//inserting at given Position
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

//Deletion in Doubly Linked List
void deletionInDLL(Node * &head, Node * &tail, int position){
    //Delete first or start Node
    if(position == 1){
        //Creating a temp Node to traverse
        Node * temp = head;
        
        temp -> next -> prev = NULL;

        //Moving the head to new head
        head = temp -> next;
        
        //making the next of original head NULL
        temp -> next = NULL;

        //Memory Free by deleting the original head
        delete temp;
    }
    else{
        //Deleting any Middle Node or Last Node
        Node * prev = NULL;
        Node * current = head;

        int count = 1;
        while(count<position){
            prev = current;
            current = current -> next;
            count++;
        }
        current -> prev = NULL;
        prev -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
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
    // insertAtHead(head,tail, 40);
    // print(head);
    // insertAtHead(head,tail, 50);
    // print(head);

    //inserting at tail
    insertAtTail(tail,head, 5);
    print(head);


    //inserting at given position
    // insertAtPosition(head, tail, 2, 100);
    // print(head);

    // insertAtPosition(head, tail, 1, 101);
    // print(head);

    insertAtPosition(head, tail, 5, 102);
    print(head);

    //Deleting First Node
    deletionInDLL(head, tail, 1);
    print(head);

    //Deleting Last Node
    deletionInDLL(head, tail, 4);
    print(head);

    //Deleting Middle Node
    deletionInDLL(head, tail, 2);
    print(head);

    cout<<head -> data<<" "<<endl;
    cout<<tail -> data<<" "<<endl;
    //printing the length
    int len = getLength(head);
    cout<<"The length of the Linked List is : "<<len<<endl;
    return 0;
}




