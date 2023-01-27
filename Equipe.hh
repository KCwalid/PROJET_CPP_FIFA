#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Joueur.hh"
#include "Staff.hh"
using namespace std;

//creation de classe equipe avec nom, liste de joueur et staff medicaux et techniques

class Equipe {
private:
    string nom;
    vector<Joueur> listeJoueur;
    //il n'y a qu'un seul entraineur et un seul medecin
    Staff_medical medecin;
    Staff_technique entraineur;
    
    vector<Attaquant> attaquants;
    vector<Defenseur> defenseurs;
    vector<Gardien> gardiens;

public:
    Equipe(string nom, vector<Joueur> listeJoueur, Staff_medical medecin, Staff_technique entraineur, vector<Attaquant> attaquants,
        vector<Defenseur> defenseurs, vector<Gardien> gardiens ) : nom(nom), listeJoueur(listeJoueur), medecin(medecin), entraineur(entraineur), attaquants(attaquants), defenseurs(defenseurs),gardiens(gardiens) {}
    //initialisation constructeur par defaut
    Equipe() : medecin(), entraineur()
    {
        nom = "";
        listeJoueur = {};
    }
    //Affichage
    void afficher()
    {
        cout << "Nom de l'equipe: " << nom << endl;
        cout << "Liste des joueurs : " << endl;
        for (unsigned int i = 0; i < listeJoueur.size(); i++)
        {
            listeJoueur[i].afficher();
            cout << "\n" << endl;
        }
        cout << "Staff medical : \n" << endl;
        medecin.afficher();
        cout << "Entraineur technique : \n" << endl;
        entraineur.afficher();
    }

    //getter
    string getPrenom() { return nom; }
    vector<Joueur> getListeJoueur() { return listeJoueur; }
    Staff_medical getMedecin() { return medecin; }
    Staff_technique getEntraineur() { return entraineur; }
    vector<Attaquant> getAttaquants() { return attaquants; }
    vector<Defenseur> getDefenseurs() { return defenseurs; }
    vector<Gardien> getGardiens() { return gardiens; }

    //setter
    void setMedecin(Staff_medical medecin) { this->medecin = medecin; }
    void setEntraineur(Staff_technique entraineur) { this->entraineur = entraineur; }
    void setNom(string nom) { this->nom = nom; }
    //on set la liste de pointeur de joueur
    void setListeJoueur(vector<Joueur> listeJoueur) { this->listeJoueur = listeJoueur; }
    
    void ajouterAttaquant(Attaquant attaquant) { attaquants.push_back(attaquant); }
    void ajouterDefenseur(Defenseur defenseur) { defenseurs.push_back(defenseur); }
    void ajouterGardien(Gardien gardien) { gardiens.push_back(gardien); }



};

vector<Equipe> Initialisation_Equipe();