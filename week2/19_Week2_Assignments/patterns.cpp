#include<iostream>
#include<assert.h>
#include<vector>
using namespace std;

//Function for converting Kilometers to miles
// float KmtoMiles(float km){
//     float _1kmmiles = 0.621371;
//     float miles = km * _1kmmiles;
//     return miles;
// }

//Function to find the Area of Circle

// float circle_area(float radius){
//     float area = 3.142 * radius * radius;
//     return area;
// }

//Function to check for even and odd number using normal method.
// bool checkEven(int n){

//     if(n%2==0){
//         return true;     //it is an even number
//     }
//     else{
//         return false;    //it is an odd number
//     }
// }


//Function to check for even and odd number using bitwise method.
// bool checkEven_BitMethod(int n){

//     if(n&1==0){
//         return true;     //it is an even number
//     }
//     else{
//         return false;    //it is an odd number
//     }
// }

//Function to find the Factorial
// long long int factorial(long long int n){
//     long long int fact=1;
//     while(n>0){
//         fact = fact * n;
//         n = n-1;
//     }
//     return fact;
// }

//Function to Check Prime.
// bool checkPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

//Function to Set the Kth bit
// int setKthBit(int n,int K){
//     int mask = 1<<K;
//     int ans = n|mask;
//     return ans;
// }


//Function to convert Temperature
// vector<double>convertTemperature(double celsius){
//     double K = celsius + 273.15;
//     double F = celsius*1.80 + 32.00;
    
//     vector<double>v;
//     v.push_back(K);
//     v.push_back(F);
//     return v;
// }

//Function to Find the number of Setbits
// int countSetBits(int n){
//     int count = 0;
//     while(n>0){
//         int bit = n%2;
//         if(bit==1){
//             count++;
//         }
//         n = n/2;
//     }
//     return count;
// }

//Function to Create number using Digits
int createNumberFromDigit(int n){
    int digit,num=0;
    for(int i=0;i<n;i++){
        cout<<"Enter the digit : ";
        cin>>digit;
        num = num*10 + digit;
        cout<<"The number created till now is : "<<num<<endl;
    }
    return num;
}

