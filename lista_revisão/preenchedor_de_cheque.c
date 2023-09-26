#include <stdio.h>

void unidade (int inteiro);

int main(){
    int casos; //numero de casos de teste
    int i, temp, inteiro, decimal, milhoes, resto, centenas;
    float num;

    scanf("%d", &casos);

    for(i=0;i<casos;i++){
        scanf("%f", &num);

        inteiro = (int) num;
        decimal = (int) (num * 100) % 100;

        if(inteiro > 1000000){
            milhoes = inteiro / 1000000;
            resto = inteiro % 1000000;

            unidade(milhoes);

        }
        else if (inteiro > 1000){

        }
    }

    return 0;
}

void unidade (int inteiro){
    int dezena, unidade;

        if(inteiro > 100){
            switch (inteiro){
                case 1:
                    printf("CENTO");
                    break;
                case 2:
                    printf("DUZENTOS");
                    break;
                case 3:
                    printf("TREZENTOS");
                    break;
                case 4:
                    printf("QUATROCENTOS");
                    break;
                case 5:
                    printf("QUINHETOS");
                    break;
                case 6: 
                    printf("SEICENTOS");
                    break;
                case 7:
                    printf("SETECENTOS");
                    break;
                case 8:
                    printf("OITOCENTOS");
                    break;
                case 9:
                    printf("NOVECENTOS");
                    break;
            }
        }

        if(inteiro > 20 && inteiro < 100){
            dezena = inteiro / 10;
            unidade = inteiro % 10;

            switch (inteiro){
                case 2:
                    printf("VINTE");
                    break;
                case 3:
                    printf("TRINTA");
                    break;
                case 4:
                    printf("QUARENTA");
                    break;
                case 5:
                    printf("CINQUENTA");
                    break;
                case 6:
                    printf("SESSENTA");
                    break;
                case 7:
                    printf("SETENTA");
                    break;
                case 8:
                    printf("OITENTA");
                    break;
                case 9:
                    printf("NOVENTA");
                    break;
                default:
                    break;
            }
        }
    }

    if (inteiro < 20){
        switch (inteiro){
            case 1:
                printf("UM");
                break;
            case 2:
                printf("DOIS");
                break;
            case 3:
                printf("TRES");
                break;
            case 4:
                printf("QUATRO");
                break;
            case 5:
                printf("CINCO");
                break;
            case 6:
                printf("SEIS");
                break;
            case 7:
                printf("SETE");
                break;
            case 8:
                printf("OITO");
                break;
            case 9:
                printf("NOVE");
                break;
            case 10:
                printf("DEZ");
                break;
            case 11:
                printf("ONZE");
                break;
            case 12:
                printf("DOZE");
                break;
            case 13:
                printf("TREZE");
                break;
            case 14:
                printf("CATORZE");
                break;
            case 15:
                printf("QUINZE");
                break;
            case 16:
                 printf("DEZESSEIS");
                break;
            case 17:
                printf("DEZESSETE");
                break;
            case 18:
                printf("DEZOITO");
                break;
            case 19:
                printf("DEZENOVE");
                break;
            default:
                break;
        }
    }