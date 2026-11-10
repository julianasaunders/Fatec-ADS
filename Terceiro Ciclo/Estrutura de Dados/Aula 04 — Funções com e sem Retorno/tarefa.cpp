#include <stdio.h>
#include <stdlib.h>

void fsub(float p1, float p2, float atv, float media) {
    float sub, nova_media;

    printf("\nMedia insuficiente (%.2f). Aluno tem direito a Prova Substitutiva.\n", media);
    printf("Informe a nota da sub: ");
    scanf("%f", &sub);

    if (p1 < p2) {
        nova_media = (sub * 0.35) + (p2 * 0.35) + atv;
    } else {
        nova_media = (p1 * 0.35) + (sub * 0.35) + atv;
    }

    printf("\nNova media: %.2f\n", nova_media);

    if (nova_media >= 6.0) {
        printf("Aluno aprovado apos a sub.\n");
    } else {
        printf("Aluno reprovado.\n");
    }
}

void fmedia(float p1, float p2, float atv) {
    float media = (p1 * 0.35) + (p2 * 0.35) + atv;

    if (media >= 6.0) {
        printf("\nAluno aprovado com media: %.2f\n", media);
    } else {
        fsub(p1, p2, atv, media);
    }
}

int main() {
    float p1, p2, atv;

    printf("Informe a nota da p1: ");
    scanf("%f", &p1);

    printf("Informe a nota da p2: ");
    scanf("%f", &p2);

    printf("Informe a pontuacao das atividades: ");
    scanf("%f", &atv);

    fmedia(p1, p2, atv);

    return 0;
}
