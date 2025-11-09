#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    long long int x;cin>>x;
    long long int sum=1;
    while(sum*2<=x){
      sum=sum*2;
    }
    long long int l=x-sum;
    cout<<2*l+1<<"\n";
  }
}

























//https://programming.in.th/tasks/tumso16_count

