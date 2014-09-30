/*********** Objectif
 * Traduire le pseudo-code suivant en C en changeant et adaptant le «
 * pour » en « tant que ».
 *
 *********** Énoncé
 * Veuillez écrire un programme qui après avoir demandé à
 * l'utilisateur un nombre entier positif n affiche sa factorielle. La
 * factorielle n que l'on note n != 1x2x3x...x(n-1)x n.
*/

#include <stdio.h>

int main (void) {
    int n, factorielle;

    printf("Veuillez saisir un nombre entier positif: \n");
    scanf("%d", &n);
    factorielle = 1;
    int i = 1;
    while (i <= n) {
        factorielle *= i;
        i++;
    }
    printf("La factorielle de n est: %d\n", factorielle);
}
