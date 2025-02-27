#include<iostream>
#include<vector>
using namespace  std;

void print(vector<int>v){
    cout<<"Printing Vector : ";
    int size = v.size();
    for(int i=0;i<size;i++){
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";     //we can also print using v.at()
    }
    cout<<endl;
}

void print2(vector<int>v){
    cout<<"Printing Vector : ";
    //This loop is called for-each loop.
    for(auto it:v){
        cout<<it<<" ";
        //Here auto iss used to identify the datatype of data in Vector
    }
    cout<<endl;
}


int main(){
    //In vector, don't tell size of vector.
    //Just keep inserting, I will manage the allocations.
    //vector<int>v;    //array hi hai.
    //inserting
    // while(1){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     //cout<<"Capacity : "<<v.capacity()<<"Size : "<<v.size()<<endl;
    // }

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // print(v);                 // 1 2 3

    // //pop_back ->DELETE from END (We can POP only from last).
    // v.pop_back();
    // print(v);                 // 1 2
    // v.pop_back();
    // print(v);                 // 1


    //We also have another Method for printing the vector (Vector Method).
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    print2(v);

    //***Taking input from user***
    // int n;
    // cout<<"Enter the number of elements : ";
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    // }
    //We can also add elements after the size is reached of vector.
    // for(int i=0;i<10;i++){
    //     v.push_back(80);
    // }

    //***I want to clear the vector***
    // v.clear();       //Capacity remains the same even after we clear the vector.
    //Just to verify whether it is cleared or not, we will push a number into the vector.
    // cout<<v.capacity()<<" ";
    // v.push_back(50);
    // print(v);

    //***Vector initialization.***
    //Method-1: Default with no data and 0 size.
    // vector<int>arr;     //default with no data and 0 size.

    //Method-2: Initialization with size and default value.
    // vector<int>arr2(5,-1);      //initialization with size 5 and default value -1.
    // print(arr2);        //Prints Vector : -1 -1 -1 -1 -1
    //Here, we have initialized the vector with size and data, but stil we can add data to it, because vector is not static.
    //Vector is always a Dynamic Data Structure.
    // arr2.push_back(50);
    // print(arr2);        //Prints Vector : -1 -1 -1 -1 -1 50 

    //Method-3: Initialization with size and certain values.
    // vector<int>arr3={1,2,3,4,5};
    // arr3.pop_back();       //POPs always from end.
    // print(arr3);

    //Method-4: Initialization without using assignment operator.
    // vector<int>arr4{1,2,3,4,5};   
    // print(arr4);
    //Method-3 & Method-4 were introduced in 2011, in C++ version 11 and are new methods of intitilization.
    //But these new methods may not work for certain compilers.

    //***How to copy vector***
    // vector<int>arr5 = {1,2,3,4,5,6};
    // print(arr5);
    // vector<int>arr6(arr5);
    //We can initialize one vector with another, or simply we are copying one vector into another.
    //Here we are copying vector arr5 into arr6.
    // print(arr6);


    //***We can also create Vector of different data-types.***
    // vector<char>v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');
    // v.push_back('d');
    // //We can print the first and last elements of the vector as:
    // cout<<"First element : "<<v[0]<<" "<<endl;
    // cout<<"First element : "<<v.front()<<" "<<endl;    //This is Vector Method

    // cout<<"Last element : "<<v[v.size()-1]<<" "<<endl; 
    // cout<<"Last element : "<<v.back()<<" "<<endl;      //This is Vector Method
    return 0;
}



//How does Vector works internally?
//Ans:Vector has two factors internally i.e Capacity and Size.
//                                       Capacity          Size
//     vector<int>v;        
//     v.push_back(1);      1                1              1 
//     v.push_back(2);     1 2               2              2    (Here capacity is full)  
//     v.push_back(3);    1 2 3 _            4              3    (So, here it doubles the capacity of holding the elements)
//     v.push_back(4);   1 2 3 4             4              4    (Here capacity is full)
//     v.push_back(5);  1 2 3 4 5 _ _ _      8              5    (So, here it doubles the capacity of holding the elements)

//Every-time the Capacity of vector is full, it doubles the capacity.
//So, in this way the size of vector increases dynamically, and we dont't need to mention the size of vector.