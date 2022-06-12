#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char nome[128];
    int senha, opcao, opcao2;
    float salario=1549.99, rendaextra=350, aluguel=900, agua=138.95, luz=186.73, mercado=574.90;

    setbuf(stdin, NULL);
    printf("DIGITE SEU NOME:  ");
    scanf("%s127[^\n]", &nome);

    //strupr(nome);

    system("cls");
    printf("\n");
    printf("\t\t\t\tBEM-VINDO AO SEU CONTROLE DE CAIXA PARTICULAR, %s", nome);
    printf("\n");
    printf("\n");



    setbuf(stdin, NULL);
    printf("DIGITE SUA SENHA: ");
    scanf("%i", &senha);

    while(opcao != 3) {

        if(senha != 0) {
            system("cls");
            printf("\n\nMENU PRINCIPAL\n");
            printf("SUAS OPÇÕES SAO: \n");
            printf(" 1 - CHECAR MINHAS FINANÇAS\n");
            printf(" 2 - ATUALIZAR INFORMAÇÕES FINANCEIRAS\n");
            printf(" 3 - SAIR\n\n");
            printf("ESCOLHA UMA OPÇÃO: ");
            scanf("%i", &opcao);

            switch(opcao) {
            case 1:
                system("cls");
                printf("\n");
                printf("\t\t\t CHEQUE SUAS FINANÇAS:\n");
                printf("\n");
                printf("\n1 - SALÁRIO: %.2f", salario);

                printf("\n2 - RENDA EXTRA: %.2f", rendaextra);

                printf("\n3 - ALUGUEL: %.2f", aluguel);

                printf("\n4 - CONTA DE LUZ: %.2f", luz);

                printf("\n5 - CONTA DE ÁGUA: %.2f", agua);

                printf("\n6 - MERCADO: %.2f", mercado);

                

            case 2:
                system("cls");
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("\t\t\t ATUALIZE SEUS DADOS:\n");
                printf("------------------------------------------------------------------------------------------------------------------------\n");

                printf("\n1 - SALÁRIO ");

                printf("\n2 - RENDA EXTRA ");

                printf("\n3 - ALUGUEL ");

                printf("\n4 - CONTA DE LUZ ");

                printf("\n5 - CONTA DE ÁGUA ");

                printf("\n6 - MERCADO ");

                printf("\n7 - VOLTAR AO MENU");

                printf("\n\nESCOLHA PARA ATUALIZAR: ");
                scanf("%i", &opcao2);

                switch(opcao2) {
                case 1:
                    system("cls");
                    printf("SALÁRIO ATUAL: %.2f \n", salario);
                    printf("Alterar seu salário para: ");
                    scanf("%f", &salario);
                    salario = salario;
                    printf("SALÁRIO ATUALIZADO PARA %.2f.\n", salario);
                    break;

                case 2:
                    system("cls");
                    printf("RENDA EXTRA ATUAL: %f \n", rendaextra);
                    printf("Alterar sua renda extra para: ");
                    scanf("%.2f", &rendaextra);
                    rendaextra = rendaextra;
                    printf("RENDA EXTRA ATUALIZADA PARA %.2f. \n", rendaextra);
                    break;

                case 3:
                    system("cls");
                    printf("ALUGUEL ATUAL: %.2f \n", aluguel);
                    printf("Alterar sua conta de aluguel para: ");
                    scanf("%f", &aluguel);
                    aluguel = aluguel;
                    printf("CONTA DE ALUGUEL ATUALIZADA PARA %.2f. \n", aluguel);
                    break;

                case 4:
                    system("cls");
                    printf("CONTA DE LUZ ATUAL: %f \n", luz);
                    printf("Alterar sua conta de luz para: ");
                    scanf("%f", &luz);
                    luz = luz;
                    printf("CONTA DE LUZ ATUALIZADA PARA %.2f.", luz);
                    break;

                case 5:
                    system("cls");
                    printf("CONTA DE ÁGUA ATUAL: %.2f \n", agua);
                    printf("Alterar sua conta de agua para: ");
                    scanf("%f", &agua);
                    agua = agua;
                    printf("CONTA DE ÁGUA ATUALIZADA PARA %.2f", agua);
                    break;

                case 6:
                    system("cls");
                    printf("CONTA DE MERCADO ATUAL: %f \n", mercado);
                    printf("Alterar sua conta de mercado para: ");
                    scanf("%f", &mercado);
                    mercado = mercado;
                    printf("CONTA DE MERCADO ATUALIZADA PARA %.2f", mercado);
                    break;


                }

            case 3:
                system("cls");
                printf("------------------------------------------------------------------------------------------------------------------------\n");
                printf("\t\t\t ATÉ LOGO %c!! CUIDE DO SEU BOLSO :) \n\n", nome);
                printf("------------------------------------------------------------------------------------------------------------------------\n");


            }


        }
    }

}