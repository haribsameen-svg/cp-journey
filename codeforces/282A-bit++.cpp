// Problem: Codeforces 282A - Bit++
// URL: https://codeforces.com
// Idea: Optimized the simulation by inspecting only the middle character of each operation string. 
//       Whether the operation is prefix or postfix (e.g., "++X" or "X++"), the character at index 1 
//       is always '+' for increments and '-' for decrements. Checking `inc[1] == '+'` eliminates 
//       the need for multiple full-string comparisons, making the conditional logic cleaner and faster.
//
// Mistake: None. The implementation takes advantage of string indexing to simplify conditional routing.


#include<bits/stdc++.h>
using namespace std;
void solve(){

int n;
cin >> n;
int x = 0;
string inc;
for(int i = 1; i <= n; i++){
    cin >> inc;
    if(inc[1] == '+') {
        x++;
    } else {
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