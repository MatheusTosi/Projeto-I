#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main(){


char nome[29];
int senha, opcao, opcao1;
float salarioF, rendaextra, aluguel, agua, luz, mercado;


system("cls");
printf("------------------------------------------------------------------------------------------------------------------------");
printf("\n");
printf("\t\t\t\t\tBem Vindo ao seu CONTROLE DE CAIXA particular");
printf("\n");
printf("-----------------------------------------------------------------------------------------------------------------------\n");
printf("DIGITE SEU NOME:  ");
scanf("%s", &nome);
printf("DIGITE SUA SENHA: ");
scanf("%f", &senha);
    
    if(senha = 123456){
        system("color F4");
        system("cls");
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\tBEM VINDO %s\n", nome);
        printf("------------------------------------------------------------------------------------------------------------------------\n");
        printf("\n");
        printf("SUAS OPCOES SAO:\n\n");
        printf(" 1 - CHECAR MINHAS FINANCAS\n");
        printf(" 2 - ATUALIZAR INFORMACOES FINACEIRAS\n");
        printf(" 3 - SAIR\n\n\n");
        printf("ESCOLHA UMA OPCAO: ");
        scanf("%i", &opcao);
            
            switch(opcao){
                case 1:
                        system("cls");
                        printf("------------------------------------------------------------------------------------------------------------------------\n");
                        printf("\t\t\t AUTUALIZE SEUS DADOS:\n");
                        printf("------------------------------------------------------------------------------------------------------------------------\n");
                        printf("\n1 - SALARIO ");
                        printf("\n2 - RENDA EXTRA ");
                        printf("\n3 - CONTA DE LUZ ");
                        printf("\n4 - CONTA DE AGUA ");
                        printf("\n5 - MERCADO ");
                        printf("\n6 - PET ");
                        printf("\n7 - SAIR");
                        printf("\n\nESCOLHA PARA ALTERAR: ");
                        scanf("%i", &opcao1);
                        break;

                }
    }
        


            
}