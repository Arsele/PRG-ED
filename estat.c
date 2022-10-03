#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

int tamanho, i=0, j=0, moda;
float media=0, mediana=0, soma=0, aux=0, conta=0, vmax, vmin, desvpad, smt;

//pegando valores do usuario

printf("Qual o total de numeros ? ");
scanf("%d", &tamanho);

float cont[tamanho], v[tamanho];
if(tamanho>0){

    for(i=0;i<tamanho;i++){

    printf("digite o valor ? ");
    scanf("%f", &v[i]);

    soma = soma + v[i];

    }
}
//media

media=soma/tamanho;

printf("\nMedia: %2.2f \n", media);


//mediana

for(i=0;i<tamanho;i++){
        for(j=i+1;j<tamanho;j++){

            if(v[i] > v[j]){

                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    if(tamanho%2 == 0){
         mediana = (v[tamanho/2-1]+(v[tamanho/2]));
         mediana = mediana/2;
    } else {
         mediana = v[tamanho/2];
    }


printf("Mediana: %2.2f \n", mediana);

//Valor Máximo
vmax = v[0];
 for(i=0;i<tamanho;i++){
    if (v[i] > vmax){
        vmax = v[i];
       }
    }
printf("Valor Máximo: %2.2f \n", vmax);

//Valor Mínimo
vmin = v[0];
 for(i=0;i<tamanho;i++){
    if (v[i] < vmin){
        vmin = v[i];
       }
    }
printf("Valor Mínimo: %2.2f \n", vmin);

//Desvio Padrão
 for(i=0;i<tamanho;i++){
     smt = smt + pow(v[i] - media,2);
    }
desvpad = smt/tamanho;
desvpad = sqrt(desvpad);
printf("Desvio Padrão: %lf \n", desvpad);

return 0;
}
