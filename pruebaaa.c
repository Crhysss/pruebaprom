#include <stdio.h>
// este programa indica cuantos numeros se leyeron para que la suma de los negativos de mas de 1200
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n=1, sumne=0, i=0; //sumne es elencargado de ver los numeros negativos, mas bien para sumarlos
    while (n!=0) { // esta es la estructura while para ingresar cualquier numero entero hasta que se marque 0 
        printf("Ingrese un numero entero para realizar la suma, ingrese 0 para terminar \n");
        scanf("%d", &n);
        i++;
        if (n<0 && abs(sumne) <= 1200) {
            sumne+=n;
            //si la condicion se cumple entonces los negativos suman y se saca su valor absoluto
        }
    }
    printf("Se leyeron %d numero/s negativos con valor absoluto a 1200 ", i-1);
    return 0;
}
