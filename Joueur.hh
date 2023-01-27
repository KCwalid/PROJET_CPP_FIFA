#include <iostream>
#include <string>
#include <vector>
#include "Humain.hh"
using namespace std;

//--------------------------------  JOUEURS  --------------------------------
//creation de classe joueur avec score fifa et role 
class Joueur : public Humain {
protected:
    int scoreFifa;
    string role;

public:
    Joueur(string nom, string prenom, int age, string nationalite, int scoreFifa, string role) : Humain(nom, prenom, age, nationalite), scoreFifa(scoreFifa), role(role) {}

    //initialisation constructeur par defaut
    Joueur() : Humain()
    {
        scoreFifa = 0;
        role = " ";
    }
    //redefinition de la fonction afficher
    void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Age : " << age << endl;
        cout << "Nationalite : " << nationalite << endl;
        cout << "Score Fifa : " << scoreFifa << endl;
        cout << "Role : " << role << endl;
    }
    //fonction pour get les attributs de la classe joueur
    int getScoreFifa() { return scoreFifa; }
    string getRole() { return role; }
};

//creation des differents roles de joueurs

//attaquant

class Attaquant : public Joueur {
    // l'attaquant peut dribbler (risque de perdre la balle) ou juste tirer
private:
    int scoreDribble;
    int scoreTir;

public:
    Attaquant(string nom, string prenom, int age, string nationalite, int scoreFifa, string role, int scoreDribble, int scoreTir) : Joueur(nom, prenom, age, nationalite, scoreFifa, role), scoreDribble(scoreDribble), scoreTir(scoreTir) {}


    //initialisation constructeur par defaut
    Attaquant() : Joueur()
    {
        scoreDribble = 0;
        scoreTir = 0;
    }
    //redefinition de la fonction afficher
    void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Age : " << age << endl;
        cout << "Nationalite : " << nationalite << endl;
        cout << "Score Fifa : " << scoreFifa << endl;
        cout << "Role : " << role << endl;
        cout << "Score Dribble : " << scoreDribble << endl;
        cout << "Score Tir : " << scoreTir << endl;
    }
    //fonction qui met toutes les stats dans un char pour l'afficher
    char* stats = new char[300];
	char* getStats()
	{
        sprintf_s(stats, 300, "Nom : %s\nPrenom : %s\nAge : %d\nNationalite : %s\nScore Fifa : %d\nRole : %s\nScore Dribble : %d\nScore Tir : %d\n", nom.c_str(), prenom.c_str(), age, nationalite.c_str(), scoreFifa, role.c_str(), scoreDribble, scoreTir);		
        return stats;
	}
    
    //fonction pour get les attributs de la classe attaquant
    int getScoreDribble() { return scoreDribble; }
    int getScoreTir() { return scoreTir; }
    //fonction pour set les attributs de la classe attaquant
    void setScoreDribble(int scoreDribble) { scoreDribble = scoreDribble; }
    void setScoreTir(int scoreTir) { scoreTir = scoreTir; }
    

};
//defenseur

class Defenseur : public Joueur {
    // le defenseur peut tacler (risque de faute élevé) ou juste intercepter
private:
    int scoreTacle;
    int scoreInterception;

public:
    Defenseur(string nom, string prenom, int age, string nationalite, int scoreFifa, string role, int scoreTacle, int scoreInterception) : Joueur(nom, prenom, age, nationalite, scoreFifa, role), scoreTacle(scoreTacle), scoreInterception(scoreInterception) {}
    //initialisation constructeur par defaut
    Defenseur() : Joueur()
    {
        scoreTacle = 0;
        scoreInterception = 0;
    }
    //redefinition de la fonction afficher
    void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Age : " << age << endl;
        cout << "Nationalite : " << nationalite << endl;
        cout << "Score Fifa : " << scoreFifa << endl;
        cout << "Role : " << role << endl;
        cout << "Score Tacle : " << scoreTacle << endl;
        cout << "Score Interception : " << scoreInterception << endl;
    }
    //fonction qui met toutes les stats dans un char pour l'afficher
    char* stats = new char[300];
	char* getStats()
	{
		sprintf_s(stats,300, "Nom : %s\nPrenom : %s\nAge : %d\nNationalite : %s\nScore Fifa : %d\nRole : %s\nScore Tacle : %d\nScore Interception : %d\n", nom.c_str(), prenom.c_str(), age, nationalite.c_str(), scoreFifa, role.c_str(), scoreTacle, scoreInterception);
		return stats;
	}
    //fonction pour get les attributs de la classe defenseur
    int getScoreTacle() { return scoreTacle; }
    int getScoreInterception() { return scoreInterception; }
    //fonction pour set les attributs de la classe defenseur
    void setScoreTacle(int scoreTacle) { scoreTacle = scoreTacle; }
    void setScoreInterception(int scoreInterception) { scoreInterception = scoreInterception; }

    //destructeur qui doit vider stat
};

//Gardien

class Gardien : public Joueur {
    // le gardien peut faire un arrêt et rien d'autre
private:
    int scoreArret;

public:
    Gardien(string nom, string prenom, int age, string nationalite, int scoreFifa, string role, int scoreArret) : Joueur(nom, prenom, age, nationalite, scoreFifa, role), scoreArret(scoreArret) {}

    //initialisation constructeur par defaut
    Gardien() : Joueur()
    {
        scoreArret = 0;
    }
    //redefinition de la fonction afficher
    void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Age : " << age << endl;
        cout << "Nationalite : " << nationalite << endl;
        cout << "Score Fifa : " << scoreFifa << endl;
        cout << "Role : " << role << endl;
        cout << "Score Arret : " << scoreArret << endl;
    }
    //fonction qui met toutes les stats dans un char pour l'afficher
    char* stats = new char[300];
    char* getStats() {
		sprintf_s(stats,300, "Nom : %s\nPrenom : %s\nAge : %d\nNationalite : %s\nScore Fifa : %d\nRole : %s\nScore Arret : %d\n", nom.c_str(), prenom.c_str(), age, nationalite.c_str(), scoreFifa, role.c_str(), scoreArret);
		return stats;
    }
    //fonction pour get les attributs de la classe gardien
    int getScoreArret() { return scoreArret; }
    //fonction pour set les attributs de la classe gardien
    void setScoreArret(int scoreArret) { scoreArret = scoreArret; }
    

};

