#include<bits/stdc++.h>

using namespace std;

//Q21)
// void changeSign(int *p){
//     *p = (*p) * -1;
// }

//Q22)
// void fun(int a[]){
//     cout<<a[0]<<" ";                 //Output : 2
// } 

//Q23)
// void square(int *p){
//     int a = 10;
//     p = &a;
//     *p = (*p) * (*p);
// }


//Q24)
// void Q(int z){
//     z += z;
//     cout<<z<<" ";
// }

// void P(int *y){
//     int x = *y + 2;
//     Q(x);
//     *y = x - 1;
//     cout<<x<<" ";
// }


//Q26)
// int f(int x,int *py,int **ppz){
//     int y,z;
//     **ppz += 1;                //=> Here actual value of c is changed, which affects further values
//     z = **ppz;                 //z = 5
//     *py+=2;                    //*py = 5 + 2 = 7
//     y = *py;                   //y = 7
//     x += 3;                    //x = 4 + 3 = 7
//     return x + y + z;          //x + y + z = 7 + 7 + 5 = 19
// }


//Q28)
// void increment(int **p){
//     (**p)++;
// }


int main(){

    //Q1)
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<<*ptr<<" "<<f<<" "<<p;

    //Q2)
    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout<<a<<" "<<b<<endl;

    //Q3) 
    // int *ptr = 0;        //null pointer
    // int a = 10;
    // *ptr = a;            //We are de-referencing a null pointer, so it will give an error.
    // cout<<*ptr<<endl;

    //Q4) 
    // int b = 10;
    // int *a = &b;   
    // //How to get the memory address of b;
    // cout<<a<<endl;         //this will give the address of b

    //Q5) 
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout<<*ptr<<endl;         //Output : b

    //Q6)
    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout<<a<<" "<<*c<<endl;

    //Q7) 
    // Assume the Memory address of variable 'a' is 400 (and a integer takes 4 byte), what will be the output - 
    // int a = 7;
    // int *c = &a;
    // c = c + 3;
    // cout<<c<<endl;                  //Output : 412

    //Q8) 
    // Assume the Memory address of variable 'a' is 200 (and a double takes 8 bytes), what will be the output - 
    // double a = 10.54;
    // double *d = &a;
    // d = d + 1;
    // cout<<d<<endl;                  //Output : 208

    //Q9) Assume integer takes 4 bytes and integer pointer 8 bytes.
    // int a[5];
    // int *c;
    // cout<<sizeof(a)<<" , "<<sizeof(c);     //Output : (5*4)20 , 4(size of pointer)
    // //size of pointer differs system to system.

    //Q10) 
    // int a[] = {1,2,3,4};
    // cout<<*(a)<<" "<<*(a+1)<<endl;         //Output : 1 2

    //Q11) Assume that address of 0th index of array 'a' is 200. What is the output ?
    // int a[3] = {1,2,3};
    // cout<<*(a+2)<<endl;                     //Output : 3

    //Q12) 
    // int a[] = {1,2,3,4};
    // int *p = a++;                           //Gives runtime error
    // cout<<*p<<endl;

    //Q13)
    // int arr[] = {4,5,6,7};
    // int *p = (arr + 1);
    // cout<<*arr + 9;                      //Output : 13

    //Q14) Assume address of 0th index of array 'b' is 200. What is the output - 
    // char b[] = "xyz";
    // char *c = &b[0];
    // cout<<c<<endl;                       //Output : xyz

    //Q15)
    // char s[] = "hello";
    // char *p = s;
    // cout<<s[0]<<" "<<p[0];               //Output : h h

    //Q16)
    // char arr[20];
    // int i;
    // for(i=0;i<10;i++){
    //     *(arr+i) = 65 + i;
    // }
    // *(arr + i) = '\0'; 
    // cout<<arr;                          //Output : ABCDEFGHIJ

    //Q17)
    // char *ptr;
    // char Str[] = "abcdefg";
    // ptr = Str;
    // ptr += 5;
    // cout<<ptr<<endl;                       //Output : fg
    // //'ptr' prints the characters from index = 5, until it gets a null character.-

    //Q18)
    // int numbers[5];
    // int *p;
    // p = numbers;
    // *p = 10;
    // p = &numbers[2];
    // *p = 20;
    // p--;
    // *p = 30;
    // p = numbers + 3;
    // *p = 40;
    // p = numbers;
    // *(p + 4) = 50;
    // for(int n=0;n<5;n++){
    //     cout<<numbers[n]<<",";           //Output : 10,30,20,40,50
    // }

    //Q19)
    // char st[] = "ABCD";
    // for(int i=0;st[i]!='\0';i++){
    //     cout<<st[i]<<" "<<*(st) + i<<" "<<*(i + st)<<" "<<i[st]<<endl;
    // }
                            //Output :
                            // A 65 A A
                            // B 66 B B
                            // C 67 C C
                            // D 68 D D

    //Q20)
    // float arr[5] = {12.5,10.0,13.5, 90.5,0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout<<*ptr2<<" ";                   //Output : 90.5 
    // cout<<ptr2 - ptr1<<endl;            //Output : 3


    //Q21)
    // int a = 10;
    // changeSign(&a);
    // cout<<a<<endl;                        //Output : -10

    //Q22)
    // int a[] = {1,2,3,4};
    // fun(a+1);
    // cout<<a[0];                           //Output : 1

    //Q23)
    // int a = 10;
    // square(&a);
    // cout<<a<<endl;                        //Output : 10
    //Because nothing will change in the a-variable inside main() function.
    //Because the pointer is pointing to the variable inside the function only.
    //Rather the variable of main.

    //Q24)
    // int x = 5;
    // P(&x);
    // cout<<x;                         //Output : 14 7 6

    //Q25)
    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;                        //This line de-references q and stores the address of b, so we have the address of b in p.So p starts pointing to b.
    // (*p)++;
    // cout<<a<< " "<< b<<endl;        //Output : 10  21
    

    //Q26)
    // int c,*b,**a;
    // c = 4;
    // b = &c;
    // a = &b;
    // cout<<f(c,b,a)<<endl;              //Output : 19
    

    //Q27)
    // int ***r,**q,*p,i=8;
    // p = &i;
    // (*p)++;
    // q = &p;
    // (**q)++;
    // r = &q;
    // cout<<*p<< " "<<**q<< " "<<***r;    //Output : 10 10 10

    //Q28)
    // int num = 10;
    // int *ptr = &num;
    // increment(&ptr);
    // cout<<num<<endl;                      //Output : 11
    return 0;
}