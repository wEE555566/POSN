#include<bits/stdc++.h>
using namespace std;



int main() {
int a,b;
  cin>>a>>b;
int g=__gcd(a,b);
for(int i=1;i<=g;i++){
  if(g%i==0){
    cout<<i<<" "<<a/i<<" "<<b/i<<"\n";
  }
}

}

//https://programming.in.th/tasks/1165
//https://programming.in.th/tasks/1099

