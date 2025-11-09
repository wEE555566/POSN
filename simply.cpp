#include <bits/stdc++.h>
using namespace std;

int p[1000001];


int main(){
//ios::sync_with_stdio(0);cin.tie(0);
p[1]=1;
p[0]=1;
int N=1000001;
for(int i=2;i*i<N;i++){
  if(p[i]==0){
    for(int j=2*i;j<N;j+=i){
      p[j]=1;
    }
  }
}
int n;
while(cin>>n){
string s=to_string(n);
reverse(s.begin(),s.end());
int a=stoi(s);
  if(p[n]==1){
    cout<<n<<" is not prime.\n";
  }
  else{
  if(p[a]==0 && a!=n){
    cout<<n<<" is emirp.\n";
  }
  else{
    cout<<n<<" is prime.\n";
  }
  }
}
}
/*https://vjudge.net/contest/197330#problem/W
*/


