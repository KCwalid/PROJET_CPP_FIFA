
#include <iostream>
#include "Game.hh"
#include <time.h>

using namespace std;

int nombreAleatoire = 100;

Game::Game(vector<Equipe> equipes) {
    window.create(sf::VideoMode(1280, 720), "Mini fifa", sf::Style::Titlebar | sf::Style::Close);
    window.setFramerateLimit(60);

    // initialisation des données ici (charger les textures, configurer les sprites, etc.)
    event = sf::Event();
    font.loadFromFile("res//font//font.otf");
    

    for (auto i : equipes) {
        _vectEquipes.push_back(i);
    }

    //on set le font pour tout les textes

    scoreText1.setFont(font);
    scoreText2.setFont(font);
    menu.setFont(font);
    tourText.setFont(font);
    message_problem.setFont(font);
    mess_equipe.setFont(font);

    text_coach1.setFont(font);
    text_medecin1.setFont(font);
    text_gardien1_1.setFont(font);
    text_gardien1_2.setFont(font);
    text_defenseur1_1.setFont(font);
    text_defenseur1_2.setFont(font);
    text_defenseur1_3.setFont(font);
    text_attaquant1_1.setFont(font);
    text_attaquant1_2.setFont(font);
    text_attaquant1_3.setFont(font);
    text_coach2.setFont(font);
    text_medecin2.setFont(font);
    text_gardien2_1.setFont(font);
    text_gardien2_2.setFont(font);
    text_defenseur2_1.setFont(font);
    text_defenseur2_2.setFont(font);
    text_defenseur2_3.setFont(font);
    text_attaquant2_1.setFont(font);
    text_attaquant2_2.setFont(font);
    text_attaquant2_3.setFont(font);

    attaquant1.setFont(font);
    defenseur1.setFont(font);
    gardien1.setFont(font);

    attaquant2.setFont(font);
    defenseur2.setFont(font);
    gardien2.setFont(font);

    //parametre de text pour les joueurs CHOISIS
    attaquant1.setCharacterSize(15);
    attaquant1.setFillColor(sf::Color::White);
    attaquant1.setPosition(160, 50);

    attaquant2.setCharacterSize(15);
    attaquant2.setFillColor(sf::Color::White);
    attaquant2.setPosition(1000, 50);

    defenseur1.setCharacterSize(15);
    defenseur1.setFillColor(sf::Color::White);
    defenseur1.setPosition(160, 200);

    defenseur2.setCharacterSize(15);
    defenseur2.setFillColor(sf::Color::White);
    defenseur2.setPosition(1000, 200);

    gardien1.setCharacterSize(15);
    gardien1.setFillColor(sf::Color::White);
    gardien1.setPosition(160, 350);

    gardien2.setCharacterSize(15);
    gardien2.setFillColor(sf::Color::White);
    gardien2.setPosition(1000, 350);


    // parametre de text pour le staff
    text_coach1.setCharacterSize(40);
    text_coach1.setFillColor(sf::Color::White);
    text_coach1.setPosition(50, 485);

    text_medecin1.setCharacterSize(40);
    text_medecin1.setFillColor(sf::Color::White);
    text_medecin1.setPosition(50, 640);

    //parametre de text pour les joueurs
    text_gardien1_1.setCharacterSize(40);
    text_gardien1_1.setFillColor(sf::Color::White);
    text_gardien1_1.setPosition(50, 260);

    text_gardien1_2.setCharacterSize(40);
    text_gardien1_2.setFillColor(sf::Color::White);
    text_gardien1_2.setPosition(50, 340);

    text_defenseur1_1.setCharacterSize(40);
    text_defenseur1_1.setFillColor(sf::Color::White);
    text_defenseur1_1.setPosition(460, 330);

    text_defenseur1_2.setCharacterSize(40);
    text_defenseur1_2.setFillColor(sf::Color::White);
    text_defenseur1_2.setPosition(460, 480);

    text_defenseur1_3.setCharacterSize(40);
    text_defenseur1_3.setFillColor(sf::Color::White);
    text_defenseur1_3.setPosition(460, 620);

    text_attaquant1_1.setCharacterSize(40);
    text_attaquant1_1.setFillColor(sf::Color::White);
    text_attaquant1_1.setPosition(870, 330);

    text_attaquant1_2.setCharacterSize(40);
    text_attaquant1_2.setFillColor(sf::Color::White);
    text_attaquant1_2.setPosition(870, 480);

    text_attaquant1_3.setCharacterSize(40);
    text_attaquant1_3.setFillColor(sf::Color::White);
    text_attaquant1_3.setPosition(870, 620);

    // parametre de text pour le staff
    text_coach2.setCharacterSize(40);
    text_coach2.setFillColor(sf::Color::White);
    text_coach2.setPosition(50, 485);

    text_medecin2.setCharacterSize(40);
    text_medecin2.setFillColor(sf::Color::White);
    text_medecin2.setPosition(50, 640);

    //parametre de text pour les joueurs
    text_gardien2_1.setCharacterSize(40);
    text_gardien2_1.setFillColor(sf::Color::White);
    text_gardien2_1.setPosition(50, 260);

    text_gardien2_2.setCharacterSize(40);
    text_gardien2_2.setFillColor(sf::Color::White);
    text_gardien2_2.setPosition(50, 340);

    text_defenseur2_1.setCharacterSize(40);
    text_defenseur2_1.setFillColor(sf::Color::White);
    text_defenseur2_1.setPosition(460, 330);

    text_defenseur2_2.setCharacterSize(40);
    text_defenseur2_2.setFillColor(sf::Color::White);
    text_defenseur2_2.setPosition(460, 480);

    text_defenseur2_3.setCharacterSize(40);
    text_defenseur2_3.setFillColor(sf::Color::White);
    text_defenseur2_3.setPosition(460, 620);

    text_attaquant2_1.setCharacterSize(40);
    text_attaquant2_1.setFillColor(sf::Color::White);
    text_attaquant2_1.setPosition(870, 330);

    text_attaquant2_2.setCharacterSize(40);
    text_attaquant2_2.setFillColor(sf::Color::White);
    text_attaquant2_2.setPosition(870, 480);

    text_attaquant2_3.setCharacterSize(40);
    text_attaquant2_3.setFillColor(sf::Color::White);
    text_attaquant2_3.setPosition(870, 620);
    

    mess_equipe.setCharacterSize(50);
    mess_equipe.setFillColor(sf::Color::White);
    mess_equipe.setPosition(460, 100);

    scoreText1.setCharacterSize(24);
    scoreText1.setFillColor(sf::Color::White);
    scoreText1.setPosition(20, 10);

    scoreText2.setCharacterSize(24);
    scoreText2.setFillColor(sf::Color::White);
    scoreText2.setPosition(1000, 10);

    tourText.setCharacterSize(40);
    tourText.setFillColor(sf::Color::White);
    tourText.setPosition(535, 3);

    //pour message_problem

    message_problem.setCharacterSize(50);
    message_problem.setFillColor(sf::Color::Black);
    message_problem.setPosition(300, 300);



    menu.setCharacterSize(30);
    menu.setFillColor(sf::Color::Black);
    menu.setPosition(480, 190);

    score_1 = 0;
    score_2 = 0;
    phase = 1;
    tour = 1;
    volume = 40.0;
    bug = 0;
    joueur_1 = 1;
    choose = 0;
    equipe_1 = equipe_2 = 0;
    drible_1 = drible_2 = 0;

    position_attaquant_1 = 690;
    position_attaquant_2 = 540;
    position_defenseur_1 = 300;
    position_defenseur_2 = 900;
    //on charge les textures et sprite de nos equipes
    marocTexture.loadFromFile("res//pays//maroc.png");
    franceTexture.loadFromFile("res//pays//france.png");
    argentineTexture.loadFromFile("res//pays//argentine.png");
    angleterreTexture.loadFromFile("res//pays//angleterre.png");


    marocSprite.setTexture(marocTexture);
    franceSprite.setTexture(franceTexture);
    argentineSprite.setTexture(argentineTexture);
    angleterreSprite.setTexture(angleterreTexture);

    //set position
    marocSprite.setPosition(460, 280);
    franceSprite.setPosition(660, 280);
    argentineSprite.setPosition(460, 480);
    angleterreSprite.setPosition(660, 480);


    //on charge la texture de notre ballon
    ballonTexture.loadFromFile("res//bg//ballon.png");
    ballonSprite.setTexture(ballonTexture);

    //sprite et texture coach et medecin
    coachTexture.loadFromFile("res//staff//coach.png");
    coachSprite1.setTexture(coachTexture);
    coachSprite2.setTexture(coachTexture);

    medecinTexture.loadFromFile("res//staff//medecin.png");
    medecinSprite1.setTexture(medecinTexture);
    medecinSprite2.setTexture(medecinTexture);


    attaquant_actionTexture.loadFromFile("res//bg//attaquant_bg.png");
    attaquant_actionSprite.setTexture(attaquant_actionTexture);

    backgroundTexture.loadFromFile("res//bg//terrain.jpg");
    backgroundSprite.setTexture(backgroundTexture);

    background2Texture.loadFromFile("res//bg//pelouse.jpg");
    background2Sprite.setTexture(background2Texture);

    selecTexture.loadFromFile("res//selec//selec1.png");
    selecSprite.setTexture(selecTexture);

    menuTexture.loadFromFile("res//menu//menu.png");
    menuSprite.setTexture(menuTexture);
    menuSprite.setPosition(0, 0);

    //sound
    soundTexture.loadFromFile("res//menu//sound.png");
    soundSprite.setTexture(soundTexture);
    soundSprite.setPosition(1135, 598);
    music.openFromFile("res//music//naruto.ogg");
    music.play();
    music.setLoop(true);
    music.setVolume(volume);
    srand(time(NULL));
}

