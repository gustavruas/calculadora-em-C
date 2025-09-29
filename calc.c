#include <stdio.h>
#include <math.h> 
#include <stdlib.h> // Malloc e e free; vulgo, funções para controle de memória

// As funções não devem ter apenas dois números XD
// Double não tem os mesmos problemas de float, isso pq double tem mais memória que o float

int *array; // Aponta pro endereço da memória, famoso ponteiro
int tamanho; // Define o tamanho que será mudado, tornando o array dinamico

int ab32(){
    int soma = 0;
    printf("Tamanho do array:");
    scanf("%d", &tamanho); // pede o tamanho do array para o usuário

    array = (int *) malloc(tamanho * sizeof(int)); // Alocação dinamica de memoria, aprofundar em malloc

    if(array == NULL){
        printf("Erro ao alocar memoria. \n");
        return 1; // Botar return 1 quando for indicar algum erro, na estrutura if + printf + return 1
    }
    printf("Digite %d elementos:\n ",tamanho);
}

void soma(){
    int res = 0;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i + 1); // o %d é qualquer decimal que será representado depois da vírgula
        scanf("%d", &array[i]); // Não entendi o "&"
        res += array[i]; // Soma os elementos à soma, um por um
    }

    printf("Soma = %d\n", res);
    free(array); // Libera memória
}

void subtrair(){
    int res = 0;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
        res -= array[i]; // subtrai os elementos à soma, um por um
    }

    printf("Subtracao = %d", res);
    free(array);
}

void multiplicar(){
    int res = 0;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d ", i + 1);
        scanf("%d", &array[i]);
        res *= array[i]; 
    }
    printf("Multiplicacao = %d", res);
    free(array);
}

void dividir(){
    int res = 0;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d ", i + 1);
        scanf("%d", &array[i]);
        res /= array[i];
    }
    printf("Divisao = %d", res);
    free(array);
}

void porcentagem(){
    int res = 0;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d ", i + 1);
        scanf("%d", &array[i]);
        res /= array[i]; // Arrumar
    }
    printf("Porcentagem = %d", res);
    free(array);
}

void menu(){
    int escolha; 
    
    printf("Selecione uma funcao:");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        soma();
        break;
    case 2:
        subtrair();
        break;
    case 3:
        multiplicar();
        break;
    case 4:
        dividir();
        break;
    default:
        printf("Selecione alguma funcao do menu!\n");
        menu();
        break;
    }
}

int main(){
    // O arquivo de vdd já foi criado, esse arquivo é de teste para criar funções matemáticas
    menu();
    return 0;
}