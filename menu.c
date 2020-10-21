#include <stdio.h>
#include <stdlib.h>

void acessarDados();
void acessarDesempenho();
void acessarDisciplinas();
void acessar();
void cadastrarDados();
void cadastroDisciplinas();
void cadastrarNotas();
void cadastrar();
void atualizarDados();
void atualizarDisciplinas();
void atualizarNotas();
void atualizar();
void deletarDisciplinas();
void deletar();
void menu();
void apresentacao();



int main(void){
    apresentacao();
    menu(0);
    
    return 0;
}

/*  ========ACESSO==========*/
void acessarDisciplinas(){
    printf("==================================\n");
    printf("||      Minhas Disciplinas      ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf(":: 1 - Nome Disciplina\n");
    printf(":: 2 - Nome Disciplina\n");
    printf(":: 3 - Nome Disciplina\n");
    system("pause");
    menu(0);
}
void acessarDados(){
    printf("==================================\n");
    printf("||      Meus Dados              ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf(":: 1 - Nome: Andre Torquato Silva\n");
    printf(":: 2 - Matricula: 3203212\n");
    printf(":: 3 - E-mail: andretorquato@contato.com\n");
    printf(":: 4 - Telefone: 88 9 88563232\n");
    system("pause");
    menu(0);
}
void acessarDesempenho(){
    printf("==================================\n");
    printf("||      Meu Desempenho          ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf(":: Digite o nome da disciplina:\n");
    printf("::\n");
    printf("::Nome Disciplina: FUP\n");
    printf(":: Notas: 10, 10, 10, 9\n");
    printf(":: Rendimento: Aprovado :)\n");
    system("pause");
    menu(0);
}

void acessar(int ope){
    printf("==================================\n");
    printf("||      Voce esta no menu       ||\n");
    printf("||      de ACESSO aqui voce     ||\n");
    printf("||      ver suas informacoes    ||\n");
    printf("==================================\n");
    printf("||         O que deseja?        ||\n");
    printf("==================================\n");
    printf("||   1 - Ver minhas disciplinas ||\n");
    printf("||   2 -  Ver meus dados        ||\n");
    printf("||   3 - Ver meu desempenho     ||\n");
    printf("==================================\n");
    printf("::"); scanf("%d", &ope);
    switch (ope)
    {
    case 1:
            system("cls");
            acessarDisciplinas();
        break;
    case 2:
            system("cls");
            acessarDados();
        break;
    case 3:
            system("cls");
            acessarDesempenho();
        break;
    default:
        menu(0);// DEPOIS COLOCAR PARA VOLTAR PARA O MENU INICIAL
        break;
    }

}
/*  ===== CADASTRAR ======*/
void cadastrarDados(){
    printf("==================================\n");
    printf("||      Inserindo Meus Dados    ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf(":::DIGITE SEU NOME:\n");
    printf("::");// AQUI SERA INSERIDO OS "SCAN"
    printf(":::DIGITE SUA MATRICULA:\n");
    printf("::");
    printf(":::DIGITE SEU TELEFONE:\n");
    printf("::");
    printf(":::DIGITE SEU E-MAIL:\n");
    printf("::");
    system("pause");
    menu(0);
}
void cadastroDisciplinas(){
    printf("==================================\n");
    printf("||   Cadastrando Disciplinas    ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf(":::QUANTAS DISCIPLINAS DESEJA CADASTRAR:\n");
    printf("::");// AQUI SERA INSERIDO OS "SCAN"
    printf(":::NOME DA DISCIPLINA:\n");
    printf("::");
    printf(":::NOME DO PROFESSOR?:\n");
    printf("::");
    printf(":::QUANTIDADE DE NOTAS:\n");
    printf("::");
    system("pause");
    menu(0);
}

void cadastrarNotas(){
    printf("==================================\n");
    printf("||       Cadastrando Notas      ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf(":::NOME DA DISCIPLINA QUE DESEJA\n");
    printf(":::CADASTRAR NOTA:\n");
    printf("::");// AQUI SERA INSERIDO OS "SCAN"
    printf(":::QUANTIDADE DE NOTAS A INSERIR\n");
    printf("::");
    system("pause");
    menu(0);
}
void cadastrar(int ope){
    printf("==================================\n");
    printf("||      Voce esta no menu       ||\n");
    printf("||      de CADASTRO aqui        ||\n");
    printf("||      inserir novos dados     ||\n");
    printf("==================================\n");
    printf("||         O que deseja?        ||\n");
    printf("==================================\n");
    printf("||   1 - Cadastrar disciplinas  ||\n");
    printf("||   2 - Cadastrar meus dados   ||\n");
    printf("||   3 - Cadastrar notas        ||\n");
    printf("==================================\n");
    printf("::"); scanf("%d", &ope);
    switch (ope)
    {
    case 1:
            system("cls");
            cadastroDisciplinas();
        break;
    case 2:
            system("cls");
            cadastrarDados();
        break;
    case 3:
            system("cls");
            cadastrarNotas();
        break;
    default:
        menu(0);// DEPOIS COLOCAR PARA VOLTAR PARA O MENU INICIAL
        break;
    }

}
/*  ===== ATUALIZAR ======*/

void atualizarDados(){
    int opeAt=0;
    printf("==================================\n");
    printf("||      Atualizar meus  dados   ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf("||   Digite para atualizar      ||\n");
    printf("||    uma das opcoes abaixo     ||\n");
    printf("==================================\n");
    printf("||   1 - Nome                   ||\n");
    printf("||   2 - Matricula              ||\n");
    printf("||   3 - E-mail                 ||\n");
    printf("||   4 - Telefone               ||\n");
    printf("==================================\n");
    printf("::"); scanf("%d", &opeAt);
    switch (opeAt)
    { 
    case 1:
    printf(":::Novo nome:\n");
    printf("::");
        break;
    case 2:
    printf(":::Nova matricula:\n");
    printf("::");
        break;
    case 3: 
    printf(":::Novo e-mail:\n");
    printf("::");
        break;
    case 4: 
    printf(":::Novo telefone:\n");
    printf("::");
        break;
    default:
        menu(0);// DEPOIS COLOCAR PARA VOLTAR PARA O MENU INICIAL
        break;
    }
};
void atualizarDisciplinas(){
    int opeAt=0;
    printf("==================================\n");
    printf("||      Atualizar Disciplinas   ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf("||   Digite para atualizar      ||\n");
    printf("||    uma das opcoes abaixo     ||\n");
    printf("==================================\n");
    printf("||   1 - Nome Disciplina        ||\n");
    printf("||   2 - Nome Professor         ||\n");
    printf("||   3 - Quantidade de notas    ||\n");
    printf("==================================\n");
    printf("::"); scanf("%d", &opeAt);
    switch (opeAt)
    {
    case 1:
    printf(":::Novo nome da disciplina:\n");
    printf("::");
        break;
    case 2:
    printf(":::Nova nome professor:\n");
    printf("::");
        break;
    case 3: 
    printf(":::Quantidade de notas:\n");
    printf("::");
        break;
    default:
        menu(0);// DEPOIS COLOCAR PARA VOLTAR PARA O MENU INICIAL
        break;
    }
};
void atualizarNotas(){
    printf("==================================\n");
    printf("||        Atualizar Notas       ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf(":::QUAL DISCIPLINA DESEJA ATUALIZAR A NOTA?\n");
    printf("::\n");// AQUI SERA INSERIDO OS "SCAN" remova o \n
    printf("==================================\n");
    printf("||        NOTAS ATUAIS          ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    for(int i = 1; i < 4; i++){
        printf("%d - valor da nota\n", i);
    }
    printf("==================================\n");
    printf("|DIGITE QUAL NOTA DESEJA ALTERAR||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf("::\n");// AQUI SERA INSERIDO OS "SCAN" remova o \n
    printf(":::QUAL NOVO VALOR DA NOTA?\n");
    printf("::\n");// AQUI SERA INSERIDO OS "SCAN" remova o \n
    printf("|| NOTA ALTERADA COM SUCESSO :) ||\n");
    printf("==================================\n");
    system("pause");
    menu(0);
};
void atualizar(int ope){
    printf("==================================\n");
    printf("||    Voce esta no menu de      ||\n");
    printf("||    ATUALIZACAO aqui voce     ||\n");
    printf("||     atualiza seus dados      ||\n");
    printf("==================================\n");
    printf("||         O que deseja?        ||\n");
    printf("==================================\n");
    printf("||   1 - Atualizar disciplinas  ||\n");
    printf("||   2 - Atualizar meus dados   ||\n");
    printf("||   3 - Atualizar notas        ||\n");
    printf("==================================\n");
    printf("::"); scanf("%d", &ope);
    switch (ope)
    {
    case 1:
            system("cls");
            atualizarDisciplinas();
        break;
    case 2:
            system("cls");
            atualizarDados();
        break;
    case 3:
            system("cls");
            atualizarNotas();
        break;
    default:
        menu(0);// DEPOIS COLOCAR PARA VOLTAR PARA O MENU INICIAL
        break;
    }

}
/*  ===== DELETAR ======*/
void deletarDisciplinas(){
    printf("==================================\n");
    for(int i = 1; i < 4; i++)
    {
    printf("%d - Nome da disciplina\n", i);
    }
    printf("==================================\n");
    printf("||     DIGITE QUAL DISCIPLINA   ||\n");
    printf("||         DESEJA DELETAR       ||\n");
    printf("::::::::::::::::::::::::::::::::::\n");
    printf("::\n");// AQUI SERA INSERIDO OS "SCAN" remova o \n
    printf(":::VOCE REALMENTE QUER DELETAR?(S/N)\n");
    printf("::\n");// AQUI SERA INSERIDO OS "SCAN" remova o \n
    printf("|DISCIPLINA DELETADA COM SUCESSO||\n");
    printf("==================================\n");
    system("pause");
    menu(0);
};
void deletar(int ope){
    do
    {
    printf("==================================\n");
    printf("||    Voce esta no menu de      ||\n");
    printf("||    DELETAR aqui voce pode    ||\n");
    printf("||     deletar alguns dados     ||\n");
    printf("==================================\n");
    printf("||         O que deseja?        ||\n");
    printf("==================================\n");
    printf("||   1 - Deletar disciplinas    ||\n");
    printf("==================================\n");
    printf("::"); scanf("%d", &ope);
    switch (ope)
    
    {
    case 1:
            system("cls");
            deletarDisciplinas();
        break;
    default:
        menu(0);// DEPOIS COLOCAR PARA VOLTAR PARA O MENU INICIAL
        break;
    }    
    } while (ope!=0);
}
/*  ===== MENU ======*/
void menu(int ope){
    system("cls");
    while (ope==0)
    {
    printf("=================================\n");
    printf("||         Seja Bem Vindo!      ||\n");
    printf("==================================\n");
    printf("||       Informe a operacao     ||\n");
    printf("||       que deseja realizar    ||\n");
    printf("||  Ex: 1 = Acessar Aluno       ||\n");
    printf("==================================\n");
    printf("||         O que deseja?        ||\n");
    printf("==================================\n");
    printf("||      1 - ACESSAR             ||\n");
    printf("||      2 - CADASTRAR           ||\n");
    printf("||      3 - ATUALIZAR           ||\n");
    printf("||      4 - DELETAR             ||\n");
    printf("||      5 - SAIR                ||\n");
    printf("==================================\n");
    printf("|| 0 - PARA VOLTAR PARA O MENU  ||\n");
    printf("=================================\n");
    printf("::"); scanf("%d", &ope);
    switch (ope)
    {
    case 1:
            system("cls");
            acessar(0);
        break;
    case 2:
           system("cls");
            cadastrar(0);
        break;
    case 3:
            system("cls");
            atualizar(0);
    case 4:
            system("cls");
            deletar(0);
        break;
    case 5:
            system("cls");
        break;
    default:
            system("cls");
            menu(0);
        break;
    }
        
    }
}
void apresentacao(){
    printf("_________________________________________________________\n");
    printf("|| - || - || - || - || - || - || - || - || - || - || - ||\n");
    printf("|| Vinhemos para facilitar sua vida academica  de      ||\n");
    printf("|| maneira simples e pratica neste e nos proximos      ||\n");
    printf("|| semestres te ajudando a gerenciar suas disciplinas, ||\n"); 
    printf("|| ajudando a gerenciar suas notas, seus dados         ||\n");
    printf("|| e assim,qual disciplina precisara de mais atencao   ||\n");
    printf("---------------------------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("\n");
}