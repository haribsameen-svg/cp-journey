// CF 4A Watermelon — https://codeforces.com/problemset/problem/4/A
// Idea: (We had to divide the input in even parts / beginner problem. )
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