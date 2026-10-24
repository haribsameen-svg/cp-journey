// CF 4A Watermelon — https://codeforces.com/problemset/problem/231/A
// Idea: Just applied simple condition logic
// Mistake: No mistake
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