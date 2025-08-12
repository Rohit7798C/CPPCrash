#include<bits/stdc++.h>

using namespace std;

//2's compliment = 1's compliment + 1

vector<int>findCompliment(vector<int>binary){
    int n = binary.size();

    // vector<int>oneCompliment(n);
    // //flipping the bits
    // for(int i = 0;i<n;i++){
    //     oneCompliment[i] = binary[i] == 0 ? 1 : 0;
    // }
    // vector<int>twoCompliment = oneCompliment;
    
    vector<int>twosComp(n + 1, 0);

    //step 1. Flip the bits
    for(int i = 0;i<n+1;i++){
        twosComp[i] = binary[i] == 0 ? 1 : 0;
    }
    //Now I have flipped the bits in my twosComp array

    //step2. add 1
    int carry = 1;
    for(int i = n-1; i>=0;i--){
        int sum = twosComp[i] + carry;
        twosComp[i] = sum%2;
        carry = sum / 2;
    }
    if(carry){
        twosComp[0] = carry;
    }
    return twosComp;
}

int main(){
    vector<int>binary = {0,0,0,0};
    vector<int>twosComp = findCompliment(binary);
    for(int i = 0;i<twosComp.size();i++){
        cout<<twosComp[i]<<" ";
    }
    return 0;
}


// #include<bits/stdc++.h>

// using namespace std;

// vector<int>twoCompliment(vector<int>binary){
//     int n = binary.size();
//     vector<int>oneCompliment(n);
//     //flipping the bits
//     for(int i = 0;i<n;i++){
//         oneCompliment[i] = binary[i] == 0 ? 1 : 0;
//     }
//     vector<int>twoCompliment = oneCompliment;
//     int carry = 1;
//     for(int i = n-1;i>=0;i--){
//         int sum = twoCompliment[i] + carry;
//         twoCompliment[i] = sum%2;
//         carry = sum/2;
//     }
//     if(carry){
//         twoCompliment[0] = 1;
//     }
//     return twoCompliment;
// }

// int main(){
//     vector<int>binary = {1,1,1,0,1,0,1,1,0};
//     vector<int>ans = twoCompliment(binary);
//     for(int i = 0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }