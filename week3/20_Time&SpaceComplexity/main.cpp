//What is Time Complexity
//Ans : Amount of time taken by an algorithm to run as a function of length of input.
// time taken is not actual time, it is the no. of operations performed by CPU.


//Why to study T&S Complexity?
//Ans: 1) Good Computer Engineer always thinks about the complexity of the code written by him.
// 2) Resources are limited.
// 3) Measure algorithm to make efficient programs.
// 4) Asked by interviewer after every solution you give.


//What is Space Complexity?
//Ans : Amount of space taken by an algorithm to run as a function of length of input.
// 1) int a = 1;   //variable
// 2) int b[5];    //array
// Above two are not affected by increasing or decreasing the value of n.
// So, it's Space complexity will be constant O(1);

// 2) int n;
//    cin>>n;
//    int *b = new int[n];
//    //print array b;
//    for(int i=0;i<n;i++){
//        cout<<b[i];
//    }
// On Increasing the value of n, for array b, the space complexity will increase.


//Unit to Represent Complexity.
// 1) Big O: Upper Bound (Worst Case).
// 2) Theta 𝝷 : Average Case (Avg Case).
// 3) Omega Ω : Lower Bound (Best Case).


//Big O : Complexities
//1) Constant Time : O(1)     (independent of n, e.g : int a = 5;)
//2) Linear Time : O(N)
    // for(int i=0;i<n;i++){  (Complexity increases with increase in the value of n).
    //     cout<<i;
    // }
//3) Logarithmic Time : O(logN)
//4) Quadratic Time : O(N^2)
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
        //here i and j both run n times.(for loop inside for loop)
        // therefore, time complexity becomes n*n = n^2
//     }
// }
//if one for loop starts after end of one for loop, then time complexity becomes n+n = 2n , but here 2 is ignored so, finally time complexity is n.

//5) Cubic Time : O(N^3)
// Here there are total 3 for loops. (for inside for inside for).


//Increasing Order of Complexity in Big-O
// O(1)<O(logN)<O(sqrt(N))<O(N)<O(NlogN)<O(N^2)<O(N^3)<O(2^N)<O(N!)<O(N^N)

// 1) Linear Search => Every element is searched , therefore time complexity will be O(n).
// 2) Binary Search => Middle element is found and then checked whether greater or less and then accordingly array is broken into two parts and so on till the element is found, therefore time complexity will be O(logN).
// It works as follows, N elements are divided into N/2 elements.
// N/2 elements are divided by 2 into N/4 elements. and so on.
// So total divisions will be N/2^k, where k is the no. of operations
// When element is found, it becomes, N/2^k = 1 => N = 2^k
// Taking log on both sides, logN = klog2(base 2), so it gives k = logN
// i.e. time complexity will be O(N) = logN(base 2).