//Priority Queue
// -> Adaptor class that provides a priority queue (heap).
// -> Elements are stored in a way that allows the retrieval of the highest-priority element efficiently.


#include<iostream>
#include<queue>

using namespace std;

int main(){

    // creating min-heap
    // min-heap -> Minimum  Value -> Highest -> Highest Priority
    priority_queue<int, vector<int>,greater<int>>pq;

    pq.push(100);
    // 100
    pq.push(50);
    // 50,100
    pq.push(75);
    // 50,75,100

    cout<<pq.top()<<endl;        //Output : 50
    pq.pop();            //Popping 50 from top
    // 75,100
    cout<<pq.top()<<endl;        //Output : 75
    pq.pop();            //Popping 75 from top
    cout<<pq.top()<<endl;        //Output : 100


    //creation
    // priority_queue<int>pq;
    //max-heap -> maximum value in the max-heap will be given the highest priority.

    // pq.push(10);     //push operation involves an operation called "heapify" operation.
    // // 10
    // pq.push(25);
    // // 25,10
    // pq.push(55);
    // // 55,25,10
    // pq.push(21);

    // 1) top() : Accesses the element at the top of the priority queue, which is the largest(or highest priority) element, depending on the comparator used.
    // top element -> highest priority element
    // cout<<pq.top() << endl;       //Output : 55
    // pq.pop();
    // // highest priority element -> pop kar diya
    // // i.e. -> 55 ko pop kar diya
    // // 25,21,10;     //remaining priority-queue
    // cout<<pq.top()<<endl;         //Output : 25
    // pq.pop();
    // // 25 pop ho jayega.
    // cout<<pq.top()<<endl;         //Output : 21
    // cout<<pq.size()<<endl;        //Output : 2

    //2) empty() : Checks if the priority queue is empty (i.e., whether it's size is 0).
    // if(pq.empty() == true){
    //     cout<<"PQ is empty!"<<endl;
    // }
    // else{
    //     cout<<"PQ is NOT empty!"<<endl;
    // }

    // 3) swap() 
    return 0;
}