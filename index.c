#include <stdio.h>



void Menu(){
    char aluno[20];
    int ope = 0;
    printf("=================================\n");
    printf("||         Seja Bem Vindo!      ||\n");
    printf("==================================\n");
    printf("||       Informe a operacao     ||\n");
    printf("||       que deseja realizar    ||\n");
    printf("||  Ex: 1 = Acessar Aluno       ||\n");
    printf("==================================\n");
    printf("||         O que deseja?        ||\n");
    printf("||  1 - acessar || 2- cadastrar ||\n");
    printf("::"); scanf("%d", &ope);
    if(ope == 1){
    printf("==================================\n");
    printf("||Digite o nome do aluno:       ||\n"); 
    printf("::"); scanf(" %21[^\n]", aluno);
    
    printf("==================================\n");
    printf("||       Escolha uma das        ||\n");
    printf("||        opcoes abaixo         ||\n");
    printf("==================================\n");
    printf("||      1 - Minhas Disciplinas  ||\n");
    printf("||      2 - Minhas Notas        ||\n");
    printf("||      3 - Meus Dados          ||\n");
    printf("||      4 - Meu Desempenho      ||\n");
    printf("==================================\n");
    printf("::"); scanf("%d", &ope);
    switch (ope)
    {
    case 1:
    printf("||        Disciplinas           ||\n");
        break;
    case 2:
    printf("||           Notas              ||\n");
        break;
    case 3:
    printf("||           Dados              ||\n");
    case 4:
    printf("||        Desempenho            ||\n");
        break;
    default:
        printf("ERROR!");
        break;
    }
    printf("==================================\n");
    }else if( ope == 2){    
    printf("==================================\n");
    printf("||        Cadastrar             ||\n");
    printf("==================================\n");
     
    }
}

int main(){
    Menu();

    return 0;
}