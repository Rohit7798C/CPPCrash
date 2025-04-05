// Map
// -> It is a collection of "key-value pairs".
// -> Associative container that stores key-value pairs.
// -> Allows efficient retrieval and modification of values based on keys.
// -> Keys are "unique" within the map.

#include<iostream>
#include<map>                    //All operations are done in Log(N) time (O(log(N))).
#include<unordered_map>          //All operations are done in constant time (O(1)).

using namespace std;

int main(){
    //creation
    // unordered_map<string, string>table;
    // string type key and string type value.


    // // creating an ordered map.
    // map<string, string>table;
    // // All functions given below will work similar for (ordered) map also.
    //All the pairs are sorted on the basis of "keys".


    // creating an (ordered) map of "int" and "string".
    // map<int,string>table;
    // table.insert((make_pair(3,"Love")));
    // table.insert((make_pair(1,"Anita")));
    // table.insert((make_pair(2,"Babita")));
    


    // //insertion
    // table["in"] = "India";
    // table.insert(make_pair("en","england"));

    // pair<string,string>p;
    // p.first = "br";
    // p.second = "brazil";
    // table.insert(p);

    //size of map
    // cout<< table.size() <<endl;                   //Output : 3


    // // clear();
    // table.clear();                          //clearing the map
    // cout<<table.size()<<endl;                     //Output : 0

    
    // //empty();
    // if(table.empty() == true){
    //     cout<<"Map is Empty!";
    // }
    // else{
    //     cout<<"Map is NOT Empty!";
    // }


    // at();
    // Fetching using .at();
    // cout<<table.at("in")<<endl;                    //Output : India
    // // Inserting using .at();
    // table.at("in") = "India2";
    // cout<<table.at("in")<<endl;                    //Output : India2
    // table["in"] = "India3";
    // cout<<table.at("in")<<endl;                    //Output : India3


    
    // iterator, begin(), end().
    // map<int,string>::iterator it = table.begin();
    // while(it != table.end()){
    //     // cout<<(*it).first<<" "<<(*it).second<<" "<<endl;
    //     pair<int,string>p = *it;
    //     cout<<p.first<<" "<<p.second<<" "<<endl;
    //     it++;

    //     // Output:          //Output(for int and string pair):
    //     // br brazil        //1 Anita             (sorted
    //     // en england       //2 Babita             on basis
    //     // in India         //3 Love               of keys)
    // }
    //If we run this for (ordered) map, it gives lexographically(letter-wise) sorted ordering of pairs.


    // erase() in Map.
    // cout<<table.size()<<endl;                    //Output : 3
    // table.erase(table.begin(),table.end());      //Erasing all the entries from begin() to end().
    // cout<<table.size()<<endl;                    //Output : 0


    //** VIMP Member Functions **/
    //find(const Key&key) : Returns an iterator to the element with the given key, or end() if the key is not found.
    // Jab hum kisi Key ko dhundhane ke koshish karte hain, toh humein ek iterator return hota hai
    // Aur agar key present na toh hum end tak pohoch jaate hai.
    // Aur humein end return hoo jaata hai.

    // if(table.find("im") != table.end()){
    //     cout<<"Key Found!"<<endl;
    // }
    // else{
    //     cout<<"Key NOT found!"<<endl;
    // }


    //count(const Key& key) : Returns the number of elements with the specified key(1 or 0 since std::map does not allow duplicate keys).
    // if(table.count("in") == 0){
    //     cout<<"Key NOT Found!"<<endl;
    // }
    // if(table.count("in") == 1){
    //     cout<<"Key Found!"<<endl;
    // }

    return 0;
}