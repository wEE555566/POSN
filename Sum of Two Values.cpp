#include<bits/stdc++.h>
using namespace std;
 
map<int,int> mp;

int main(){
int a,b;cin>>a>>b;
for(int i=1;i<=a;i++){
  int n;cin>>n;
  
  if(mp[b-n]>0){
    cout<<mp[b-n]<<" "<<i;
    return 0;
  }
  mp[n]=i;
}
  cout<<"IMPOSSIBLE";  
}


/*
https://cses.fi/problemset/task/1640
https://vjudge.net/problem/UVA-10311
3 2 4  5  1 1   5  3
  3 5 9 14 15 16 21 24

2 3 5 7 11 13 17 19

-9
https://cses.fi/problemset/task/1646
https://vjudge.net/contest/197330#problem/M
*/
