#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int linha_primaria = 1, linha_secundaria = 12, cont = 1;
    double numero, resultado;
    string teste;
    cin >> teste;
    while (linha_primaria <= 12){
        while (cont <= 12){
            cin >> numero;
            if (cont > linha_primaria && cont > linha_secundaria){
                resultado += numero;
            }
            cont++;
        }
        cont = 1;
        linha_secundaria --;
        linha_primaria ++;
    }
    if (teste[0] == 'M'){
        resultado = resultado / 30;
    }
    cout.precision(1);
    cout << fixed << resultado <<endl;
    return 0;
}
