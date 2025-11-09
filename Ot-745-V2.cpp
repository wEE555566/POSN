#include <bits/stdc++.h>
using namespace std;
int mp[1000000];
int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  int n;cin>>n;
  int mx=-2000000000;
  for(int i=1;i<=n;i++){
    int a;cin>>a;
    mp[a]++;
    mx=max(mx,a);
  }
  cout<<mp[mx];
}

/*
https://cses.fi/problemset/list/
cout<<fixed<<setprecision(6)<<a;
https://vjudge.net/contest/197330#problem/W
https://programming.in.th/tasks/codecube_202
https://programming.in.th/tasks/toi5_tug
https://programming.in.th/tasks/toi15_medal
cout<<fixed<<setprecision(6)<<a;
https://vjudge.net/contest/197330#problem/W
https://programming.in.th/tasks/codecube_202
https://programming.in.th/tasks/toi5_tug
https://programming.in.th/tasks/toi15_medal
v[1]|1
v[2]|2 3 5 7 11 13 17 19 23
v[3]|4 9 25
v[4]|6 8 10 14 15  21 22
5|16 18
6|12 20
7|
8|24
*/
