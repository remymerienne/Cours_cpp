/*
  #1. Affichage console et sorties standards
  #2. Les variables
*/

/*
  Standard Input / Output Streams Library
  iostream est une classe permettant de définir les flots de données en entrée
  et en sortie. Par défaut le flot d'entrée provient du clavier, et celui de 
  sortie va vers l'écran.
  https://learn.microsoft.com/fr-fr/cpp/standard-library/iostream?view=msvc-170
*/
#include <iostream>

// Fonction principale qui contient notre programme en c++
int main()
{

  // #1. Affichage console et sorties standards

  /*
    std::cout : affichage standard (en mémoire tampon)
    std::cerr : erreurs (affichage direct)
    std::clog : journalisation (en mémoire tampon)

    std::endl : retour à la ligne (\n) + flush
    std::flush : flush seul (vidange tampon)

    \n : retour à la ligne
    \t : tabulation
    \\ : afficher un antislash
  */
 
  std::cout << "\nHello world !\n" << std::endl;

  // #2. Les variables

  // Fin de notre fonction principale
  return 0;
}
