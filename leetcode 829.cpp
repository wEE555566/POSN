#include <bits/stdc++.h>
using namespace std;
int p[10005];
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int a,b;cin>>a;
  for(int i=1;i<=a;i++){
    cin>>p[i];
    p[i]=p[i]+p[i-1];
  }
  cout<<a-b+1<<"\n";
  for(int i=b;i<=a;i++){
    int ans=p[i]-p[i-b];                                                        
    double avr=ans;
    avr=avr/b;
    cout<<fixed<<setprecision(6)<<avr<<" ";
  }
}
/*
  10 5
  1 2 3 4 5 6 7 8 9 10
    
    6
    3.000000 4.000000 5.000000
    6.000000 7.000000 8.000000

  0 1 2 3  4  5  6  7  8  9 10  
  0 1 3 6 10 15 21 28 36 45 55   prefix sum

 i=5  a[5]-a[0] = 15-0=15
 i=6  a[6]-a[1] = 21-1=20

      a[i]-a[i-m]
      
      
      
 10 2
1 2 3 4 5 6 7 8 9 10

10 5
1 2 3 4 5 6 7 8 9 10
     
*/
  
  
  



