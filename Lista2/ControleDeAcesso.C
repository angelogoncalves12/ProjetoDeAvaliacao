/* Questão 2 — Controle de Acesso a Evento

## Contexto

Uma organização deseja controlar a entrada de **10 pessoas** em um evento.

Para cada pessoa, o sistema deverá ler:

* Idade
* Se possui convite (`1` para sim, `0` para não)

As idades deverão ser armazenadas em um vetor.

---

## Parte A — Tabela Verdade

Considere as proposições:

```text
p = idade >= 18
q = convite == 1
```

A regra de entrada é:

```text
Entrada = p || q
```

Complete a tabela verdade:

| p | q | p || q |
|---|---|--------|
| V | V |    V   |
| V | F |    V   |
| F | V |    V   |
| F | F |    F   |

---

## Parte B — Regra de Negócio

A pessoa será classificada assim:

* Se `idade >= 18` **ou** `convite == 1`, exibir `ENTRADA PERMITIDA`
* Caso contrário, exibir `ENTRADA NEGADA`

Ao final, o programa deverá mostrar:

* Quantidade de entradas permitidas
* Quantidade de entradas negadas
* Maior idade registrada

---

## Código Base

```c
#include <stdio.h>

int main() {
    int idades[10];
    int convite;
    int i;

    int permitidas = 0;
    int negadas = 0;

    int maiorIdade = 0;

    // Implemente aqui:
    // 1. Ler as 10 idades e armazenar no vetor idades
    // 2. Ler se cada pessoa possui convite
    // 3. Usar if com OR para classificar
    // 4. Contar entradas permitidas e negadas
    // 5. Descobrir a maior idade registrada

    return 0;
}*/

#include <stdio.h>

int main() {
    int idades[10];
    int convite;
    int i;

    int permitidas = 0;
    int negadas = 0;

    int maiorIdade = 0;


    for (i=1; i>=10; i++){
        printf ("INSIRA SUA IDADE: ");
        scanf ("%d", &idades[i]);

        printf ("POSSUI CONVITE? (0/1): ");
        scanf ("%d", &convite);

        if (idades[i] > maiorIdade) {
        maiorIdade = idades[i];
        }
        
        if (idades[i] >= 18 || convite == 1) {
            printf ("Entrada Permitida!! \n");
            permitidas++;
        }
        else {
            printf ("Entrada NEGADA!! \n");
            negadas++;
        }
    }
        printf ("TIVEMOS UM TOTAL DE: \n");
        printf ("%d Entradas Negadas \n", negadas);
        printf ("%d Entradas Permitidas \n", permitidas);
        printf ("%d É o Maior Número\n", maiorIdade);  
    return 0;
}