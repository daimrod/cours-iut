/*********** Objectif
 * Trouver les 5 erreurs de syntaxe et l'erreur de logique.
 *
 *********** Énoncé
 * Un magasin propose à ses clients une remise de 5% sur le montant
 * total des achats lorsque celui-ci dépasse 300 euros et de 10% au
 * delà de 750 euros. Veuillez écrire un algorithme qui après lecture
 * du montant initial des achats affiche le montant à régler et la
 * remise obtenue. */

#include <stdio.h>

int (void) main {
    float montant; remise;

    remise = 0.0;
    printf("Veuillez entrer le montant de vos achats :\");
    scanf("%f", &montant);
    if (montant > 750.0); {
        remise = montant * 0.1;
        montant = montant * 0,9;
    } else if (montant > 300.0) {
        remise *= 0.05;
        montant *= 0.95;
    }
    printf("Vous devez regler : %f euros.\n", montant);
    printf("Vous avez une remise de : %f euros.\n", remise);

    return 0;
}
