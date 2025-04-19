#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

class Student{
    public: 
        int marks;
        string name;
        Student(){

        }
        Student(int m, string n){
            this->marks = m;
            this->name = n;
        }
};

class comparator{
    public:
        bool operator()(Student a, Student b){
            //criteria -> max marks -> high priority
            return a.marks < b.marks;
            //iss comparison ka matlab hai, ki less marks pehele ayenge, lekin ulta hota hai 
            //largest marks pehele aata hai.
        }
};

int main(){
    //Creates max-heap
    // priority_queue<int>pq;
    //We can create the same priority as above as :
    priority_queue<int,vector<int>,less<int>>pq3;
    //(Both pq and pq3 are same).

    //Creates min-heap
    priority_queue<int,vector<int>,greater<int>>pq2;
    //Here: int -> means we are storing "integer" values in the priority queue.
    // vector<int> : We are using "vector" as an underlying container to implement the priority queue.
    // greater<int> : It is the "comparator" using which we are creating the "min-heap".


    // Now we want to create the priority queue for the Student class.
    priority_queue<Student, vector<Student>,comparator>pq;
    pq.push(Student(90,"Love"));
    pq.push(Student(27,"Lakshay"));
    pq.push(Student(99,"Amit"));
    pq.push(Student(82,"Sharma"));

    cout<<pq.top().marks<<" "<<pq.top().name<<" "<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<" "<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<" "<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<" "<<endl;
    return 0;
}