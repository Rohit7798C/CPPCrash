//Linked List : Collection Of Nodes from Non-continuos Memory Locations. They are connected in a Specific manner.
//Internal fragmentation, External Fragmentation, Compaction.

//Starting node is called Head Node and last node is called Tail Node.
//A node consists of two parts : Data, address of second or next node.
//Address is stored in a Pointer.

//To solve any question of Linked List,we should remember only one rule 
//i.e. Linked list is Hindi.

#include<bits/stdc++.h>

using namespace std;
//This Node is a Dabba which stores two things=> Data and address of other node.
class Node{
    public:
    int data;
    Node* next;
    
    //constructor
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

Node * insertAtHead(int value,Node * &head, Node * &tail){
    //LL is empty -> when hed and tail both are pointing to NULL.
    if(head == NULL && tail== NULL){
        //It means we are creating first node of LL
        //Step1 : Create a New Node
        Node * newNode = new Node(value);
        //Step2 : Head ko newNode par lagado.
        head = newNode;
        //Step3 : tail ko newNode par lagado.
        tail = newNode;
    }
}
int main(){
    //Stack
    //Node first;
    //Dynamic Memory
    Node * first = new Node(10);
    return 0;
}

