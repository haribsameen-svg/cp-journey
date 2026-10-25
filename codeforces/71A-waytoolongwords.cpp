// Problem: Codeforces 71A - Way Too Long Words
// URL: https://codeforces.com/problemset/problem/71/A
// Idea: Strings in C++ behave similarly to arrays, allowing direct index access to individual characters. 
//       For words longer than 10 characters, we can extract the abbreviation by printing the first character 
//       Using `s[0]`, the length minus 2 using `s.length() - 2`, and the final character using `s[s.length() - 1]`.
//
// Mistake: Pay close attention to strict vs. non-strict inequalities in the problem statement. 
//          The condition specifies words *strictly greater* than 10 characters (> 10) are considered too long. 
//          Using a "greater than or equal to" (>= 10) condition will incorrectly alter words that are exactly 10 characters long.

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    
string w;
cin>>w;
int s = w.size();
if (s <= 10){
cout << w<<endl;
}
else{
    cout<<w[0]<< s -2 <<w[s-1]<<endl;
}

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t =1;
    cin>>t;
    while(t--){
        solve();
    }
 }