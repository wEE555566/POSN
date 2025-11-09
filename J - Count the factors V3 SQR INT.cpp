#include <bits/stdc++.h>
using namespace std;
int p[1001];
vector<int> s;
int main(){
//ios::sync_with_stdio(0);cin.tie(0);
  int N=1001;
p[1]=1;
p[0]=1;
  for(int i=2;i<N;i++){
    if(p[i]==0){
      s.push_back(i);
      for(int j=2*i;j<N;j+=i){
        p[j]=1;
      }

    }
  }

int n;
while(cin>>n){
  if(n==0){
   break; 
  }
  cout<<n<<" : ";
  int k=0;
  for(auto i:s){
    if(i*i>n){
      break;
    }
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

