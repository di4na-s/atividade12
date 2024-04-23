//Questão01
#include <stdio.h>
#include <stdlib.h>

int main(){
char str[20]= "Hello word";
printf("%s",str);
return 0;
}

//Questão02
#include <stdio.h>
#include <stdlib.h>
 int tamanhodastring(char *string);{
     int tamanho= 0;
 
  while(*string != '\0'){
    tamanho++;
    string++;
  }
  return tamanho;
  
 }

int main(){
    char str[100];
    printf("Digite uma palavra: ");
    scanf("%s",string);
    int len= tamanhodastring(string);
    printf("O tamanho da palvra é:%d", len);
    return 0;
}
//Questão 03 
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            printf("As strings são iguais.\n");
            return 0;
        }
        i++;
    }
    printf("As strings são diferentes.\n");
    return 0;
}
//Questão 04 
: #include <stdio.h>

int main() {
    char nome[50];
    printf("Digite um nome: ");
    scanf("%s", nome);
    printf("As 4 primeiras letras do nome são: %.4s\n", nome);
    return 0;
}
//Questão 05
#include <stdio.h>

int main() {
    char nome[50];
    int count = 0;
    printf("Digite um nome: ");
    scanf("%s", nome);
    while (nome[count] != '\0') {
        count++;
    }
    printf("O nome tem %d letras.\n", count);
    return 0;
}
//Questão 06
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[50], sexo;
    int idade;
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if ((sexo == 'F' || sexo == 'f') && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("NÃO ACEITA\n");
    }
    
    return 0;
}
//Questão 07
#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;
    printf("Digite uma string contendo 0's e 1's: ");
    scanf("%s", str);
    while (str[i] != '\0') {
        if (str[i] == '1') {
            count++;
        }
        i++;
    }
    printf("O número de 1's na string é: %d\n", count);
    return 0;
}
//Questão 08
#include <stdio.h>

int main() {
    char str[100];
    printf("Digite uma string contendo 0's e 1's: ");
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '0') {
            str[i] = '1';
        }
        i++;
    }
    printf("A string com as ocorrências de '0' substituídas por '1' é: %s\n", str);
    return 0;
}
//Questão 09
#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[50];
    printf("Digite um nome: ");
    scanf("%s", nome);
    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("%s\n", nome);
    }
    return 0;
}
//Questão 10
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("A palavra de trás para frente é: ");
    for (int i = strlen(palavra) - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");
    return 0;
}
//Questão 11
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[50], substituto;
    int count = 0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &substituto);
    
    for (int i = 0; i < strlen(palavra); i++) {
        char ch = tolower(palavra[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            palavra[i] = substituto;
            count++;
        }
    }
    
    printf("A palavra com as vogais substituídas é: %s\n", palavra);
    printf("O número de vogais substituídas é: %d\n", count);
    return 0;
}
//Questão 12
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int count = 0;
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            count++;
        }
    }
    printf("O número de caracteres brancos na frase é: %d\n", count);
    return 0;
}
//Questão 13
#include <stdio.h>
#include <string.h>

int main() {
    char palavra[51];
    printf("Digite uma palavra (máximo de 50 caracteres): ");
    scanf("%s", palavra);
    
    for (int i = 0; i < strlen(palavra); i++) {
        palavra[i]++;
    }
    
    printf("A palavra com 1 adicionado ao valor ASCII de cada caractere é: %s\n", palavra);
    return 0;
}
//Questão 14
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    
    printf("A string em maiúsculas é: %s\n", str);
    return 0;
}
//Questão 15
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite uma string em letras maiúsculas: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    
    printf("A string em letras minúsculas é: %s\n", str);
    return 0;
}
//Questão 16
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    int j = 0;
    
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ') {
            frase[j++] = frase[i];
        }
    }
    frase[j] = '\0';
    
    printf("A frase sem espaços em branco é: %s\n", frase);
    
    return 0;
}
//Questão 17
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], l1, l2;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite a letra a ser substituída: ");
    scanf(" %c", &l1);
    printf("Digite a letra substituta: ");
    scanf(" %c", &l2);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == l1) {
            str[i] = l2;
        }
    }

    printf("A nova string é: %s\n", str);
    return 0;
}
//Questão 18
#include <stdio.h>
#include <limits.h>
#include <string.h>

