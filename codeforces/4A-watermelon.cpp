// Problem: Codeforces 4A - Watermelon
// URL: https://codeforces.com/problemset/problem/4/A
// Idea: Evaluated the condition for dividing a weight into two positive even parts. 
//       Any even number strictly greater than 2 can be split into two even integers. 
//       The logic verifies divisibility by 2 using the modulo operator (`n % 2 == 0`) 
//       and ensures the value is greater than 2 (`n > 2`) to handle the edge case.
//
// Mistake: None. The implementation properly identifies the edge case where `n = 2`, 
//          which cannot be split into two positive even weights (as 1 + 1 are odd numbers).
 
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

int n;
cin >> n;

if(n %2 == 0 && n>2){
    cout<<"YES";
    
}
else{
    cout<<"NO";
}

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t =1;
    while(t--){
        solve();
    }
 }