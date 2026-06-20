#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        char palabra[100]; 
        cin >> palabra;

        int longitud = strlen(palabra);
        bool esPalindromo = true;

      
        for (int j = 0; j < longitud / 2; j++) {
            if (palabra[j] != palabra[longitud - 1 - j]) {
                esPalindromo = false;
                break;
            }
        }

        if (esPalindromo)
            cout << "P" << endl;
        else
            cout << "NP" << endl;
    }

    return 0;
}
