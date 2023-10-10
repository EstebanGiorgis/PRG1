#include "montantEnToutesLettres.h"
#include <iostream>
#include <iomanip>

using namespace std;


string addZeroToUnit(int chiffre, int zeroToAdd) {
    string str = to_string(chiffre);
    for (int i = 0; i < zeroToAdd; ++i) {
        str += "0";
    }
    return str;
}

string conversionUnite(char unite) {
    string str;
    switch(unite) {
        case '0':
            str = "zero";
            break;
        case '1':
            str = "un";
            break;
        case '2':
            str = "deux";
            break;
        case '3':
            str = "trois";
            break;
        case '4':
            str = "quatre";
            break;
        case '5':
            str = "cinq";
            break;
        case '6':
            str = "six";
            break;
        case '7':
            str = "sept";
            break;
        case '8':
            str = "huit";
            break;
        case '9':
            str = "neuf";
            break;

        default : "rien";
            break;
    }
    return str;
}
//TODO: à revoir pas vraiment optimal
string whichSwitchToCall(int nombre) {
    string str;
    string nombre_en_string = to_string(nombre);
    int numeration = to_string(nombre).length();


    for(int i = 0; i < numeration; i++){

        if(nombre_en_string[i] != '0'){
            str += conversionUnite(nombre_en_string[i]);
            str += "-";
        }else{
            str += "";
        }

    }
    //cout << endl;
    /*
    switch(numeration) {
        case 1:
            str += conversionUnite(nombre);
            break;
        case 2:
            //call convDizaine()

            break;
        case 3:
            //split first digit, then call convUnite + cent

            break;
        case 4:
            //split first digit, then call convUnite + mille

            break;
        case 5:

            break;
            //split first two digit then call convDizaine + mille
    }
     */
    return str;
}

string montantEnToutesLettres(long double montant) {

    //séparer le nombre en deux, avant et après la virgule
    string str = to_string(int(montant));
    string str2 = to_string(montant - int(montant));
    string temp;
    string str23;

    for (int i = 0; i < str.length(); ++i) {

        temp = addZeroToUnit(str[i] - '0', (str.length() - (i+1)));
        //cout << temp << " " << endl;
        str23 += whichSwitchToCall(stoi(temp));


    }

    cout << str23;
    return temp;
}