int main() {
    char nome[50], maisVelho[50], maisNovo[50];
    int idade, maisVelhoIdade = INT_MIN, maisNovoIdade = INT_MAX;

    while (1) {
        printf("Digite o primeiro nome (ou digite 'fim' para encerrar): ");
        scanf("%s", nome);
        if (strcmp(nome, "fim") == 0) {
            break;
        }
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade > maisVelhoIdade) {
            maisVelhoIdade = idade;
            strcpy(maisVelho, nome);
        }
        if (idade < maisNovoIdade) {
            maisNovoIdade = idade;
            strcpy(maisNovo, nome);
        }
    }

    printf("Pessoa mais velha: %s, idade: %d\n", maisVelho, maisVelhoIdade);
    printf("Pessoa mais nova: %s, idade: %d\n", maisNovo, maisNovoIdade);
    return 0;
}
//Questão 19
#include <stdio.h>
#include <limits.h>
#include <string.h>

int main() {
    char nome[50], maisVelho[50], maisNovo[50];
    int idade, maisVelhoIdade = INT_MIN, maisNovoIdade = INT_MAX;

    while (1) {
        printf("Digite o primeiro nome (ou digite 'fim' para encerrar): ");
        scanf("%s", nome);
        if (strcmp(nome, "fim") == 0) {
            break;
        }
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade > maisVelhoIdade) {
            maisVelhoIdade = idade;
            strcpy(maisVelho, nome);
        }
        if (idade < maisNovoIdade) {
            maisNovoIdade = idade;
            strcpy(maisNovo, nome);
        }
    }

    printf("Pessoa mais velha: %s, idade: %d\n", maisVelho, maisVelhoIdade);
    printf("Pessoa mais nova: %s, idade: %d\n", maisNovo, maisNovoIdade);
    return 0;
}
//Questão 20
#include <stdio.h>
#include <string.h>

int main() {
    char modelos[5][50];
    float consumo[5];

  
    for (int i = 0; i < 5; i++) {
        printf("Digite o modelo do carro %d: ", i + 1);
        scanf("%s", modelos[i]);
        printf("Digite o consumo em km/l do carro %d: ", i + 1);
        scanf("%f", &consumo[i]);
    }

    
    int maisEconomicoIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (consumo[i] > consumo[maisEconomicoIndex]) {
            maisEconomicoIndex = i;
        }
    }

    printf("O modelo mais econômico é: %s\n", modelos[maisEconomicoIndex]);

    
    printf("Consumo para percorrer 1000 km por carro:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: %.2f litros\n", modelos[i], 1000 / consumo[i]);
    }

    return 0;
}
//Questão 21
#include <stdio.h>
#include <string.h>

int main() {
    char frase1[100], frase2[100];
    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);

    printf("Frase 1 invertida com 'A' trocado por '*': ");
    for (int i = strlen(frase1) - 1; i >= 0; i--) {
        if (frase1[i] == 'A') {
            printf("*");
        } else {
            printf("%c", frase1[i]);
        }
    }
    printf("\n");

    printf("Frase 2 invertida com 'A' trocado por '*': ");
    for (int i = strlen(frase2) - 1; i >= 0; i--) {
        if (frase2[i] == 'A') {
            printf("*");
        } else {
            printf("%c", frase2[i]);
        }
    }
    printf("\n");

    return 0;
}
//Questão 22
#include <stdio.h>

