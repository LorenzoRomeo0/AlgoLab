#include <stdio.h>

#define LENGTH 100

int main( void) {

    int a[LENGTH], i, lun;

    for( i = 0; i < LENGTH; i++ ) {
        scanf( "%d", &a[i] );
        if ( a[i] == 0 )
            break;
    }

    lun = i;

    for( i = lun -1; i > 0; i-- )
        printf( "%d ", a[i] );

    printf( "%d\n", a[0] );
    return 0;
}
 /*
    Il programma chiede di inserire una sequenza di numeri (massimo 100), terminata da uno 0.
    Procede poi con lo stampare l'array in cui è stata memorizzata la sequenza fino all'ultimo numero
    inserito.


 */