#include <bits/stdc++.h>
using namespace std;
int x[1000];
int y[1000];
int main(){
//ios::sync_with_stdio(0);cin.tie(0);
  int n;cin>>n;
  for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
  }
  int ans=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        int a=x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i];
        a=abs(a);
        ans=max(ans,a);
      }
    }
  }
  double b=ans;
  b=b/2;
  cout<<fixed<<setprecision(3)<<b;
}





/*https://vjudge.net/contest/197330#problem/W
*/

