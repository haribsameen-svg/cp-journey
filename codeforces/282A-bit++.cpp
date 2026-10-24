// CF 4A Watermelon — https://codeforces.com/problemset/problem/282/A
// Idea: Just applied simple condition logic  
// Mistake: No mistake
#include<bits/stdc++.h>
using namespace std;
void solve(){

int n;
cin >> n;
int x = 0;
string inc;
for(int i = 1; i<=n; i++){
    cin >> inc;
if(inc == "++X"){
    ++x;
}
if(inc == "X++"){
    x++;
}
if(inc == "--X"){
    --x;
}
if(inc == "X--"){
    x--;
}
}
cout<<x;
}

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);

int t = 1;
while(t--){
    solve();
}


return 0;
}