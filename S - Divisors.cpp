#include <bits/stdc++.h>
using namespace std;
int p[1005];
vector<int> s;
int main(){
int N=1005;
p[0]=1;
p[1]=1;

  for(int i=2;i<N;i++){
    if(p[i]==0){
      s.push_back(i);
      for(int j=2*i;j<N;j+=i){
        p[j]=1;
      }
    }
  }
  int a; cin>>a;
  while(a--){
   int b,c,d;cin>>b>>c>>d;
    int D=0;
    for(int i=b;i<=c;i++){
      int n=i;
      int ans=1;
      for(auto x:s){
        if(x*x>n){
          break;
        }
        int k=1;
        if(n%x==0){
          while(n%x==0){
            n=n/x;
            k++;
          }
        }
      }
      ans=ans*k;
      if(n>1){
        ans=ans*2;
      }
      if(ans==d){
        D++;
      }
      cout<<D<<"\n";
    }
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
