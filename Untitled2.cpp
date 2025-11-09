/*Lang : C++*/
#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  int mx=-2000000001,mn=2000000001;
 int a[1001];
  cin>>n;
  
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>mx){
      mx=a[i];
    }
    if(a[i]<mn){
      mn=a[i];
    }
    
  }
  cout<<mn<<" "<<mx;
}
