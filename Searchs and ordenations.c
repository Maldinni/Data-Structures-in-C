#include <stdio.h>

//by: Enzo Maldinni Montanha Rodrigues

#define A 5
//inserts values in vector 1
void caso1(int *v1){
    printf("Digite os valores do vetor 1:\n");
    for(int i = 0; i < A; i++){
        printf("Digite o valor da posição %d:\n", i);
        scanf("%d", &v1[i]);
    }
}
//inserts values in vector 2
void caso2(int *v2){
    printf("Digite os valores do vetor 2:\n");
    for(int i = 0; i < A; i++){
        printf("Digite o valor da posição %d:\n", i);
        scanf("%d", &v2[i]);
    }
}
//inserts values in vector 3
void caso3(int *v3){
    printf("Digite os valores do vetor 3:\n");
    for(int i = 0; i < A; i++){
        printf("Digite o valor da posição %d:\n", i);
        scanf("%d", &v3[i]);
    }
}
//prints all vector 1 values
void caso4(int *v1){
    printf("Imprimindo todos os valores do vetor 1:\n");
    for(int i = 0; i < A; i++){
        printf("Posição %d: %d\n", i, v1[i]);
    }
}
//prints all vector 2 values
void caso5(int *v2){
    printf("Imprimindo todos os valores do vetor 2:\n");
    for(int i = 0; i < A; i++){
        printf("Posição %d: %d\n", i, v2[i]);
    }
}
//prints all vector 3 values
void caso6(int *v3){
    printf("Imprimindo todos os valores do vetor 3:\n");
    for(int i = 0; i < A; i++){
        printf("Posição %d: %d\n", i, v3[i]);
    }
}
//sequential search
int caso7(int *v1){
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
//bubbleSort
void caso8(int *v1){
    for(int i = 0; i < A; i++){
        for(int j = 0; j < A - i; j++){
            if(v1[j] > v1[j+1]){
                int y = v1[j];
                v1[j] = v1[j+1];
                v1[j+1] = y;
            }
        }
    }
}

int selMin(int *v, int i, int n){
    int j, k = i;
    for(j = i+1; j < n; j++){
        if(v[k] > v[j]){
            k = j;
        }
    }
    return k;
}
//selectionSort
void caso9(int *v2){
    int k, x;
    for(int i = 0; i < A - 1; i++){
        k = selMin(v2, i, A);
        x = v2[i];
        v2[i] = v2[k];
        v2[k] = x;
    }
}
//insertionSort
void caso10(int *v3){
    int atual;
    int j, i;
    for(i = 1; i < A; i++){
        atual = v3[i];
        	for (j = i - 1; (j >= 0) && (atual < v3[j]); j--) {
			    v3[j + 1] = v3[j];
            }
        v3[j+1] = atual;
	}
}
//binary search
int caso11(int *v2, int x, int n){
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

int main(){
    int opcao, v1[A], v2[A], v3[A];
    int x;

    do{
        printf("Digite o número relacionado para prosseguir:\n");
        printf("1 - Preencher vetor 1\n");
        printf("2 - Preencher vetor 2\n");
        printf("3 - Preencher vetor 3\n");
        printf("4 - Imprimir vetor 1\n");
        printf("5 - Imprimir vetor 2\n");
        printf("6 - Imprimir vetor 3\n");
        printf("7 - Busca sequencial(vetor 1)\n");
        printf("8 - Ordenação por trocas - bubbleSort(vetor 1)\n");
        printf("9 - Ordenação por seleção(vetor 2)\n");
        printf("10 - Ordenação por inserção(vetor 3)\n");
        printf("11 - Busca binária(vetor 2)\n");
        printf("12 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            caso1(v1);
            break;
        case 2:
            caso2(v2);
            break;
        case 3:
            caso3(v3);
            break;
        /*case 3:
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
            */
        case 4:
            caso4(v1);
            break;
        case 5:
            caso5(v2);
            break;
        case 6:
            caso6(v3);
            break;
        case 7:
            if(caso3(v1)){
                printf("O número existe!\n");
            }else{
                printf("O número não existe!\n");
            }
            break;;
        case 8:
            caso8(v1);
            break;
        case 9:
            caso9(v2);
            break;
        case 10:
            caso10(v3);
            break;
        case 11:
            printf("Qual número deseja buscar?\n");
            scanf("%d", &x);

            if(caso11(v3, x, A)){
                printf("O número existe!\n");
            }else{
                printf("O número não existe!\n");
            }
        default:
            break;
        }
    }while(opcao != 7);
}