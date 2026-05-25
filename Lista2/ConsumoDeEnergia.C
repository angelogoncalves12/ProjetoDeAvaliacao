/*Questão 3 — Análise de Consumo de Energia

## Contexto

Uma empresa deseja analisar o consumo de energia de **7 equipamentos**.

Para cada equipamento, o sistema deverá ler:

* Consumo em kWh
* Se o equipamento está em horário de pico (`1` para sim, `0` para não)

Os consumos deverão ser armazenados em um vetor.

---

## Parte A — Tabela Verdade

Considere as proposições:

```text
p = consumo > 100
q = horarioPico == 1
```

A regra de alto custo é:

```text
AltoCusto = p && q
```

Complete a tabela verdade:

| p | q | p && q |
| - | - | ------ |
| V | V |   V    |
| V | F |   F    |
| F | V |   F    |
| F | F |   F    |

---

## Parte B — Regra de Negócio

Para cada equipamento:

* Se `consumo > 100` **e** `horarioPico == 1`, exibir `ALTO CUSTO`
* Caso contrário, exibir `CUSTO NORMAL`

Ao final, o programa deverá mostrar:

* Quantidade de equipamentos com alto custo
* Quantidade de equipamentos com custo normal
* Consumo médio dos equipamentos

---

## Código Base

```c
#include <stdio.h>

int main() {
    float consumos[7];
    int horarioPico;
    int i;

    int altoCusto = 0;
    int custoNormal = 0;

    float soma = 0;
    float media;

    // Implemente aqui:
    // 1. Ler os 7 consumos e armazenar no vetor consumos
    // 2. Ler se cada equipamento está em horário de pico
    // 3. Usar if com AND para classificar o custo
    // 4. Contar alto custo e custo normal
    // 5. Calcular a média dos consumos

    return 0;
}*/

#include <stdio.h>

int main() {
    float consumos[7];
    int horarioPico;
    int i;

    int altoCusto = 0;
    int custoNormal = 0;

    float soma = 0;
    float media;

    for (i=1; i<=7; i++){
        printf ("Insira o Consumo do Equipamento em KW/H: ");
        scanf ("%f", &consumos [i]);

        printf ("Foi utilizado em horário de pico? (0/1):  ");
        scanf ("%d", &horarioPico);

        soma += consumos [i];
        if (consumos[i] > 100 && horarioPico == 1){
            printf ("ALTO CUSTO DETECTADO!!\n");
            altoCusto++;
        }
        else {
            printf ("CUSTO NORMAL!! \n");
            custoNormal++;
        }
    }
    
    media = soma/7;
    printf ("O Consumo Médio foi de: %.2f \n", media);
    printf ("Quantidade de equipamentos com alto custo: %d\n", altoCusto);
    printf ("Quantidade de equipamentos com custo normal: %d\n", custoNormal);
   
    return 0;