int main(){

    //Q1. Numeric Hollow Half Pyramid

    // 1
    // 1 2
    // 1   3  
    // 1     4
    // 1 2 3 4 5


    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    
    // for(int row=0;row<n;row++){
    //     for(int col = 0;col<row+1;col++){
    //         if(row==0 || row==n-1 || col==0|| col == row){
    //             cout<<col+1<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    
    //Q2. Numeric Hollow Inverted Half Pyramid

    // 1 2 3 4 5 
    // 2     5   
    // 3   5     
    // 4 5       
    // 5
     
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         // int total_Columns = n-row;
    //         if(row == 0){
    //             cout<<col+1<<" ";
    //         }
    //         else if(col == 0){
    //             cout<<row+1<<" ";
    //         }
    //         else if(col == n-row-1){
    //             cout<<n<<"  ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
            
    //     }
       
    //     cout<<endl;
    // }

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // for(int row=0;row<n;row++){
    //     for(int col=row+1;col<=n;col++){
    //         if(col == row+1 || col == n || row == 0){
    //             cout<<col<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Q3. Numeric Palindrome Equilateral Pyramid

        //         1 
        //       1 2 1
        //     1 2 3 2 1
        //   1 2 3 4 3 2 1
        // 1 2 3 4 5 4 3 2 1
   
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=n-row-1;col>=1;col--){
    //         cout<<"  ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout<<col+1<<" ";
    //     }
    //     for(int col=row;col>=1;col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    //Alternative approach
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // int k=n;
    // for(int i=0;i<n;i++){
    //     int c = 1;
    //     for(int j=0;j<k;j++){
    //         if(j<n-i-1){
    //             cout<<" ";
    //         }
    //         else if(j<=n-1){
    //             cout<<c;
    //             c++;
    //         }
    //         else if(j==n){
    //             c = c-2;
    //             cout<<c;
    //             c--;
    //         }
    //         else{
    //             cout<<c;
    //             c--;
    //         }
    //     }
    //     k++;
    //     cout<<endl;
    // }
 

    //Q4. Solid Half Diamond
     
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     // for(int col=0;col<n-row-1;col++){
    //     //     cout<<"* ";
    //     // }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Alternative code :
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // for(int i=0;i<2*n-1;i++){
    //     // int cond = 0;
    //     // if(i<n){
    //     //     cond = i;
    //     // }
    //     // else{
    //     //     cond = n - (i%n) - 2;
    //     // }

    //     int cond = i<n ? i: n-(i%n) - 2;   //Using Ternary operator for the condition 
    //     for(int j=0;j<=cond;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Q5. Fancy Pattern #1

        // ********1********
        // *******2*2*******
        // ******3*3*3******
        // *****4*4*4*4*****
        // ****5*5*5*5*5****
        // ***6*6*6*6*6*6***
        // **7*7*7*7*7*7*7**
        // *8*8*8*8*8*8*8*8*
        // 9*9*9*9*9*9*9*9*9
   

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // assert(n<=9);    //This line tells that code will not work for n>9.
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<8-row;col++){
    //         cout<<"*";
    //     }

    //     // for(int col=0;col<row+1;col++){
    //     //     cout<<row+1;
    //     //     //VERY IMP
    //     //     if(col<row){
    //     //         cout<<"*";
    //     //     }
    //     // }
                
    //     for(int col=0;col<2*row+1;col++){
    //         if(col%2==0){
    //             cout<<row+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
       
    //     for(int col=8-row;col>0;col--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

   
    // Q6. Fancy Pattern #2

    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10
    // 7*8*9*10
    // 4*5*6
    // 2*3
    // 1


    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // int count = 1;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<2*row+1;col++){
    //         if(col%2==0){
    //             cout<<count;
    //             count++;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // int start = count - n;
    // for(int row=0;row<n;row++){
    //     int k = start;
    //     for(int col=0;col<2*(n-row)-1;col++){
    //         if(col%2==0){
    //             cout<<k;
    //             k++;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     start = start - (n-row-1);
    //     cout<<endl;
    // }

    //Q7. Fancy Pattern #3
    //c0 c1 c2 c3 c4 c5 c6
// r0  *  1  *
// r1  *  1  2  1  *
// r2  *  1  2  3  2  1  *
// r3  *  1  2  1  *
// r4  *  1  *
    
    //c0 c1 c2 c3 c4
// r0  1  
// r1  1  2  1  
// r2  1  2  3  2  1 
// r3  1  2  1  
// r4  1  

// for r = 0th row, col is at 0
// for r = 1st row, col goes from 0->1->2 i.e. col = 2*row = 2*1 = 2 = col
// for r = 2st row, col goes from 0->1->2->3-> i.e. col = 2*row = 2*2 = 4 = col
// So we can derive the formula as col = 2*row
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
     
    // for(int row=0;row<n;row++){
    //     cout<<"*";
    //     //row-wise growing phase //row-wise shrinking phase
    //     int cond = row<= n/2 ? 2*row : 2*(n-row-1);
    //     for(int col=0;col<=cond;col++){
    //         //Column-wise Increasing phase
    //         // Increasing part of palindrome
    //         if(col<=cond/2){    //iska matlab hai, ki jab number of rows aadhe ho jayenge(cond = 2*row) i.e. cond/2 = 2*row/2 = row, tab tak hi print karna hai. Nahi toh else print karna hai.
    //             cout<<col+1;
    //         }
    //         //Column-wise Decreasing phase
    //         // Decreasing part of palindrome
    //         else{
    //             cout<<cond-col+1;      //here cond = 2*row
    //         }
    //     }
    //     cout<<"*";
    //     cout<<endl;
    // }


    //Q8. Floyd's Triangle Pattern.

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // int count=1;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //Q9. Pascal's Triangle Pattern
    //            1
    //         1     1
    //       1    2    1
    //     1   3     3   1
    //   1   4    6    4   1
    // 1   5   10   10   5   1

    //Logic : a number is a sum of upper two adjacent numbers, along with 1's at both the extremes.
    //Pascal's triangle is made with the help of a Binomial Coefficient.

        // c = c*(i-j)/j;  formula for finding the number.
        // where, i = [1,n]
        // and    j = [1,i]
    
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // for(int row=1;row<=n;row++){
    //     int c=1;
    //     for(int col=1;col<=row;col++){
    //         cout<<c<<" ";
    //         c = c*(row-col)/col;
    //     }
    //     cout<<endl;
    // }

    //Q10. Butterfly Pattern

    // *                 *
    // * *             * *
    // * * *         * * *
    // * * * *     * * * * 
    // * * * * * * * * * * 
    // * * * * * * * * * * 
    // * * * *     * * * * 
    // * * *         * * *  
    // * *             * *
    // *                 *

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     for(int col=0;col<2*(n-row-1);col++){
    //         cout<<"  ";
    //     }
    //     // for(int col=0;col<n-row-1;col++){    //we can combine two same line of codes
    //     //     cout<<"  ";
    //     // }
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     for(int col=0;col<2*row;col++){
    //         cout<<"  ";
    //     }
    //     // for(int col=0;col<row;col++){      //we can combine two same line of codes
    //     //     cout<<"  ";
    //     // }
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //Alternate Method
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row=0;row<2*n;row++){
    //     int cond = row<n? row : n+(n-row-1);
    //     int space_count = row<n ? 2*(n-cond-1) : row-cond-1;
    //     for(int col=0;col<2*n;col++){
    //         if(col<=cond){
    //             cout<<"* ";
    //         }
    //         else if(space_count>0){
    //             cout<<"  ";
    //             space_count--;
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //Q11. KM to Miles Converter
    // 1 KM = 0.621371 miles

    // float km;
    // cout<<"Enter the value in Kilometers : ";
    // cin>>km;
    // float miles = KmtoMiles(km);
    // cout<<"The value of "<<km<<" km in miles is : "<<miles;


    //Q12. Print all digits of an integer.
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // cout<<"The digits of the number are : ";
    // while(n>0){
    //     int remain = n%10;
    //     cout<<remain<< " ";    //Prints the number in reverse order.
    //     n = n/10;
    // }


    //Q13. Display area of circle

    // float r;
    // cout<<"Enter the radius of circle : ";
    // cin>>r;
    // float area = circle_area(r);
    // cout<<"The area of circle is : "<<area;


    //Q14. Given number is Even or Odd (Normal method & Bitwise Method)

    //NORMAL METHOD
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // bool isEven = checkEven(n);

    // if(isEven){
    //     cout<<n<<" is an Even number!";
    // }
    // else{
    //     cout<<n<<" is an Odd number!";
    // }
    
    //Bitwise Method
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // bool isEven = checkEven_BitMethod(n);

    // if(isEven){
    //     cout<<n<<" is an Even number!";
    // }
    // else{
    //     cout<<n<<" is an Odd number!";
    // }


    //Q15. Find the Factorial

    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // cout<<"The factorial of the "<<n<<" is : "<<factorial(n);


    //Q16. Check for prime

    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // bool isPrime = checkPrime(n);

    // if(isPrime){
    //     cout<<n<<" is a Prime!";
    // }
    // else{
    //     cout<<n<<" is NOT a Prime!";
    // }


    //Q17. Print All Prime from 1 to N

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int i=1;i<=n;i++){
    //     if(checkPrime(i)){
    //         cout<<i<<" ";
    //     }
    // }


    //Q18. Reverse an Integer.
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // int ans = 0;
    // while(n>0){
    //     int digit = n%10;
    //     ans = ans*10 + digit;
    //     n = n/10;
    // }
    // cout<<ans;


        //Reverse an integer (leetcode)
            // #include<iostream>
            // #include<limits.h>

            // using namespace std;

            // int reverse(int n){
            //     int ans = 0;
            //     bool isNeg = false;
            //     if(n<=INT_MIN){
            //         return 0;
            //     }
            //     if(n<0){
            //         isNeg = true;
            //         n = -n;
            //     }
            //     while(n>0){
            //         if(ans>INT_MAX/10){
            //             return 0;
            //         }
            //         int digit = n%10;
            //         ans = ans*10 +  digit;
            //         n = n/10;
            //     }
            //     return isNeg ? -ans : ans;
            // }

            // int main(){
            //     int n;
            //     cout<<"Enter the number : ";
            //     cin>>n;
            //     int ans = reverse(n);
            //     cout<<ans;
            //     return 0;
            // }


    //Q19. Set the Kth bit.
    
    // int n,K;
    // cout<<"Enter the number : ";
    // cin>>n;
    // cout<<"Enter the value of K : ";
    // cin>>K;

    // int ans = setKthBit(n,K);
    // cout<<"The output after we set the Kth bit is : "<<ans;
        

    //Q20. Convert the Temperature.

    // double celsius;
    // cout<<"Enter the degree in celsius : ";
    // cin>>celsius;
    
    // vector<double> ans = convertTemperature(celsius);
    // cout<<ans[0]<<endl;
    // cout<<ans[1];


    //Q21. Count all the Set Bits
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // int count=0;
    // while(n>0){
    //     if(n&1==1){
    //         count++;
    //     }
    //     n = n>>1;
    // }
    // cout<<"The number of setbits are : "<<count;


     
    //Alternative Method
    // int n;
    // cout<<"Enter number : ";
    // cin>>n;
    // int setBitCount = countSetBits(n);
    // cout<<"the number of set bits are : "<<setBitCount;
    

    //Alternative Method
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // int count=0;
    // bool isNeg = false;
    // if(n<0){
    //     isNeg = true;
    //     n = -n;
    //     count = 1;
    // }
    // while(n>0){
    //     if(n&1==1){
    //         count++;
    //     }
    //     n = n >> 1;
    // }
    // cout<<"The number of Setbits are : "<<count;


    //Q22. Create Number Using Digits.

    // int n;
    // cout<<"Enter the number of digits : ";
    // cin>>n;
    // cout<<"Enter the elements : ";
    // int arr[n], num=0;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     num = num*10 + arr[i];
    // }
    // cout<<num;

    //Alternative Method
    int n;
    cout<<"Enter the number of digits : ";
    cin>>n;
    
    int ans = createNumberFromDigit(n);
    cout<<"The number formed is : "<<ans;
    return 0;
}
