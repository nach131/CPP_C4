#include <iostream>
using namespace std;

void modificarConPuntero(int* ptr) {
    *ptr *= 2;
}

int main() {
    int valor = 5;

    modificarConPuntero(&valor);
    cout << "Valor modificado: " << valor << endl;
    return 0;
}