int main() {
    char nomeMercadoria[50];
    float valorTotal, valorDesconto;

    printf("Digite o nome da mercadoria: ");
    scanf("%s", nomeMercadoria);
    printf("Digite o valor total da mercadoria: ");
    scanf("%f", &valorTotal);

    valorDesconto = valorTotal * 0.1;
    printf("Nome da mercadoria: %s\n", nomeMercadoria);
    printf("Valor total: R$ %.2f\n", valorTotal);
    printf("Valor do desconto (10%%): R$ %.2f\n", valorDesconto);
    printf("Valor a ser pago à vista: R$ %.2f\n", valorTotal - valorDesconto);

    return 0;
}
//Questão 23
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int inicio, fim;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite o índice inicial: ");
    scanf("%d", &inicio);
    printf("Digite o índice final: ");
    scanf("%d", &fim);

    printf("O segmento da string é: ");
    for (int i = inicio; i <= fim && str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
//Questão 24
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], caractere;
    int posicaoInicial, posicaoEncontrada = -1;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite o caractere a ser encontrado: ");
    scanf(" %c", &caractere);
    printf("Digite a posição inicial para iniciar a busca: ");
    scanf("%d", &posicaoInicial);

    for (int i = posicaoInicial; i < strlen(str); i++) {
        if (str[i] == caractere) {
            posicaoEncontrada = i;
            break;
        }
    }

    if (posicaoEncontrada != -1) {
        printf("O caractere '%c' foi encontrado na posição %d.\n", caractere, posicaoEncontrada);
    } else {
        printf("O caractere '%c' não foi encontrado na string a partir da posição especificada.\n", caractere);
    }

    return 0;
}
//Questão 25
#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[50], palavra2[50];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    int comparacao = strcmp(palavra1, palavra2);

    if (comparacao < 0) {
        printf("%s vem antes de %s na ordem alfabética.\n", palavra1, palavra2);
    } else if (comparacao > 0) {
        printf("%s vem depois de %s na ordem alfabética.\n", palavra1, palavra2);
    } else {
        printf("%s e %s são iguais na ordem alfabética.\n", palavra1, palavra2);
    }

    return 0;
}
//Questão 26
#include <stdio.h>
#include <string.h>

void codificarCesar(char str[], int deslocamento) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' + deslocamento) % 26;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' + deslocamento) % 26;
        }
    }
}

int main() {
    char string[100];
    int deslocamento;

    printf("Digite a string a ser codificada: ");
    fgets(string, sizeof(string), stdin);
    printf("Digite o deslocamento para o código de César (um número positivo): ");
    scanf("%d", &deslocamento);

    codificarCesar(string, deslocamento);

    printf("A string codificada é: %s\n", string);

    return 0;
}
//Questão 27
#include <stdio.h>
#include <string.h>

int verificarSubString(char str1[], char str2[]) {
    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);

    if (tamanho2 > tamanho1) {
        return 0;
    }

    for (int i = tamanho1 - tamanho2, j = 0; i < tamanho1; i++, j++) {
        if (str1[i] != str2[j]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

   
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (verificarSubString(str1, str2)) {
        printf("A segunda string está contida no final da primeira string.\n");
    } else {
        printf("A segunda string NÃO está contida no final da primeira string.\n");
    }

    return 0;
}
//Questão 28
#include <stdio.h>
#include <string.h>

void imprimirTamanhoString(char str[]) {
    printf("Tamanho da string: %zu\n", strlen(str));
}

void compararStrings(char str1[], char str2[]) {
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
}

void concatenarStrings(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Strings concatenadas: %s\n", str1);
}

void imprimirStringReversa(char str[]) {
    printf("String reversa: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void contarCaractere(char str[], char caractere) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == caractere) {
            count++;
        }
    }
    printf("Número de ocorrências do caractere '%c' na string: %d\n", caractere, count);
}

void substituirCaractere(char str[], char antigo, char novo) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == antigo) {
            str[i] = novo;
            break;
        }
    }
    printf("String com a primeira ocorrência de '%c' substituída por '%c': %s\n", antigo, novo, str);
}

void verificarSubstring(char str1[], char str2[]) {
    if (strstr(str1, str2) != NULL) {
        printf("%s é uma substring de %s.\n", str2, str1);
    } else {
        printf("%s NÃO é uma substring de %s.\n", str2, str1);
    }
}

void retornarSubstring(char str[], int posicaoInicial, int tamanho) {
    printf("Substring a partir da posição %d com tamanho %d: %.*s\n", posicaoInicial, tamanho, tamanho, str + posicaoInicial);
}

