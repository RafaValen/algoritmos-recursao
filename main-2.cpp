#include <iostream>
using namespace std;

int multiplicacaoRecursiva(int a, int b){
    if(b == 0){
        return 0;
    }
    else{
        return a + multiplicacaoRecursiva(a, b - 1);
    }
}

int main(){
    int a,b;

    cout << "Digite dois numeros: ";
    cin >> a >> b;

    cout << "Multiplicacao recursiva: " << multiplicacaoRecursiva(a,b);

    return 0;
}
