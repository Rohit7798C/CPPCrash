//Stack 
// -> Adaptar class that provides a Last-In, First-Out (LIFO) data structure.
// -> Implemented using other containers (e.g., vector, deque, list) as the underlying storage.


#include<iostream>
#include<stack>

using namespace std;

int main(){

    //creation
    stack<int>st;

    //insertion
    // st.push(10);
    // 10
    st.push(20);
    // 10 20
    st.push(30);
    // 10 20 30

    // cout<<st.size()<<endl;     //Output : 3
    // st.pop();                  //Removes element(30) from the top of stack.
    // // 10 20
    // cout<<st.size()<<endl;     //Output : 2

    // cout<<st.top()<<endl;      //Gives the element present on the top of the stack. //Output : 10
    // st.pop();
    // // 10                      //Removes element(20) from the top of stack.
    // cout<<st.top()<<endl;      //Output : 10
    // cout<<st.size()<<endl;     //Output : 1


    // if(st.empty() == true){
    //     cout<<"Stack is Empty!";
    // }
    // else{
    //     cout<<"Stack is NOT Empty!";
    // }
    

    //Swapping two stacks
    // stack<int>first;
    // stack<int>second;

    // first.push(10);
    // first.push(10);

    // second.push(100);
    // second.push(200);

    // first.swap(second);
    // cout<<first.top()<<endl;


    // We cannot Iterate through stack.
    // stack<int>::iterator it = st.top();               //It gives error

    // If we still want to iterate through stack we have to pop all the elements one by one from the top. 
    

    // cout<<st.top()<<" "<<endl;
    // cout<<st.size()<<" ";
    // // st.clear();                      //There is NO clear function in Stack.
    // cout<<st.size()<<" ";
    return 0;
}