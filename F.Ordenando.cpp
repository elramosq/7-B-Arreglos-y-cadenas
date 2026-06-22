#include <iostream>
#include <string>

using namespace std;

int main() {
    string linea;
    
    getline(cin, linea); 

    string letras = "";

    for (int i = 0; i < linea.length(); i++) {
        if (linea[i] >= 'a' && linea[i] <= 'z') {
            letras += linea[i];
        }
    }

    int n = letras.length();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            
            if (letras[j] > letras[j + 1]) {
                
                char temporal = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = temporal;
            }
        }
    }

    int k = 0; 
    for (int i = 0; i < linea.length(); i++) {
        
        if (linea[i] >= 'a' && linea[i] <= 'z') {
            cout << letras[k];
            k++;
        } else {
            cout << linea[i];
        }
    }

    return 0;
}

