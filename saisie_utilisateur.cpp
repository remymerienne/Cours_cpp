#include <iostream>
#include <string>

/*
  Tests d'une entrée avec les méthodes de cin :
  ---------------------------------------------
  std::cout << "Good : " << std::cin.good() << std::endl;  
  std::cout << "Fail : " << std::cin.fail() << std::endl;
  std::cout << "Bad : " << std::cin.bad() << std::endl;
  Si cin est dans un état d'erreur : std::cin.clear()

  Voir aussi après :
  ------------------
  std::cin.ingnore()
  std::ws
*/

int main()
{
  // Saisie d'un entier
  std::cout << "Tapez un nombre entier : ";
  int number;
  std::cin >> number;

  // Flush du tampon de lecture (sortie)
  std::string mon_nom_complet;
  std::getline(std::cin, mon_nom_complet, '\n');

  // Saisie d'une chaine de caractères
  std::cout << "Entrez votre nom complet : ";
  std::getline(std::cin, mon_nom_complet, '\n');

  // Affichage des saisies
  std::cout << "Nombre saisi : " << number << std::endl;
  std::cout << "Votre nom complet est : " << mon_nom_complet << std::endl;
  
  return 0;
}
