#include<bits/stdc++.h>

using namespace std;

//This is not passed as a pointer, unlike in case of array.
//This is pass by value like a normal variable, and if we use & operator, it will be pass by reference.
void solve(vector<int>v){
    cout<<sizeof(v)<<endl;      //output : 12 (3*4)
}

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    solve(v);

    //Conclusion : So, we can conclude that, in case of normal arrays, it will always be passed by reference.
    //             And in case of all others, like vectors, they will behave like normal variables, like they will be passed by reference only if we explicitly 
    //             mention it (using &). Otherwise, it will be passed by value only.
    
    
    return 0;
}