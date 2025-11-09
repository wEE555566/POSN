  #include<bits/stdc++.h>
  using namespace std;
  bool p[100000000];
   int main(){
    int N=100000000;
    p[1]=1;
    p[0]=1;
    for(int i=2;i<N;i++){
      if(p[i]==0){
        for(int j=2*i;j<N;j+=i){
          p[j]=1;
        }
      }
    }
    int n;
    while(cin>>n){
      if(n%2==0){
        int k=0;
        for(int i=n/2-1;i>=2;i--){ 
          if(p[i]==0 && p[n-i]==0){
            cout<<n<<" is the sum of "<<i<<" and "<<n-i<<".\n";          
            k=1;
            break;
          }
        }
        if(k==0){
          cout<<n<<" is not the sum of two primes!\n";
        }
      }
      else{
        if(n>2 && p[n-2]==0){
        cout<<n<<" is the sum of "<<2<<" and "<<n-2<<".\n"; 
        }
        else{
        cout<<n<<" is not the sum of two primes!\n";
        }
      }

    }
}
/*
https://vjudge.net/problem/UVA-10311
3 2 4  5  1 1   5  3
  3 5 9 14 15 16 21 24

2 3 5 7 11 13 17 19

-9


https://cses.fi/problemset/task/1646
https://vjudge.net/contest/197330#problem/M
*/
