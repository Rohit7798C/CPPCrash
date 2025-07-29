#include<iostream>

using namespace std;

int main(){
    class Solution {
        public:
        // This function returns the count of palindromic substring
        // Using i and j as center and expanding around it in every iteration, if possible.
            int expandAroundCenter(string str,int i,int j){
                int count = 0;
                while(i>=0 && str[i] == str[j] && j<str.length()){
                    count++;
                    i--;
                    j++;
                }
                return count;
            }
            int countSubstrings(string s) {
                int totalCount = 0;
                for(int center = 0;center<s.length();center++){
                    // odd
                    int i=center;
                    int j=center;
                    int oddPalSubStringCount = expandAroundCenter(s,i,j);
                    // even
                    i = center;
                    j = center+1;
                    int evenPalSubStringCount = expandAroundCenter(s,i,j);
                    totalCount = totalCount + oddPalSubStringCount + evenPalSubStringCount;
                }
                return totalCount;
            }
        };
        return 0;
}
    
