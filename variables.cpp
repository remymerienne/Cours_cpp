#include <iostream>
#include <string>

/*
  std::cout : affichage standard (en mémoire tampon)
  std::cerr : erreurs (affichage direct)
  std::clog : journalisation (en mémoire tampon)

  std::enl : retour à la ligne (\n) + flush
  std::flush : flush seul

  \n : retour à la ligne
  \t : tabulation
  \\ : afficher un antislash

  Les principaux suffixes :
  -------------------------
  u, U -> non signé
  f, F -> flottant
  l - L -> long int - Long double
  ll, LL -> long lonf int  

  using namespace std::literals;
  auto some_string{"Bonjour le monde"s};

  Préfixes :
  ----------
  0b -> binaire
  0 -> octal
  0x -> héxadécimal
*/

int main()
{
  std::cout << "Hello World !" << std::endl;

  // Déclaration d'une variable booléenne par défaut
  bool is_secure{};

  // Déclaration d'une variable de type entier par défaut
  float my_float{};

  // Initialisation d'une variable de typde int
  int my_int{1979l};

  // Laisser le compilateur analyser le type de variable
  auto mon_test{22};

  // Affectation d'une variable
  my_float = 1976.0f;

  // Initialisation d'une variable string
  std::string my_short_message{"Voici mon message court"};

  const float MA_CONSTANTE_PI{3.14116f};

  // Affichage des variables
  std::cout << is_secure << std::endl;
  std::cout << my_int << std::endl;
  std::cout << my_float << std::endl;
  std::cout << my_short_message << std::endl;
  std::cout << MA_CONSTANTE_PI << std::endl;
  std::cout << mon_test << std::endl;

  using namespace std::literals;
  auto some_string{"Bonjour le monde"s};
  std::cout << some_string << std::endl;

  return 0;
}
