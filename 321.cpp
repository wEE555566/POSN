
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int m = n*2-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==m/2+1 || j==1) cout << "#";
            else{cout << " ";}
        }
        cout << " ";
        for(int j=1;j<=n;j++){
            if(i==1 || i==m || j==1 || j==n) cout << "#";
            else{cout << " ";}
        }
        cout << " ";
        for(int j=1;j<=n;j++){
            if(i==1 || i==m/2+1 || j==1 || (i<=m/2 && j==n)) cout << "#";
            else if(i >= m/2+1 && i-n+1==j) cout << "#";
            else{cout << " ";}
        }
        cout << " ";
        for(int j=1;j<=n;j++){
                if(j==1 || (i==1 && j!=n) || (i==m && j!=n) || (i!=1 && i!= m && j==n)) cout << "#";
                else{cout << " ";}
        }
        cout << "\n";
    }
    return 0;
}