void Game::run() {
    while (window.isOpen()) {
        handleInput();
        update();
        render();
    }
}

void Game::handleInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        if (event.type == sf::Event::MouseButtonReleased) {
            if (event.mouseButton.button == sf::Mouse::Left) {
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                sf::FloatRect playButton(240, 510, 200, 90);
                sf::FloatRect exitButton(840, 510, 200, 100);

                if (playButton.contains(event.mouseButton.x, event.mouseButton.y) && phase == 1) {
                    clock_t start = clock();
                    while ((clock() - start) / CLOCKS_PER_SEC < 1) {}
                    phase = 2;

                }

                if (exitButton.contains(event.mouseButton.x, event.mouseButton.y) && phase == 1) {
                    window.close();
                }

                //partie son:
                sf::FloatRect soundButtonUp(1131, 595, 75, 60);
                sf::FloatRect soundButtonDown(1207, 595, 75, 60);
                sf::FloatRect soundButtonOff(1131, 656, 73, 58);
                sf::FloatRect problem(1207, 656, 73, 58);
                if (soundButtonUp.contains(event.mouseButton.x, event.mouseButton.y)) {
                    if (volume < 100) {
                        volume += 10;
                    }
                }
                if (soundButtonDown.contains(event.mouseButton.x, event.mouseButton.y)) {
                    if (volume > 0) {
                        volume -= 10;
                    }
                }
                if (soundButtonOff.contains(event.mouseButton.x, event.mouseButton.y)) {
                    volume = 0;
                }
                if (problem.contains(event.mouseButton.x, event.mouseButton.y)) {
                    //on affiche un message special.
                    if (bug) {
                        bug = 0;
                    }
                    else {
                        bug = 1;
                    }
                }

                //maintenant on va gérer tout les clicks de la phase 2 (selection des equipes et des joeurs)
                if (phase == 2) {
                    // on créer nos boxes pour l'emplacement de l'icone de nos 4 équipes
                    sf::FloatRect box_maroc(460, 280, 150, 150);
                    sf::FloatRect box_france(660, 280, 150, 150);
                    sf::FloatRect box_argentine(460, 480, 150, 150);
                    sf::FloatRect box_angleterre(660, 480, 150, 150);

                    //on passe à la phase 3 des qu'il appuie sur une des equipes et on enregistre l'equipe dans une variable
                    //equipes[0] Fr ; equipes[1] Maroc ; equipes[2] Angleterre ; equipes[3] Argentine
                    if (box_france.contains(event.mouseButton.x, event.mouseButton.y)) {
                        phase = 3;
                        equipe_1 = 1;
                        equipe_choisis_1 = _vectEquipes[0];
                    }
                    if (box_maroc.contains(event.mouseButton.x, event.mouseButton.y)) {
                        phase = 3;
                        equipe_1 = 2;
                        equipe_choisis_1 = _vectEquipes[1];
                    }
                    if (box_angleterre.contains(event.mouseButton.x, event.mouseButton.y)) {
                        phase = 3;
                        equipe_1 = 3;
                        equipe_choisis_1 = _vectEquipes[2];
                    }
                    if (box_argentine.contains(event.mouseButton.x, event.mouseButton.y)) {
                        phase = 3;
                        equipe_1 = 4;
                        equipe_choisis_1 = _vectEquipes[3];
                    }

                }
                //on creer nos boxes pour voir qui le joueur a choisis
                //sf::FloatRect box_coach(30, 480, 375, 75);
                //sf::FloatRect box_medecin(30, 630, 375, 75);
                sf::FloatRect box_attaquant1(830, 280, 410, 140);
                sf::FloatRect box_attaquant2(830, 420, 410, 140);
                sf::FloatRect box_attaquant3(830, 570, 410, 140);
                sf::FloatRect box_defenseur1(415, 280, 410, 140);
                sf::FloatRect box_defenseur2(415, 420, 410, 140);
                sf::FloatRect box_defenseur3(415, 570, 410, 140);
                sf::FloatRect box_gardien1(30, 250, 375, 75);
                sf::FloatRect box_gardien2(30, 325, 375, 75);

                if (phase == 3) {
                    //on met à jour les textes de nos joueurs
                    text_coach1.setString(equipe_choisis_1.getEntraineur().getPrenom() + " " + equipe_choisis_1.getEntraineur().getNom());
                    text_medecin1.setString(equipe_choisis_1.getMedecin().getPrenom() + " " + equipe_choisis_1.getMedecin().getNom());

                    text_attaquant1_1.setString(equipe_choisis_1.getListeJoueur()[0].getPrenom() + " " + equipe_choisis_1.getListeJoueur()[0].getNom());
                    text_attaquant1_2.setString(equipe_choisis_1.getListeJoueur()[1].getPrenom() + " " + equipe_choisis_1.getListeJoueur()[1].getNom());
                    text_attaquant1_3.setString(equipe_choisis_1.getListeJoueur()[2].getPrenom() + " " + equipe_choisis_1.getListeJoueur()[2].getNom());

                    text_defenseur1_1.setString(equipe_choisis_1.getListeJoueur()[3].getPrenom() + " " + equipe_choisis_1.getListeJoueur()[3].getNom());
                    text_defenseur1_2.setString(equipe_choisis_1.getListeJoueur()[4].getPrenom() + " " + equipe_choisis_1.getListeJoueur()[4].getNom());
                    text_defenseur1_3.setString(equipe_choisis_1.getListeJoueur()[5].getPrenom() + " " + equipe_choisis_1.getListeJoueur()[5].getNom());

                    text_gardien1_1.setString(equipe_choisis_1.getListeJoueur()[6].getPrenom() + " " + equipe_choisis_1.getListeJoueur()[6].getNom());
                    text_gardien1_2.setString(equipe_choisis_1.getListeJoueur()[7].getPrenom() + " " + equipe_choisis_1.getListeJoueur()[7].getNom());

                    med1 = equipe_choisis_1.getMedecin();
                    coach1 = equipe_choisis_1.getEntraineur();
                    if (choose < 3) {
                        //il faut choisir 3 joueurs dans l'ordre en commençant par le gardien puis le défenseur et enfin l'attaquant
                        if (box_attaquant1.contains(event.mouseButton.x, event.mouseButton.y) && choose == 2) {
                            att1 = equipe_choisis_1.getAttaquants()[0];
                            text_attaquant1_1.setString("choisi !\n" + att1.getPrenom() + " " + att1.getNom());
                            choose = 3;
                        }
                        if (box_attaquant2.contains(event.mouseButton.x, event.mouseButton.y) && choose == 2) {
                            att1 = equipe_choisis_1.getAttaquants()[1];
                            text_attaquant1_2.setString("choisi !\n" + att1.getPrenom() + " " + att1.getNom());
                            choose = 3;
                        }
                        if (box_attaquant3.contains(event.mouseButton.x, event.mouseButton.y) && choose == 2) {
                            att1 = equipe_choisis_1.getAttaquants()[2];
                            text_attaquant1_3.setString("choisi !\n" + att1.getPrenom() + " " + att1.getNom());

                            choose = 3;
                        }
                        if (box_defenseur1.contains(event.mouseButton.x, event.mouseButton.y) && choose == 1) {
                            def1 = equipe_choisis_1.getDefenseurs()[0];
                            text_defenseur1_1.setString("choisi !\n" + def1.getPrenom() + " " + def1.getNom());

                            choose = 2;
                        }
                        if (box_defenseur2.contains(event.mouseButton.x, event.mouseButton.y) && choose == 1) {
                            def1 = equipe_choisis_1.getDefenseurs()[1];
                            text_defenseur1_2.setString("choisi !\n" + def1.getPrenom() + " " + def1.getNom());

                            choose = 2;
                        }
                        if (box_defenseur3.contains(event.mouseButton.x, event.mouseButton.y) && choose == 1) {
                            def1 = equipe_choisis_1.getDefenseurs()[2];
                            text_defenseur1_3.setString("choisi !\n" + def1.getPrenom() + " " + def1.getNom());

                            choose = 2;
                        }
                        if (box_gardien1.contains(event.mouseButton.x, event.mouseButton.y) && choose == 0) {
                            gard1 = equipe_choisis_1.getGardiens()[0];
                            //on change son texte pour notifié au joueur qu'il a été choisi
                            text_gardien1_1.setString("choisi !" + gard1.getPrenom() + " " + gard1.getNom());
                            text_gardien1_1.setCharacterSize(30);
                            choose = 1;
                        }
                        if (box_gardien2.contains(event.mouseButton.x, event.mouseButton.y) && choose == 0) {
                            gard1 = equipe_choisis_1.getGardiens()[1];
                            text_gardien1_2.setString("choisi !" + gard1.getPrenom() + " " + gard1.getNom());
                            text_gardien1_2.setCharacterSize(30);

                            choose = 1;
                        }
                    }
                }

                if (choose == 3) {
                    phase = 4;
                }
                if (phase == 4) {
                    // on créer nos boxes pour l'emplacement de l'icone de nos 4 équipes
                    sf::FloatRect box_maroc(460, 280, 150, 150);
                    sf::FloatRect box_france(660, 280, 150, 150);
                    sf::FloatRect box_argentine(460, 480, 150, 150);
                    sf::FloatRect box_angleterre(660, 480, 150, 150);
                    choose = 0; // on remet choose à 0 pour pouvoir choisir une nouvelle équipe

                    //on passe à la phase 4 des qu'il appuie sur une des equipes et on enregistre l'equipe dans une variable
                    //equipes[0] Fr ; equipes[1] Maroc ; equipes[2] Angleterre ; equipes[3] Argentine
                    if (box_france.contains(event.mouseButton.x, event.mouseButton.y)) {
                        phase = 5;
                        equipe_2 = 1;
                        equipe_choisis_2 = _vectEquipes[0];
                    }
                    if (box_maroc.contains(event.mouseButton.x, event.mouseButton.y)) {
                        phase = 5;
                        equipe_2 = 2;
                        equipe_choisis_2 = _vectEquipes[1];
                    }
                    if (box_angleterre.contains(event.mouseButton.x, event.mouseButton.y)) {
                        phase = 5;
                        equipe_2 = 3;
                        equipe_choisis_2 = _vectEquipes[2];
                    }
                    if (box_argentine.contains(event.mouseButton.x, event.mouseButton.y)) {
                        phase = 5;
                        equipe_2 = 4;
                        equipe_choisis_2 = _vectEquipes[3];
                    }

                }
                if (phase == 5) {
                    //on met à jour les textes de nos joueurs
                    text_coach2.setString(equipe_choisis_2.getEntraineur().getPrenom() + " " + equipe_choisis_2.getEntraineur().getNom());
                    text_medecin2.setString(equipe_choisis_2.getMedecin().getPrenom() + " " + equipe_choisis_2.getMedecin().getNom());

                    text_attaquant2_1.setString(equipe_choisis_2.getListeJoueur()[0].getPrenom() + " " + equipe_choisis_2.getListeJoueur()[0].getNom());
                    text_attaquant2_2.setString(equipe_choisis_2.getListeJoueur()[1].getPrenom() + " " + equipe_choisis_2.getListeJoueur()[1].getNom());
                    text_attaquant2_3.setString(equipe_choisis_2.getListeJoueur()[2].getPrenom() + " " + equipe_choisis_2.getListeJoueur()[2].getNom());

                    text_defenseur2_1.setString(equipe_choisis_2.getListeJoueur()[3].getPrenom() + " " + equipe_choisis_2.getListeJoueur()[3].getNom());
                    text_defenseur2_2.setString(equipe_choisis_2.getListeJoueur()[4].getPrenom() + " " + equipe_choisis_2.getListeJoueur()[4].getNom());
                    text_defenseur2_3.setString(equipe_choisis_2.getListeJoueur()[5].getPrenom() + " " + equipe_choisis_2.getListeJoueur()[5].getNom());

                    text_gardien2_1.setString(equipe_choisis_2.getListeJoueur()[6].getPrenom() + " " + equipe_choisis_2.getListeJoueur()[6].getNom());
                    text_gardien2_2.setString(equipe_choisis_2.getListeJoueur()[7].getPrenom() + " " + equipe_choisis_2.getListeJoueur()[7].getNom());

                    med2 = equipe_choisis_2.getMedecin();
                    coach2 = equipe_choisis_2.getEntraineur();

                    if (choose < 3) {
                        //il faut choisir 3 joueurs dans l'ordre en commençant par le gardien puis le défenseur et enfin l'attaquant
                        if (box_attaquant1.contains(event.mouseButton.x, event.mouseButton.y) && choose == 2) {
                            att2 = equipe_choisis_2.getAttaquants()[0];
                            text_attaquant2_1.setString("choisi !\n" + att2.getPrenom() + " " + att2.getNom());
                            choose = 3;
                        }
                        if (box_attaquant2.contains(event.mouseButton.x, event.mouseButton.y) && choose == 2) {
                            att2 = equipe_choisis_2.getAttaquants()[1];
                            text_attaquant2_2.setString("choisi !\n" + att2.getPrenom() + " " + att2.getNom());

                            choose = 3;
                        }
                        if (box_attaquant3.contains(event.mouseButton.x, event.mouseButton.y) && choose == 2) {
                            att2 = equipe_choisis_2.getAttaquants()[2];
                            text_attaquant2_3.setString("choisi !\n" + att2.getPrenom() + " " + att2.getNom());
                            choose = 3;
                        }
                        if (box_defenseur1.contains(event.mouseButton.x, event.mouseButton.y) && choose == 1) {
                            def2 = equipe_choisis_2.getDefenseurs()[0];
                            text_defenseur2_1.setString("choisi !\n" + def2.getPrenom() + " " + def2.getNom());
                            choose = 2;
                        }
                        if (box_defenseur2.contains(event.mouseButton.x, event.mouseButton.y) && choose == 1) {
                            def2 = equipe_choisis_2.getDefenseurs()[1];
                            text_defenseur2_2.setString("choisi !\n" + def2.getPrenom() + " " + def2.getNom());
                            choose = 2;
                        }
                        if (box_defenseur3.contains(event.mouseButton.x, event.mouseButton.y) && choose == 1) {
                            def2 = equipe_choisis_2.getDefenseurs()[2];
                            text_defenseur2_3.setString("choisi !\n" + def2.getPrenom() + " " + def2.getNom());
                            choose = 2;
                        }
                        if (box_gardien1.contains(event.mouseButton.x, event.mouseButton.y) && choose == 0) {
                            gard2 = equipe_choisis_2.getGardiens()[0];
                            text_gardien2_1.setString("choisi !" + gard2.getPrenom() + " " + gard2.getNom());
                            text_gardien2_1.setCharacterSize(30);
                            choose = 1;
                        }
                        if (box_gardien2.contains(event.mouseButton.x, event.mouseButton.y) && choose == 0) {
                            gard2 = equipe_choisis_2.getGardiens()[1];
                            text_gardien2_2.setString("choisi !" + gard2.getPrenom() + " " + gard2.getNom());
                            text_gardien2_2.setCharacterSize(30);
                            choose = 1;
                        }
                    }
                    //on ne peut être ici que si nous somme passé à la phase 5 donc cette condition n'entrera pas en
                    //conflit avec la condition plus haute 
                    if (choose == 3) {
                        phase = 6;
                        choose = 0;
                    }
                }

                if (phase == 6) {
                    //on va presenter les 2 equipes avec les 3 joueurs choisis, le coach et le medecin
                    //on va aussi afficher les statistiques principales de chaque joueur
                    sf::FloatRect box_letsplay(420, 295, 240, 170);
                    if (box_letsplay.contains(event.mouseButton.x, event.mouseButton.y)) {
                        gard2 = equipe_choisis_2.getGardiens()[1];
                        phase = 7;
                    }
                }


                if (phase == 7) {
                    sf::FloatRect box_shoot(430, 520, 230, 150);
                    sf::FloatRect box_dribble(660, 520, 230, 150);

                    if (tour % 2 == 1) {
                        if (box_shoot.contains(event.mouseButton.x, event.mouseButton.y)) {

                            if (position_attaquant_1 < position_defenseur_2) {

                                nombreAleatoire = rand() % 101;
                                int echec = def2.getScoreInterception() - ((att1.getScoreTir()) / 2);
                                if (echec > nombreAleatoire) {

                                    joueur_1 = 0;
                                    tour++;

                                }
                                else {
                                    nombreAleatoire = rand() % 101;
                                    int echec = gard2.getScoreArret() - (att1.getScoreTir() / 3);
                                    if (echec > nombreAleatoire) {

                                        tour++;
                                        joueur_1 = 0;
                                    }
                                    else {
                                        joueur_1 = 0;
                                        score_1++;
                                        tour++;
                                    }
                                }
                            }
                        }

                        if (box_dribble.contains(event.mouseButton.x, event.mouseButton.y)) {

                            if (position_attaquant_1 < position_defenseur_2) {

                                int nombreAleatoire = rand() % 101;
                                int echec = def2.getScoreTacle() - ((att1.getScoreDribble() - 10) / 2);
                                if (echec > nombreAleatoire) {
                                    joueur_1 = 0;
                                    tour++;

                                }
                                else {
                                    drible_1 = 1;
                                }
                            }
                        }
                            if (drible_1) {

                                position_attaquant_1 = position_defenseur_2 + 60;
                                if (box_shoot.contains(event.mouseButton.x, event.mouseButton.y)) {

                                    nombreAleatoire = rand() % 101;
                                    int echec = gard2.getScoreArret() - ((att1.getScoreTir() / 2));
                                    if (echec > nombreAleatoire) {
                                        joueur_1 = 0; //ce n'est plus le joueur 1 qui a la balle 

                                        tour++;
                                        position_attaquant_1 = 690; //on revient à l'état de depart
                                        drible_1 = 0;

                                    }
                                    else {
                                        tour++;
                                        joueur_1 = 0; //ce n'est plus le joueur 1 qui a la balle 
                                        position_attaquant_1 = 690; //on revient à l'état de depart
                                        score_1++;
                                        drible_1 = 0;
                                    }
                                }
                            }
                        

                    }
                    else {

                        if (box_shoot.contains(event.mouseButton.x, event.mouseButton.y)) {

                            if (position_attaquant_2 > position_defenseur_1) {


                                nombreAleatoire = rand() % 101;
                                int echec = def1.getScoreInterception() - ((att2.getScoreTir()) / 2);
                                if (echec > nombreAleatoire) {

                                    tour++;
                                    joueur_1 = 1; //ce n'est plus le joueur 1 qui a la balle 

                                }
                                else {


                                    nombreAleatoire = rand() % 101;
                                    int echec = gard1.getScoreArret() - (att2.getScoreTir() / 3);
                                    if (echec > nombreAleatoire) {
                                        tour++;
                                        joueur_1 = 1; //ce n'est plus le joueur 1 qui a la balle 

                                    }
                                    else {
                                        tour++;
                                        score_2++;
                                        joueur_1 = 1; //ce n'est plus le joueur 1 qui a la balle 

                                    }
                                }
                            }
                        }

                        if (box_dribble.contains(event.mouseButton.x, event.mouseButton.y)) {

                            if (position_attaquant_2 > position_defenseur_1) {


                                nombreAleatoire = rand() % 101;
                                int echec = def1.getScoreTacle() - ((att2.getScoreDribble() - 10) / 2);
                                if (echec > nombreAleatoire) {

                                    tour++;
                                    joueur_1 = 1; //ce n'est plus le joueur 1 qui a la balle 

                                }
                                else {
                                    drible_2 = 1;
                                }
                            }
                        }
                            
                            if (drible_2) {
                                position_attaquant_2 = position_defenseur_1 - 40;
                                if (box_shoot.contains(event.mouseButton.x, event.mouseButton.y)) {
                                    position_attaquant_2 = 540; //on revient à l'état de depart
                                    nombreAleatoire = rand() % 101;
                                    int echec = gard1.getScoreArret() - ((att2.getScoreTir() / 2));
                                    if (echec > nombreAleatoire) {

                                        tour++;
                                        joueur_1 = 1; //ce n'est plus le joueur 2 qui a la balle
                                        drible_2 = 0;
                                    }
                                    else {
                                        tour++;
                                        joueur_1 = 1; //ce n'est plus le joueur 2 qui a la balle
                                        score_2++;
                                        drible_2 = 0;
                                    }
                                }
                            }
                        
                    }
                }
                sf::FloatRect box_reload(10, 10, 1200, 700);
                if (phase == 8) {
                    if (box_reload.contains(event.mouseButton.x, event.mouseButton.y)) {
                        phase = 1;
                    }
                }

            }
        }


        if (event.type == sf::Event::KeyPressed) {
            if (event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        if (tour == 61) {
            phase = 8;
        }
    }
}

