#include<bits/stdc++.h>
using namespace std;



int main() {
 int n,x=0;
  long long int a,g=0;
  cin>>n;
	  for (int i=1;i<=n;i++){
	    cin>>a;
	    g=__gcd(g,a);
	  }
    for(int i=1;i<=sqrt(g);i++){
      if(g%i==0){
        if(i==g/i){
          x=x+1;
        }
        else{
          x=x+2;
        }
      }
    }
  cout<<x;

}

//https://programming.in.th/tasks/1165
//https://programming.in.th/tasks/1099
l=a*d/__gcd(a,d);
