#include <stdio.h>
#include <locale.h>
#include <string.h>

void limparBuffer() {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

        //Variáveis do Trunfo
        // CARTA 1
        char estado1[50]; // Variável para armazenar o nome do estado
        char estado_inicial1[2]; // Variável para armazenar a inicial do estado
        char codigo_carta1[50]; // Variável para armazenar o código da carta (inicial do estado + número)
        char capital_cidade1[50]; // Variável para armazenar a capital da cidade
        float populacao1; // Variável para armazenar a população
        float area1; // Variável para armazenar a área
        float PIB1; // Variável para armazenar o PIB
        int pontos_turisticos1; // Variável para armazenar o número de pontos turísticos

        printf("Digite o nome do Estado escolhido: ");
        scanf(" %49[^\n]", estado1);
        limparBuffer();

        printf("Digite a inicial do primeiro Estado escolhido: ");
        scanf(" %c", &estado_inicial1);
        limparBuffer();

        printf("Digite o código da carta (Inicial do estado mais 1 número '01 - 99'): ");
        scanf("%s", codigo_carta1);
        limparBuffer();

        printf("Digite o nome da capital desta cidade: ");
        scanf(" %49[^\n]", capital_cidade1);
        limparBuffer();

        printf("Digite a população (em milhões): ");
        scanf("%f", &populacao1);
        limparBuffer();

        printf("Digite a área (Em Km²): ");
        scanf("%f", &area1);
        limparBuffer();

        printf("Digite o PIB (em Bilhões): ");
        scanf("%f", &PIB1);
        limparBuffer();

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos1);
        limparBuffer();

        printf("\n");

        //Variáveis convertidas para cálculo mais preciso
        double populacao1_convertida = (populacao1 * 1000000.0f);
        double area1_convertida = (area1 * 1000.0f);
        double pib1_convertida = (PIB1 * 1000000000.0f);

        printf("Carta 1\n");
        printf("Estado: %s\n", estado1);
        printf("Inicial do Estado: %s\n", estado_inicial1);
        printf("Carta: %s\n", codigo_carta1);
        printf("Cidade: %s\n", capital_cidade1);
        printf("População: %.2f milhões\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f bilhões\n", PIB1);
        printf("Pontos Turísticos: %d\n", pontos_turisticos1);

        //Calcular a Densidade Populacional
        float densidade_populacional1 = populacao1_convertida / area1_convertida; // Multiplica por 1,000,000 para o calculo sair correto
        printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional1);

        //Calcular Pib per capito
        float pib_per_capito1 = pib1_convertida / populacao1_convertida;
        printf("PIB per capito: %.2f\n", pib_per_capito1);
        printf("\n");

         // SuperPoder Trunfo
        double SuperTrunfo1 = (populacao1_convertida + area1_convertida + pib1_convertida + pib_per_capito1 + pontos_turisticos1 + (1 / densidade_populacional1));
        printf("Valor Super Trunfo: %.2f \n", SuperTrunfo1);
         printf("\n");


        //Variáveis do Trunfo
        // CARTA 2
        char estado2[50]; // Variável para armazenar o nome do estado
        char estado_inicial2[2]; // Variável para armazenar a inicial do estado
        char codigo_carta2[50]; // Variável para armazenar o código da carta (inicial do estado + número)
        char capital_cidade2[50]; // Variável para armazenar a capital da cidade
        float populacao2; // Variável para armazenar a população
        float area2; // Variável para armazenar a área
        float PIB2; // Variável para armazenar o PIB
        int pontos_turisticos2; // Variável para armazenar o número de pontos turísticos

        printf("Digite o nome do Estado escolhido: ");
        scanf(" %49[^\n]", estado2);
        limparBuffer();

        printf("Digite a inicial do segundo Estado escolhido: ");
        scanf(" %c", &estado_inicial2);
        limparBuffer();

        printf("Digite o código da carta (Inicial do estado mais 1 número '01 - 99'): ");
        scanf("%s", codigo_carta2);
        limparBuffer();

        printf("Digite o nome da capital desta cidade: ");
        scanf(" %49[^\n]", capital_cidade2);
        limparBuffer();

        printf("Digite a população (em milhões): ");
        scanf("%f", &populacao2);
        limparBuffer();

        printf("Digite a área (Em Km²): ");
        scanf("%f", &area2);
        limparBuffer();

        printf("Digite o PIB (em Bilhões): ");
        scanf("%f", &PIB2);
        limparBuffer();

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos2);
        limparBuffer();

        printf("\n");

        //Variáveis convertidas para cálculo mais preciso
        double populacao2_convertida = (populacao2 * 1000000.0f);
        double area2_convertida = (area2 * 1000.0f);
        double pib2_convertida = (PIB2 * 1000000000.0f);
        
        printf("Carta 2\n");
        printf("Estado: %s\n", estado2);
        printf("Inicial do Estado: %s\n", estado_inicial2);
        printf("Carta: %s\n", codigo_carta2);
        printf("Cidade: %s\n", capital_cidade2);
        printf("População: %.2f milhões\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f bilhões\n", PIB2);
        printf("Pontos Turísticos: %d\n", pontos_turisticos2);

        //Calcular a Densidade Populacional
        float densidade_populacional2 = populacao2_convertida / area2_convertida; // Multiplica por 1,000,000 para o calculo sair correto
        printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);

        //Calcular Pib per capito
        float pib_per_capito2 = pib2_convertida / populacao2_convertida;
        printf("PIB per capito: %.2f\n", pib_per_capito2);
        printf("\n");
        
        // SuperPoder Trunfo
        double SuperTrunfo2 = (populacao2_convertida + area2_convertida + pib2_convertida + pib_per_capito2 + pontos_turisticos2 + (1 / densidade_populacional2));
        printf("Valor Super Trunfo: %.2f \n", SuperTrunfo2);
         printf("\n");

        //Fase da comparação de cartas no jogo - sem if e else

        printf("*** VAMOS SABER A CARTA VENCEDORA **** \n");
        printf("\n");

        printf("**Comparação de População**\n");
        printf("\n");
        printf("A Carta 1 venceu (1 para Sim 0 para não) ? %d \n", populacao1_convertida > populacao2_convertida);
        printf("\n");
        printf("**Comparação de Área**\n");
        printf("\n");
        printf("A Carta 1 venceu (1 para Sim 0 para não) ? %d \n", area1_convertida > area2_convertida);
        printf("\n");
        printf("**Comparação de PIB**\n");
        printf("\n");
        printf("A Carta 1 venceu (1 para Sim 0 para não) ? %d \n", pib1_convertida > pib2_convertida);
        printf("\n");
        printf("**Comparação de Densidade Populacional**\n");
        printf("\n");
        printf("A Carta 1 venceu (1 para Sim 0 para não) ? %d \n",  densidade_populacional1 < densidade_populacional2);
        printf("\n");
        printf("**Comparação de PIB per capito**\n");
        printf("\n");
        printf("A Carta 1 venceu (1 para Sim 0 para não) ? %d \n", pib_per_capito1 > pib_per_capito2);
        printf("\n");
        printf("**Comparação de Pontos Turísticos**\n");
        printf("\n");
        printf("A Carta 1 venceu (1 para Sim 0 para não) ? %d \n", pontos_turisticos1 > pontos_turisticos2);
            printf("\n");
        printf("**Comparação do Super Trunfo**\n");
        printf("\n");
        printf("A Carta 1 venceu (1 para Sim 0 para não) ? %d \n", SuperTrunfo1 > SuperTrunfo2);
         printf("\n");
        printf("Obrigado por jogar o Super Trunfo de Cidades! \n");
        printf("Até a próxima! \n");
        printf("\n");


        // Fase de comparação de cartas no jogo - com if e else
        printf("*** VAMOS SABER A CARTA VENCEDORA **** \n");
        printf("\n");
        printf("**Comparação de População**\n");
        printf("\n");
        if (populacao1_convertida > populacao2_convertida) {
            printf("A Carta 1 venceu! Motivo: população maior (%.2f milhões > %.2f milhões)\n", populacao1, populacao2);
        } else if (populacao1_convertida < populacao2_convertida) {
            printf("A Carta 2 venceu! Motivo: população maior (%.2f milhões > %.2f milhões)\n", populacao2, populacao1);
        } else {
            printf("Empate! As duas cartas têm a mesma população.\n");
        }
        printf("\n");
        printf("**Comparação de Área**\n");
        printf("\n");
        if (area1_convertida > area2_convertida) {
            printf("A Carta 1 venceu! Motivo: área maior (%.2f km² > %.2f km²)\n", area1, area2);
        } else if (area1_convertida < area2_convertida) {
            printf("A Carta 2 venceu! Motivo: área maior (%.2f km² > %.2f km²)\n", area2, area1);
        } else {
            printf("Empate! As duas cartas têm a mesma área.\n");
        }
        printf("\n");
        printf("**Comparação de PIB**\n");
        printf("\n");
        if (pib1_convertida > pib2_convertida) {
            printf("A Carta 1 venceu! Motivo: PIB maior (R$ %.2f bilhões > R$ %.2f bilhões)\n", PIB1, PIB2);
        } else if (pib1_convertida < pib2_convertida) {
            printf("A Carta 2 venceu! Motivo: PIB maior (R$ %.2f bilhões > R$ %.2f bilhões)\n", PIB2, PIB1);
        } else {
            printf("Empate! As duas cartas têm o mesmo PIB.\n");
        }
        printf("\n");
        printf("**Comparação de Densidade Populacional**\n");
        printf("\n");
        if (densidade_populacional1 < densidade_populacional2) {
            printf("A Carta 1 venceu! Motivo: densidade populacional menor (%.2f > %.2f hab/km²)\n", densidade_populacional1, densidade_populacional2);
        } else if (densidade_populacional1 > densidade_populacional2) {
            printf("A Carta 2 venceu! Motivo: densidade populacional menor (%.2f > %.2f hab/km²)\n", densidade_populacional2, densidade_populacional1);
        } else {
            printf("Empate! As duas cartas têm a mesma densidade populacional.\n");
        }
        printf("\n");
        printf("**Comparação de PIB per capito**\n");
        printf("\n");
        if (pib_per_capito1 > pib_per_capito2) {
            printf("A Carta 1 venceu! Motivo: PIB per capita maior (%.2f > %.2f)\n", pib_per_capito1, pib_per_capito2);
        } else if (pib_per_capito1 < pib_per_capito2) {
            printf("A Carta 2 venceu! Motivo: PIB per capita maior (%.2f > %.2f)\n", pib_per_capito2, pib_per_capito1);
        } else {
            printf("Empate! As duas cartas têm o mesmo PIB per capita.\n");
        }
        printf("\n");
        printf("**Comparação de Pontos Turísticos**\n");
        printf("\n");
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("A Carta 1 venceu! Motivo: mais pontos turísticos (%d > %d)\n", pontos_turisticos1, pontos_turisticos2);
        } else if (pontos_turisticos1 < pontos_turisticos2) {
            printf("A Carta 2 venceu! Motivo: mais pontos turísticos (%d > %d)\n", pontos_turisticos2, pontos_turisticos1);
        } else {
            printf("Empate! As duas cartas têm o mesmo número de pontos turísticos.\n");
        }
        printf("\n");
        printf("**Comparação do Super Trunfo**\n");
        printf("\n");
        if (SuperTrunfo1 > SuperTrunfo2) {
            printf("A Carta 1 venceu! Motivo: valor Super Trunfo maior (%.2f > %.2f)\n", SuperTrunfo1, SuperTrunfo2);
        } else if (SuperTrunfo1 < SuperTrunfo2) {
            printf("A Carta 2 venceu! Motivo: valor Super Trunfo maior (%.2f > %.2f)\n", SuperTrunfo2, SuperTrunfo1);
        } else {
            printf("Empate! As duas cartas têm o mesmo valor Super Trunfo.\n");
        }
         printf("\n");
        printf("Obrigado por jogar o Super Trunfo de Cidades! \n");
        printf("Até a próxima! \n");


return 0;
}