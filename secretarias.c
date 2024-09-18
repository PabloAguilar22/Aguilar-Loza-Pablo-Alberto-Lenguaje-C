#include <stdio.h>

//declarar fuinciones
int main() {
    char M, T, I, A;  // Variables para las decisiones

    // Entrada del usuario
    printf("¿Sabes de Mecanografia? (S/N): ");
    scanf(" %c", &M);

    if (M == 'S' || M == 's') {
        printf("¿Sabes de Taquigrafia? (S/N): ");
        scanf(" %c", &T);
        if (T == 'S' || T == 's') {
            printf("¿Sabes Ingles? (S/N): ");
            scanf(" %c", &I);
            if (I == 'S' || I == 's') {
                printf("¿Sabes de Archivos? (S/N): ");
                scanf(" %c", &A);
                if (A == 'S' || A == 's') {
                    printf("Categoria: 1\n");
                } else {
                    printf("Categoria: 2\n");
                }
            } else {
                printf("¿Sabes de Archivos? (S/N): ");
                scanf(" %c", &A);
                if (A == 'S' || A == 's') {
                    printf("Categoria: 2\n");
                } else {
                    printf("Categoria: 2\n");
                }
            }
        } else {
            printf("¿Sabes Ingles? (S/N): ");
            scanf(" %c", &I);
            if (I == 'S' || I == 's') {
                printf("¿Sabes de Archivos? (S/N): ");
                scanf(" %c", &A);
                if (A == 'S' || A == 's') {
                    printf("Categoria: 1\n");
                } else {
                    printf("Categoria: 2\n");
                }
            } else {
                printf("¿Sabes de Archivos? (S/N): ");
                scanf(" %c", &A);
                if (A == 'S' || A == 's') {
                    printf("Categoria: 2\n");
                } else {
                    printf("Categoria: 2\n");
                }
            }
        }
    } else {
        printf("¿Sabes de Taquigrafia? (S/N): ");
        scanf(" %c", &T);
        if (T == 'S' || T == 's') {
            printf("¿Sabes Ingles? (S/N): ");
            scanf(" %c", &I);
            if (I == 'S' || I == 's') {
                printf("¿Sabes de Archivos? (S/N): ");
                scanf(" %c", &A);
                if (A == 'S' || A == 's') {
                    printf("Categoria: 3\n");
                } else {
                    printf("Categoria: 2\n");
                }
            } else {
                printf("¿Sabes de Archivos? (S/N): ");
                scanf(" %c", &A);
                if (A == 'S' || A == 's') {
                    printf("Categoria: 2\n");
                } else {
                    printf("Categoria: 2\n");
                }
            }
        } else {
            printf("¿Sabes Ingles? (S/N): ");
            scanf(" %c", &I);
            if (I == 'S' || I == 's') {
                printf("¿Sabes de Archivos? (S/N): ");
                scanf(" %c", &A);
                if (A == 'S' || A == 's') {
                    printf("Categoria: 3\n");
                } else {
                    printf("Categoria: 2\n");
                }
            } else {
                printf("¿Sabes de Archivos? (S/N): ");
                scanf(" %c", &A);
                if (A == 'S' || A == 's') {
                    printf("Categoria: 2\n");
                } else {
                    printf("Categoria: 3\n");
                }
            }
        }
    }

    return 0;
}
