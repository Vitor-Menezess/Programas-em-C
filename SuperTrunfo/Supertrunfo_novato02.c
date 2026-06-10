 #include <stdio.h>

             int main(){

                    // Carta 1
                char Estado1;
                char Codigo1[4];
                char Cidade1[50];
                unsigned long int Populacao1;
                float Area1;
                float PIB1;
                int Pontos_turisticos1;
                float Densipopulacional1;
                float PIBpercapita1;
                float Superpoder1;

                    // Carta 2
                char Estado2;
                char Codigo2[4];
                char Cidade2[50];
                unsigned long int Populacao2;
                float Area2;
                float PIB2;
                int Pontos_turisticos2;
                float Densipopulacional2;
                float PIBpercapita2;
                float Superpoder2;
                    

        // Carta 1
                printf("Digite uma letra de (A a H) para representar o estado da carta 1: ");
                    scanf(" %c", &Estado1);
                printf("Digite o código da carta 1 (ex: A01): ");
                    scanf(" %s", Codigo1);
                printf("Digite o nome da Cidade da carta 1: ");
                    scanf(" %s", Cidade1);
                printf("Qual o número de habitantes da cidade da carta 1 (sem pontos ou virgulas): ");
                    scanf("%lu", &Populacao1);
                printf("Digite a área em km² (sem pontos de milhar, use ponto apenas para decimais): ");
                    scanf("%f", &Area1);
                printf("Digite qunato de produto interno bruto (PIB) da carta 1 (sem pontos ou virgulas): ");
                    scanf("%f", &PIB1);
                printf("Qual a quantidade de pontos turisticos a carta 1 possui: ");
                    scanf("%d", &Pontos_turisticos1);

        // Carta 2
                 printf("Digite uma letra de (A a H) para representar o estado da carta 2: ");
                    scanf(" %c", &Estado2);
                printf("Digite o codigo da carta 2 (ex: B01): ");
                    scanf(" %s", Codigo2);
                printf("Digite o nome da Cidade da carta 2: ");
                    scanf(" %s", Cidade2);
                printf("Qual o número de habitantes da cidade da carta 2 (sem pontos ou virgulas): ");
                    scanf("%lu", &Populacao2);
                printf("Digite a área em km² (sem pontos de milhar, use ponto apenas para decimais): ");
                    scanf("%f", &Area2);
                printf("Digite quanto de produto interno bruto (PIB) da carta 2 (sem pontos ou virgulas): ");
                    scanf("%f", &PIB2);
                printf("Qual a quantidade de pontos turisticos a carta 2 possui: ");
                    scanf("%d", &Pontos_turisticos2);

        // Calculo Densidade Populacional e o PIB per Capita 
                                // Carta 1
                Densipopulacional1 = Populacao1 / Area1;
                PIBpercapita1 = PIB1 / Populacao1;
                                // Carta 1
                Densipopulacional2 = Populacao2 / Area2;
                PIBpercapita2 = PIB2 / Populacao2;

        // Calcular o super poder
                                // Carta 1
                Superpoder1 = Populacao1 + Area1 + PIB1 + Pontos_turisticos1 + PIBpercapita1 + (1 /Densipopulacional1);
                                // Carta 2
                Superpoder2 = Populacao2 + Area2 + PIB2 + Pontos_turisticos2 + PIBpercapita2 + (1 /Densipopulacional2);
                
                    // espaço para aparecer as cartas 
        printf("\n\n\n");


                    // impressão da carta 1
        printf("\n *** Impressão das cartas *** \n");
        printf("*** Carta 1 ***\n");
        printf("Estado: %c\n", Estado1);
        printf("Código: %s\n", Codigo1);
        printf("Nome da Cidade: %s\n", Cidade1);
        printf("População: %lu\n", Populacao1);
        printf("Área: %.2f Km²\n", Area1);
        printf("PIB: %.2f\n", PIB1);
        printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", Densipopulacional1);
        printf("PIB per Capita: %.2f reais\n", PIBpercapita1);
        

                    // espaço entre as cartas 
        printf("\n-------------------------\n");

                    // impressão da carta 2
        printf(" *** Carta 2 ***\n");
        printf("Estado: %c\n", Estado2);
        printf("Código: %s\n", Codigo2);
        printf("Nome da Cidade: %s\n", Cidade2);
        printf("População: %lu\n", Populacao2);
        printf("Área: %.2f Km²\n", Area2);
        printf("PIB: %.2f\n", PIB2);
        printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", Densipopulacional2);
        printf("PIB per Capita: %.2f reais\n\n\n", PIBpercapita2);

                // Comparação das cartas

                printf("***   Comparação das cartas para escolher a carta vencedora\n   ***");
                printf("O atributo utilizado para decidir a vitoria será: (Dencidade Populacional)\n");
                printf("(Em dencidade populacinal a carta com o menor valor vence)\n\n");
               
                printf("Carta 1 - A cidade de %s possui a Densidade Populacional de: %f\n", Cidade1, Densipopulacional1);
                printf("Carta 2 - A cidade de %s possui a Densidade Populacional de: %f\n\n", Cidade2, Densipopulacional2);

                // Resultado da comparação 
                        if (Densipopulacional1 < Densipopulacional2) // Quando o atributo é dencidade populacional a carta com o menor valor vence
                        {
                            printf("Carta 1 (%s) venceu!!\n", Cidade1);
                        } else {
                            printf("Carta 2 (%s) Venceu!!\n", Cidade2);
                        }

return 0; 
}