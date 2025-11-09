#include <iostream>
using namespace std;

char a[1000][1000];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                a[i][j] = '*'; // ขอบนอก
            }
            else if ((i >= 2 && i <= n - 3) && (j >= 2 && j <= n - 3)) {
                if (i == 2 || i == n - 3 || j == 2 || j == n - 3)
                    a[i][j] = '*'; // ขอบใน
                else
                    a[i][j] = '-'; // ช่องว่างในสุด
            }
            else {
                a[i][j] = '-'; // ช่องว่างระหว่างกรอบ
            }

        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
}