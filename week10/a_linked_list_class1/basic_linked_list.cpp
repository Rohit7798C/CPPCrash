#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node * next;
    
    Node(int value){
        data = value;
        next = nullptr;
    }
};

void printValue(Node * head){
    Node * current = head;
    while(current != nullptr){
        cout<<current -> data<<" -> ";
        current = current -> next;
    }
    cout<<"nullptr"<<endl;
}

int main(){
    Node * head = new Node (10);
    Node * second = new Node(20);
    Node * third = new Node(30);
    
    head -> next = second;
    second -> next =  third;
    
    cout<<"The created linked list is : ";
    printValue(head);
    return 0;
}