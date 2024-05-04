#include <stdio.h>
#include <stdlib.h>

int main(){

    int celesi_1=0;
    int celesi_2=0;
    int celesi_3=0;

    char porta_1='a';
    char porta_2='b';

    int shuma=0;
    int counter = 0;

    int n;
    printf("Vendos numrin e hedhjeve n: ");
    scanf(" %d",&n);

    printf("Nr i hedhjeve eshte: %d \n",n);

    char porta;

    int i=0;
    while(i<n){

    /*Ketu me poshte mund te behej kontroll edhe per shkronjen e madhe A dhe B ose shkronjat e tjera qe
    mund te vendosi perdoruesi por po e marr te mireqene qe eshte vendosur shkronja e duhur.*/

        printf("Vendos a per porten hyrese A dhe b per porten B:");
        scanf(" %c",&porta);

		//hyrja nga porta A
        if(porta == porta_1){
            if(celesi_1==0){
                shuma=shuma+0;
                celesi_1=1;
            } else if(celesi_1==1 && celesi_2==0){
                shuma=shuma+0;
                celesi_1=0;
                counter++;
                if(counter%2==0){
                celesi_2=1;
                }
            } else if(celesi_1==1 && celesi_2==1){
              shuma=shuma+1;
              celesi_1=0;
                counter++;
                if(counter%2==0){
                celesi_2=0;
                }
            }
        printf("Numri i pikeve te mbledhura eshte %d . \n", shuma);

        }

		//hyrja nga porta B
         if(porta == porta_2){
            if(celesi_3==1){
              shuma=shuma+1;
              celesi_3=0;
            } else if(celesi_3==0 && celesi_2==0){
                shuma=shuma+0;
                celesi_3=1;
                counter++;
                if(counter%2==0){
                celesi_2=1;
                }
            } else if(celesi_3==0 && celesi_2==1){
              shuma=shuma+1;
              celesi_3=1;
              counter++;
              if(counter%2==0){
                celesi_2=0;
                }
            }
        printf("Numri i pikeve te mbledhura eshte %d . \n", shuma);
        }
    i++;
    }

    printf("Loja mbaroi.\n");
    printf("Numri i pikeve totale te mbledhura eshte %d . \n", shuma);

    return 0;
}