#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
   int n,m;
    int a[100][100], b[100][100], c[100][100];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>> a[i][j];
        }
    }
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>> b[i][j];
        }
    }
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<< " ";
        }
            cout<<"\n";
    }
}

//https://programming.in.th/tasks/0003