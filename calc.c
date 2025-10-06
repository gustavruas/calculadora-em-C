#include <stdio.h>
#include <math.h> 
#include <stdlib.h> // Malloc e e free; vulgo, funções para controle de memória

#define PI 3.14159265

// Definir testes para o código, verificar se o input e válido e resultados esperados

// Dar um jeito de usar o array para juntar funções

int *array; // Aponta pro endereço da memória, famoso ponteiro
int tamanho; // Define o tamanho que será mudado, tornando o array dinamico

int ab32(){
    printf("Tamanho do array:");
    scanf("%d", &tamanho); // pede o tamanho do array para o usuário
    if(tamanho < 0 || tamanho == 0){
        printf("Selecione um tamanho maior que 0");
        return 1;
    } else{
    array = (int *) malloc(tamanho * sizeof(int)); // Alocação dinamica de memoria, aprofundar em malloc

    if(array == NULL){
        printf("Erro ao alocar memoria. \n");
        return 1; // Botar return 1 quando for indicar algum erro, na estrutura if + printf + return 1
    }
    printf("Digite %d elementos:\n ",tamanho);
}}

void soma(){
    double res = 0;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i + 1); // o %d é qualquer decimal que será representado depois da vírgula
        scanf("%d", &array[i]); // Não entendi o "&"
        res += array[i]; // Soma os elementos à soma, um por um
    }

    printf("Soma = %lf\n", res);
    free(array); // Libera memória
}

void subtrair(){
    double res = 0;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
        res -= array[i]; // subtrai os elementos à soma, um por um
    }

    printf("Subtracao = %lf", res);
    free(array);
}

void multiplicar(){
    double res = 1;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d ", i + 1);
        scanf("%d", &array[i]);
        res *= array[i]; 
    }
    printf("Multiplicacao = %lf", res);
    free(array);
}

void dividir(){
    ab32();
    double res = array[0]; // Definindo como primeiro item pra ficar como input/input ao invés de 1/input/input...
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d ", i + 1);
        scanf("%d", &array[i]);
        if(array[i] == 0){
            printf("Não divida por zero.");
        } else{
        res /= array[i];
        }
    }
    printf("Divisao = %lf", res);
    free(array);
}

void porcentagem(){
    double res;
    double a;
    double b;
    printf("Primeiro numero:\n");
    scanf("%lf", &a);
    printf("Segundo numero:\n");
    scanf("%lf", &b);
    res = a*b/100;
    printf("Resultado:%lf", res);
}
void potencia(){
    double res;
    double a;
    double b;
    printf("Base:\n");
    scanf("%lf", &a);
    printf("Expoente");
    scanf("%lf", &b);
    res = pow(a,b);
    printf("Resultado:%lf", res);
    // Tentar fazer sem a biblioteca
}
void raiz2(){
    double res;
    double a;
    printf("Base:");
    scanf("%lf", &a);
    res = pow(a, 0.5);
    if(a < 0){
        printf("Nao trataremos numeros complexos ou strings");
    } else{
    printf("Resultado:%lf", res);
    }
}
void raiz3(){
    double res;
    double a;
    double b = 1.0/3.0;
    printf("Base:");
    scanf("%lf", &a);
    if(a < 0){
        printf("Nao trataremos numeros complexos ou strings");
    } else {
    res = pow(a, b);
    printf("Resultado:%lf", res);
    }
}
void potenciareversa(){
    // Add verificação se a ou b não são strings
    double res;
    double a;
    double b;
    printf("Base:");
    scanf("%lf", &a);
    printf("Expoente:");
    scanf("%lf", &b);
    res = pow(a, -b);
    printf("Resultado:%lf", res);
}
void fatorial(){
    double res;
    int a;
    printf("Selecione um numero");
    scanf("%d", &a);
    res = tgamma(a+1);
    if (a < 0){
        printf("Fatorial nao eh feito pra numeros negativos");
    }
    else{
    printf("Fatorial de %d é: %lf\n", a, res);
    }
}

