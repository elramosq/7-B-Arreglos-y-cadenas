#include <iostream>
using namespace std;

int matriz[1005][1005];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
    
    for (int j = 0; j < n; j++) {
        
        for (int i = n - 1; i >= 0; i--) {
            cout << matriz[i][j] << " ";
        }
        
        cout << "\n";
    }

    return 0;
}
