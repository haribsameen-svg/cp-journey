// Problem: Codeforces 231A - Team
// URL: https://codeforces.com/problemset/problem/231/A
// Idea: Implemented simple conditional logic by summing up the certainties (0 or 1) of the three friends 
//       for each problem. If the total sum for a problem is greater than or equal to 2, it means at least 
//       two friends are sure about the solution, so the problem-implemented counter is incremented.
//
// Mistake: None. The logic was clean and straightforward, passing all system test cases on the first attempt.

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
int n =0;
cin>>n;
int a,b,c,count = 0;
for(int i = 1; i<=n; i++){
    cin >>a>>b>>c;
    if(((a==1 && c==1)) || ((b==1 && c==1)) || ((b==1 && a==1)) ||(a==1 && b==1 && c ==1) ){
    count++;
    }
}
cout<<count;
}

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t = 1;
while(t--){
    solve();
}
}