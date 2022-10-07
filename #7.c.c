//7
#include <stdio.h>

int main(){
    float nota1,nota2,media;
    int i=0;


    while(1){

        printf("\ndigite a primeira nota do aluno %d :",i);
        scanf("%f",&nota1);
        if(nota1==50.00){
            break;
        }

        printf("\ndigite a segunda nota do aluno %d :",i);
        scanf("%f",&nota2);

        if ((0<=nota1<=10) && (0<=nota2<=10)){
            media = (nota1+nota2)/2.00;
        }

        printf("\nA media do aluno%d e %.2f",i,media);
        i++;
    }
}