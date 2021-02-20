#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>

using namespace std;

int main(){
   int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int *vetor = new int[tamanho];

    for(int i = 0; i < tamanho; i++){
        cout << "Insira um valor: ";
        cin >> vetor[i];
    }

    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}
