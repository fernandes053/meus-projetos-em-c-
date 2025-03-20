#include <stdio.h>
#include <stdlib.h>


void ler(int *p,int q);
void imprime(int *p,int q);
void aloca(int **p,int tam);
void resultante(int *p,int q);




int main(){

int i;
int *ptr=NULL,tamn=10;

printf("Alocando 10 numeros inteiros\n");
aloca(&ptr, tamn);
ler(*ptr, tamn);
printf("\n\nMudanca dos enderecos: \n\n");
imprime(*ptr, tamn);
printf("\nVetor resultante: \n\n");
resultante(*ptr, tamn);

}



void aloca(int **p,int tam){

if((*p=(int*)realloc(*p,tam*sizeof(int)))==NULL){
exit (1);
}

}


void ler(int *p, int q){

int i;

for(i=0;i<q;i++,p++){
printf("\nendereco %u - Digite o %i numero: ", p,i+1);
scanf("%i", p);
}

}



void imprime(int *p,int q){

int i;

for(i=0;i<q;i++,p++){
printf("Endereco %u - Valor %i\n", p,*p);
}

}


void resultante(int *p, int q){

int i;

for(i=0;i<q;i++,p++){
*p=*p+30;
printf("Endereco %u - Valor %i\n", p,*p);
}

}
