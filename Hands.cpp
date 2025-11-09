#include <bits/stdc++.h>
using namespace std;
int p[2000];
int main(){
ios::sync_with_stdio(0);cin.tie(0);

  int n;cin>>n;
  int k;
  cin>>k;  
  for(int i=0;i<n;i++){
    cin>>p[i];
  }
  sort(p+0,p+n,greater<int>());
  int a=0;
  for(int i=0;i<n;i+=k){
    a=p[i]+a;
  }
  cout<<a<<"\n";
}





/*https://vjudge.net/contest/197330#problem/W
*/

