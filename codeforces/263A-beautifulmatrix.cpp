// Problem: Codeforces 263A - Beautiful Matrix
// URL: https://codeforces.com/problemset/problem/263/A
// Idea: Read the 5x5 matrix and save the row and column where the 1 is.
//       The 1 must reach the centre (row 2, column 2), and each swap moves it one step.
//       So the answer is (moves needed for the row) + (moves needed for the column):
//       index 0 or 4 -> 2 moves, index 1 or 3 -> 1 move, index 2 -> 0 moves.
//
// Mistake: (write where you got stuck the first time)
// Learned: vector<vector<int>> for a 2D matrix; rows and columns can be counted separately.
#include<bits/stdc++.h>
using namespace std;
void solve(){

vector<vector<int>> p(5, vector<int>(5)); // 5x5 Matrix
int row_index = 0;
int col_index = 0;

for(int i = 0; i < 5; i++){        
   for(int j = 0; j < 5; j++){     
    
    cin >> p[i][j];              

    if(p[i][j] == 1){              
         row_index = i;           
         col_index = j;           
    }
   } 
}

int count1 = 0, count2 = 0;

if(col_index == 0 || col_index == 4){
    count2 = 2;
}
else if(col_index == 1 || col_index == 3){
    count2 = 1;
}
if(row_index == 0 || row_index == 4){
    count1 = 2;
}
else if(row_index == 1 || row_index == 3){
    count1 = 1;
}

cout<<count1+count2;
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