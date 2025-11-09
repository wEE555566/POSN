#include <bits/stdc++.h>
using namespace std;
int p[10005];
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  double b;
  int a;cin>>a>>b;
  for(int i=1;i<=a;i++){
    cin>>p[i];
  }
cout<<a-b+1<<"\n";
  for(int i=1;i<=a-b+1;i++){
    int ans=0;
    for(int j=i;j<=b+i-1;j++){
      ans=ans+p[j];
    }
    double avr=ans;
    avr=avr/b;
    cout<<fixed<<setprecision(6)<<avr<<" ";
  }
}
 


//cout<<fixed<<setprecision(6)<<a;
/*https://vjudge.net/contest/197330#problem/W
*/
/*
https://programming.in.th/tasks/codecube_202
https://programming.in.th/tasks/toi5_tug
https://programming.in.th/tasks/toi15_medal
*/
