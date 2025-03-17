#include <stdio.h>
#include<stdlib.h>



leitura(int *pm,int q);
imprime(int *p,int q);
resultante(int *pa, int *pb, int*pc,int q);



int main()
{

int a[10], b[10], c[10], qtde;

    printf("\nSoma 2 vetores");
    do{
    printf("\nQtde de elementos - max 10: ");
    scanf("%i",&qtde);
    if(qtde<1 || qtde>10){
            printf("\nNumero invalido, digite novamente\n");
    }
    }while(qtde<1 || qtde>10);

    printf("Leitura do vetor [A]");
    leitura(a,qtde);
    printf("\nLeitura do vetor [B]");
    leitura(b,qtde);
    resultante(a,b,c,qtde);
    system("cls");
    printf("\nVetor resultante: \n");
    imprime(c, qtde);

}




leitura(int *pm, int q)
{
    int x;

    for(x=0;x<q;x++,pm++){
        printf("\nVetor [%i]: ", x+1);
        scanf("%i", pm);
        fflush(stdin);
    }

}



resultante(int *pa, int *pb, int*pc,int q){

    int x;

    for(x=0;x<q;x++,pa++,pb++,pc++)
        {
        *pc=*pa+*pb;
    }


}


imprime(int *pc,int q)
{

int x;

for(x=0;x<q;x++,pc++)
    {
        printf("\nVetor [%i]: %i", x+1, *pc);
    }

}
