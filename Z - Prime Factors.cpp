#include <bits/stdc++.h>
using namespace std;
//int p[33000];

int main(){
//ios::sync_with_stdio(0);cin.tie(0);
  int n;
  while(cin>>n){
    int k=0;
    cout<<n<<" =";
    if(n<0){
      cout<<" -1";
      k++;
    }
    n=abs(n);
    for(int i=2;i*i<=n;i++){
      if(n%i==0){
        while(n%i==0){
          n=n/i;
          if(k>0) cout<<" x";
           cout<<" "<<i;
          k++;
        }
      }
    }
    if(n>1){
      if(k>0) cout<<" x";
       cout<<" "<<n;
      k++;
    }
    cout<<"\n";
  }
}





/*https://vjudge.net/contest/197330#problem/W
*/

