#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> a;  
    for (int i = 0; i < 10; i++) {
        int b;
        cin >> b;
        a.insert(b % 42); 
    }
    cout << a.size(); 
}

//https://programming.in.th/tasks/0011