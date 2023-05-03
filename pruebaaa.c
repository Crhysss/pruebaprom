#include <stdio.h>
// este programa indica cuantos numeros se leyeron para que la suma de los negativos de mas de 1200

int main (){
    int n, sumne=0, i=0;
    while (n!=0){
        printf("Ingrese un numero entero para realizar la suma\n");
        scanf("%d", &n);
        i+=1;
        if (n<0 && abs(sumne) <= 1200){
        
            sumne+=n;
            printf("Se leyeron %d numero/s negativos con valor absoluto a 1200 ", i);
        }
        
    }
    return 0;
}