#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int valeur_de_base;
int base;


string base_conversion(int base, int valeur){
    string rep;
    int reste;
    int variable_incrementation = 2;

    while(valeur != 0){

        reste = valeur % variable_incrementation;


        //condition pour trnasformer le reste en caractère hexa
        if(reste >= 10){
            rep += reste + 55;
        }else{
            rep += reste + 48;
        }

        valeur /= variable_incrementation;
        variable_incrementation++;
    }

 

    string copie_de_rep = rep;
    for(int i = 0; i < rep.size(); i++){
        rep[i] = copie_de_rep[rep.size()-i-1];
    }

    return rep;
}


int main() {
    base = 16;
    valeur_de_base = 120;
    cout << base_conversion(base, valeur_de_base);

    return 0;
}
