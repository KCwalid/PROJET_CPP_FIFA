#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//creation de classe humain avec nom prenom age et nationalite
class Humain {
protected:
    string nom;
    string prenom;
    int age = 0;
    string nationalite;

public:
    Humain(string nom, string prenom, int age, string nationalite) :nom(nom), prenom(prenom), age(age), nationalite(nationalite) {}

    //initialisation constructeur par defaut
    Humain() {}
    //Affichage
    virtual void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Age : " << age << endl;
        cout << "Nationalite : " << nationalite << endl;
    }
    //fonction pour get les attributs de la classe humain
    string getNom() const { return nom; }
    string getPrenom() { return prenom; }
    int getAge() { return age; }
    string getNationalite() { return nationalite; }
};

