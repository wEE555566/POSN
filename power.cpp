#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  
 for(int i=0;i<n;i++){  
   int a;
   cin>>a;
   int l=a;
   for(int j=2;j*j<=a;j++){
     int b=0;
     l=a;
     while(l%j==0){
       l=l/j;
       b++;
     }
     if(l==1){
       cout<<b<<"\n";
       break;
     }
   }
   if(l>1){
     cout<<"NO"<<'\n';
   }
   
   
 }
}

