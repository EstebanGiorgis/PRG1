#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int valeur_de_base;
int base;


string base_conversion(int base, int valeur){
    string rep;
    int reste;

    while(valeur != 0){
        reste = valeur % base;
        if(reste >= 10){
            rep += reste + 55;
        }else{
            rep += reste + 48;
        }
        valeur /= base;
    }


    string copie_de_rep = rep;
    for(int i = 0; i < rep.size(); i++){
        rep[i] = copie_de_rep[rep.size()-i-1];
    }

    return rep; 
}


int main() {
    base = 16;
    valeur_de_base =2545 ;
    cout << base_conversion(base, valeur_de_base);

    return 0;
}
