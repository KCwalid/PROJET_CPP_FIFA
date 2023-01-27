

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "Equipe.hh"
#include "Game.hh"


using namespace std;

int main() {

    //on initialise les equipes
    vector<Equipe> Equipes_championnat = Initialisation_Equipe();
    //on lance notre jeu
    Game game(Equipes_championnat);
    //on initialise le font de la game
    game.run();

    //test case si le nom de l'equipe 1 est bien Les Bleus
    
    if (Equipes_championnat[0].getPrenom() == "Les Bleus")
    {
		cout << "test case 1 passed" << endl;
	}
	else
	{
		cout << "test case 1 failed" << endl;
    }
    
    //si il y a bien 3 attaquants dans l'equipe des bleus
    
	if (Equipes_championnat[0].getAttaquants().size() == 3)
	{
		cout << "test case 2 passed" << endl;
		
	}
	else
	{
		cout << "test case 2 failed" << endl;
	}
    
    //si il y a bien 4 equipes en tout
    
	if (Equipes_championnat.size() == 4)
	{
		cout << "test case 3 passed" << endl;
	}
	else
	{
		cout << "test case 3 failed" << endl;
	}
	
	//si Messi est bien le premier attaquant de l'argentine (equipe numero 3)
	
	if (Equipes_championnat[3].getAttaquants()[0].getNom() == "Messi") {
		cout << "test case 4 passed" << endl;
	}
	else
	{
		cout << "test case 4 failed" << endl;
	}
    
	//on cherche Mbappe et s'il est français alors success
	for (unsigned int i = 0; i < Equipes_championnat.size(); i++)
	{
		for (unsigned int j = 0; j < Equipes_championnat[i].getAttaquants().size(); j++)
		{
			if (Equipes_championnat[i].getAttaquants()[j].getNom() == "Mbappe")
			{
				if (Equipes_championnat[i].getPrenom() == "Les Bleus")
				{
					cout << "test case 5 passed" << endl;
				}
				else
				{
					cout << "test case 5 failed" << endl;
				}
			}
		}
	}
	
	//si didier deschamps fait partie du staff de l'equipe des bleus et qu'il a au moins 2 trophées gagné
	if (Equipes_championnat[0].getEntraineur().getNom() == "Deschamps") {
		if (Equipes_championnat[0].getEntraineur().getNbrTrophee() >1)
		{
			cout << "test case 6 passed" << endl;
		}
		else
		{
			cout << "test case 6 failed" << endl;
		}
	}
	
    return 0;
}