void Game::update() {
    // mettre à jour les données du jeu ici
    music.setVolume(volume);
    //on va mettre a jour le sprite du volume en fonction du volume avec un switch case
    int volume_int = volume;
    switch (volume_int) {

    case 0:
        volumeTexture.loadFromFile("res//menu//volume1.png");
        break;

    case 10:
    case 20:
        volumeTexture.loadFromFile("res//menu//volume2.png");

        break;

    case 30:
    case 40:
        volumeTexture.loadFromFile("res//menu//volume3.png");
        break;

    case 50:
    case 60:
        volumeTexture.loadFromFile("res//menu//volume4.png");

        break;

    case 70:
    case 80:
        volumeTexture.loadFromFile("res//menu//volume5.png");

        break;

    case 90:
    case 100:
        volumeTexture.loadFromFile("res//menu//volume6.png");
        break;
    }

    if (phase == 6) {
        mess_equipe.setString("Voici les 2 equipes!\nAppuyez sur letsplay pour jouer");
        //on va charger des sprites differents en fonction du coté des personnages
        //equipe = 1 France ; equipe = 2 Maroc ; equipe = 3 angleterre ; equipe = 4 argentine
        if (equipe_1 == 1) {
            playerFranceTexture.loadFromFile("res//player_leftSide//france.png");
            player1_Sprite1.setTexture(playerFranceTexture);
            player1_Sprite2.setTexture(playerFranceTexture);
            player1_Sprite3.setTexture(playerFranceTexture);
        }
        else if (equipe_1 == 2){
            playerMarocTexture.loadFromFile("res//player_leftSide//maroc.png");
            player1_Sprite1.setTexture(playerMarocTexture);
            player1_Sprite2.setTexture(playerMarocTexture);
            player1_Sprite3.setTexture(playerMarocTexture);


        }
        else if (equipe_1 == 3) {
            playerAngleterreTexture.loadFromFile("res//player_leftSide//angleterre.png");
            player1_Sprite1.setTexture(playerAngleterreTexture);
            player1_Sprite2.setTexture(playerAngleterreTexture);
            player1_Sprite3.setTexture(playerAngleterreTexture);


        }
        else if (equipe_1 == 4) {
            playerArgentineTexture.loadFromFile("res//player_leftSide//argentine.png");
            player1_Sprite1.setTexture(playerArgentineTexture);
            player1_Sprite2.setTexture(playerArgentineTexture);
            player1_Sprite3.setTexture(playerArgentineTexture);
        }
        else {
            mess_equipe.setString("Erreur de chargement des textures");
        }
    
        if (equipe_2 == 1) {
            playerFranceTexture.loadFromFile("res//player_rightSide//france.png");
            player2_Sprite1.setTexture(playerFranceTexture);
            player2_Sprite2.setTexture(playerFranceTexture);
            player2_Sprite3.setTexture(playerFranceTexture);


        }
        else if (equipe_2 == 2) {
            playerMarocTexture.loadFromFile("res//player_rightSide//maroc.png");
            player2_Sprite1.setTexture(playerMarocTexture);
            player2_Sprite2.setTexture(playerMarocTexture);
            player2_Sprite3.setTexture(playerMarocTexture);


        }
        else if (equipe_2 == 3) {
            playerAngleterreTexture.loadFromFile("res//player_rightSide//angleterre.png");
            player2_Sprite1.setTexture(playerAngleterreTexture);
            player2_Sprite2.setTexture(playerAngleterreTexture);
            player2_Sprite3.setTexture(playerAngleterreTexture);


        }
        else if (equipe_2 == 4) {
            playerArgentineTexture.loadFromFile("res//player_rightSide//argentine.png");

            player2_Sprite1.setTexture(playerArgentineTexture);
            player2_Sprite2.setTexture(playerArgentineTexture);
            player2_Sprite3.setTexture(playerArgentineTexture);


        }
        else {
            mess_equipe.setString("Erreur de chargement des textures");
        }
        //on va mettre à jour les textes de tout nos joueurs
        attaquant1.setString(att1.getStats());
        defenseur1.setString(def1.getStats());
        gardien1.setString(gard1.getStats());

        text_coach1.setString(coach1.getStats());
        text_medecin1.setString(med1.getStats());
        text_coach1.setCharacterSize(15);
        text_medecin1.setCharacterSize(15);



        attaquant2.setString(att2.getStats());
        defenseur2.setString(def2.getStats());
        gardien2.setString(gard2.getStats());

        text_coach2.setString(coach2.getStats());
        text_medecin2.setString(med2.getStats());

        text_coach2.setCharacterSize(15);
        text_medecin2.setCharacterSize(15);

        //set la position des coach et des medecin

        text_coach1.setPosition(160, 50 + 430);
        text_medecin1.setPosition(160, 50 + 550);
        coachSprite1.setPosition(55, 470);
        medecinSprite1.setPosition(55, 590);

        player1_Sprite1.setPosition(90, 80);
        player1_Sprite2.setPosition(90, 90 + 150);
        player1_Sprite3.setPosition(90, 90 + 290);



        player2_Sprite1.setPosition(1130, 80);
        player2_Sprite2.setPosition(1130, 80 + 150);
        player2_Sprite3.setPosition(1130, 80 + 290);

        text_coach2.setPosition(1000, 50 + 430);
        text_medecin2.setPosition(1000, 50 + 550);
        coachSprite2.setPosition(1150, 470);
        medecinSprite2.setPosition(1150, 590);
    }

    if (joueur_1) {
        ballonSprite.setPosition(position_attaquant_1 + 50, 360);
    }
    else{
        ballonSprite.setPosition(position_attaquant_2 - 30, 360);
    }
}
        
