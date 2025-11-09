  #include<bits/stdc++.h>
  using namespace std;
  long long int p[200005];
  int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a,b; cin>>a>>b;
    for(int i=1;i<=a;i++){
      cin>>p[i];
      p[i]=p[i]+p[i-1];
    }
    
    while(b--){
      int c,d;cin>>c>>d;
      cout<<p[d]-p[c-1]<<"\n";  
    }
}


