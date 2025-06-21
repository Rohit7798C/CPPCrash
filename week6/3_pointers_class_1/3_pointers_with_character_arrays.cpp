// Pointers with Character Arrays.

#include<bits/stdc++.h>

using namespace std;

int main(){
    /*
    char ch[100] = "lovebabbar";
    char * cptr = ch;
    cout<<cptr<<endl;      //This will NOT print the base address, rather it will print the entire character array.
    //Output : lovebabbar
    cout<<ch<<endl;        //Output : lovebabbar       
    //We can print the base address as,
    cout<<"Base address : "<<&ch<<endl;       //Output : 0x62fea8 
    */

    /*
    char ch[20] = "Babbar"; 
    char *cptr = ch;
    cout<<ch<<endl;         //Output : Babbar 
    cout<<&ch<<endl;        //Output : 0x62fefc (Address of ch)
    cout<<ch[0]<<endl;      //Output : B
    cout<<&cptr<<endl;      //Output : 0x62fef8 (Address of cptr)
    cout<<*cptr<<endl;      //Output : B        (Value at base address)
    cout<<*(cptr+3)<<endl;  //Output : b (Adding +1 for each character 3 times)
    //Special dhyaan rakhna hai, below statement ka 
    //ismein hum pakka galti karte hain.
    cout<<cptr<<endl;       //Output : Babbar (Prints the entire character array).
    cout<<(cptr + 3)<<endl; //Output : bar    (Prints the string from 3 to end)
    cout<<(cptr+1)<<endl;     //Output : abbar    (Prints the string from 1 to end)
    */
    
    /*
    char ch[10] = "RacecaR";
    char * ptr = &ch[0];

    cout<<ch<<endl;           //Output : RacecaR 
    cout<<&ch<<endl;          //Output : 0x62ff06 (Address of ch)
    cout<<&ch[0]<<endl;       //Output : RacecaR
    cout<<*(ch + 3)<<endl;    //Output : e
    cout<<(ch + 3)<<endl;     //Output : ecaR
    cout<<ptr<<endl;          //Output : RacecaR
    cout<<*ptr<<endl;         //Output : R        (Value at base address)
    cout<<*(ptr+3)<<endl;     //Output : e        (Value at base address)
    cout<<&ptr<<endl;         //Output : 0x62ff00 (Address of ptr)
    cout<<(ptr + 2)<<endl;    //Output : cecaR 
    cout<<(ptr + 4)<<endl;    //Output : caR 
    */
   
    /*
    char * ptr = "Babbar";
    //This is a bad Practice. Why?
    cout<<sizeof(ptr)<<endl;
    cout<<*ptr<<endl;
    cout<<"Hi"<<endl;
    */

    return 0;
}
