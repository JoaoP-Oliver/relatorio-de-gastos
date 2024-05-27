#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float somatorio_transporte = 0;
    float somatorio_alimentacao = 0;
    float somatorio_gastosFixos = 0;
    float somatorio_vestuario = 0;
    float somatorio_entretenimento = 0;
    float somatorio_outros = 0;

    int escolha_menu_principal,escolha_saidas,x;

    float entrada[12],saidas[60],saldo_total = 0,despesas_totais = 0;
    srand(time(NULL));

    do {
    printf("\n\nMenu PrincipaL: \n 1- Entrada \n 2- Saidas \n 3- Gerar relatório anual \n 4- Sair do Programa\n\n");
    printf("\n\nEscolha a opcao: ");
    scanf("%d", &escolha_menu_principal);

    switch(escolha_menu_principal) {
        case 1:
            printf("Digite os valores de entrada de cada mes: \n\n\n");
            for(x = 0; x < 12; x++) {
                printf("mes %d: ", x + 1);
                scanf("%f", &entrada[x]);
            }
            printf("\n\n");
            break;
        case 2:
            printf("\n\nDigite a categoria que se refere a saida:\n 1- Transporte \n 2-Alimentacao \n 3-Gastos fixos(Energia, Agua) \n 4-Vestuario \n 5-Entreteniimento(superfulo) \n 6-Outros \n\n");
            scanf("%d", &escolha_saidas);
            switch(escolha_saidas){
                case 1:
                    printf("Digite os gastos em relação ao transporte: \n\n");
                    for(x = 0; x < 12; x++) {
                        printf("Quantidade gasta no mes: ");
                        scanf("%f", &saidas[x]);
                    }
            printf("\n\n");
                    break;
                case 2:
                    printf("Digite os gastos em relação a Alimentação: \n\n");
                    for(x = 12; x < 24; x++) {
                        printf("Quantidade gasta no mes: ");
                        scanf("%f", &saidas[x]);

                    }
                    printf("\n\n");
                    break;

                case 3:
                    printf("Digite os gastos em relação aos gastos fixos: \n\n");
                    for(x = 24; x <= 36; x++) {
                        printf("Quantidade gasta no mes: ");
                        scanf("%f", &saidas[x]);
                    }
                    printf("\n\n");
                    break;

                case 4:
                    printf("Digite os gastos em relação ao Vestuario: \n\n");
                    for(x = 36; x < 48; x++) {
                        printf("Quantidade gasta no mes: ");
                        scanf("%f", &saidas[x]);
                    }
                    break;

                case 5:
                    printf("Digite os gastos em relação ao Entretenimento(superfulo): \n");
                    for(x = 48; x < 60; x++) {
                        printf("Quantidade gasta no mes: ");
                        scanf("%f", &saidas[x]);
                    }
                    printf("\n\n");

                    break;

                case 6 :
                    printf("Digite os gastos em relação a categoria Outos: \n");
                    for(x = 60; x < 72; x++) {
                        printf("Quantidade gasta no mes: ");
                        scanf("%f", &saidas[x]);
                    }
                    printf("\n\n");

                default:
                    printf("Opcao Invalida\n");
        }
            break;
        case 3:

            //Somatorio de todas as despesas anualmente
             for (x = 0; x < 12; x++) {
                somatorio_transporte += saidas[x];
            }

            for (x = 12; x < 24; x++) {
                somatorio_alimentacao += saidas[x];
            }

            for (x = 24; x < 36; x++) {
                somatorio_gastosFixos += saidas[x];
            }

            for (x = 36; x < 48; x++) {
                somatorio_vestuario += saidas[x];
            }

            for (x = 48; x < 60; x++) {
                somatorio_entretenimento += saidas[x];
            }

            for (x = 60; x < 72; x++) {
                somatorio_outros += saidas[x];
            }

            printf("Somatório Transporte: %.2f\n", somatorio_transporte);
            printf("Somatório Alimentaçoo: %.2f\n", somatorio_alimentacao);
            printf("Somatório Gastos Fixos: %.2f\n", somatorio_gastosFixos);
            printf("Somatório Vestuario: %.2f\n", somatorio_vestuario);
            printf("Somatório Entretenimento: %.2f\n", somatorio_entretenimento);
            printf("Somatório Outros: %.2f\n", somatorio_outros);

            //Calculo do Salto total
            for(x = 0; x < 12; x++)
                saldo_total += entrada[x];

            for(x = 0; x < 60; x++)
                despesas_totais = saidas[x];

            printf("\n\nSaldo Total: %f", saldo_total - despesas_totais);

            // Analise do mÊs com maior gasto

            int mes_maior_gasto = 1;  // Inicializa com o primeiro mês
            float maior_gasto = saidas[0];

            break;
        case 4:
            printf("\n\nSaindo do programa...\n\n");
            break;
        default:
            printf("Opcao Invalida! ");
    }

    }while(escolha_menu_principal != 4);

    system("pause -> NULL");
    return 0;
}
