
#include <bits/stdc++.h>
using namespace std;
int p[1005];
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
  int n; cin>>n;
  while(n--){
    int a; cin>>a;
    int ans=1;
    for(auto x:s){
      if(x*x>a){
        break;
      }
      int k=1;
      if(a%x==0){
        while(a%x==0){
          a=a/x;
          k++;
        }
      }
      ans=ans*k;
    }
          if(a>1){
      	ans=ans*2;
	  }
    cout<<ans<<"\n";
  }
}





/*https://vjudge.net/contest/197330#problem/W
*/
/*
https://programming.in.th/tasks/codecube_202
https://programming.in.th/tasks/toi5_tug
https://programming.in.th/tasks/toi15_medal
*/
