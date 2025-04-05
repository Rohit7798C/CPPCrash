#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void printDouble(int a){
    cout<<2*a<<" ";
}


bool checkEven(int a){
    return a%2 == 0;
    //Checking for even number.
}

int main(){
    vector<int>arr(6);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    arr[5] = 15;

    // ** for_each() algorithm ** //
    // for_each(arr.begin(),arr.end(),printDouble);
    // arr ke start se lekar end tak mujhe printDouble ka function apply karna hai.
    // Agar humein kisi contaniner ke andar ek specific range ke liye koi function apply karna ho, toh hum for_each() ka use kar sakte hai.



    // ** find() algorithm ** //
    // int target = 400; 
    // find(arr.begin(),arr.end(), target);
    // This algorithm returns us an iterator.
    // We can specify the type of iterator also.
    // vector<int>::iterator it = find(arr.begin(),arr.end(),target);
    // But if we don't want to create this whole iterator, we can directly use "auto" also as,
    // auto it = find(arr.begin(),arr.end(),target);
    // cout<<*it<<" "<<endl;          //This returns 40 if it is present
    // Else it returns garbage value.


    // ** find_if() algorithm ** //
    // -> Searches for the first element that satisfies a given predicate.
    // auto it = find_if(arr.begin(),arr.end(), checkEven);
    // cout<<*it<<" ";                     //Output : 20.
    // Since it returns an iterator which finds the first even number in the array.

     
    // ** count() algorithm ** //
    // -> Counts the occurences of a value in a range.
    // int target = 11;
    // int ans = count(arr.begin(),arr.end(),target);
    // cout<<"The count of "<<target<<" is "<<ans<<endl;
    // Since there are 3 11's in the array, it will return 3.



    // ** count_if() algorithm ** //
    // -> Counts the elements that satisfy a given predicate (function / condition).
    // int ans = count_if(arr.begin(),arr.end(),checkEven);
    // cout<<"The count is : "<<ans<<endl;        //Output : 4
    // Because there are 4 even numbers, it will return 4 as output.


    // ** sort() algorithm ** //
    // -> Sorts in Ascending(Increasing) order.
    // sort(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<<a<<" ";                //Output : 10 11 12 20 40 
    // }
    // cout<<endl;


    // ** reverse() algorithm ** //
    // -> Reverses the order of elements in a range.
    // reverse(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<<a<<" ";                //Output : 40 20 12 11 10
    // }
    // cout<<endl;



    // ** rotate() algorithm ** //
    // -> Rotates elements in a range. 
    // Left Rotation
    // cout<<"Before Shifting : ";
    // for(int a : arr){
    //     cout<<a<< " ";
    // }
    // cout<<endl;
    // rotate(arr.begin(),arr.begin()+3,arr.end());
    // cout<<"After Shifting : ";
    // for(int a : arr){
    //     cout<<a<< " ";
    // }
    // Shifting each element by 3 in the backward direction (left rotation).


    // Right Rotation
    // cout<<"Before Shifting : ";
    // for(int a : arr){
    //     cout<<a<< " ";
    // }
    // cout<<endl;
    // int k = 2;
    // int n = arr.size();
    // rotate(arr.begin(),arr.begin()+(n-k),arr.end());
    // cout<<"After Shifting : ";
    // for(int a : arr){
    //     cout<<a<< " ";
    // }
    // Shifting each element by 3 in the forward direction (right rotation).



    // unique() : Removes duplicate elements from a sorted range.
    // auto it = unique(arr.begin(),arr.end());
    // // Returns an iterator.
    // // Iterator "it" ke pehele saare unique element hai
    // // Aur "it" ke baad saare duplicate elements hai.
    // arr.erase(it,arr.end());
    // // Toh isiliye humne "it" ke baad wale saare elements erase kar diye.
    // for(int a : arr){
    //     cout<<a<<" ";
    // }



    // partition() : Divides elements in a range into two groups based on a predicate.
    // This partition is performed based on some function, like we have used "checkEven" below.
    // This partition returns an iterator
    // Is iterator ke pehele saare even numbers honge aur iss iterator ke baad saare odd numbers honge.

    // auto it = partition(arr.begin(),arr.end(),checkEven);

    // for(int a : arr){
    //     cout << a <<" ";
    // }
    return 0;
}