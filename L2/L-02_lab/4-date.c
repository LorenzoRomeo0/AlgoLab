#include<stdio.h>

typedef struct{
    int giorno;
    int mese;
    int anno;
}data;

int main(){
    data date[100];
    data dataFinale;
    short ok = 1;
    int i = 0;
    printf("Inserisci le date nel formato dd/mm/yyyy\n");

    for(i = 0; ok == 1 && i < 100; i++){
        scanf("%d/%d/%d", &date[i].giorno, &date[i].mese, &date[i].anno);
        if(date[i].giorno == 0 && date[i].mese == 0 && date[i].anno == 0)
            ok = 0;
    }
    printf("\nInserisci la data finale nel formato dd/mm/yyyy\n");
    scanf("%d/%d/%d", &dataFinale.giorno, &dataFinale.mese, &dataFinale.anno);

    for(int j = 0; j<i-1; j++){
        if(dataFinale.anno > date[j].anno){
            if(dataFinale.mese > date[j].mese){
                if(dataFinale.giorno > date[j].giorno){
                    printf("%02d/%02d/%02d\n",date[j].giorno, date[j].mese, date[j].anno);
                }
            }
        }
    }
    return 0;
}