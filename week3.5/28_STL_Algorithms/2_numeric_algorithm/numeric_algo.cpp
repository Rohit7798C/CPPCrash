#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    // vector<int>arr(5);
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    //1) accumulate() : Computes the sum of elements in a range.
    // int totalSum = accumulate(arr.begin(),arr.end(),0);
    // Here 0 indicates the initialized value of sum.
    // Like in normal sum we initialize a variable sum = 0, it is similar to this.
    // Wwe can also initialize it with 1000 or 3000 or 2000, etc.
    // cout<<totalSum<<" ";                //Output : 150
 


    //2) product() : Computes the inner product of two ranges.
    // Suppose we have            [1,   2,   3] 
    //                             |    |    | 
    // And                        [3,   4,   5]
    // So, inner producct will be [1*3,2*4,3*5]
    //                            [3,8,15] => 3+8+15 = 26
      
    // vector<int>first;
    
    // first.push_back(1);
    // first.push_back(2);
    // first.push_back(3);
    
    // vector<int>second;
    // second.push_back(3);
    // second.push_back(4);
    // second.push_back(5);
    
    // // Here 0 indicates the initialized value of inner_product.
    // int ans = inner_product(first.begin(),first.end(),second.begin(),0);
    // // There is no need of sending the second.end() value , because, it will automatically count check from the count of first.end() value.
    // cout<<"The Inner Product is : "<<ans<<endl;              //Output : 26
    



    //3) partial_sum() : Computes the partial sums of a range.
    // vector<int>first;
    
    // first.push_back(1);
    // first.push_back(2);
    // first.push_back(3);
    // first.push_back(4);
    
    // // Here an extra array is required to store the partial sums of each sub-arrays.
    // vector<int>result(first.size());
    // // Size of result array will be as same as size of first array.
    // partial_sum(first.begin(),first.end(),result.begin());
    // // We will start pushing the partial sums from result.begin().
        
    // for(int p : result){
    //     cout<<p<<" ";            //Output : 1 3 6 10 
    //     // Here 1   = 1
    //     //     1+2  = 3
    //     //    1+2+3 = 6
    //     //   1+2+3+4= 10
    // }
     
    
    
    //4) iota() : Fills a range with incrementing values.
    // If we give the start as 100, then it will start filling in the incremented values 101,102,103 and so on.    
    // vector<int>first(5);
    // iota(first.begin(),first.end(),250);

    // for(int a : first){
    //     cout<<a<<" ";               //Output : 250 251 252 253 254 
    // }
    // cout<<endl;

    

    
    return 0;
}