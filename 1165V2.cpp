#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long int a,g=0;
  set <int> s;
  cin>>n;
  for(int i=0; i<n; i++){
    cin >> a;
    g=__gcd(a,g);
  }
  for(long long int i=1 ; i*i<=g ; i++){
    if(g%i==0){
      s.insert(i);
      s.insert(g/i);
    }
  }
cout<<s.size();
}
