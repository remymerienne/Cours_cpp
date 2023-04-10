#include <iostream>

/*
  Opérateurs         : + - * / %
  Booléens           : ! && ||
  Comparaison        : < > <= >= == !=
  Divers             : += -= *= /= %= ++ --
  Pré-incrémentation : ++variable --variable
*/

int main()
{
  int result{22 + 3};

  std::cout << "Résultat : " << result << std::endl;

  result += 1;

  std::cout << "Résultat : " << result << std::endl;
  
  result --;

  std::cout << "Résultat : " << result << std::endl;

  return 0;
}
