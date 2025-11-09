#include <bits/stdc++.h>
using namespace std;

bool p[20010000];
vector<int>s;

int main(){
 int N=20010000;
  p[1]=1;
  p[0]=1;
for(int i=2;i<N;i++){
  if(p[i]==0){
    for(int j=2*i;j<N;j+=i){
      p[j]=1;
    }
  }
}
for(int i=5;i<N;i++){
  if(p[i]==0 &&p[i-2]==0){
    s.push_back(i-2);
  }
}

int n;
while(cin>>n){
  cout<<"("<<s[n-1]<<", "<<s[n-1]+2<<")\n";
}
  
}

