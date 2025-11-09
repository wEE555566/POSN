#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
for(int i=0;i<n;i++){
  int s;
  cin>>s;
  int k=0;
  cout<<"Case #"<<i+1<<" : \n";
  for(int a=1;a<s/3;a++){   
    int mx=max((s-2*a)/2,a);
    for(int b=mx;b<=(s-a)/2;b++){ 
      int c=s-a-b;
      if(c<=b){
        break;
      }
      if(a*a+b*b==c*c){
        cout<<a<<" "<<b<<" "<<c<<"\n";
        k++;
      }
    }
  }
  if(k==0){
    cout<<"-1\n";
  }
}

}

