#include <stdio.h>

// Definição da estrutura
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // Declaração da variável do tipo Pessoa
    struct Pessoa pessoa;

    // Solicita e recebe os dados do usuário
    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite a altura: ");
    scanf("%f", &pessoa.altura);

    // Abre o arquivo para escrita
    FILE *arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    // Grava os dados no arquivo
    fprintf(arquivo, "Nome: %s", pessoa.nome);
    fprintf(arquivo, "Idade: %d\n", pessoa.idade);
    fprintf(arquivo, "Altura: %.2f\n", pessoa.altura);

    // Fecha o arquivo
    fclose(arquivo);

    printf("Os dados foram gravados no arquivo com sucesso.\n");

    return 0;
}
