#include<iostream>
#include<algorithm>
using namespace std;

//Find unique number using Bitwise XOR.
// int findUniqueNumber(int arr[],int size){
//     int ans=0;
//     //to find the final answer, we need to XOR all the numbers in the array.
//     for(int i=0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

//Alternate method to find unique number using sorting.
// void findUniqueNumber(int arr[],int n){
//     sort(arr,arr+n);
//     for(int i=0;i<n;i+=2){
//         if(arr[i] != arr[i+1]){
//             cout<<arr[i]<<" ";
//             return;
//         }
//     }
//     cout<<arr[n-1]<<" ";
// }


//Alternate method to find unique number using comparison.
// void findUniqueNumberComparison(int arr[],int n){
//     int ans = arr[0];
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             ans = arr[i];
//             break;
//         }
//     }
//     cout<<"The unique number is : "<<ans<< " ";
// }

//Function to sort 0's and 1's
// void sortZeroOne(int arr[],int size){
//     int zeroCount = 0,oneCount=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         if(arr[i]==1){
//             oneCount++;
//         }
//     }
//     cout<<"Zero Count : "<<zeroCount<< " "<<endl;
//     cout<<"One Count : "<<oneCount<< " "<<endl;
//     // int i=0;       //So here declaring i outside both loops, allows the value of i to change after completion of first loop.
//     // for(;i<zeroCount;i++){
//     //     arr[i] = 0;
//     // }
//     // //And here the 2nd loop starts with the updated value of i, i.e after printing of 0's.
//     // for(;i<size;i++){
//     //     arr[i] = 1;
//     // }
//     //Using fill function.
//     fill(arr,arr+zeroCount,0);
//     fill(arr+zeroCount,arr+size,1);
// }


//Function to print all the pairs in an array.
// void printAllPairs(int arr[],int n){
//     for(int i=0;i<n;i++){
//         //for every i, we are running looping variable "j" from start to end.
//         for(int j=0;j<n;j++){
//             cout<<"("<<arr[i]<<","<<arr[j]<<"),";
//         }
//         cout<<endl;
//     }
// }


