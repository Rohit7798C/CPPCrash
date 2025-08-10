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
    unordered_map<int,int>desk_map;        //roll_no , desk_no.

    //insertion
    //      key  value
    desk_map[1] = 53;         //desk_map ke 1st key par, 53 desk number assign kar diya.
    desk_map[2] = 54;         //desk_map ke 2nd key par, 54 desk number assign kar diya.
    desk_map[3] = 55;         //desk_map ke 3rd key par, 55 desk number assign kar diya.

    desk_map[2] = 54;         //reassign, because key = 2 was already there.
    
    

    return 0;

}
