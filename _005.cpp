#include <bits/stdc++.h>
using namespace std;
int main(){
long long int a,b,l=1;
cin>>a;
  for(int i=1;i<=a;i++){
    cin>>b;
    l=l*b/__gcd(l,b);
    
  }
  cout<<l;

}