//Function to check two sum(sum of two numbers in an array is equal to the given target value).
// pair<int,int> checkTwoSum(int arr[],int n,int target){
//     //Assuming (-1,-1) as no answer found.
//     pair<int,int>ans = make_pair(-1,-1);
//     //check all pairs
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]+arr[j] == target){
//                 //found a pair that sums to target
//                 // return true;
//                 ans.first = arr[i];
//                 ans.second = arr[j];
//                 return ans;
//             }
//         }
//     }
//     //agar aap yahan tak pohoch gye
//     //iska matlab, koi bhi pair target ke equal nahi mila
//     //iska matlab return false karo
//     return ans;
// }

//If we want to return the pairs, we can use in-built 'pair' function.
//declare    -> pair<int,int>p;     where 'p' is the variable name.
//initialize -> pair<int,int>p = make_pair(10,20);
//access     -> p.first; gives 100 and p.second; gives 200.



//Function to check two sum using Array(sum of two numbers in an array is equal to the given target value).
// void checkTwoSumUsingArray(int arr[],int n,int target,int ans[]){
//     //check all pairs
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]+arr[j] == target){
//                 //found a pair that sums to target
//                 ans[0] = arr[i];
//                 ans[1] = arr[j];
//                 return;
//             }
//         }
//     }
//     //agar aap yahan tak pohoch gye
//     //iska matlab, koi bhi pair target ke equal nahi mila
//     //iska matlab return false karo
//     return;
// }


//Function to check two sum(sum of two numbers in an array is equal to the given target value).
// void checkTwoSumPrintAllAnswers(int arr[],int n,int target){
//     //check all pairs
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]+arr[j] == target){
//                 //found a pair that sums to target
//                 cout<<arr[i]<< ", " << arr[j]<< " "<<endl;
//             }
//         }
//     }
//     //agar aap yahan tak pohoch gye
//     //iska matlab, koi bhi pair target ke equal nahi mila
//     //iska matlab return false karo
// }



//Function to print all the triplets 
// void printAllTriplets(int arr[],int size){
//     int count=0;
//     //Time Complexity -> O(n^3);
//     //Space Complexity -> O(1);
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             for(int k=0;k<size;k++){
//                 // if(arr[i] + arr[j] + arr[k] == target){
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
//                 // }
//                 count++;
//             }
//         }
//     }
//     cout<<"Total triplets : "<<count<<endl;
// }

//Function to check Three sum using Array(sum of Three numbers in an array is equal to the given target value).
// void checkThreeSum(int arr[],int n,int target){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(arr[i]+arr[j]+arr[k] == target){
//                     //ans found
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
//                 }
//             }
//         }
//     }
// }


//Function to Rotate an Array
void rotateArray(int arr[],int size,int n){
    //size -> size of array.
    //n -> Refers to the number of elements by which we have to shift.
    n = n%size;

    if(n==0){
        //no need to do anything
        return;
    }
    //step-1 : Copy last n elements into a temp array.
    int temp[10000];
    int index = 0;
    for(int i=size-n;i<size;i++){
        temp[index] = arr[i];
        index++;
    }

    //step-2 : Shift array elements by finalShift places
    for(int i=size-1;i>=0;i--){
        if(i-n>=0){
            arr[i] = arr[i-n];
        }
    }

    //step3 : Copy temp elements into original array.
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}

int main(){
    //*** IMP ***//
    //XORing any number with 0 gives the same number.
    //XORing any number with 1 flips the last digit, it makes even number odd and odd number even.

    //Q1. Find the unique number in an array.
    // int arr[] = {0,4,1,4,1};
    // int size = 5;

    // int ans = findUniqueNumber(arr,size);
    // cout<<"Unique number is : "<<ans<<endl;

    //Alternate Method.
    // int size,arr[] = {4,4,5,6,5,6,2};
    // size = 7;
    // cout<<"The unique number is : ";
    // findUniqueNumber(arr,size);


    //Alternate Method.
    // int size,arr[] = {4,4,5,6,5,6,2};
    // size = 7;
    // findUniqueNumberComparison(arr,size);

    
    //Q2. Sorting 0's and 1's in an array.
        //Sorting 0's and 1's and 2's in an array (Dutch National Flag Problem).
        //Flipping all 0's and 1's in an array.

    // int size,arr[100];
    // cout<<"Enter the number of elements : ";
    // cin>>size;

    // for(int i=0;i<size;i++){
    //     cout<<"Enter the element at index-"<<i<<" : ";
    //     cin>>arr[i];
    // }
    
    // //Using in-built sort function
    // sort(arr,arr+size);
    // //Time Complexity : O(nlogn)

    // //Function call
    // //sortZeroOne(arr,size);
    // //Time Complexity : O(n)

    // //printing the array
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }



    //Q3. Print all the pairs in an array
    // int arr[100],size;
    // cout<<"Enter the number of elements : ";
    // cin>>size;
    // cout<<"Enter the elements : "<<endl;
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }
    // printAllPairs(arr,size);


//Multiple types of nested for loops having different ranges.
    // int arr[100];
    // int n;
    // //Type-1
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i]<<" "<<arr[j];
    //     }
    // }
    // //Type-2
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         cout<<arr[i]<<" "<<arr[j];
    //     }
    // }
    // //Type-3
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<arr[i]<<" "<<arr[j];
    //     }
    // }
    // //Type-4
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<arr[i]<<" "<<arr[j];
    //     }
    // }
    // //Type-5
    // for(int i=0;i<n;i++){
    //     for(int j=n-1;j>=0;j--){
    //         cout<<arr[i]<<" "<<arr[j];
    //     }
    // }
    // //Type-6
    // for(int i=0;i<n;i++){
    //     for(int j=n-1;j>i;j--){
    //         cout<<arr[i]<<" "<<arr[j];
    //     }
    // }
    // //Type-7
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         cout<<arr[i]<<" "<<arr[j];
    //     }
    // }


    //Q4. Check Two Sum(sum of two numbers in an array is equal to the given target value).
    // int arr[] = {10,20,30,40};
    // int size = 5,target = 60;
    // pair<int,int>ans = checkTwoSum(arr,size,target);
    // if(ans.first == -1 && ans.second == -1){
    //     cout<<"Pair NOT Found!";
    // }
    // else{
    //     cout<<"Pair Found : "<<ans.first<< " "<<ans.second<<" ";
    // }


    //Alternate method using array rather than pair.
    // int arr[] = {10,20,30,40};
    // int size = 5,target = 60;
    // int ans[2] = {-1,-1};
    // // pair<int,int>ans = checkTwoSum(arr,size,target);
    // checkTwoSumUsingArray(arr,size,target,ans);
    // if(ans[0] == -1 && ans[1] == -1){
    //     cout<<"Pair NOT Found!";
    // }
    // else{
    //     cout<<"Pair Found : "<<ans[0]<< " "<<ans[1]<<" ";
    // }

    //Alternate method :-> Printing all the pairs.
    // int arr[] = {10,20,30,40};
    // int size = 5,target = 60;
    // checkTwoSumPrintAllAnswers(arr,size,target);
    


    //Q5. Print all the Triplets.
    // int arr[] = {10,20,30,40};
    // int size = 4;
    // printAllTriplets(arr,size);


    //Q6. Three Sum (Sum of the three numbers is equal to the target).
    // int arr[] = {10,20,30,40};
    // int size = 4,target = 70;
    // checkThreeSum(arr,size,target);


    //Q7.Shift an Array(Could be shifted by 1,2,3 element).
    //We have to follow a 3-step process
    //Step-1 : Store last n elements in a tempa array.
    //Step-2 : Shift all elements by n places.
    //Step-3 : Copy temp array into original array ki start
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    //cyclically rotate array by 2 elements
    int n = 7;
    cout<<"Before : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotateArray(arr,size,n);

    //print Array
    cout<<"After : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    //Shifting by 0 digits is exactly equal to shifting by 0 digit.
    //Shifting by 1 digits is exactly equal to shifting by 1 digit.
    //Shifting by 2 digits is exactly equal to shifting by 2 digit.
    //Shifting by 3 digits is exactly equal to shifting by 3 digit.
    //Shifting by 4 digits is exactly equal to shifting by 4 digit.
    //Shifting by 5 digits is exactly equal to shifting by 5 digit.
    //When we rotate the array by 6 digits, it gives exactly same array(i.e shifting by 0 digits).
    //Shifting by 7 digits is exactly equal to shifting by 1 digit.
    //Shifting by 8 digits is exactly equal to shifting by 2 digit.
    //Shifting by 9 digits is exactly equal to shifting by 3 digit.
    //Shifting by 10 digits is exactly equal to shifting by 4 digit.
    //Shifting by 11 digits is exactly equal to shifting by 5 digit.
    //Shifting by 12 digits gives exactly the same array.
    //So this pattern repeats after every 6th digits of the array(i.e shifting by 0 digits).

    //From the above pattern we can observe that, we are getting the modulus, i.e shift = shift%size.
    return 0;
}
