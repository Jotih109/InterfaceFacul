#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    // Definir os valores da variável
    float media, presenca;

    // Pegar a media do aluno
    printf("Qual a media do aluno?: ");
    scanf("%f", &media);

    // Pegar a  presenca do aluno
    printf("Qual a quantidade de presenca do aluno?: ");
    scanf("%f", &presenca);

    if (presenca <= 75 && media < 7) {
        printf("Aluno reprovado!!\n");
    } 
    
    else if (media < 7 && presenca >= 75 && media >= 5) {
        printf("O aluno esta de recuperacao!!\n");     
    }
    
    else {
         printf("O aluno foi aprovado!!\n"); 
    }

    // Pausar o sistema quanto for mostrar o resultado
    system("pause");
    return 0;
}

