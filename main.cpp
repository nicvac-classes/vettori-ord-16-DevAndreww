#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));   
    
    int n, i, j, t, r;
    string s;

    cout << "Quante macchine partecipano alla gara?" << endl;
    cin >> n;
    int R[n];
    string nomi[n];

    i = 0;
    while (i <= n - 1) {
        cout << "Qual'è la marca della tua automobile?" << endl;
        cin >> nomi[i];
        r = 1 + rand() % n;
        R[i] = r;
        j = 0;
        while (j < i) {
            if (r == R[j]) {
                r = r + 1;
                if (r > n) {
                    r = 1;
                }
                j = 0;
            } else {
                j = j + 1;
            }
        }
        R[i] = r;
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        j = 0;
        while (j <= i - 1) {
            if (R[j] > R[j + 1]) {
                t = R[j];
                R[j] = R[j + 1];
                R[j + 1] = t;
                s = nomi[j];
                nomi[j] = nomi[j + 1];
                nomi[j + 1] = s;
            }
            j = j + 1;
        }