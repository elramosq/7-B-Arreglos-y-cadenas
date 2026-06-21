#include <iostream>
using namespace std;

int main() {
    int P, n;

    cin >> P >> n;

    int conteo[105] = {0};

    for (int i = 0; i < n; i++) {
        int voto;
        cin >> voto;

        conteo[voto]++;
    }

    for (int i = 1; i <= P; i++) {
        cout << i << "-" << conteo[i] << endl;
    }

    return 0;
}
