//Deque (Double-Ended Queue)
// -> Double-ended queue.
// -> Similar to vectors but allows efficient insertion and removal at both ends.
// -> Suitable when elements are needed to be inserted or removed at both sides.
// -> Addition/Insertion is from both front-end(front) & rear-end(back).
// -> Deletion/Removal is from both front-end(front) & rear-end(back)..


#include<iostream>
#include<queue>
// Header file <queue> is used for both for queue and deque.

using namespace std;

int main(){

    //creation
    deque<int>dq;
    
    //insertion
    dq.push_back(10);
    // 10
    dq.push_back(20);
    // 10,20
    dq.push_back(40);
    // 10,20,40
    dq.push_front(100);
    // 100,10,20,40
    dq.push_front(200);
    // 200,100,10,20,40
    dq.push_front(300);
    // 300,200,100,10,20,40

    dq.pop_front();
    // 200,100,10,20,40
    dq.pop_back();
    // 200,100,10,20

    // cout<<dq.size()<<endl;       //Output : 4
    // cout<<dq.front()<<endl;      //Output : 200
    // cout<<dq.back()<<endl;       //Output : 20


    // empty() in deque.
    // if(dq.empty()==true){
    //     cout<<"Deque is Empty!"<<endl;
    // }
    // else{
    //     cout<<"Deque is NOT Empty!"<<endl;
    // }



    //Iterator in Deque
    // deque <int> :: iterator it = dq.begin();
    // while(it!=dq.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // Output : 200,100,10,20.


    //Accessing elements using "operator[]" and "at".
    // cout<<dq[2]<<endl;       //Output : 10
    // cout<<dq.at(1)<<endl;    //Output : 100


    //clear() in deque
    // cout<<dq.size()<<endl;         //Output : 4
    // dq.clear();
    // cout<<dq.size()<<endl;         //Output : 0

  
    // insert() in deque
    // dq.insert(dq.begin(),100);     //Inserting 100 at the start of deque.
    // cout<<dq[0]<<endl;             //Output : 100


    // erase() in deque
    // cout<<dq.size()<<endl;            //Output : 4
    // dq.erase(dq.begin(),dq.end());    //erasing elements of deque from start to end.
    // cout<<dq.size()<<endl;            //Output : 0


    //swap() in deque.
    // deque<int>dq1;
    // deque<int>dq2;

    // dq1.swap(dq2);

    return 0;
}