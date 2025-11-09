#include <bits/stdc++.h>
using namespace std;


int main(){
ios::sync_with_stdio(0);cin.tie(0);
int a; cin>>a;
for(int l=0;l<a;l++){
 int n; cin>>n;
 cout<<"Case "<<l<<":";
 for(int i=2;i*i<=n;i++){
   if(n%i==0){
     cout<<" "<<i;
    while(n%i==0){
      n=n/i;
   }
   }
 }
  if(n>1){
    cout<<" "<<n;
  }
  cout<<"\n";
}

}
/*https://vjudge.net/contest/197330#problem/W
*/


