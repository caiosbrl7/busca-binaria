#include <iostream>
#include <vector>

using namespace std;

int BuscaBinaria(vector<int> v, int alvo){
    int menor_valor = v[0];
    int maior_valor = v.size() + 1;

    while(menor_valor <= maior_valor){
        
        int metade = menor_valor + (maior_valor - menor_valor) / 2;
        int valor_meio = v[metade];

        if(valor_meio < alvo) menor_valor = metade + 1;
        else if(valor_meio > alvo) maior_valor = metade - 1;
        else return metade; // Foi achado
    }

    return -1; // Não foi achado
}

int main(){
    vector<int> numeros(100);
    int valor = 73;

    for(int i = 0; i < numeros.size(); i++){
        numeros.push_back(i);
    }

    int indice = BuscaBinaria(numeros, valor);

    if(indice == -1){
        cout << valor << " não foi encontrado" << endl;
    }else{
        cout << "Valor encontrado no índice: " << indice << endl;
    }

    return 0;
}