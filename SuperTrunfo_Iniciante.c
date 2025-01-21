// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Código inicial, base para o desenvolvimento do sistema de cadastro de cartas de cidades.

#include<stdio.h>
#include<stdbool.h> 
#include<string.h>            //Adicionarei uma condição, que levará ou não a um loop, dependendo da resposta do usuário.

int main() {

    // Variáveis separadas para cada atributo da cidade.

    char estado[2];
    char codigo[5];
    char cidade[50];
    int populacao, Pturisticos;
    float area, PIB;  
    char resposta;              //Utilizarei para definir se o loop acontece ou não. 
    bool reiniciar;             //Controla se o loop deve ser repetido ou não.

    //Introdução ao Jogo

    printf("Seja bem vindo ao Super Trunfo!\n");
    printf("Nosso tema será Países\n");

    //Criação do Loop externo, englobando o processo de cadastro e verificação. Onde, se as informações estiverem cadastradas corretamente; 
    //O jogo prossiga, mas se alguma coisa estiver errada,o usuário possa voltar ao início para recadastra-la.

    do { 
        printf("Vamos começar cadastrando nossas cartas:\n");

        do{                                 //Loop interno, que vai permitir que o usuário refaça o cadastro se os dados estiverem incorretos.
            reiniciar = false;                   // Garante que o loop só repita quando o usuário quiser recadastrar os dados. 
        
            // Cadastro das Cartas:
            // Utilizando a função scanf para capturar as entradas do usuário para cada atributo.
    
            printf("Digite uma letra de A-H para representar o estado: \n");
            scanf(" %1s", &estado);               

            printf("Digite o nome da cidade: \n");
            getchar();                              //Limpa o buffer, para não pegar caracteres de outras linhas.
            fgets(cidade, sizeof(cidade), stdin);   //função que lê uma linha inteira de entrada, incluindo espaços em branco.

            cidade[strcspn(cidade, "\n")] = 0;     //Remove o caractere de nova linha (\n) do final da string lida por fgets

            printf("Digite o código da carta, que deve ser\na letra de seu estado seguido de um número de 01 a 04: \n");
            scanf(" %s", &codigo);

            printf("Digite o número da população dessa cidade: \n");
            scanf(" %d", &populacao);

            printf("Digite sua área em km²: \n");
            scanf(" %f", &area);

            printf("Digite o PIB desta cidade: \n");
            scanf(" %f", &PIB);

            printf("E por último, digite o número de pontos turísticos principais desta cidade: \n");
            scanf(" %d", &Pturisticos);

            // Exibição dos Dados das Cartas:
            // Utilizando a função printf para exibir as informações das cartas cadastradas pelo usuário, de forma clara e organizada.
    
            printf("Vamos conferir: \n");
            printf("Estado: %s \nCidade: %s \nCódigo da carta: %s \n", estado, cidade, codigo);
            printf("População: %d \nÁrea: %f \n", populacao, area);
            printf("PIB: %f \nNúmero de Pontos Turísticos: %d \n", PIB, Pturisticos);
    
            //Verificação dos dados
            
            printf("Os dados estão corretos? (s/n)\n");
            scanf(" %c", &resposta);

            if (resposta == 'n'|| resposta == 'N') {           //Condição para que o loop aconteça, dependendo da entrada do usuário.
                    printf("Então vamos começar de novo!\n");
                    reiniciar = true;                          //Define que o loop deve ser repetido, se a condição for verdadeira.
            }
        } while (reiniciar);                                   //Verifica o valor de (reiniciar)(V ou F), para repetir o loop ou não.
        printf("Carta cadastrada com sucesso!\n");
        printf("Vamos continuar com o jogo.\nSe prepare!");
    } while (false);                                   //Garante que o loop externo não se repita automaticamente. Permitindo que o jogo siga.
        
    return 0;
}