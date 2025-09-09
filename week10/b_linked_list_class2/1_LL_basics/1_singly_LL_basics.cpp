//Linked List is a Type of Linear data structure which is a Collection of Nodes.
//Node consists of two things: a) Data  b) Address of Next Node.
//For a Normal Array, We cannot change the size at the run-time.
//For solving the above problem, we used vectors(Dynamic Arrays).
//But in case of vectors also, when the vector gets full, then it doubles it's size.
//** After vectors gets filled new double sized space is allocated and the elements from the vector are copied into the newly created double sized vector **.
//But this allocating & copying wastes a lot of time.
//** Also if doubled size is NOT required? then the extra memory allocated gets wasted **.
//So, to solve the vector problem, we use LINKED LIST.

//Adv of Linked List
//1) It is a type of DYNAMIC Data Structure.
//2) We can grow or shrink Linked List at the run-time.(Therefore, no memory is wasted).
//3) Insertion / Deletion is Easy in case of Linked List because we don't have to shift anything as we have to do in Array/Vector.
//4) There is no need of Continuous Storage.

//DisAdv of Linked List

//Types of Linked List
//1) Singly Linked List 
//2) Doubly Linked List 
//3) Circular Linked List 
//4) Circular Doubly Linked List 

//Implementation of Linked List.

#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node * next;    //pointer of Node type that stores the address of next Node.

    //Creating the Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //Whenever a new node is created, this above constructor gets called and the data is inserted as above.


    //Creating the Destructor 
    // ~Node(){
    //     int value = this -> data;
    //     //code for freeing the memory
    //     if(this -> next != NULL){
    //         delete next;
    //         this-> next = NULL;
    //     }
    //     cout<<"Memory is Free for Node with Data "<<value<<endl;
    // }
};

//Here reference(&) of head is taken because we dont't want to make a Copy and want to make changes to the Original Linked List only.
void insertAtHead(Node * &head, Node * &tail,  int data){
    //creating New Node
    Node * temp = new Node(data);
    //Ab iska jo next hai, woh NULL ko point kar raha hai,
    //Toh usko wahan se hata kar head ko point karwa do (As below).
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    temp -> next = head;
    head = temp;
}

//Yeh function hamesha Ending Node ke aage new node add karega
void insertAtTail(Node * &tail, Node * &head, int data){
    //Tail -> It is a pointer of Node Type which will always indicate the Last Node.
    Node * temp = new Node(data);

    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }

    //Since both head and tail are pointing the same node, then we will make the tail node to point to New temp node.
    tail -> next = temp;

    //Now moving the tail to the next new tail node.
    // tail = tail -> next;
    tail = temp;
}
// insert At the middle or a given Position.
void insertAtPosition(Node * &tail, Node * &head, int position, int d){
    //If we want to insert at position (n), then we have to go till (n-1) position.
    //Because the next of the New Node to be inserted will be pointing to the next node of the current temp node.
    // NodeToInsert -> next = temp -> next;
    //And the temp will be pointing to the new node.
    // temp -> next = NodeToInsert;

    //We cannot directly insert at the 1st position using this function.
    //For inserting at the 1st position we can do this,
    //Insert At Start.
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }

    //When we are inserting at the Tail Node, we need to update the tail node also.
    //We can do this if we know the length of the Linked List.
    // if(len == position-1){
    //     insertAtTail(tail,d);
    // }
 
    
    //We are currently at the start node.
    Node * temp = head;
    int count = 1;
    
    //If we want to insert at nth node then we have to go till (n-1) node.
    while(temp != NULL && count<position - 1){
        //moving step by step 
        temp = temp -> next;
        count++;
    }
    if(temp == NULL){
        cout<<"Position is Out Of Bounds!"<<endl;
        return;
    }
    //But we don't know the length, so we can do is,
    //inserting at the last Position.
    if(temp -> next  == NULL){
        insertAtTail(tail,head,d);
        return;
    }
    //Creating a Node for d
    Node * nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}