int main() {
    char opcao;
    char str1[100], str2[100];
    char caractere, caractereAntigo, caractereNovo;
    int posicaoInicial, tamanho;

    printf("Selecione uma opção:\n");
    printf("a. Imprimir o tamanho da string;\n");
    printf("b. Comparar duas strings;\n");
    printf("c. Concatenar duas strings;\n");
    printf("d. Imprimir a string de forma reversa;\n");
    printf("e. Contar o número de ocorrências de um caractere na string;\n");
    printf("f. Substituir a primeira ocorrência de um caractere por outro na string;\n");
    printf("g. Verificar se uma string é uma substring de outra;\n");
    printf("h. Retornar uma substring da string;\n");

    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
            printf("Digite a string: ");
            scanf("%s", str1);
            imprimirTamanhoString(str1);
            break;
        case 'b':
            printf("Digite a primeira string: ");
            scanf("%s", str1);
            printf("Digite a segunda string: ");
            scanf("%s", str2);
            compararStrings(str1, str2);
            break;
        case 'c':
            printf("Digite a primeira string: ");
            scanf("%s", str1);
            printf("Digite a segunda string: ");
            scanf("%s", str2);
            concatenarStrings(str1, str2);
            break;
        case 'd':
            printf("Digite a string: ");
            scanf("%s", str1);
            imprimirStringReversa(str1);
            break;
        case 'e':
            printf("Digite a string: ");
            scanf("%s", str1);
            printf("Digite o caractere: ");
            scanf(" %c", &caractere);
            contarCaractere(str1, caractere);
            break;
        case 'f':
            printf("Digite a string: ");
            scanf("%s", str1);
            printf("Digite o caractere a ser substituído: ");
            scanf(" %c", &caractereAntigo);
            printf("Digite o novo caractere: ");
            scanf(" %c", &caractereNovo);
            substituirCaractere(str1, caractereAntigo, caractereNovo);
            break;
        case 'g':
            printf("Digite a primeira string: ");
            scanf("%s", str1);
            printf("Digite a segunda string: ");
            scanf("%s", str2);
            verificarSubstring(str1, str2);
            break;
        case 'h':
            printf("Digite a string: ");
            scanf("%s", str1);
            printf("Digite a posição inicial: ");
            scanf("%d", &posicaoInicial);
            printf("Digite o tamanho da substring: ");
            scanf("%d", &tamanho);
            retornarSubstring(str1, posicaoInicial, tamanho);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
//Questão 29
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite a data no formato DD/MM/AAAA: ");
    fgets(data, sizeof(data), stdin);

    
    if (strlen(data) != 11 || data[2] != '/' || data[5] != '/') {
        printf("Formato de data inválido.\n");
        return 1;
    }

    
    if (sscanf(data, "%d/%d/%d", &dia, &mes, &ano) != 3) {
        printf("Formato de data inválido.\n");
        return 1;
    }

    
    if (!isdigit(dia) || !isdigit(mes) || !isdigit(ano)) {
        printf("Formato de data inválido.\n");
        return 1;
    }

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
//Questão 30
#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50], nomeBusca[50];
    int numAlunos = 0;

    do {
        printf("Digite o nome do aluno: ");
        fgets(nomes[numAlunos], sizeof(nomes[numAlunos]), stdin);
        nomes[numAlunos][strcspn(nomes[numAlunos], "\n")] = '\0'; // Remover o caractere de nova linha

        numAlunos++;

        if (numAlunos < 5) {
            char resposta;
            printf("Deseja inserir mais um nome? (s/n): ");
            scanf(" %c", &resposta);
            getchar(); 
            if (resposta != 's' && resposta != 'S') {
                break;
            }
        } else {
            printf("Número máximo de alunos atingido.\n");
            break;
        }
    } while (1);

    printf("\nLista de alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("%d. %s\n", i + 1, nomes[i]);
    }

    printf("\nDigite o nome que deseja procurar na lista: ");
    fgets(nomeBusca, sizeof(nomeBusca), stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0'; 

    int encontrado = 0;
    for (int i = 0; i < numAlunos; i++) {
        if (strcmp(nomes[i], nomeBusca) == 0) {
            printf("O nome %s foi encontrado na lista na posição %d.\n", nomeBusca, i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("O nome %s não foi encontrado na lista.\n", nomeBusca);
    }

    return 0;
}

