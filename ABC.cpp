#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);  
    string s;
    cin >> s; 
    for (char ch : s) {
        if (ch == 'A') cout << a[0] << " ";
        else if (ch == 'B') cout << a[1] << " ";
        else if (ch == 'C') cout << a[2] << " ";
    }
}

//https://programming.in.th/tasks/0009