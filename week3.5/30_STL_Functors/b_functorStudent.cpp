#include<iostream>

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

//functor
class StudentComparator{
    public:
        bool operator()(Student a,Student b){
            return a.marks<b.marks;
        }
};

int main(){
    Student s1;
    Student s2;
    s1.marks = 93;
    s1.name = "babbar";

    s2.marks = 93;
    s2.name = "lakshay";

    // StudentComparator cmp;
    // if(cmp(s1,s2)){
    //     cout<<"Love ke marks lakshay se kam hai";
    // }
    // else{
    //     cout<<"lakshay ke marks Love se kam hai";
    // }

    if(s1.marks == s2.marks){
        cout<<(s1.name<s2.name);      //ordering in lexographically(a->z) increasing order of name.
        //Output
        // 95 Kunal 
        // 90 Lakshay
        // 90 Love 
    }
    cout<<( s1.marks>s2.marks); 
    
    return 0;
}