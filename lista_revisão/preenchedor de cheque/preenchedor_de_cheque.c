
#include <stdio.h>

void unidade (int inteiro);

int main(){
    int casos; //numero de casos de teste
    int i, inteiro, decimal, milhoes, resto, milhares;
    float num;
    
    scanf("%d", &casos);
    
    for(i=0;i<casos;i++){
        scanf("%f", &num);

        inteiro = (int) num;
        decimal = (int) (num * 100) % 100;
        
        if (inteiro == 0 && decimal > 0) {
            unidade(decimal);
            if (decimal == 1) {
                printf("CENTAVO\n");
            } else {
                printf("CENTAVOS\n");
            }
        } else {
            if(inteiro == 1 || inteiro == 100 || inteiro == 1000 || inteiro == 1000000 ){
                switch (inteiro) {
                    case 1:
                        printf("UM REAL");
                        break;
                    case 100:
                        printf("CEM REAIS");
                        break;
                    case 1000:
                        printf("MIL REAIS");
                        break;
                    case 1000000:
                        printf("UM MILHÃO");
                    default:
                        break;
                }
                printf(" ");
                if (decimal > 0){
                    printf("E ");
                    
                    unidade(decimal);
                    
                    if (decimal == 1){
                        printf("CENTAVO ");
                        printf("\n");
                    } else {
                        printf("CENTAVOS ");
                        printf("\n");
                    }
                } else {
                    printf("\n");
                }
            } else {
                
                
                if(inteiro > 1000000){
                    milhoes = inteiro / 1000000;
                    resto = inteiro % 1000000;
                    
                    unidade(milhoes);
                    
                    printf("MILHOES ");
                    
                } else {
                    resto = inteiro;
                }
                if(resto > 1000){
                    milhares = resto / 1000;
                    resto = inteiro % 1000;
                    
                    unidade(milhares);
                    
                    printf("MIL ");
                    if(resto > 0){
                        printf("E ");
                    }
                }
                
                unidade(resto);
                
                }
                if(decimal == 0){
                    printf("\n");
                }
                
                if (decimal > 0){
                    printf("REAIS ");
                    printf("E ");
                    
                    unidade(decimal);
                    
                    if (decimal == 1){
                        printf("CENTAVO ");
                        printf("\n");
                    } else {
                        printf("CENTAVOS ");
                        printf("\n");
                    }
                    printf("\n");
                } else {
                    printf("REAIS ");
                }
            }
            
            
        }
            
    return 0;
}
    void unidade (int inteiro){
        int dezena, centenas;
        
        if(inteiro > 100){
            centenas = inteiro/100;
            inteiro = inteiro % 100;
            switch (centenas){
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
            printf(" ");
            if (inteiro > 0){
                printf("E ");
            }
        }
        
        if(inteiro >= 20 && inteiro < 100){
            dezena = inteiro / 10;
            inteiro = inteiro % 10;
            
            switch (dezena){
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
            printf(" ");
            if (inteiro > 0){
                printf("E ");
            }
        }
        
        if(inteiro < 20){
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
            printf(" ");
        }
    }

