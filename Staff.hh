#include <iostream>
#include <string>
#include <vector>
#include "Humain.hh"
using namespace std;
// fichier pour pouvoir initialiser le staf et les joueurs

//creation de classe Staff technique avec experience en années 
// et son nombre de Trophée d'une ligue majeur (ligue des champions, coupe du monde, Euro)

class Staff : public Humain {
public:
    Staff(string nom, string prenom, int age, string nationalite) : Humain(nom, prenom, age, nationalite) {}
};

class Staff_technique : public Staff {
private:
    int experience;
    int nbrTrophee;

public:
    Staff_technique(string nom, string prenom, int age, string nationalite, int experience, int nbrTrophee) : Staff(nom, prenom, age, nationalite), experience(experience), nbrTrophee(nbrTrophee) {}
    //initialisation constructeur par defaut
    Staff_technique() : Staff(" ", " ", 0, " ")
    {
        experience = 0;
        nbrTrophee = 0;
    }
    //redefinition de la fonction afficher
    void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Age : " << age << endl;
        cout << "Nationalite : " << nationalite << endl;
        cout << "Experience : " << experience << endl;
        cout << "Nombre de trophée : " << nbrTrophee << endl;
    }
    //fonction qui met toutes les stats dans un char pour l'afficher
    char* stats = new char[200];
	char* getStats()
	{
        sprintf_s(stats, 200, "Nom : %s\nPrenom : %s\nAge : %d\nNationalite : %s\nExperience : %d\nNombre de trophée : %d\n", nom.c_str(), prenom.c_str(), age, nationalite.c_str(), experience, nbrTrophee);
		return stats;
	}
    //fonction pour get les attributs de la classe staff technique
    int getExperience() { return experience; }
    int getNbrTrophee() { return nbrTrophee; }
    //destructeur qui detruie stat
};

//creation de classe Staff médical avec experience et diplome

class Staff_medical : public Staff {
    // le staff médical peut soigner les joueurs
private:
    int experience;
    int diplome;

public:
    Staff_medical(string nom, string prenom, int age, string nationalite, int experience, int diplome) : Staff(nom, prenom, age, nationalite), experience(experience), diplome(diplome) {}

    //initialisation constructeur par defaut
    Staff_medical() : Staff(" ", " ", 0, " ")
    {
        experience = 0;
        diplome = 0;
    }
    //redefinition de la fonction afficher
    void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Age : " << age << endl;
        cout << "Nationalite : " << nationalite << endl;
        cout << "Experience année : " << experience << endl;
        cout << "Diplome bac +: " << diplome << endl;
    }
	//fonction qui met toutes les stats dans un char pour l'afficher
    char* stats = new char[200];
	char* getStats(){
		sprintf_s(stats,200, "Nom : %s\nPrenom : %s\nAge : %d\nNationalite : %s\nExperience année : %d\nDiplome bac +: %d\n", nom.c_str(), prenom.c_str(), age, nationalite.c_str(), experience, diplome);
		return stats;
    }
    
    //fonction pour get les attributs de la classe staff médical
    int getExperience() { return experience; }
    int getDiplome() { return diplome; }
};







