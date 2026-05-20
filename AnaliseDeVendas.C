/* Contexto:

Uma pequena loja deseja analisar as vendas realizadas em um dia.

O sistema deverá registrar o valor de **10 vendas** em um vetor.

---

## Parte A — Tabela Verdade

Considere as proposições:

```text
p = valorVenda >= 100
q = vendaEspecial == 1
```

A regra de destaque é:

```text
Destaque = p || q
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

Para cada venda, leia:

* Valor da venda
* Indicador se a venda foi especial (`1` para sim, `0` para não)

A venda será classificada assim:

* Se `valorVenda >= 100` **ou** `vendaEspecial == 1`, exibir `VENDA COM DESTAQUE`
* Caso contrário, exibir `VENDA COMUM`

Ao final, o programa deverá mostrar:

* Total vendido
* Quantidade de vendas com destaque
* Quantidade de vendas comuns

---

## Código Base

```c
#include <stdio.h>

int main() {
    float vendas[10];
    int vendaEspecial;
    int i;

    float totalVendido = 0;
    int destaque = 0;
    int comum = 0;

    // Implemente aqui:
    // 1. Ler as 10 vendas e armazenar no vetor vendas
    // 2. Ler se cada venda foi especial
    // 3. Usar if com OR para classificar
    // 4. Somar o total vendido
    // 5. Contar vendas com destaque e comuns

    return 0;
}*/

#include <stdio.h>

int main() {
    float vendas[10];
    int vendaEspecial;
    int i;

    float totalVendido = 0;
    int destaque = 0;
    int comum = 0;

    for (i=1; i<=10; i++){
        printf ("Digite o Valor da Venda: ");
        scanf ("%f", &vendas[i]);
        
        printf ("A Venda foi Especial (0/1): ");
        scanf ("%d", &vendaEspecial);
        
        totalVendido = totalVendido + vendas[i];
        if (vendas [i] >= 100 || vendaEspecial == 1){
            printf ("VENDA COM DESTAQUE\n");
            destaque++;
        }
        else {
            printf ("VENDA COMUM\n");
            comum++;
        }
    }
    printf ("Valores Completos de Venda: %.2f", totalVendido);
    printf ("Quantidade de Vendas Comuns: %d", comum);
    printf ("Quantidade de Vendas com Destaque: %d", destaque);

    return 0; 
}
