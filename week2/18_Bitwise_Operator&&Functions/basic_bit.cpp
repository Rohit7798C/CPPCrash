// 1) Bitwise AND(&) -> gives output as 1 if both inputs are 1, else gives 0.
// 2) Bitwise OR(|) -> gives output as 0 if both inputs are 0, else gives 1.
// Any number OR 0 gives the same number as output. 
// e.g. 3 | 0 = 3, 4 | 0 = 4.

//** Application of Bitwise AND(&). **
// Normally for checking even-odd numbers we use modulus operator.
// e.g: -> Even -> n%2 == 0 -> even
// e.g: -> Odd -> n%2 != 0 -> odd

// But we try to avoid modulus(%) operator as much as possible, because % is computationally intensive operation.
// Which means, it consumes large amount of resources.

// so we can check using bitwise & as:
// 1) If n & 1 =0 ,then it is an even number.
//     e.g. 4 & 1 -> 000......00100 (4)
//                   000......00001 (1)
//                  ________________
//                   000......00000

// 2) If n & 1 !=0 ,then it is an odd number.
//     e.g. 5 & 1 -> 000......00101 (5) (Remember that for any ODD number the least significant(last) bit is always 1).
//                   000......00001 (1)
//                  ________________
//                   000......00001

// Why bit operators are faster than modulus operator?
// Ans : Because it works on the bit-level and it is very close to the system.

// #include<iostream>

// using namespace std;

// int main(){
//     cout<<~5;
//     return 0;
// }

// 3) Bitwise NOT(~) -> '~' means flipping all the bits of the number. 

// ~(5) -> 
//       5 ->  0000.......00101
//    ~(5) ->  1111.......11010  (flipping all the bits)
// Here, since the first digit (MSB) i.e. Most significant bit is 1, it is a (-ve) number. 
// So, to access the (-ve) number, we have to take the 2's compliment.
// And for calculating the 2's compliment, first we have to take 1's compliment.

// 1) Calculating 1's compliment -> flip all the bits.
        //    0000.......00101
// 2) Calculating 2's compliment -> Adding 1 to the 1's compliment.
        //    0000.......00101
        //              +    1
        // ___________________
        //    0000.......00110   -> Represents 6 

// Since, it was a (-ve) number, so the final number will be -6.


   // 4) Bitwise XOR(^) : For same bit gives 0, for different bit gives 1.
// IMP Application of Bitwise XOR(^).
// Q. Find unique number from given numbers
// Suppose a certain numbers a given, in which every number repeats twice, but there is a unique number which appears only once.
// e.g : 3,8,7,4,4,12,3,12,8.
// To find the unique number, we can use Bitwise XOR(^) as,
// XOR all the numbers at once : 3^8^7^4^4^12^3^12^8 = 7.
// Because for same number XOR gives 0. So, all the numbers cancel out each other.


    // 5) Left Shift Operator (<<) (Multiplying by 2).
    // Every bit of the number is shifted backward (towards left) and the most significant bit is lost.
    // e.g: 5 is represented as 000.....101.
    // So, 5 >> 1 -> Shifting every bit in 5 towards left by 1 bit. So, it becomes 000.....1010 -> it represents 10(Multiplying 5 by 2 only once i.e. 2^1).
    // The leftmost bit is LOST here and the empty space on the rightmost side is filled with 0.
    // So, 5 >> 2 -> Shifting every bit in 5 towards left by 2 bit. So, it becomes 000.....10100 -> it represents 20(Multiplying 5 by 2 twice i.e. 2^2).
    // The leftmost bit is LOST here and the empty space on the rightmost side is filled with 0.
    
        // In General, if number = A and left shift by n bits -> A * 2^n.
    
    // 6) Right Shift Operator (>>) (Dividing by 2).
    // Every bit of the number is shifted forward (towards right) by 1 step and the least significant bit is lost.
    // e.g: 10 is represented as 000.....1010.
    // So, 10 >> 1 -> Shifting every bit in 10 towards right by 1 bit. So, it becomes 000.....101 -> it represents 5(dividing 10 by 2 only once i.e. 2^1).
    // The rightmost bit is LOST here and the empty space on the leftmost side is filled with 0.
    // So, 10 >> 2 -> Shifting every bit in 10 towards right by 2 bit. So, it becomes 000.....010 -> it represents 2(dividing 10 by 2 twice i.e. 2^2).
    // The rightmost bit is LOST here and the empty space on the leftmost side is filled with 0.
    
// In General, if number = A and is right shifted by n bits -> A / 2^n.

// #include<iostream>

// using namespace std;

// int main(){
//         // cout<<(5&3)<<" ";       //-> 1
//         // cout<<(5|3)<<" ";       //-> 7
//         // cout<<(~5)<<" ";        //->-6
//         // cout<<(5^5)<<" ";       //-> 0
//         // cout<<(5^5^9)<<" ";     //-> 9 
//         // cout<<(25<<1)<<" ";     //-> 50    (Left shift means multiplying by 2^1).
//         // cout<<(25<<2)<<" ";     //-> 100   (Left shift means multiplying by 2^2).
//         // cout<<((-10)<<2)<<" ";  //-> -40   (Left shift of (-ve) number).
//         // cout<<((-1000)<<2)<<" ";//-> -4000 (Left shift of (-ve) number).
//         // cout<<((-1000)>>2)<<" ";//-> -250  (Right shift of (-ve) number means dividing by 2^2).
//         // cout<<((-10)>>1)<<" ";  //-> -5    (Right shift of (-ve) number means dividing by 2^1).
//         return 0;
// }

// Homework -> Find out the corner cases of Left and Right shift operator.


// *** VERY IMP *** //
// The Most significant bit on the left is called "Parity Bit".
// 1) When we right-shift a -ve number, all the bits are shifted to right, and the space left on the most significant bit on the left is filled with 0.
// 2) when we right-shift a -ve number, it gives out a negative number.
// 3) But a number having the most significant bit as 0 is not negative, still we get output as -ve number , why?
// 4) We know that range of an unsigned integer is from 0 to (2^32 - 1), so we require 32 bits to represent the number.
// 5) But for case of -ve number i.e. signed integer, range is from (-2^31) to (2^31)-1, so here we are using only 31 bits to represent the number, while
//    the remaining 1 bit is used to represent the -ve sign.
// 6) So, when we right-shift or left-shift a -ve number, the compiler works on the 31 bits only, leaving the 1 bit for the -ve sign alone, hence we get the
//    output as -ve. 