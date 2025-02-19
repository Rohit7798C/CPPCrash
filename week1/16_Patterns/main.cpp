#include<iostream>

using namespace std;

int main(){
    // for(int i=1;i<=3;i++){
    //     cout<<i;
    //     for(int j=1;j<=2;j++){
    //         cout<<j;
    //         // break;
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=3;i++){
        cout<<i<<" -> ";
        for(int j=1;j<=2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// Key points;
// 1) Outer loop ki har ek single value ke liye, inner loop pura chalta hai.
