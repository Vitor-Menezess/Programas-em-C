#include <stdio.h>
            int main(){
                       // Carta 1
                char Estado1[20] = "Pará";
                char Codigo1[4] = "A01";
                char Cidade1[50] = "Belem";
                unsigned long int Populacao1 = 1303403;
                float Area1 = 1059  ;
                float PIB1 = 3346000;
                int Pontos_turisticos1 = 31;
                float Densipopulacional1;
                float PIBpercapita1;
                float Superpoder1;

                    // Carta 2
                char Estado2[20] = "Ceará";                       // No conteudo fala para usar nome de Pais, porém so agora foi mandado usar. e se mudar para pais tera que mudar algumas variaveis pois as informações em numeros dos paises vai ultrapassar o limite de caracteres de algumas variaveis
                char Codigo2[4] ="B02";
                char Cidade2[50] = "Fortaleza";       
                unsigned long int Populacao2 = 2428678;
                float Area2 = 312;
                float PIB2 = 8693000;
                int Pontos_turisticos2 = 41;
                float Densipopulacional2;
                float PIBpercapita2;
                float Superpoder2;

// variaveis de comparação 
        int ResultadoComparacao1, ResultadoComparacao2, ResultadoComparacao3, ResultadoComparacao4;
        int AtributoComparacao1, AtributoComparacao2, AtributoComparacao3, AtributoComparacao4 ;
        int ResultadoFinal1e2, ResultadoFinal3e4;

// Calculo Densidade Populacional e o PIB per Capita 
                        // Carta 1
        Densipopulacional1 = Populacao1 / Area1;
        PIBpercapita1 = PIB1 / Populacao1;
                        // Carta 1
        Densipopulacional2 = Populacao2 / Area2;
        PIBpercapita2 = PIB2 / Populacao2;
// Soma dos atributos escohidos pelo jogador
        long long int SomaCarta1 = 0, SomaCarta2 = 0;


// Calcular o super poder
                        // Carta 1
        Superpoder1 = Populacao1 + Area1 + PIB1 + Pontos_turisticos1 + PIBpercapita1 + (1 /Densipopulacional1);
                        // Carta 2
        Superpoder2 = Populacao2 + Area2 + PIB2 + Pontos_turisticos2 + PIBpercapita2 + (1 /Densipopulacional2);
                            printf("Bem-vindo ao Jogo Super Trunfo!");
                            printf("\n   ***Aqui você podera escolher os 3 atributos de comparação.***\n\n");
                            printf("Vamos escolher o primero atributo.\n");
                             printf("1 - Estado mais populoso.\n");
                             printf("2 - Estado com a maior Área em Km². \n");
                             printf("3 - Estado com o maior PIB. \n");
                             printf("4 - Estado com a menor Dencidade demografica. \n");
                             printf("5 - Estado com o maior múmero de pontos turisticos. \n");
                             printf("6 - Estado com o maior Super poder. \n");
                                printf("Digite o numero referente ao atributo de sua escolha: ");
                            scanf("%d", &AtributoComparacao1);

                                                switch (AtributoComparacao1){
                                                            case 1:
                                                                printf("O tributo escolhido foi *O estado mais populoso*\n");
                                                            ResultadoComparacao1 = Populacao1 > Populacao2 ? 1 : 0;
                                                            break;
                                                            case 2:
                                                                printf("O Atributo escolhido foi *O estado com a maior area em km²*\n");
                                                            ResultadoComparacao1 = Area1 > Area2 ? 1 : 0;
                                                            break;
                                                            case 3:
                                                                printf("O tributo escolhido foi *O estado com maior PIB*\n");
                                                            ResultadoComparacao1 = PIB1 > PIB2 ? 1 : 0;
                                                            break;
                                                            case 4:
                                                                printf("O Atributo escolhido foi *O estado com a menor densidade populacional*\n");
                                                            ResultadoComparacao1 = Densipopulacional1 < Densipopulacional2 ? 1 : 0;
                                                            break;
                                                            case 5:
                                                                printf("O tributo escolhido foi *O estado mais pontos turisticos*\n");
                                                            ResultadoComparacao1 = Pontos_turisticos1 > Pontos_turisticos2 ? 1 : 0;
                                                            break;
                                                            case 6:
                                                                printf("O Atributo escolhido foi *O estado com a maior Super Poder\n*");
                                                            ResultadoComparacao1 = Superpoder1 > Superpoder2 ? 1 : 0;
                                                            break;
                                                            default:
                                                                printf("Caractere ou número digitado é invalido!\n");
                                                            break;
                                                        }
                            printf("Agora vamos escolher o segundo atributo(Por favor, escolha um atributo diferente do primeiro).\n");
                             printf("1 - Estado mais populoso.\n");
                             printf("2 - Estado com a maior Área em Km². \n");
                             printf("3 - Estado com o maior PIB. \n");
                             printf("4 - Estado com a menor Dencidade demografica. \n");
                             printf("5 - Estado com o maior múmero de pontos turisticos. \n");
                             printf("6 - Estado com o maior Super poder. \n");
                                printf("Digite o numero referente ao atributo de sua escolha: ");
                            scanf("%d", &AtributoComparacao2);
                                            if (AtributoComparacao1 == AtributoComparacao2){
                                                printf("Você escolheu o mesmo atributo mais de uma vez!! Por favor reinicie o programa.");
                                            } else {
                                                switch (AtributoComparacao2){
                                                      case 1:
                                                                printf("O tributo escolhido foi *O estado mais populoso*\n");
                                                            ResultadoComparacao2 = Populacao1 > Populacao2 ? 1 : 0;
                                                            break;
                                                            case 2:
                                                                printf("O Atributo escolhido foi *O estado com a maior area em km²*\n");
                                                            ResultadoComparacao2 = Area1 > Area2 ? 1 : 0;
                                                            break;
                                                            case 3:
                                                                printf("O tributo escolhido foi *O estado com maior PIB*\n");
                                                            ResultadoComparacao2 = PIB1 > PIB2 ? 1 : 0;
                                                            break;
                                                            case 4:
                                                                printf("O Atributo escolhido foi *O estado com a menor densidade populacional*\n");
                                                            ResultadoComparacao2 = Densipopulacional1 < Densipopulacional2 ? 1 : 0;
                                                            break;
                                                            case 5:
                                                                printf("O tributo escolhido foi *O estado mais pontos turisticos*\n");
                                                            ResultadoComparacao2 = Pontos_turisticos1 > Pontos_turisticos2 ? 1 : 0;
                                                            break;
                                                            case 6:
                                                                printf("O Atributo escolhido foi *O estado com a maior Super Poder\n*");
                                                            ResultadoComparacao2 = Superpoder1 > Superpoder2 ? 1 : 0;
                                                            break;
                                                            default:
                                                                printf("Caractere ou número digitado é invalido!\n");
                                                            break;
                                                }
                                            }
                        printf("Agora escolher o terceiro atributo(Por favor, escolha um atributo diferente do 1° e 2° atributo).\n");
                             printf("1 - Estado mais populoso.\n");
                             printf("2 - Estado com a maior Área em Km². \n");
                             printf("3 - Estado com o maior PIB. \n");
                             printf("4 - Estado com a menor Dencidade demografica. \n");
                             printf("5 - Estado com o maior múmero de pontos turisticos. \n");
                             printf("6 - Estado com o maior Super poder. \n");
                                printf("Digite o numero referente ao atributo de sua escolha: ");
                            scanf("%d", &AtributoComparacao3);
                                            if ((AtributoComparacao2 == AtributoComparacao3)
                                            && (AtributoComparacao1 == AtributoComparacao3)){
                                                printf("Você escolheu o mesmo atributo mais de uma vez!! Por favor reinicie o programa.\n");
                                            } else {
                                                switch (AtributoComparacao3){
                                                      case 1:
                                                                printf("O tributo escolhido foi *O estado mais populoso*\n");
                                                            ResultadoComparacao3 = Populacao1 > Populacao2 ? 1 : 0;
                                                            break;
                                                            case 2:
                                                                printf("O Atributo escolhido foi *O estado com a maior area em km²*\n");
                                                            ResultadoComparacao3 = Area1 > Area2 ? 1 : 0;
                                                            break;
                                                            case 3:
                                                                printf("O tributo escolhido foi *O estado com maior PIB*\n");
                                                            ResultadoComparacao3 = PIB1 > PIB2 ? 1 : 0;
                                                            break;
                                                            case 4:
                                                                printf("O Atributo escolhido foi *O estado com a menor densidade populacional*\n");
                                                            ResultadoComparacao3 = Densipopulacional1 < Densipopulacional2 ? 1 : 0;
                                                            break;
                                                            case 5:
                                                                printf("O tributo escolhido foi *O estado mais pontos turisticos*\n");
                                                            ResultadoComparacao3 = Pontos_turisticos1 > Pontos_turisticos2 ? 1 : 0;
                                                            break;
                                                            case 6:
                                                                printf("O Atributo escolhido foi *O estado com a maior Super Poder\n*");
                                                            ResultadoComparacao3 = Superpoder1 > Superpoder2 ? 1 : 0;
                                                            break;
                                                            default:
                                                                printf("Caractere ou número digitado é invalido!\n");
                                                            break;
                                                            }
                                            }
                                printf("E por fim, vamos escolher o quarto atributo(Por favor, escolha um atributo diferente do 1° ,2° e 3° atributo).\n");
                             printf("1 - Estado mais populoso.\n");
                             printf("2 - Estado com a maior Área em Km². \n");
                             printf("3 - Estado com o maior PIB. \n");
                             printf("4 - Estado com a menor Dencidade demografica. \n");
                             printf("5 - Estado com o maior múmero de pontos turisticos. \n");
                             printf("6 - Estado com o maior Super poder. \n");
                                printf("Digite o numero referente ao atributo de sua escolha: ");
                            scanf("%d", &AtributoComparacao4);
                                            if ((AtributoComparacao1 == AtributoComparacao4)
                                            && (AtributoComparacao3 == AtributoComparacao4)
                                            && (AtributoComparacao2 == AtributoComparacao4)){
                                                printf("Você escolheu o mesmo atributo mais de uma vez!! Por favor reinicie o programa.");
                                            } else {
                                                switch (AtributoComparacao4){
                                                      case 1:
                                                                printf("O tributo escolhido foi *O estado mais populoso*\n");
                                                            ResultadoComparacao4 = Populacao1 > Populacao2 ? 1 : 0;
                                                            break;
                                                            case 2:
                                                                printf("O Atributo escolhido foi *O estado com a maior area em km²*\n");
                                                            ResultadoComparacao4 = Area1 > Area2 ? 1 : 0;
                                                            break;
                                                            case 3:
                                                                printf("O tributo escolhido foi *O estado com maior PIB*\n");
                                                            ResultadoComparacao4 = PIB1 > PIB2 ? 1 : 0;
                                                            break;
                                                            case 4:
                                                                printf("O Atributo escolhido foi *O estado com a menor densidade populacional*\n");
                                                            ResultadoComparacao4 = Densipopulacional1 < Densipopulacional2 ? 1 : 0;
                                                            break;
                                                            case 5:
                                                                printf("O tributo escolhido foi *O estado mais pontos turisticos*\n");
                                                            ResultadoComparacao4 = Pontos_turisticos1 > Pontos_turisticos2 ? 1 : 0;
                                                            break;
                                                            case 6:
                                                                printf("O Atributo escolhido foi *O estado com a maior Super Poder\n*");
                                                            ResultadoComparacao4 = Superpoder1 > Superpoder2 ? 1 : 0;
                                                            break;
                                                            default:
                                                                printf("Caractere ou número digitado é invalido!\n");
                                                            break;
                                                            }
                                                            }
                                        //Nome do estado de cada carta 
                    printf("\n\n\n***Exibindo das informações das cartas...***\n\n");
                    printf("\n *** Impressão das cartas *** \n");
                                                            // carta 1
                                    printf("Estado da carta 1: %s\n", Estado1);
                                    printf("Código: %s\n", Codigo1);
                                    printf("Nome da Cidade da carta 1: %s\n", Cidade1);
                                                            // carta 2 
                                    printf("Estado da carta 2: %s\n", Estado2);
                                    printf("Código: %s\n", Codigo2);
                                    printf("Nome da Cidade da carta 2: %s\n", Cidade2);


                    //Os quatro atributos usados para fazer a comparação
                                                           
                        switch (AtributoComparacao1){
                        case 1 : SomaCarta1 += Populacao1; SomaCarta2 += Populacao2; printf("Atributo 1: Pupalação\n"); break;
                        case 2 : SomaCarta1 += Area1; SomaCarta2 += Area2; printf("Atributo 1: Área\n"); break;
                        case 3 : SomaCarta1 += PIB1; SomaCarta2 += PIB2; printf("Atributo 1: PIB\n"); break;
                        case 4 : SomaCarta1 += Densipopulacional1; SomaCarta2 += Densipopulacional2; printf("Atributo 1: Densidade Populacional\n"); break;
                        case 5 : SomaCarta1 += Densipopulacional1; SomaCarta2 += Densipopulacional2; printf("Atributo 1: Pontos Turiticos\n"); break;
                        case 6 : printf("Atributo 1: Super Poder\n"); break;}

                        switch (AtributoComparacao2){
                         case 1 : SomaCarta1 += Populacao1; SomaCarta2 += Populacao2; printf("Atributo 2: Pupalação\n"); break;
                        case 2 : SomaCarta1 += Area1; SomaCarta2 += Area2; printf("Atributo 2: Área\n"); break;
                        case 3 : SomaCarta1 += PIB1; SomaCarta2 += PIB2; printf("Atributo 2: PIB\n"); break;
                        case 4 : SomaCarta1 += Densipopulacional1; SomaCarta2 += Densipopulacional2; printf("Atributo 2: Densidade Populacional\n"); break;
                        case 5 : SomaCarta1 += Densipopulacional1; SomaCarta2 += Densipopulacional2; printf("Atributo 2: Pontos Turiticos\n"); break;
                        case 6 : printf("Atributo 2: Super Poder\n"); break;}

                        switch (AtributoComparacao3){
                        case 1 : SomaCarta1 += Populacao1; SomaCarta2 += Populacao2; printf("Atributo 3: Pupalação\n"); break;
                        case 2 : SomaCarta1 += Area1; SomaCarta2 += Area2; printf("Atributo 3: Área\n"); break;
                        case 3 : SomaCarta1 += PIB1; SomaCarta2 += PIB2; printf("Atributo 3: PIB\n"); break;
                        case 4 : SomaCarta1 += Densipopulacional1; SomaCarta2 += Densipopulacional2; printf("Atributo 3: Densidade Populacional\n"); break;
                        case 5 : SomaCarta1 += Densipopulacional1; SomaCarta2 += Densipopulacional2; printf("Atributo 3: Pontos Turiticos\n"); break;
                        case 6 : printf("Atributo 3: Super Poder\n"); break;}

                        switch (AtributoComparacao4){
                         case 1 : SomaCarta1 += Populacao1; SomaCarta2 += Populacao2; printf("Atributo 4: Pupalação\n"); break;
                        case 2 : SomaCarta1 += Area1; SomaCarta2 += Area2; printf("Atributo 4: Área\n"); break;
                        case 3 : SomaCarta1 += PIB1; SomaCarta2 += PIB2; printf("Atributo 4: PIB\n"); break;
                        case 4 : SomaCarta1 += Densipopulacional1; SomaCarta2 += Densipopulacional2; printf("Atributo 4: Densidade Populacional\n"); break;
                        case 5 : SomaCarta1 += Densipopulacional1; SomaCarta2 += Densipopulacional2; printf("Atributo 4: Pontos Turiticos\n"); break;
                        case 6 : printf("Atributo 4: Super Poder\n"); break;}
                        // Exibição das informaçõe das cartas
                    
                     // impressão da carta 1
                                    
                                    printf("\n\n      *** Carta 1 ***\n");
                                    printf("População: %lu\n", Populacao1);
                                    printf("Área: %.2f Km²\n", Area1);
                                    printf("PIB: %.2f\n", PIB1);
                                    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos1);
                                    printf("Densidade Populacional: %.2f hab/km²\n", Densipopulacional1);
                                    printf("PIB per Capita: %.2f reais\n", PIBpercapita1);
                                                // espaço entre as cartas 
                                    printf("\n-------------------------\n");
                                                // impressão da carta 2
                                    printf("\n      *** Carta 2 ***\n");
                                    printf("População: %lu\n", Populacao2);
                                    printf("Área: %.2f Km²\n", Area2);
                                    printf("PIB: %.2f\n", PIB2);
                                    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos2);
                                    printf("Densidade Populacional: %.2f hab/km²\n", Densipopulacional2);
                                    printf("PIB per Capita: %.2f reais\n\n", PIBpercapita2);

                    // soma dos atributos de cada carta

                    printf("Soma dos atributos escolhidos para a carta 1: %lld\n", SomaCarta1);
                    printf("Soma dos atributos escolhidos para a carta 2: %lld\n", SomaCarta2);

                        
                                    // Exibição de qual carta ganhou (ou e houve empate)
                        if ((ResultadoComparacao1 == 1 && ResultadoComparacao2 == 1) && (ResultadoComparacao3 == 1 && ResultadoComparacao4 == 1)){
                            printf("Parabéns, Carta 1 ganhou em todos os atributos!");
                        } else if ((ResultadoComparacao1 == 1 && ResultadoComparacao2 == 1) && (ResultadoComparacao3 != ResultadoComparacao4)){
                            printf("Parabéns, Carta 1 ganhou em 3 atributo!");
                        } else if ((ResultadoComparacao1 != ResultadoComparacao2) && (ResultadoComparacao3 == 1 && ResultadoComparacao4 == 1)){                       
                          printf("Parabéns, Carta 1 ganhou em 3 atributo!");
                        } else if ((ResultadoComparacao1 != ResultadoComparacao2) && (ResultadoComparacao3 != ResultadoComparacao4)){
                            printf("Ambas as cartas fizeram dois pontos, logo houve um empate!!");
                        } else if ((ResultadoComparacao1 == 0 && ResultadoComparacao2 == 0) && (ResultadoComparacao3 == 0 && ResultadoComparacao4 == 0)){
                            printf("Parabéns, Carta 2 ganhou em todos os atributos!");
                        } else if ((ResultadoComparacao1 == 0 && ResultadoComparacao2 == 0) && (ResultadoComparacao3 != ResultadoComparacao4)){
                            printf("Parabéns, Carta 2 ganhou em 3 atributo!\n\n");
                        } else {
                            printf("Parabéns, carta 2 ganhou em 3 atributo!!\n\n");
                        }
                        
                            
                        
return 0;                            
}