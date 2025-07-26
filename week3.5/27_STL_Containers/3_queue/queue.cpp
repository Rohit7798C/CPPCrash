//Queue
// -> Adaptor class that provides a First-In, first-Out (FIFO) data structure.
// -> Implemented using other containers (e.g., deque, list) as the underlying storage.
// -> Addition/Insertion is always from the rear-end(back).
// -> Deletion/Removal is always from the front-end(front).


#include<iostream>
#include<queue>

using namespace std;

int main(){
    
    //creation
    // queue<int>q;

    //insertion
    // q.push(10);
    // 10
    // q.push(10);
    // 10,20
    // q.push(30);
    // 10,20,30
    // q.push(30);
    // 10,20,30,40
    // cout<<q.size()<<endl;     //Otuput : 4

    // q.clear();             //*** There is no clear() method in Queue ***//
    // It will give error
    // cout<<q.size()<<endl;       
     
    // q.pop();        //pops 10 from the front.
    // 20,30,40 
    // cout<<q.size()<<endl;     //Otuput : 3

    // if(q.empty() == true){
    //     cout<<"Queue is Empty!";
    // }
    // else{
    //     cout<<"Queue is NOT Empty!"<<endl;
    // }

    // cout<<"front element -> "<<q.front()<<endl;     //Otuput : 10
    // cout<<"back element -> "<<q.back()<<endl;       //Otuput : 30
     
    
    
    // Swapping of two queues 
    // queue<int>first;
    // queue<int>second;

    // first.push(10);
    // first.push(20);

    // second.push(100);
    // second.push(200);


    // first.swap(second);
    
    // cout<<first.front()<<endl;
    // cout<<first.back()<<endl;
    
    
    // We cannot Iterate through Queue.
    // queue<int>::iterator it = q.front();          //It gives error

    // If we still want to iterate through queue we have to pop all the elements one by one from the front.
    // cout << "Elements (destructive): ";
    // while (!q.empty()) {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    return 0;
}
