// CF 4A Watermelon — https://codeforces.com/problemset/problem/4/A
// Idea:I learned that string also behaves like array with different output for different functions. 
// Mistake: Remember the condition is less than or equal to, words greater than 10 are too long words. 
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