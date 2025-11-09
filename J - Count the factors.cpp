#include <bits/stdc++.h>
using namespace std;

int main(){
//ios::sync_with_stdio(0);cin.tie(0);
  int n;

  while(cin>>n){
    if(n==0){
      return 0;
    }
    cout<<n<<" : ";
    int k=0;
    for(int i=2;i*i<=n;i++){
      if(n%i==0){
        k++;
          while(n%i==0){
          n=n/i;
          }
      }
    }
    if(n>1){
      k++;
    }
    cout<<k<<"\n";
  }
}


/*https://vjudge.net/contest/197330#problem/W
*/


