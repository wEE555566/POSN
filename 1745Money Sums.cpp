#include <bits/stdc++.h> 
using namespace std;
int p[100001];
int a[101];
vector <int> s;
//https://cses.fi/problemset/task/1745

int main(){
  p[0]=1;
  int n; scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  for(int j=0;j<n;j++){
    for(int i=100000;i>=1;i--){
      if(p[i-a[j]]==1) p[i]=1;
      
    }
  }
  for(int i=1;i<=100000;i++){
    if(p[i]==1) s.push_back(i);
  }
  printf("%d\n", s.size());
  for(auto x:s){
    printf("%d ", x);
  }
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
