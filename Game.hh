#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Pour utiliser la fonction rand()
#include "Equipe.hh"
using namespace std;
class Game {
public:

	Game(vector<Equipe> equipes);


    void run(); // fonction principale pour exécuter le jeu
    void handleInput(); // gère les entrées utilisateur
    void update(); // met à jour les données du jeu
    void render(); // affiche les éléments graphiques

private:
    sf::RenderWindow window; // la fenêtre principale du jeu
	//texture et sprite de nos 4 equipes maroc france argentine et angleterre
	sf::Texture marocTexture;
	sf::Sprite marocSprite;
	sf::Texture franceTexture;
	sf::Sprite franceSprite;
	sf::Texture argentineTexture;
	sf::Sprite argentineSprite;
	sf::Texture angleterreTexture;
	sf::Sprite angleterreSprite;
	//texture et sprite de notre ballon
	sf::Texture ballonTexture;
	sf::Sprite ballonSprite;
	//coach et medecin
	sf::Texture coachTexture;
	sf::Sprite coachSprite1;
	sf::Sprite coachSprite2;
	sf::Texture medecinTexture;
	sf::Sprite medecinSprite1;
	sf::Sprite medecinSprite2;
	//1 texture par equipe et 1 sprite par joueur
	
	sf::Texture playerArgentineTexture;
	sf::Texture playerAngleterreTexture;
	sf::Texture playerFranceTexture;
	sf::Texture playerMarocTexture;
	
	sf::Sprite player1_Sprite1;
	sf::Sprite player1_Sprite2;
	sf::Sprite player1_Sprite3;
	
	sf::Sprite player2_Sprite1;
	sf::Sprite player2_Sprite2;
	sf::Sprite player2_Sprite3;
	
	

	
	
	
	//texture et sprite du menu avec une image pour le son, pour le bouton play, pour exit.
	sf::Texture menuTexture;
	sf::Sprite menuSprite;
	sf::Texture playTexture;
	sf::Sprite playSprite;
	sf::Texture exitTexture;
	sf::Sprite exitSprite;
	sf::Texture soundTexture;
	sf::Sprite soundSprite;
	sf::Texture volumeTexture;
	sf::Sprite volumeSprite;
	sf::Texture selecTexture;
	sf::Sprite selecSprite;
	
	sf::Texture attaquant_actionTexture;
	sf::Sprite attaquant_actionSprite;
	
	

    sf::Font font; // la police utilisée pour les textes
	sf::Text scoreText1; // le texte affichant le score du joueur 1
	sf::Text scoreText2; // le texte affichant le score du joueur 2
	sf::Text tourText;
    sf::Text menu;
	sf::Text message_problem;
	sf::Text mess_equipe;
	//les text pour tout nos joueurs (1 coach, 1 medecin, 1 gardien, 3 defenseurs, 3 attaquants) pour l'equipe 1 et l'equipe 2
	sf::Text text_coach1;
	sf::Text text_medecin1;
	sf::Text text_gardien1_1;
	sf::Text text_gardien1_2;
	sf::Text text_defenseur1_1;
	sf::Text text_defenseur1_2;
	sf::Text text_defenseur1_3;
	sf::Text text_attaquant1_1;
	sf::Text text_attaquant1_2;
	sf::Text text_attaquant1_3;
	sf::Text text_coach2;
	sf::Text text_medecin2;
	sf::Text text_gardien2_1;
	sf::Text text_gardien2_2;
	sf::Text text_defenseur2_1;
	sf::Text text_defenseur2_2;
	sf::Text text_defenseur2_3;
	sf::Text text_attaquant2_1;
	sf::Text text_attaquant2_2;
	sf::Text text_attaquant2_3;
	
	sf::Text attaquant1;
	sf::Text defenseur1;
	sf::Text gardien1;
	
	sf::Text attaquant2;
	sf::Text defenseur2;
	sf::Text gardien2;
	
    sf::Event event; //les events utilisateur
    sf::Texture backgroundTexture; //pour le fond de jeu qui restera toujours le même
    sf::Sprite backgroundSprite;
	sf::Texture background2Texture; //pour le fond de jeu qui restera toujours le même
	sf::Sprite background2Sprite;
    sf::Music music; //pour rajouter une petite musique de fond
    int phase; // l'état actuel du jeu (menu, phase de jeu, jeu fini)
    int tour; // le tour actuel du jeu
    int score_1; // le score actuel de l'équipe 1
    int score_2; // le score actuel de l'équipe 2
	float volume;
	int bug;
	int choose; //pour savoir si 3 joueurs ont bien été choisis.

	std::vector<Equipe> _vectEquipes;
	
	//les joueurs choisis par l'utilisateur pour l'equipe 1 et l'equipe 2
	Defenseur def1;
	Defenseur def2;
	
	Attaquant att1;
	Attaquant att2;
	
	Gardien gard1;
	Gardien gard2;
	
	Staff_technique coach1;
	Staff_technique coach2;
	
	Staff_medical med1;
	Staff_medical med2;
	
	
	//variable pour l'equipe choisis par le joueur
	Equipe equipe_choisis_1;
	int equipe_1;
	int equipe_2; 
	//pour enregistrer quel équipe a été choisis (la france, l'angleterre...)
	Equipe equipe_choisis_2;
	//variable pour le joueur qui joue
	int joueur_1;
	int joueur_2;
	
	int drible_1;
	int drible_2;
	
	int position_attaquant_1;
	int position_attaquant_2;
	
	int position_defenseur_1;
	int position_defenseur_2;
	
	//on parcours le vecteur d'equipe pour detruire chaque equipe
	//pour eviter les fuites de memoire

	
	
};
