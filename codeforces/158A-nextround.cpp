// Problem: Codeforces - Next Round  
// URL: https://codeforces.com/problemset/problem/158/A
// Idea: Create a vector to store the user input. Locate the value of the k-th place finisher (using 0-based indexing: k-1). 
//       Then, iterate through the vector to check if each score meets the condition (greater than or equal to the k-th score AND strictly greater than 0). 
//       Increment a counter whenever a valid participant is found.
//
// Mistake: C++ vectors use 0-based indexing. When looping through the vector elements, the loop must run from 0 to n-1 (i.e., `j = 0; j < n`). 
//          Starting from 1 or using `<=` will cause an "Out of Bounds" assertion error (core dumped).

#include<bits/stdc++.h>
using namespace std;
void solve(){

int n,k,count = 0;
cin >> n >> k;
int s,i=1;

vector<int> p;
for(int i = 1; i<=n ; i++){
    cin >> s;
    p.push_back(s);
}
int ele = p[k-1];

for (int j = 0; j<n ; j++){
    if(p[j]>=ele && p[j]>0){
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


return 0;
}