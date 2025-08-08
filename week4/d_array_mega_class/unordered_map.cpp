//Hash-tables or hash-maps makes my searching easy.
//It consists of hash-keys and hash-values.
//Hash-keys are always unique.

//We implement this in C++ as,
//               key  value
// unordered_map<int, string>

#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    //Order is not maintained
    unordered_map<int,int>desk_map;        //roll_no , desk_no.

    //insertion
    //      key  value
    desk_map[1] = 53;         //desk_map ke 1st key par, 53 desk number assign kar diya.
    desk_map[2] = 54;         //desk_map ke 2nd key par, 54 desk number assign kar diya.
    desk_map[3] = 55;         //desk_map ke 3rd key par, 55 desk number assign kar diya.

    desk_map[2] = 57;         //reassign, because key = 2 was already there.
    //iterate
    //I have to iterate over 3 entries
    //There are two ways of iterating 

    // for loop
    // map mein iterate karne ke liye, make an iterator
    unordered_map<int,int>::iterator it;    //syntax to access each entry in map
    for(it = desk_map.begin(); it != desk_map.end();it++){

        int key = it -> first;   //syntax
        int value = it -> second;
        cout<<"Key : "<<key<<" "<<"Value : "<<value<<endl;

    }
    
    //another syntax
    // for-each
    // for(auto it : desk_map){
    //here auto means unordered_map<int,int>::iterator
    //But we cannot use it directly
    //So we have to use pair<int,int>p;
    //so,we can also write it as,
    // for(pair<const int, int>& pair : desk_map){
    //     int key = pair.first;
    //     int value = pair.second;
    //     cout<<"Key : "<<key<<" "<<"Value : "<<value<<endl;
    // }


    // find ? table ya map mein finding bohot fast hoti hai (Avg Case Complexity : O(1)).
    // 2 is the key
    // end() is the (last block+1). and NOT the last block itself.
    if(desk_map.find(2) != desk_map.end()){   //syntax
        //found
        int value = desk_map[2];
        cout<<"Value at 2 is : "<<value<<endl;
    }
    else{
        //Not Found
    }

    //deletion
    //Key se hi hota hai.
    desk_map.erase(2);

    cout<<"After Erase!"<<endl;
    for(it = desk_map.begin(); it != desk_map.end();it++){

        int key = it -> first;   //syntax
        int value = it -> second;
        cout<<"Key : "<<key<<" "<<"Value : "<<value<<endl;

    }
    if(desk_map.find(2)!=desk_map.end()){
        int value = desk_map[2];
        cout<<"Value at 2 is : "<<value<<endl;
    }
    else{
        cout<<"Value 2 NOT Found!"<<endl;
    }
    return 0;
}