#include<iostream>
using namespace std;
int main() {
    int n, max = -2000000000, min = 2000000000;
    int a[1001];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }
    cout << min << "\n" << max;
}


//https://programming.in.th/tasks/0002