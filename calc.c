#include <stdio.h>
#include <math.h> 
#include <stdlib.h> // Malloc e e free; vulgo, funções para controle de memória

// As funções não devem ter apenas dois números XD
// Double não tem os mesmos problemas de float, isso pq double tem mais memória que o float
// Tem que usar for, while e/ou do-while no código, só lembrando

// Dar um jeito de usar o array para juntar funções

int *array; // Aponta pro endereço da memória, famoso ponteiro
int tamanho; // Define o tamanho que será mudado, tornando o array dinamico

int ab32(){
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
        // res -= array[i]; // subtrai os elementos à soma, um por um
    }

    printf("Subtracao = %lf", res);
    free(array);
}

void multiplicar(){
    double res = 0;
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
    double res = 0;
    ab32();
    for(int i = 0; i < tamanho; i++){
        printf("Elemento %d ", i + 1);
        scanf("%d", &array[i]);
        res /= array[i];
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
    scanf("%lf", a);
    printf("Expoente");
    scanf("%lf", b);
    res = pow(a,b);
    printf("Resultado:%lf", res);
    // Tentar fazer sem a biblioteca
}
void raiz2(){
    double res;
    double a;
    printf("Base:");
    scanf("%lf", a);
    res = pow(a, 0.5);
    printf("Resultado:%lf", res);
}
void raiz3(){
    double res;
    double a;
    double b = 0.33333;
    printf("Base:");
    scanf("%lf", a);
    res = pow(a, b);
    printf("Resultado:%lf", res);
    // Consertar o fato de não conseguir usar 1/3 como expoente
}
void potenciareversa(){
    double res;
    double a;
    double b;
    printf("Base:");
    scanf("%lf", a);
    printf("Expoente:");
    scanf("%lf", &b);
    res = pow(a, -b);
    printf("Resultado:%lf", res);
}
void fatorial(){
    double res;
    int a;
    printf("Selecione um numero");
    scanf("%lf", a);
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
    printf("Selecione o angulo:");
    scanf("%lf", angulo);
    // Transformar o angulo em radianos, visto que, a função seno só funciona com eles.
    sin(angulo);
}
void c0s(){
    double angulo;
    double res;
    printf("Selecione o angulo:");
    scanf("%lf", angulo);
    res = cos(angulo);
    printf("%lf", res);
}
void t4n(){
    double angulo;
    double res;
    printf("Selecione o angulo:");
    scanf("%lf", angulo);
    res = tan(angulo);
    printf("%lf", res);
}
void secante(){
    double angulo;
    double res;
    printf("Selecione o angulo:");
    scanf("%lf", angulo);
    res = 1/sin(angulo); 
}
void cossecante(){
    double angulo;
    double res;
    printf("Selecione o angulo:");
    scanf("%lf", angulo);
    res = 1/cos(angulo); 
}
void contangente(){
    double angulo;
    double res;
    printf("Selecione o angulo:");
    scanf("%lf", angulo);
    res = 1/tan(angulo); 
}
void logaritmo(){
    double base;
    double numero;
    double res;
    printf("Selecione a base:");
    scanf("%lf", base);
    printf("Selecione o numero:");
    scanf("%lf", numero);
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
    scanf("%lf", numero);
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
    double a;
    double res = abs(a);
    printf("O valor absoluto de %lf eh %lf", a, res);
}
void dezElevadoaX(){
    // Verificar se um NUMERO foi selecionado
    double expoente;
    printf("10 elevado a qual numero:");
    scanf("%lf", expoente);
    double res = pow(10, expoente);
}
void vezesEuler(){
    double a;
    printf("Escolha um numero");
    scanf("%lf", a);
    double res = a*exp(1);
}
void EulerElevado(){
    double a;
    printf("Escolha um expoente");
    scanf("%lf", a);
    double res = exp(a);
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
        break;
    case 24:
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