#include<iostream>
#include<algorithm>
#include<vector>
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
    bool operator()(Student a,Student b){
        //Adding custom behaviour
        if(a.marks == b.marks){
            return a.name<b.name;      //ordering in lexographically(a->z) increasing order of name.
            //Output
            // 95 Kunal 
            // 90 Lakshay
            // 90 Love 
        }
        return a.marks>b.marks;        //ordering in descendinig order of marks.
        //Output
        // 95 Kunal
        // 90 Love
        // 85 Lakshay
    }
};

int main(){
    vector<Student>arr;
    arr.push_back(Student(90,"Love"));
    arr.push_back(Student(90,"Lakshay"));
    arr.push_back(Student(95,"Kunal"));

    sort(arr.begin(),arr.end(),comparator());

    for(Student a : arr){
        cout<<a.marks<< " "<<a.name<< " "<<endl;
    }
    return 0;
}