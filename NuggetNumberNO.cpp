#include <stdio.h> 
int p[1000];
int a[3];

int main(){
  int n; scanf("%d", &n);
  p[0]=1;
  a[0]=6;
  a[1]=9;
  a[2]=20;
  for(int j=0;j<3;j++){
    for(int i=n;i>=1;i--){
      if(i-a[j]>=0 && p[i-a[j]]==1) p[i]=1;
    }
  }
  if(n<6) printf("no");
  else{
    for(int i=6;i<=n;i++){
      if(p[i]==1) printf("%d\n", i);
    }
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
