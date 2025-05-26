//Coin Change
#include<bits/stdc++.h>

using namespace std;

int coinChange(vector<int>coins,int amount){
    int n = coins.size();
    if(amount == 0){
        return 0;
    }
    int minCoinsAns = INT_MAX;

    for(int i=0;i<n;i++){
        int coin = coins[i];

        if(coin <= amount){
            int recursionAns = coinChange(coins,amount-coin);

            if(recursionAns != INT_MAX){
                int coinsUsed = 1 + recursionAns;
                minCoinsAns = min(coinsUsed, minCoinsAns);
            }
        }
    }
    return minCoinsAns;
}

int main(){
    vector<int>coins;
    int n;
    cout<<"enter the number of coins : ";
    cin>>n;
    cout<<"enter the coins : "<<endl;
    for(int i=0;i<n;i++){
        int coinValue;
        cin>>coinValue;
        coins.push_back(coinValue);
    }
    int amount;
    cout<<"Enter the amount : ";
    cin>>amount;
    int ans = coinChange(coins,amount);
    if(ans == INT_MAX){
        cout<<"-1";
    }
    else{
        cout<<ans<<endl;;
    }
    return 0;
}