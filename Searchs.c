#include <stdio.h>

//by: Enzo Maldinni Montanha Rodrigues

//inserts a int in the vector 1
void caso1(int *v1){
    printf("Digite os valores do vetor 1:\n");
    for(int i = 0; i < 8; i++){
        printf("Digite o valor da posição %d:\n", i);
        scanf("%d", &v1[i]);
    }
}
//inserts a int in the vector 2
void caso2(int *v1){
    printf("Digite os valores do vetor 2:\n");
    for(int i = 0; i < 8; i++){
        printf("Digite o valor da posição %d:\n", i);
        scanf("%d", &v1[i]);
    }
}
//does the sequential search in vector 1
int caso3(int *v1){
    int x;
    printf("Qual número deseja buscar?\n");
    scanf("%d", &x);
    printf("Realizando a busca sequencial do vetor 1:\n");
    for(int i = 0; i < 8; i++){
        if(x == v1[i]){
            return 1;
        }
    }
    return 0;
}
//binary search
int caso4(int *v2, int x, int n){
    int sup, inf, m;
    inf = 0;
    sup = n-1;

    while(inf <= sup){
        m = (inf+sup)/2;
        if(x == v2[m]){
            return 1;
        }
        if(x < v2[m]){
            sup = m-1;
        }else{
            inf = m+1;
        }
    }
    return 0;
}
//print all vector 1 values
void caso5(int *v1){
    printf("Imprimindo todos os valores do vetor 1:\n");
    for(int i = 0; i < 8; i++){
        printf("Posição %d: %d\n", i, v1[i]);
    }
}
//print all vector 2 values
void caso6(int *v1){
    printf("Imprimindo todos os valores do vetor 2:\n");
    for(int i = 0; i < 8; i++){
        printf("Posição %d: %d\n", i, v1[i]);
    }
}

int main(){
    int opcao, v1[8], v2[8];
    int x;

    do{
        printf("Digite o número relacionado para prosseguir:\n");
        printf("1 - Preencher vetor 1\n");
        printf("2 - Preencher vetor 2\n");
        printf("3 - Busca sequencial(vetor 1)\n");
        printf("4 - Busca binária(vetor 2)\n");
        printf("5 - Imprimir vetor 1\n");
        printf("6 - Imprimir vetor 2\n");
        printf("7 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            caso1(v1);
            break;
        case 2:
            caso2(v2);
            break;
        case 3:
            if(caso3(v1)){
                printf("O número existe!\n");
            }else{
                printf("O número não existe!\n");
            }
            break;
        case 4:
            printf("Qual número deseja buscar?\n");
            scanf("%d", &x);

            if(caso4(v2, x, 8)){
                printf("O número existe!\n");
            }else{
                printf("O número não existe!\n");
            }
            break;
        case 5:
            caso5(v1);
            break;
        case 6:
            caso6(v2);
        default:
            break;
        }
    }while(opcao != 7);
}