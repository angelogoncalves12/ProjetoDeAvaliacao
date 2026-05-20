/*Questão 1 — Controle de Aprovação de Participantes

Contexto
Um curso de programação deseja analisar o desempenho de **8 participantes**.
Para cada participante, o sistema deverá ler:

- Nota final
- Frequência em percentual

As notas deverão ser armazenadas em um vetor.

---

## Parte A — Tabela Verdade

Considere as proposições:

```text
p = nota >= 7
q = frequencia >= 75
````

A regra de aprovação é:

```text
Aprovado = p && q
```

Complete a tabela verdade:

| p | q | p && q |
| - | - | ------ |
| V | V |    V   |
| V | F |    F   |
| F | V |    F   |
| F | F |    F   |

---

## Parte B — Regra de Negócio

O participante será classificado da seguinte forma:

* Se `nota >= 7` **e** `frequencia >= 75`, exibir `APROVADO`
* Caso contrário, exibir `REPROVADO`

Ao final, o programa deverá mostrar:

* Quantidade de aprovados
* Quantidade de reprovados
* Maior nota registrada

---

## Código Base

```c
#include <stdio.h>

int main() {
    float notas[8];
    float frequencia;
    int i;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;

    // Implemente aqui:
    // 1. Ler as 8 notas e armazenar no vetor notas
    // 2. Ler a frequência de cada participante
    // 3. Usar if com AND para classificar
    // 4. Contar aprovados e reprovados
    // 5. Descobrir a maior nota

    return 0;
}*/
#include <stdio.h>
int main() {
    float notas[8];
    float frequencia;
    int i;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;

    for (i=1; i<=8; i++){
        printf ("Insira a Nota do Aluno: ");
        scanf ("%f", &notas[i]);

        printf ("Insira a Frequência do Aluno: ");
        scanf ("%f", &frequencia);
        
         if (notas[i] >=7 && frequencia >=75) {
            printf ("Aluno Aprovado\n");
            aprovados++;
        }
        else {
            printf ("Aluno Reprovado\n");
            reprovados++;
        }

/* Aqui também é possível usarmos uma cadeia complexa utilizando &&:
        if (notas[i] <= 7 && frequencia <= 75) {
            printf ("Aluno Reprovado\n");
            reprovados++;
        }
        else if (notas[i] >=7 && frequencia >=75) {
            printf ("Aluno Aprovado\n");
            aprovados++;
        }
        else if (notas[i] >=7 && frequencia <=75) {
            printf ("Aluno Reprovado\n");
            reprovados++;
        }
        else if (notas[i] <=7 && frequencia >=75) {
            printf ("Aluno Reprovado\n");
            reprovados++;
        }
        else {
            printf ("Erro de Sintaxe\n");
        }
*/
    }
 
    for (i=1; i<=8; i++) {
        if (notas[i] >= maiorNota){
            maiorNota = notas[i];
        }
    }
        
        printf ("O número de aprovados foi: %d\n", aprovados);
        printf ("O número de reprovados foi: %d\n", reprovados);
        printf ("A maior nota registrada: %.2f\n", maiorNota);
   
    return 0; }
