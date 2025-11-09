#include <bits/stdc++.h>
using namespace std;
long long int p[100005];
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n,q;cin>>n>>q;
    for(int i=1;i<=n;i++){
      cin>>p[i];
      p[i]=p[i]+p[i-1];
    }
    while(q--){
      int a,b;cin>>a>>b;
      cout<<p[b+1]-p[a-1+1]<<" \n";
    } 
    cout<<"\n";
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
