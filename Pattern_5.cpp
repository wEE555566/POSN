#include<iostream>
using namespace std;
 char a[3500][3500];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
     int n;
    cin >> n;
    for(int i = 0; i <n; i++) {
        for(int j = 0; j < n; j++) {
            if(j+i>=n-1 && (i+j)%2!=0){
            a[i][j] = '*';
            cout << a[i][j];
            }
            else if(j+i>=n-1 && (i+j)%2==0){
            a[i][j] = '^';
            cout << a[i][j];
            }
            else{
            a[i][j] = '-';
            cout << a[i][j];
            }
    }
    cout<<"\n";
    }
}
