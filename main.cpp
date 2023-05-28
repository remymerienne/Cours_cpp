/*
    #1. Affichage console et sorties standards
    #2. Les variables
    #3. Saisie utilisateur
    #4. Opérateurs
    #5. Les conditions
*/

/*
    Standard Input / Output Streams Library
    iostream est une classe permettant de définir les flots de données en entrée
    et en sortie. Par défaut le flot d'entrée provient du clavier, et celui de 
    sortie va vers l'écran.
    https://learn.microsoft.com/fr-fr/cpp/standard-library/iostream?view=msvc-170
*/
#include <iostream>

// Déclaration de la bibliothèque "string" pour le reste du cours
#include <string>

// Fonction principale qui contient notre programme en c++
int main()
{

    // #1. Affichage console et sorties standards
    // ******************************************

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
    // *****************

    /*
        Les principaux suffixes :
        -------------------------
        u, U -> non signé
        f, F -> flottant
        l - L -> long int - Long double
        ll, LL -> long lonf int  

        Préfixes :
        ----------
        0b -> binaire
        0 -> octal
        0x -> héxadécimal
    */

    // Déclaration d'une variable booléenne par défaut
    bool is_secure{};

    // Déclaration d'une variable de type entier par défaut
    float my_float{};

    // Initialisation d'une variable de type int
    int my_int{1'979l};

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

    // #3. Saisie utilisateur
    // **********************

    /*
        Tests d'une entrée avec les méthodes de cin :
        ---------------------------------------------
        std::cout << "Good : " << std::cin.good() << std::endl;  
        std::cout << "Fail : " << std::cin.fail() << std::endl;
        std::cout << "Bad : " << std::cin.bad() << std::endl;
        Si cin est dans un état d'erreur : std::cin.clear()

        Voir aussi après :
        ------------------
        std::ws
    */

    // Saisie d'un entier
    std::cout << "Tapez un nombre entier : ";
    int number;
    std::cin >> number; // \n

    // Capture du retour chariot (flush de sortie)
    std::string mon_nom_complet;
    std::getline(std::cin, mon_nom_complet);

    // ou
    // std::cin.ignore(255, '\n');

    // Saisie d'une chaine de caractères
    std::cout << "Entrez votre nom complet : ";
    std::getline(std::cin, mon_nom_complet);

    // Affichage des saisies
    std::cout << "Nombre saisi : " << number << std::endl;
    std::cout << "Votre nom complet est : " << mon_nom_complet << std::endl;

    // #4. Opérateurs
    // **************

    /*
        Opérateurs         : + - * / %
        Booléens           : ! && ||
        Comparaison        : < > <= >= == !=
        Divers             : += -= *= /= %= ++ --
        Pré-incrémentation : ++variable --variable
    */

    int result{22 + 3};

    std::cout << "Résultat : " << result << std::endl;

    result += 1;

    std::cout << "Résultat : " << result << std::endl;

    result --;

    std::cout << "Résultat : " << result << std::endl;

    // #5. Les conditions
    // ******************

    int number_2{7000};

    if(number_2 >= 0 && number_2<3000)
    {
        std::cout << number_2 << " est supérieur ou égal à 0 mais inférieur à 3000" << std::endl;
    }
    else if(number_2 == 6000)
    {
        std::cout << number_2 << " est strictement égal à 6000" << std::endl;
    }
    else
    {
        std::cout << number_2 << " est supérieur à 6000" << std::endl;
    }

    // ************************************************************************
    return 0;
    // End
    
}
