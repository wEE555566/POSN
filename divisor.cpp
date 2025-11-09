/*
https://programming.in.th/tasks/codecube_202
https://programming.in.th/tasks/toi5_tug
https://programming.in.th/tasks/toi15_medal
*/

#include <bits/stdc++.h>
using namespace std;
int p[1005];
int dv[1000005];
vector<int> s;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
 p[0]=1;
 p[1]=1;
  int N=1005;
  for(int i=2;i<N;i++){
    if(p[i]==0){
      s.push_back(i);
      for(int j=2*i;j<N;j+=i){
       p[j]=1;
     }
    }
  }
  for(int i=1;i<=1000000;i++){
    int n=i;
    int ans=1;
    for(auto a:s){
      if(a*a>n){
        break;
      }
      int k=1;
      if(n%a==0){
        while(n%a==0){
          n=n/a;
          k++;
        }
      }
      ans=ans*k;
    }
    if(n>1){
      ans=ans*2;
    }
    dv[i]=ans;
  }
  int b;cin>>b;
  while(b--){
    int x,y,d;
    int c=0;
    cin>>x>>y>>d;
    for(int i=x;i<=y;i++){
      if(dv[i]==d){
        c++;
      }
    }
    cout<<c<<"\n";
  }
  
}





/*https://vjudge.net/contest/197330#problem/W
*/

