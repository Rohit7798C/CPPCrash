//DOUBLE POINTERS
#include<bits/stdc++.h>

using namespace std;

int main(){
    //Types of pointers
    /*
    int a = 5;           //Variable
    int *p = &a;         //Single Pointer     (stores the address of a)
    int **q = &p;        //Double Pointer     (stores the address of p)
    int ***r = &q;       //Triple Pointer     (stores the address of q)
    int ****s = &r;      //Quadraple Pointer  (stores the address of r) 
    int *****t = &s;     //                   (stores the address of s)
    */

    //int *   => pointer to an Integer
    //int * * => pointer to (int *)  => pointer to [pointer to an Integer]
    //Since there are two stars(*), we have to travel twice to get the value.

    /*
    int a = 5;
    int *p = &a;
    int *q = p;
    cout<<"a  : "<<a<<endl;          //Output : 5
    cout<<"&a : "<<&a<<endl;         //Output : Address of a (0x62ff0c)
    // cout<<"*a : "<<*a<<endl;      //Output : Error (We cannot de-reference a normal variable, We can de-reference only a pointer).
    cout<<"p  : "<<p<<endl;          //Output : Address of a (0x62ff0c)
    cout<<"&p : "<<&p<<endl;         //Output : Adress of p  (0x62ff08)
    cout<<"*p : "<<*p<<endl;         //Output : (Value at address stored in p) 5
    cout<<"q  : "<<q<<endl;          //Output : Address of a (0x62ff0c)
    cout<<"&q : "<<&q<<endl;         //Output : Address of q (0x62ff04)
    cout<<"*q : "<<*q<<endl;         //Output : 5
    // cout<<"**q : "<<**q<<endl;    //Output : Error
    */
  
    /*
    int a = 10;
    int * p = &a;
    int ** q = &p;
    cout<<"a  : "<<a<<endl;          //Output : 10
    cout<<"&a : "<<&a<<endl;         //Output : Address of a (0x62ff0c)
    // cout<<"*a : "<<*a<<endl;      //Output : Error (We cannot de-reference a normal variable, We can de-reference only a pointer).
    cout<<"p  : "<<p<<endl;          //Output : Address of a (0x62ff0c)
    cout<<"&p : "<<&p<<endl;         //Output : Adress of p  (0x62ff08)
    cout<<"*p : "<<*p<<endl;         //Output : (Value at address stored in p) 10
    // cout<<"**p : "<<**p<<endl;    //Output : Error
    cout<<"q  : "<<q<<endl;          //Output : Address of p (0x62ff08)
    cout<<"&q : "<<&q<<endl;         //Output : Address of q (0x62ff04)
    cout<<"*q : "<<*q<<endl;         //Output : Value in p (i.e address of a) (0x62ff0c)
    cout<<"**q : "<<**q<<endl;       //Output : 10
    // cout<<"***q : "<<***q<<endl;  //Output : Error
    */
    /*
    int a = 50;
    int * p = &a;
    int ** q = &p;
    int ** r = q;              //Copy Pointer
    int ***s = &q;

    cout<<"a  : "<<a<<endl;          //Output : 50
    cout<<"&a : "<<&a<<endl;         //Output : Address of a (0x62ff04)
    // cout<<"*a : "<<*a<<endl;      //Output : Error (We cannot de-reference a normal variable, We can de-reference only a pointer).
    cout<<"p  : "<<p<<endl;          //Output : Address of a (0x62ff04)
    cout<<"&p : "<<&p<<endl;         //Output : Adress of p  (0x62ff00)
    cout<<"*p : "<<*p<<endl;         //Output : (Value at address stored in p) 50
    cout<<"q  : "<<q<<endl;          //Output : Address of p (0x62ff00)
    cout<<"&q : "<<&q<<endl;         //Output : Address of q (0x62fefc)
    cout<<"*q : "<<*q<<endl;         //Output : Value in p (i.e address of a) (0x62ff04)
    cout<<"**q : "<<**q<<endl;       //Output : 50
    cout<<"r   : "<<r<<endl;         //Output : Value in r (i.e address of p) (0x62ff00)
    cout<<"**r : "<<**r<<endl;       //Output : (Value at address stored in p) 50 (de-referencing twice)
    cout<<"s   : "<<s<<endl;         //Output : Address of q (0x62fefc)
    cout<<"*s  : "<<s<<endl;         //Output : Value at address in s (Address of q (0x62fefc)).
    cout<<"**s : "<<**s<<endl;       //Output : Value at address stored in s and then value at that address (de-referencing twice).(Address of a : 0x62ff04)
    cout<<"***s: "<<***s<<endl;      //Output : de-referencing thrice (50)
    */

    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;

    //We can accesss the following as given below
    //  s -> r -> q -> p ->  a
    //  |    |    |    |     |
    //  s    r,   q,   p,    a,
    //       *s   *r,  *q,   *p,
    //           **s   **r,  **q,
    //                 ***s  ***r,
    //                       ****s
 


    return 0;
}