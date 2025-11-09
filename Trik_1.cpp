#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int k=1;
    for(char ch : s) {
        if (ch == 'A' && k==1) k+=1;
        else if (ch == 'A' && k==2) k-=1;
        else if (ch == 'B' && k==2) k+=1;
        else if (ch == 'B' && k==3) k-=1;
        else if (ch == 'C' && k==3) k-=2;
        else if (ch == 'C' && k==1) k+=2;
    }
    cout << k;
}
//https://programming.in.th/tasks/0010