void s3n(){
    double angulo;
    double res;
    double c;
    printf("Selecione o angulo:");
    scanf("%lf", &angulo);
    res = angulo/PI; // Definindo radianos
    c = sin(res);
    printf("%lf",c);
}
void c0s(){
    double angulo;
    double res;
    double c;
    printf("Selecione o angulo:");
    scanf("%lf", &angulo);
    res = angulo/PI; // Definindo radianos
    c = cos(res);
    printf("%lf",c);
}
void t4n(){
    double angulo;
    double res;
    double c;
    printf("Selecione o angulo:");
    scanf("%lf", &angulo);
    res = angulo/PI; // Definindo radianos
    c = tan(res);
    printf("%lf",c);
}
void secante(){
    double angulo;
    double res;
    double c;
    printf("Selecione o angulo:");
    scanf("%lf", &angulo);
    res = angulo/PI; // Definindo radianos
    c = 1/sin(res);
    printf("%lf",c);
}
void cossecante(){
    double angulo;
    double res;
    double c;
    printf("Selecione o angulo:");
    scanf("%lf", &angulo);
    res = angulo/PI; // Definindo radianos
    c = 1/cos(res);
    printf("%lf",c);
}
void contangente(){
    double angulo;
    double res;
    double c;
    printf("Selecione o angulo:");
    scanf("%lf", &angulo);
    res = angulo/PI; // Definindo radianos
    c = 1/tan(res);
    printf("%lf",c);
}
void logaritmo(){
    double base;
    double numero;
    double res;
    printf("Selecione a base:");
    scanf("%lf", &base);
    printf("Selecione o numero:");
    scanf("%lf", &numero);
    if(base > 1 && numero > 1){
        res = log(numero) / log(base);
    }
    else{
        printf("Input invalido(string ou num negativo)");
        logaritmo();
    }
}
void log_natural(){
    double numero;
    double res;
    printf("Selecione o numero:");
    scanf("%lf", &numero);
    if(numero > 1){
    res = log(numero);
    printf("%lf", res);
    }
    else{
        printf("Selecione um input valido(Erro por string ou por numero negativo)");
        log_natural();
    }
}
void modulo(){
    int a;
    printf("Selecione um numero:");
    scanf("%d", &a);
    if (a > 0 || a < 0 || a==0){
      int res = abs(a);
      printf("O valor absoluto de %d eh %d", a, res);
    } else {
        printf("Numero invalido");
    }
}
void dezElevadoaX(){
    // Verificar se um NUMERO foi selecionado
    double expoente;
    printf("10 elevado a qual numero:");
    scanf("%lf", &expoente);
    double res = pow(10, expoente);
    printf("%lf", res);
}
void vezesEuler(){
    double a;
    printf("Escolha um numero");
    scanf("%lf", &a);
    double res = a*exp(1);
    printf("%lf", res);
}
void EulerElevado(){
    double a;
    printf("Escolha um expoente");
    scanf("%lf", &a);
    double res = exp(a);
    printf("%lf", res);
}

void media(){
    double res;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d ", i + 1);
        scanf("%d", &array[i]);
           res += array[i]; 
     }    
     double d = res/tamanho;
     printf("%lf", d);
}

void maximo(){
    ab32();
    int max_val = array[0];
    for(int i = 1; i < tamanho; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
        if(array[i] > max_val){
            max_val = array[i];
        }
    }
    printf("O valor maximo eh: %d\n", max_val);
    free(array);
}

void menu(){
    int escolha; 
        printf("\n+-------------------------------------------------------------+\n");
        printf("|  1. Soma           |  2. Subtrair      |  3. Multiplicar    |\n");
        printf("|  4. Dividir        |  5. Porcentagem   |  6. Potencia       |\n");
        printf("|  7. Raiz quadrada  |  8. Raiz cubica   |  9. Pot. reversa   |\n");
        printf("| 10. Fatorial       | 11. Seno          | 12. Cosseno        |\n");
        printf("| 13. Tangente       | 14. Secante       | 15. Cossecante     |\n");
        printf("| 16. Cotangente     | 17. Log base N    | 18. Log natural    |\n");
        printf("| 19. Modulo         | 20. 10^X          | 21. X * Euler      |\n");
        printf("| 22. Euler^X        | 23. Media         | 24. Max            |\n");
        printf("|                    0. Sair                                  |\n");
        printf("+-------------------------------------------------------------+\n");
        
        printf("Escolha uma opcao:");        

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
    case 5:
        porcentagem();
        break;
    case 6:
        potencia();
        break;
    case 7:
        raiz2();
        break;
    case 8:
        raiz3();
        break;
    case 9:
        potenciareversa();
        break;
    case 10:
        fatorial();
        break;
    case 11:
        s3n();
        break;
    case 12:
        c0s();
        break;
    case 13:
        t4n();
        break;
    case 14:
        secante();
        break;
    case 15:
        cossecante();
        break;
    case 16:
        contangente();
        break;
    case 17:
        logaritmo();
        break;
    case 18:
        log_natural();
        break;
    case 19:
        modulo();
        break;
    case 20:
        dezElevadoaX();
        break;
    case 21:
        vezesEuler();
        break;
    case 22:
        EulerElevado();
        break;
    case 23:
        media();
        break;
    case 24:
        maximo();
        break;
    default:
        printf("Selecione alguma funcao do menu! Fechando programa.\n");
        break;
    }
}

int main(){
    menu();
    return 0;
}