/* Questão 1 — Controle de Estoque de Produtos

## Contexto

Uma loja deseja analisar o estoque de **8 produtos**.

Para cada produto, o sistema deverá ler:

- Quantidade em estoque
- Se o produto é essencial (`1` para sim, `0` para não)

As quantidades deverão ser armazenadas em um vetor.

---

## Parte A — Tabela Verdade

Considere as proposições:

```text
p = quantidade < 10
q = essencial == 1
````

A regra de alerta é:

```text
Alerta = p && q
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

O produto será classificado da seguinte forma:

* Se `quantidade < 10` **e** `essencial == 1`, exibir `REPOSICAO URGENTE`
* Caso contrário, exibir `ESTOQUE OK`

Ao final, o programa deverá mostrar:

* Quantidade de produtos com reposição urgente
* Quantidade de produtos com estoque ok
* Menor quantidade registrada

---

## Código Base

```c
#include <stdio.h>

int main() {
    int quantidades[8];
    int essencial;
    int i;

    int urgente = 0;
    int estoqueOk = 0;

    int menorQuantidade = 0;

    // Implemente aqui:
    // 1. Ler as 8 quantidades e armazenar no vetor quantidades
    // 2. Ler se cada produto é essencial
    // 3. Usar if com AND para classificar
    // 4. Contar produtos urgentes e produtos ok
    // 5. Descobrir a menor quantidade registrada

    return 0;
}
```*/

#include <stdio.h>

int main() {
    int quantidades[8];
    int essencial;
    int i;

    int urgente = 0;
    int estoqueOk = 0;

    int menorQuantidade; //Se tiver valor atribuído, só consegue ver o maior número acima de 0, até tem como fazer o menor número, mas complicando o código sem necessidade.

    printf ("Análise de Estoque!\n");
    for (i=0; i<=7; i++){
        printf ("Quantas unidades do produto estão disponíveis?  ");
        scanf ("%d", &quantidades[i]);

        printf ("O produto é essencial? (0/1): ");
        scanf ("%d", &essencial);
       
        if (essencial == 1 && quantidades[i] < 10) {
            printf ("REPOSIÇÃO URGENTE!\n");
            urgente++;
        }
        else {
            printf ("O ESTOQUE ESTÁ SUFICIENTE!\n");
            estoqueOk++;
        }
    }

    menorQuantidade = quantidades[0];
     for (i=1; i<=7; i++){
        if (quantidades[i] < menorQuantidade){
            menorQuantidade = quantidades[i];
        }
       
     }
    printf ("Nesse estoque temos: \n");
    printf ("Urgência pra compra: %d\n", urgente);
    printf ("Estoque OK: %d\n", estoqueOk);
    printf ("Menor Número em Estoque: %d\n", menorQuantidade);

return 0;
}