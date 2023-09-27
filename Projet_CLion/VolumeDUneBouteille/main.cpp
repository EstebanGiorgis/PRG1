#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double pi = M_PI;

//Calcule du cylindre du haut
double calculeVolumePetitCylindre(double rayon1, double hauteur1){
    double volumeFinal = pi * pow(rayon1, 2) * hauteur1;

    return volumeFinal;
}

//Calcule du cone tronqué
double calculeVolumeConeTronque(double hauteur3, double rayon1, double rayon2){
    double volumeFinal = hauteur3 * pi/3 * (pow(rayon1, 2) + pow(rayon2, 2) + rayon1 * rayon2);

    return volumeFinal;
}

//Calcule du cylindre du bas
double calculeVolumeGrandCylindre(double rayon2, double hauteur2){
    double volumeFinal = pi * pow(rayon2, 2) * hauteur2;

    return volumeFinal;
}


//Cette fonction convertit les 3 volume reçu en volume total puis le convertit en litre
double convertionEnLitre(double v1, double vt, double v2){
    double volumeTotal = v1 + vt + v2;

    double volumeEnLitre = volumeTotal / 1000;

    return volumeEnLitre;
}

int main() {
    double r1 = 0;
    double h1 = 0;

    double r2 = 0;
    double h2 = 0;

    double h3 = 0;

    //Demande du rayon 1
    cout << "indiquer le premier rayon :";
    cin >> r1;

    //Demande de la hauteur 1
    cout << "indiquer la hauteur 1 :";
    cin >> h1;



    //Demande du rayon 2
    cout << "indiquer le deuxième rayon :";
    cin >> r2;

    //Demande de la hauteur 2
    cout << "indiquer la hauteur 2 :";
    cin >> h2;


    //Demande de la hauteur 3
    cout << "indiquer la hauteur 3 :";
    cin >> h3;

    /*
    cout << "Vos choix:";
    cout << "r1 : " << r1;
    cout << " r2 : " << r2;
    cout << " h1 : " << h1;
    cout << " h2 : " << h2;
    cout << " h3 : " << h3;
    */

    double premierVolume = calculeVolumePetitCylindre(r1, h1);
    cout << premierVolume << "\n";

    double volumeConeTronque = calculeVolumeConeTronque(h3, r1, r2);
    cout << volumeConeTronque << "\n";

    double deuxiemeVolume = calculeVolumeGrandCylindre(r2, h2);
    cout << deuxiemeVolume << "\n";

    double volumeFinalEnLitre = convertionEnLitre(premierVolume, volumeConeTronque, deuxiemeVolume);

    cout << "\nVotre bouteille contiendra :" << volumeFinalEnLitre << " litre(s)";

    return 0;
}