//Deletion w.r.t position in Linked List.
void deleteNode(Node * &head,Node * &tail, int position){

    //Check if the List is Empty
    if(head == nullptr){
        cout<<"The list is already Empty. Nothing to delete"<<endl;
        return;
    }
    
    //Deletion of Start Node
    if(position == 1){
        Node * temp = head;
        if(head->next == NULL){
            head = nullptr;
            tail = nullptr;
        }
        else{
            head = head -> next;   //Update head to the next node
            //memory free start node(because, since we have created this head using constructor, we have free the memory by explicitly calling the destructor).
            //because it was stored in the Heap Memory.
        }
        
        //Humein temp ke next ko bhi NULL karna padega kyunki woh abhi bhi next wale node ko point kar raha hai.
        temp -> next = NULL;   //(same for else part also).
        
        delete temp;           //Free memory of the old head node
    }
    else{
        //Deleting any middle or Last Node.
        Node * current = head;
        Node * prev = NULL;
        
        int count = 1;
        while(current != nullptr && count<position){
            //Because prev is already pointing to NULL, so we are moving the prev to current.
            //And current to next.
            prev = current;
            current = current -> next;
            count++;
        }
        //If current is null, the position is out of bounds.
        if(current == nullptr){
            cout<<"Position is out of Bounds!"<<endl;
            return;
        }

        //IMP statement for actual deletion.
        prev -> next = current -> next;
        //Humein current ke next ko bhi NULL karna padega kyunki woh abhi bhi next wale node ko point kar raha hai.
        current -> next = NULL;
        
        //If we've deleted the last node, update the tail to the previous node
        if(prev -> next == nullptr){
            tail = prev;
        }
        delete current;
    }
}

void print(Node * head){
    if(head == NULL){
        cout<<"Linked List is Empty!"<<endl;
        return;
    }
    Node * temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"nullptr"<<endl;
}

int main(){
    //This line creates a new node using the above constructor.
    Node * node1 = new Node(10);
    // cout<<node1 -> data << endl;
    // cout<<node1 -> next << endl;

    //head pointed to new node
    Node * head = node1;
    
    //Inserting from the Head
    print (head);

    // insertAtHead(head,12);
    // print(head);
    // insertAtHead(head,15);
    // print(head);

    //Creating a Tail pointer (For inserting from End)
    //Because, if there is a single node in LL then both head and tail will point to the same node.
    Node * tail = node1;
    insertAtTail(tail,head,12);
    print(head);
    insertAtTail(tail,head,15);
    print(head);
    insertAtTail(tail,head,20);
    print(head);

    //Inserting at Given position.
    insertAtPosition(tail, head, 5,24);
    print(head);
    
    
    // deleteNode(head, 1);
    // print(head);

    // deleteNode(head, 2);
    // print(head);

    cout<<"Head -> "<<head -> data<<endl;
    cout<<"Tail -> "<<tail -> data<<endl;

    deleteNode(head,tail, 4);
    print(head);
    
    // deleteNode(head, 5);
    // print(head);
    //When we are deleting the Last Node, the Tail-> data gives Garbage Value.(How to handle this?)
    cout<<"Head -> "<<head -> data<<endl;
    cout<<"Tail -> "<<tail -> data<<endl;

    return 0;
}

//Singly Linked List.
//  _________ ADDRESS=>710_____      810_______       910_________
// |_5_|_710_| --> |_10_|_810_| --> |_12_|_910_| -->  |_9_|_NULL_| --> NULL    

//So, when we have only a single (next) pointer to move forward and we can store one data.
//Then, this type of list is called Singly Linked List.


//INSERTION in Linked List.
//We have an Empty Linked List.
//So, the starting Head Node is NULL.
// Node * head = NULL;
//Creating a New Node.
// Node * newNode = new Node(10);
//So, it will look like  |_10_|_NULL_|

//Now We are creating a function, insertAtHead                  _____________
// If we have a value 12, then it will create a node like this, |_12_|_NULL_|
// But I want to insert this Node at the start, so, we have to equate next of above node to node1/head.
// And we have to do, head = temp, because head always points to the start.

// Again suppose we again have a new Node having value as 15,
// So, we again have to create a New Node which is pointing to NULL.
// Then we have to remove NULL and make this Node point to the node having value as 12.
// And finally we have to move the 'head pointer' from 12 to 15.





