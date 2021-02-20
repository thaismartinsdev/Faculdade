#include <iostream>

using namespace std;

int main(){
    int matriz[2][2], i, j, aux1, aux2;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << "Digite um valor: ";
            cin >> matriz[i][j];
        }
    }

    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}
