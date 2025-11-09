#include <bits/stdc++.h>
using namespace std;

int main(){
double a;
int b; cin>>b;
  
for(int i=1;i<=b;i++){
  double ans=0;
  cin>>a;
  if(a<=180000){
    ans=0;
  }
  else if(180000<a && a<=480000){
    ans =0.1*(a-180000);
  }
  else if(480000<a && a<=880000){
    ans=30000+0.15*(a-480000);
  }
  else if(880000<a && a<=1180000){
    ans=90000+0.2*(a-880000);
  }
  else{
    ans=150000+0.25*(a-1180000);
  }
  if(ans>0 && ans<2000){
    ans=2000;
  }
  int tax=ceil(ans); 
  cout<<"Case "<<i<<": "<<tax<<"\n";
}

}
/*https://vjudge.net/problem/UVA-12342*/

