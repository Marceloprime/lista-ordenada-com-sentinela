/*                                  Lista duplamente encadeadas
Autor: Marcelo Augusto dos Reis 30/Nov/2018  Universidade de Sao Paulo -Sao Carlos SP - BRASIL                        */

/*Descricao:
    Esse programa consiste em uma aplicacao do conceito de estrutura de dado do tipo lista duplamente encadeada, onde eh apresentado
as tres formas de insercao, e as funcoes comuns a essa estrutura.
*/

#include "lista.h"
#include <stdio.h>
#include <time.h>

int main(){
    //Principais declaracoes de variaveis e inicianilacoes
    LISTA *l;
    ELEM x;
    int n = 100,k=0;
    clock_t tempo;
    double vec_in[4],vec_re[4],vec_bus[4];
    l = cria_lista();

    printf("Crescente\n");
    while(n < 1000000){
        int vector[n];
    	tempo = clock();
        for(int i=0;i<n;i++){
            x.num = i;
            insercao_ordenada(l,x);
        }
        vec_in[k] = (clock() - tempo) / (double)CLOCKS_PER_SEC;

        tempo = clock();
        for(int i=0;i<(n/2);i++){
            x.num = i;
            remocao(l,x);
        }
        for(int i=0;i<(n/2);i++){
            x.num = i+n;
            remocao(l,x);
        }
        vec_re[k] = (clock() - tempo) / (double)CLOCKS_PER_SEC;


        tempo = clock();
        for(int i=(n/2);i<n;i++){
            x.num = i;
            busca(l,x);
        }
        for(int i=(n/2);i<n;i++){
            x.num = i+n;
            busca(l,x);
        }
        vec_bus[k] = (clock() - tempo) / (double)CLOCKS_PER_SEC;

        k++;
        n = n *10;
    }
    n = 100;
    for(int i=0;i<4;i++){
        printf("%d\n",n);
        printf("inser %lf\n",vec_in[i]);
        printf("Remo  %lf\n",vec_re[i]);
        printf("Busca %lf\n",vec_bus[i]);
        printf("\n\n");
        n=n*10;
    }
     printf("Aleatorio\n");
    while(n < 1000000){
        int vector[n];
    	tempo = clock();
        for(int i=0;i<n;i++){
            vector[i] = i + (rand()%50);
            x.num = vector[i];
            insercao_ordenada(l,x);
        }
        vec_in[k] = (clock() - tempo) / (double)CLOCKS_PER_SEC;

        tempo = clock();
        for(int i=0;i<(n/2);i++){
            x.num = vector[i];
            remocao(l,x);
        }
        for(int i=0;i<(n/2);i++){
            x.num = vector[i]+n;
            remocao(l,x);
        }
        
        vec_re[k] = (clock() - tempo) / (double)CLOCKS_PER_SEC;


        tempo = clock();
        for(int i=(n/2);i<n;i++){
            x.num = vector[i];
            busca(l,x);
        }
        for(int i=(n/2);i<n;i++){
            x.num = vector[i]+n;
            busca(l,x);
        }
        vec_bus[k] = (clock() - tempo) / (double)CLOCKS_PER_SEC;

        k++;
        n = n *10;
    }
    n = 100;
    for(int i=0;i<4;i++){
        printf("%d\n",n);
        printf("inser %lf\n",vec_in[i]);
        printf("Remo  %lf\n",vec_re[i]);
        printf("Busca %lf\n",vec_bus[i]);
        printf("\n\n");
        n=n*10;
    }
    printf("Decrescente\n");
      while(n < 1000000){
    	tempo = clock();
        for(int i=n;i<=0;i--){
            x.num = i;
            insercao_ordenada(l,x);
        }
        vec_in[k] = (clock() - tempo) / (double)CLOCKS_PER_SEC;

        tempo = clock();
        for(int i=n;i<=(n/2);i--){
            x.num = i;
            remocao(l,x);
        }
        for(int i=n;i<=(n/2);i--){
            x.num = i+n;
            remocao(l,x);
        }
        vec_re[k] = (clock() - tempo) / (double)CLOCKS_PER_SEC;


        tempo = clock();
        for(int i=(n/2);i<=0;i--){
            x.num = i;
            busca(l,x);
        }
         for(int i=(n/2);i<=0;i--){
            x.num = i+n;
            busca(l,x);
        }
        vec_bus[k] = (clock() - tempo) / (double)CLOCKS_PER_SEC;

        k++;
        n = n *10;
    }
    n = 100;
    for(int i=0;i<4;i++){
        printf("%d\n",n);
        printf("inser %lf\n",vec_in[i]);
        printf("Remo  %lf\n",vec_re[i]);
        printf("Busca %lf\n",vec_bus[i]);
        printf("\n\n");
        n=n*10;
    }

    libera(l);
    return 0;
}
