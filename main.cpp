#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    ArregloDinamico<string> arreglo;

    arreglo.insertar_inicio("Angela");
    arreglo.insertar_final("Jose");
    arreglo.insertar_inicio("Oscar");
    arreglo.insertar_final("Ulises");
    

    arreglo.insertar("Gael", 2);

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);

    for(size_t i=0; i<arreglo.size(); i++){
        cout << arreglo[i] << endl;
    }

    return 0;
}