void Game::render() {
    window.clear();
    //on affiche le fond de jeu
    window.draw(backgroundSprite);
    window.draw(soundSprite);
    window.draw(volumeSprite);
    volumeSprite.setTexture(volumeTexture);
    volumeSprite.setPosition(1145, 586);

    switch (phase) {
    case 1:
        //on affiche le menu
        window.draw(menuSprite);
        menu.setString(" Bonjour,\n bienvenue dans notre \n mini jeu de football !\n Appuyer sur le bouton play \n pour commencer la partie");
        window.draw(menu);

        break;
    case 2:
        //phase de choix de l'equipe, on affiche les sprites des equipes et un message "cliquez sur l'icone de votre equipe"
        //on affiche le message
        mess_equipe.setString("Choisissez votre equipe\nen cliquant sur son logo !");
        window.draw(mess_equipe);
        //on affiche les sprites des equipes
        window.draw(franceSprite);
        window.draw(angleterreSprite);
        window.draw(marocSprite);
        window.draw(argentineSprite);

        break;
    case 3:
        //on affiche les joueurs de l'equipe choisie et on demande de choisir un gardien, un defenseur, un attaquant
        // on met le nom de l'equipe choisie dans un message et on l'affiche
        window.clear();
        window.draw(selecSprite);
        mess_equipe.setString("Vous avez choisis " + (equipe_choisis_1.getPrenom()));
        mess_equipe.setPosition(485, 10);
        window.draw(mess_equipe);
        window.draw(text_coach1);
        window.draw(text_medecin1);
        window.draw(text_attaquant1_1);
        window.draw(text_attaquant1_2);
        window.draw(text_attaquant1_3);
        window.draw(text_defenseur1_1);
        window.draw(text_defenseur1_2);
        window.draw(text_defenseur1_3);
        window.draw(text_gardien1_1);
        window.draw(text_gardien1_2);

        break;

    case 4:
        //phase de choix de l'equipe, on affiche les sprites des equipes et un message "cliquez sur l'icone de votre equipe"
//on affiche le message
        mess_equipe.setString("Choisissez l'equipe adverse\nen cliquant sur son logo !");
        window.draw(mess_equipe);
        //on affiche les sprites des equipes
        window.draw(franceSprite);
        window.draw(angleterreSprite);
        window.draw(marocSprite);
        window.draw(argentineSprite);

        break;
        
	case 5:
        window.clear();
        window.draw(selecSprite);
        mess_equipe.setString("Vous avez choisis " + (equipe_choisis_2.getPrenom()));
        mess_equipe.setPosition(485, 10);
        window.draw(mess_equipe);
        window.draw(text_coach2);
        window.draw(text_medecin2);
        window.draw(text_attaquant2_1);
        window.draw(text_attaquant2_2);
        window.draw(text_attaquant2_3);
        window.draw(text_defenseur2_1);
        window.draw(text_defenseur2_2);
        window.draw(text_defenseur2_3);
        window.draw(text_gardien2_1);
        window.draw(text_gardien2_2);
        break;
        
    case 6:
        //on affiche le score et le tour
        window.draw(background2Sprite);
        scoreText1.setString("Score equipe  1 : " + to_string(score_1));
        scoreText2.setString("Score equipe  2 : " + to_string(score_2));
        tourText.setString("Tour n : " + to_string(tour));
        window.draw(scoreText1);
        window.draw(scoreText2);
        window.draw(tourText);
        mess_equipe.setPosition(480, 40);
        window.draw(mess_equipe);

        //on va afficher les sprites des joueurs + coach + medecin de haut en bas avec leur text et leur characteristiques

        window.draw(attaquant1);
        window.draw(defenseur1);
        window.draw(gardien1);
        window.draw(text_coach1);
        window.draw(text_medecin1);

        window.draw(attaquant2);
        window.draw(defenseur2);
        window.draw(gardien2);
        window.draw(text_coach2);
        window.draw(text_medecin2);


        window.draw(player1_Sprite1);
        window.draw(player1_Sprite2);
        window.draw(player1_Sprite3);
        window.draw(coachSprite1);
        window.draw(medecinSprite1);

        window.draw(player2_Sprite1);
        window.draw(player2_Sprite2);
        window.draw(player2_Sprite3);
        window.draw(coachSprite2);
        window.draw(medecinSprite2);
        break;

    case 7:
        scoreText1.setString("Score equipe  1 : " + to_string(score_1));
        scoreText2.setString("Score equipe  2 : " + to_string(score_2));
        tourText.setString("Tour n : " + to_string(tour));
        window.draw(scoreText1);
        window.draw(scoreText2);
        window.draw(tourText);
        player1_Sprite1.setPosition(105,330);
        player1_Sprite2.setPosition(position_defenseur_1,330);
        player1_Sprite3.setPosition(position_attaquant_1,330);

        player2_Sprite1.setPosition(1100, 330);
        player2_Sprite2.setPosition(position_defenseur_2, 330);
        player2_Sprite3.setPosition(position_attaquant_2, 330);
        //car nos attaquants sont les seuls qui bougeront pour dribbler !

        // Dessiner les sprites sur l'écran
        window.draw(player1_Sprite1);
        window.draw(player1_Sprite2);
        window.draw(player1_Sprite3);

        window.draw(player2_Sprite1);
        window.draw(player2_Sprite2);
        window.draw(player2_Sprite3);

        window.draw(ballonSprite);
        window.draw(attaquant_actionSprite);
        break;

    case 8:
        window.draw(backgroundSprite);
        scoreText1.setString("Voici le score de l'equipe  1 : " + to_string(score_1));
        scoreText2.setString("Voici le score de l'equipe  2 : " + to_string(score_2));
        tourText.setString("JEU FINIIII \nRELANCEZ LE JEU EN QUITTANT");

        scoreText1.setPosition(400, 400);
        scoreText2.setPosition(400, 500);

        scoreText1.setCharacterSize(50);
        scoreText2.setCharacterSize(50);
        tourText.setCharacterSize(50);

        window.draw(scoreText1);
        window.draw(scoreText2);
        window.draw(tourText);

    }

    if (bug) {
        window.clear(sf::Color::White);

        window.draw(soundSprite);
        if (phase < 3) {
            message_problem.setString("Fonctionnement du jeu:\nPlay -> choisissez une equipe\nchoisissez vos joueurs\n1 gardien puis 1 defenseur puis 1 attaquant\nde même pour l'equipe 2\nNE  PAS PRENDRE 2 MEME EQUIPE\n");
        }
        else {
            message_problem.setString("Pour jouer, soit tirer, soit dribbler le defenseur\nSi le defenseur vous arrete ou que votre shoot est arreté\nla balle reviens à l'attaquant adverse\nAprés un dribble, veuillez tirer la balle !\n60 TOURS MAX");
        }
        message_problem.setPosition(200, 200);
        window.draw(message_problem);
    }
    window.display();
}





