#include <bits/stdc++.h>
using namespace std;

int main(){
  int x=0; int y=0;
  int n;
  cin>>n;
  char N='E';
  for(int i=0;i<n;i++){
  string ct;
  cin>>ct;
  int v;
  cin>>v;
  if(     ct=="FD" && N=='N') y+=v;
  else if(ct=="FD" && N=='S') y-=v;
  else if(ct=="FD" && N=='E') x+=v;
  else if(ct=="FD" && N=='W') x-=v;
  else if(ct=="RT" && N=='N') x+=v, N='E';
  else if(ct=="RT" && N=='S') x-=v, N='W';
  else if(ct=="RT" && N=='E') y-=v, N='S';
  else if(ct=="RT" && N=='W') y+=v, N='N';
  else if(ct=="LT" && N=='N') x-=v, N='W';
  else if(ct=="LT" && N=='S') x+=v, N='E';
  else if(ct=="LT" && N=='E') y+=v, N='N';
  else if(ct=="LT" && N=='W') y-=v, N='S';
  else if(ct=="BW" && N=='N') y-=v, N='S';
  else if(ct=="BW" && N=='S') y+=v, N='N';
  else if(ct=="BW" && N=='E') x+=v, N='W';
  else if(ct=="BW" && N=='W') x-=v, N='E';

    if(x>=50000 || y>=50000 || x<=-50000 || y<=-50000){
      cout<<"DEAD";
      return 0;
    }
  }
  cout<<x<<" "<<y<<'\n'<<N;
}





/*
https://cses.fi/problemset/task/1620
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
