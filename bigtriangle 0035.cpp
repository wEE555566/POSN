#include <bits/stdc++.h>
using namespace std;


int x[100];
int y[100];
int main(){
  int n;
  cin>>n;
for(int i=0;i<n;i++){
  cin>>x[i]>>y[i];
}
int mx=0;
for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
    for(int k=j+1;k<n;k++){
      int a=x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i];
      a=abs(a);
      mx=max(mx,a);
    }
  }
} 
double ans=mx;
  ans=ans/2;
  cout<<fixed<<setprecision(3)<<ans;

  
 
 
}


