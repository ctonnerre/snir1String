//
//  main.cpp
//  snir1String
//
//  Created by Cécile Tonnerre on 11/03/2020.
//  Copyright © 2020 Cécile Tonnerre. All rights reserved.
//

#include <iostream>
// include pour les objets de type string C++
#include <string>

// include pour utiliser les string comme en C
#include <string.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    /**************************************************************************/
    /* utilisation des chaînes de caractères mode c++ : objet de type string  */
    /**************************************************************************/
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++"  << endl;
    cout << "\tUtilisation en C++ de l'objet de type string " << endl;
    string maChaine ("Les sanglots longs des violons de l'automne ");
    cout << maChaine << endl;
    
    // calcul de la longueur : utilisation de la méthode length()
    cout << "\tde longeur : " << maChaine.length() << endl ;
    
    // cherche la chaîne "violons" dans maChaine : utilisation de la méthode find()
    cout << " est-ce qu'il y a violons dedans ? " << maChaine.find("violons") << endl;
    if (maChaine.find("violons") == string::npos )
    {
        cout << " violons n'apparaît pas dans maChaine " <<endl << endl;
    }
    cout << " est-ce qu'il y a guitares dedans ? " << maChaine.find("guitares") << endl;
    if (maChaine.find("guitares") == string::npos )
    {
        cout << " guitares n'apparaît pas dans maChaine " <<endl << endl;
    }
    
    // je concatene avec l'operateur '+'
    maChaine += "\nBlessent mon coeur d'une langueur monotone";
    
    cout << "\tMa nouvelle chaine après concaténation " << endl;
    cout << maChaine << endl;
    cout << "\tde longueur "  << maChaine.length() << endl <<endl ;
    
    // effacer des caractères : utilisation de la méthode erase()
    // effacement de la première ligne de longueur 23
    maChaine.erase(0,44);
    cout << "\tMa nouvelle chaîne raccourcie par l'avant " << endl;
    cout << maChaine << endl;
    cout << "\tde longeur : " << maChaine.length() << endl ;

    /**************************************************************************/
    /* utilisation des chaînes de caractères mode c++ : objet de type string  */
    /**************************************************************************/
    char maChaineC[] = "Les sanglots longs des violons de l'automne ";
    char *trouveChaine = nullptr;
    cout << endl << endl;
    cout << "cherche chaine c " << strstr(maChaineC, "violons") << endl;
    
    //decoupe (tokenzie) avec 
    return 0;
}
