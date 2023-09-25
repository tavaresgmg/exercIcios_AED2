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
    if (inteiro > 1000){
        if ((inteiro / 1000) == 9000)
    }
    else if (inteiro > 100){

    }
    else if (inteiro > 10){

    }

    switch (){
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
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            break;
        case 14:
            break;
        case 15:
            break;
        case 16:
            break;
        case 17:
            break;
        case 18:
            break;
        case 19:
            break;
        default:
            break;
        }
        
    
    

    
        printf("CINCO");
        printf("SEIS");
        printf("SETE");
        printf("OITO");
        printf("NOVE");
        printf("DEZ");
        printf("ONZE");
        printf("DOZE");
        printf("TREZE");
        printf("CATORZE");
        printf("QUIZE");
        printf("DEZESSEIS");
        printf("DEZESSETE");
        printf("DEZOIT");
        printf("DEZENOVE");
        printf("VINTE");
        printf("TRINTA");
        printf("QUARENTA");
        printf("CINQUENTA");
        printf("SESSENTA");
        printf("SETENTA");
        printf("OITENTA");
        printf("NOVENTA");
        printf("CEM");
        printf("DUZENTOS");
        printf("TREZENTOS");
        printf("QUATROCENTOS");
        printf("QUINHETOS");
        printf("SEICENTOS");
        printf("SETECENTOS");
        printf("OITOCENTOS");
        printf("NOVECENTOS");
        printf("MIL");
}