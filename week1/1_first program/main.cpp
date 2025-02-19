#include<iostream>
using namespace std;

int main(){
    cout<<"Namaste Dunia!!"<<flush;
    cout<<"This is Rohit\n";
    cout<<"This is Rohan"<<endl;
    cout<<"hii there";
    return 0;
}




/*

- return 0  -> "0" indicates successful execution of the program(Non-zero value indicates unsuccessful execution).
- {  }      -> brackets define the scope.
- iostream  -> header file contains the functionality related to input, output or std(standard) namespace.
- cout      -> to print something.
- int main  -> execution of program starts from int main.
- endl      -> new line.
- ;(semi-colon) -> termination of line.



Homework ;
1) Find alternative to endl
Ans: flush or \n   -> endl does the work of both (flushing and nextline).

2) What if I don't want to use "using namespace std;"
Ans: We have to use scope resolution operator. (std:cout).

3) what if I return -1 instead of return 0;
Ans: Indicates an error or failure causing the program to terminate

4) #include is called 'pre-processor directive', what is the meaning of it?
Ans: It's like copying and pasting the code from one file into another before the compiler starts processing the code.
*/

/*

**flush** ->  flush ensures that the output is sent to the console immediately, rather than being buffered and potentially delayed.
- Without flush:The output might be delayed, especially if the long-running task takes a significant amount of time. You might see the "Program finished"."    message before or after some loop iterations, or even both.

- With flush : The output will be more predictable. You'll see the "Starting the program..." message immediately, followed by the loop iterations as they occur, and then the "Program finished." message.
*/