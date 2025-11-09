#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a[3] = {1, 0, 0};
    for(char ch : s) {
        if (ch == 'A') swap(a[0], a[1]);
        else if (ch == 'B') swap(a[1], a[2]);
        else if (ch == 'C') swap(a[0], a[2]);
    }
    for(int i=0;i<3;i++){
        if(a[i]==1) cout <<i+1;
    }
}
//https://programming.in.th/tasks/0010