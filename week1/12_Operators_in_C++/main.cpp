#include<iostream>

using namespace std;

int main(){
    // 1) Unary Operator 
    //    a) a++ : post-increment -> pehele use karo, phir increase karo.
    //    a) ++a : pre-increment -> pehele increase karo, phir use karo.
    //    a) a-- : post-decrement -> pehele use karo, phir decrease karo.
    //    a) --a : pre-decrement -> pehele decrease karo, phir use karo.

    // for(int i=1;i<=5;++i){
    //     cout<<i<<" ";
    // }

    // int a = 5;
    // cout<< a << endl;
    // cout<< (++a) <<endl;    // prints 5.
    // // a ki value 6 ho chuki hai.

    // cout<< (a++) <<endl;    // prints 6. 
    // // print toh 6 hi hoga, par a ki value 7 ho chuki hai.

    // cout<< a <<endl;        // prints 7.
    // // yaha tak a ki value 7 ban chuki hai.

    // cout<< (--a) <<endl;    // prints 6.
    // // a ki value 6 ban chuki hai.

    // cout<< (a--) <<endl;    // prints 6.
    // // print toh 6 hi hoga par a ki value 5 ban chuki hai.

    // cout<< a << endl;       // prints 5.

    // 2) Arithmetic Operators.

    // int a = 10;
    // int b = 5;
    // cout<< (a+b) <<endl;
    // cout<< (a-b) <<endl;
    // cout<< (a*b) <<endl;
    // cout<< (a/b) <<endl;
    // cout<< (a%b) <<endl;

    // cout<< (5/2) <<endl;     // prints 2
    // cout<< (5.0/2) <<endl;   // prints 2.5


    // 3) Relational Operators

    // cout<< (10>5) << endl;
    // cout<< (10>=5) << endl;
    // cout<< (10<5) << endl;
    // cout<< (10<=5) << endl;
    // cout<< (10!=5) << endl;
    // cout<< (10==5) << endl;

    
    // 4) Logical Operators
    // bool cond1 = (10==5);
    // bool cond2 = (5<5);
    // bool cond3 = (2!=2);
    // a) Logical &&
    // if(cond1 && cond2 && cond3){
    //     cout<<"All conditions are true"<<endl;
    // }
    // else {
    //     cout<<"All conditions are not true"<<endl;
    // }

    // b) Logical ||
    // if(cond1 || cond2 || cond3){
    //     cout<<"Atleast 1 condition is true"<<endl;
    // }
    // else {
    //     cout<<"All conditions are false"<<endl;
    // }

    // c) Logical !
    // bool condition = (5!=10);
    // cout<<condition;

    // bool condition = false;
    // cout<< !condition << endl;

    // 5) Assignment Operator 
    // int a = 5;
    // cout<< a <<endl;

    // a = a+10;
    // a += 10;
    // a -= 10;
    // a *= 10;
    // cout<< a << endl;

    // 6) Binary Operator : Works on the bit-level.
    // a) Bitwise &
    // cout<< (5&4) <<endl;   // output : 4 
    // b) Bitwise |
    // cout<< (5|4) <<endl;

    // c) Bitwise ~ (tilda)
    // cout<< ~5 <<endl;     // output : -6

    // d) Left Shift Operator (<<) : Shifts all the bits towards left by one bit, and puts a 0 at the empty space remaining on the right side.
    // multiplies by 2.
    // cout<< (5<<2) << endl;   // output : 10

    // e) Right Shift Operator (<<) : Shifts all the bits towards Right by one bit, and the last bit on the right side is lost.
    // divides by 2.
    // cout<< (100>>2) << endl;   // output : 3

    // f) Bitwise XOR operator (^).
        //  i) If same -> output is 0 
        //  ii) If different -> output is 1

        // cout << (5^5) <<endl;      // output : 0
        // cout << (5^12) <<endl;     // output : 9


    // H.W. Questions 
    // 1) On which datatype can we apply Bitwise operator?
    // Ans : Primarily applied to only integers.

    // 2) Can we apply (%) Modulus operator on Floating point number?
    // Ans : NO

    return 0;
}