/*# Questão 3 — Controle de Temperaturas Simples

## Contexto

Um laboratório precisa registrar **7 medições de temperatura** realizadas ao longo do dia.

As temperaturas deverão ser armazenadas em um vetor.

---

## Parte A — Tabela Verdade

Considere as proposições:

```text
p = temperatura >= 20
q = temperatura <= 30
```

A temperatura é considerada segura quando:

```text
Segura = p && q
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

Para cada temperatura:

* Se `temperatura >= 20` **e** `temperatura <= 30`, exibir `TEMPERATURA SEGURA`
* Caso contrário, exibir `TEMPERATURA FORA DA FAIXA`

Ao final, o programa deverá mostrar:

* Quantidade de temperaturas seguras
* Quantidade de temperaturas fora da faixa
* Média das temperaturas

---

## Código Base

```c
#include <stdio.h>

int main() {
    float temperaturas[7];
    int i;

    int seguras = 0;
    int foraFaixa = 0;

    float soma = 0;
    float media;

    // Implemente aqui:
    // 1. Ler as 7 temperaturas e armazenar no vetor temperaturas
    // 2. Usar if com AND para verificar a faixa segura
    // 3. Contar temperaturas seguras e fora da faixa
    // 4. Calcular a média

    return 0;
}*/

#include <stdio.h>

int main() {
    float temperaturas[7];
    int i;

    int seguras = 0;
    int foraFaixa = 0;

    float soma = 0;
    float media;

    for (i=1; i<=7; i++){
        printf ("Qual a Temperatura Celsius atual? ");
        scanf ("%f", &temperaturas[i]);

        soma = soma + temperaturas[i];
        if (temperaturas[i]>= 20 && temperaturas[i]<=30) {
            printf ("Temperatura Segura\n");
            seguras++;
        }
        else {
            printf ("Temperatura Fora da Faixa\n");
            foraFaixa++;
        }
    }
    media = soma/7;

    printf ("Foram registradas %d temperatura(s) segura(s)\n", seguras);
    printf ("Foram registradas %d temperatura(s) fora da faixa\n", foraFaixa);
    printf ("A Temperatura Média Registrada Foi: %.2f", media);
    
    return 0;
}