//STL in CPP
//Common Components in STL
// 1) Containers : Vector, List, Queue, Stack, Deque, Set, Map, etc.
// 2) Algorithms : sort(), binary_search(), reverse(), etc.
// 3) Iterators
// 4) Functors


//1) Containers : Containers in C++ STL are classes or data structures that are designed to store and manage collections of objects.
//                Containers is a another name for Data Structures. It is used to represent Data Structures.


    //a) Vectors
    // - Dynamic Array that can grow or shrink in size.
    // - Allows fast random access of elements.
    // - Insertion and removal of elements at the end is efficient.
    // - Suitable for most scenarios when elements need to be stored in a linear sequence.


#include<iostream>
#include<vector>

using namespace std;

int main(){
    //Creation
    // vector<int>marks;             //Just created a Vector.

    // vector<int>miles(10);         //Created a Vector of size 10.

    // vector<int>distances(15,-1);   //Created a Vector of size 15 and initialized with -1.


    //Iterator
    //-It is a Standard way of traversing over a Container.
    //-It is not exactly a pointer, but it is similar to working of a pointer
    //-It can behave like a pointer.
    
    //marks.begin() -> points to the start of an array.
    //marks.end() -> points to the end of an array.

    //Creating an Iterator
    // "it = v.begin()"" -> points to the start of an array.
    // We can iterate throughout the array using "it".
    // If we want to access the value at that position of "it", then we can access it as ->  *it;
    // We can move the iterator, to the next position as, "it++".
    // Doing "it++", we can move thoughout the array in the forward direction.
    // if(it == v.end()) -> We reached the end of the array.


    //1) begin() -> v.begin() -> Returns the iterator pointing to the first element in the vector.
            //                -> Gives the address of the first element.
    //2) end() -> v.end() -> Returns the iterator pointing to the position just after the last element in the vector.
            //                -> Gives the address of the last element.
    
    // cout<< *distances.begin()<<endl;   //Output : -1
    //Here only distances.begin() gives the address of the start point of Vector.
    //Whereas, using '*' it gives value at the start position of the vector.
    //Similarly for *distances.end().

    //3) push_back(constant value) : Adds an element to the end of the vector.
    //We can insert anything at the starting of the vector using push_back().
 
    //4) pop_back() : Removes the last element from the vector.
    //We can remove anything from the ending of the vector using pop_back().
     
    vector<int>marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);    
    marks.push_back(40);

    //5) size() : Returns the number of elements in the vector.
    //cout<<"Size : "<<marks.size()<<endl;     //Output : 4

    //marks.pop_back();              //Removes 40 from the last.
    //cout<<"Size : "<<marks.size()<<endl;     //Output : 3


    //6) front() : Accesses the first element of the vector.
    //cout<< marks.front() << endl;      //Output : 10
    

    //7) back() : Accesses the first element of the vector.
    //cout<< marks.back() << endl;      //Output : 30 , because 40 is already popped.
    

    //8) empty() : Checks if the vector is empty(i.e., whether it's size is 0).
    // if(marks.empty() == true){
    //     cout<<"Vector is empty!"<<endl;
    // }
    // else{
    //     cout<<"Vector is Not empty!"<<endl;
    // }


    //9) operator [](size_type n) : Accesses the element at the specified index without bounds checking.
    // v[0] -> gives the element at 0th index of the vector.
    // v[1] -> gives the element at 1st index of the vector.

    // cout<< marks[0] <<endl;        //Output : 10

    //We can also assign/modify the values at any position of the vector.
    // marks[10] = 100;
    // cout<< marks[10] << endl;      //Output : 100

    // This bracket can be used only if, that index inside the bracket exists in the vector.
    // Suppose,we created a vector 
    // vector<int>age;
    // age[0] = 10;        //This will give error, as nothing is assigned to the vector, neither the elements nor the size.
    //Also the index the index that we are using inside the bracket should be a valid index.

    // And we are accessing a value 
    // cout<< age[1] <<endl;     //This will give error & return nothing.


    //10) at(size_type n) : Accesses the element at the specified index with bounds checking.
    // cout<<marks[0]<<endl;            //Output : 10
    //Similarly, we can use at()
    // cout<<marks.at(0)<<endl;         //Output : 10


    //11) capacity() : Returns the number of elements that the vector can hold before needing to allocate more spaces.
    // cout<<marks.capacity()<<endl;       //Output : 4
    //Because we have already inserted 4 elements in the vector as above.
    //Now, if we insert two more elements , the capacity will become 8 (i.e. double).
    // marks.push_back(50);
    // marks.push_back(60);
    // cout<<marks.capacity()<<endl;       //Output : 8
    //But size will be only the number of elements present in the vector.
    // cout<<marks.size()<<endl;           //Output : 6


    //12) reserve(size_type n) : Requests that the vector capacity be increased to at least n elements, potentially reducing the number of reallocations.
    //Suppose we created a new vector
    // vector<int>newVector;
    //And we don't assign any element or any size/ capacity to it.
    //So, directly checking it will give capacity as 0.
    //But, we can reserve the space in the vector.
    //Using reserve() function as.
    // cout<<newVector.capacity()<<endl;          //Output : 0 (initial capacity)
    //It reserves the minimum capacity that is required prior to allocation of elements in the vector.
    // newVector.reserve(10);
    // cout<<newVector.capacity()<<endl;          //Output : 10 (reserved capacity)


    //13) max_size() : Returns the maximum number of elements that the vector can hold due to system or library limitations.
    // vector<int>maxSizeVector;
    // cout<<maxSizeVector.max_size()<<endl;         //Output : 1073741823 (number of elements we can store in this vector).


    //14) clear() : Removes all the elements from the vector, which are destroyed, and leaves it with a size of 0.
    // cout<<marks.size()<<endl;               //Output : 4
    // marks.clear();
    // cout<<marks.size()<<endl;               //Output : 0


    //15) insert(iterator position, const T& value) : Inserts a new element before the spcified position in the vector.
    // marks.insert(marks.begin(),50);       //This inserts 50 at the start position of the marks vector.
    // cout<<marks[0]<<endl;                 //Output : 50


    //16) erase(iterator position) or erase(iterator first, iterator last) : Removes one or more elements from the vector starting at the specified position.
    // cout<<marks.size()<<endl;                  //Output : 4
    // marks.erase(marks.begin(), marks.end());
    // cout<<marks.size()<<endl;                  //Output : 0


    //17) swap(vector& x) : Swaps the contents of the vector with those of another vector of the same type, including their sizes and capacities.
    //Suppose we are creating two vectors which we want to swap.

    // vector<int>first; 
    // vector<int>second; 
    
    // first.push_back(10);
    // first.push_back(11);
    // first.push_back(12);
    // first.push_back(13);
    
    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);
    
    // first.swap(second);

    // cout<<first[0]<< " "<<first[1]<< " "<<first[2]<< " "<<first[3]<< " "<<endl;

    //** for-each loop **/
    // This loop can be applied on any container that is needed to traversed.
    // vector<int>v;
    // for(int i : v){
        // We can read the above line as,
        // for each integer i inside vector v.
    // }

    //Printing the first 
    // for(int i : first){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    //Printing the second 
    // for(int i : second){
    //     cout<<i<<" ";
    // }
    //Values are interchanged


    //**traversing the vector using iterator.**/

    // create a iterator
    // vector<int>::iterator it = first.begin();

    // while(it != first.end()){
    //     cout<<*it<<" ";      //Here * is used to print the value.
    //     it++;
    // }



    //2D Array/Vector
    vector<vector<int>>arr(5,vector<int>(4,0));
    //                     |          |
    //                no. of rows   har ek 
    //                          row mein kya hoga.
    
    //Here a vector is having 5 rows and each row is consisting of vector having 4 values (So it becomes 4 columns).
    // int totalRows = arr.size();     
    //We can directly calculate the size of the outer array/vector.
    // int totalCols = arr[0].size();
    // We have to calculate the size of each vector present in the rows of outer vector,
    // But we don't know how many vectors are there in it.
    // So, we assume that there is at least one vector in the first row. i.e.(arr[0]);
    // So, we take size of arr[0] as the no. of columns.
    //2D Array created
    //With 5 rows 
    //with 4 columns
    //with initial value of each cell as "0".

    // The above 2D-vector is having equal number of rows and cols

    //But we can also have a scenario where no. of rows and no. of cols may differ
    //Such 2D-vectors are called jagged arrays.
    vector<vector<int>>brr(4);

    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);

    // int totalRowCount = brr.size();
    // for total Column count, we have check for each row.
    // int totalColCount = brr[i].size();            //no. of columns in the ith row.
    return 0;
}