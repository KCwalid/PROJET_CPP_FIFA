#include <iostream>
#include <string>
#include <vector>
#include "Equipe.hh"
using namespace std;

//fonction d'initialisation des equipes mises en parametre dans le main

vector<Equipe> Initialisation_Equipe() {
    //initialisation des joueurs de l'equipe de France-Maroc-Argentine-Angleterre

    //on créer nos 4 equipes
    Equipe France; Equipe Maroc; Equipe Angleterre; Equipe Argentine;

    ///////////////////////////////////////////       France        ///////////////////////////////////////////////

    //Attaquant France -> nom, prenom, age, nationalite, score Fifa, poste, score tir, score dribble
    Attaquant AntoineGriezmann("Griezmann", "Antoine", 28, "Francais", 85, "Attaquant", 84, 87);
    Attaquant KylianMbappe("Mbappe", "Kylian", 21, "Francais", 91, "Attaquant", 88, 92);
    Attaquant KarimBenzema("Benzema", "Karim", 32, "Francais", 89, "Attaquant", 86, 87);
    
	France.ajouterAttaquant(AntoineGriezmann); France.ajouterAttaquant(KylianMbappe); France.ajouterAttaquant(KarimBenzema);

    //Defenseur France -> nom, prenom, age, nationalite, score Fifa, poste, score tacle, score interception
    Defenseur RaphaelVarane("Varane", "Raphael", 28, "Francais", 87, "Defenseur", 87, 87);
    Defenseur PresnelKimpembe("Kimpembe", "Presnel", 26, "Francais", 84, "Defenseur", 84, 84);
    Defenseur TheoHernandez("Hernandez", "Theo", 28, "Francais", 84, "Defenseur", 82, 77);

	France.ajouterDefenseur(RaphaelVarane); France.ajouterDefenseur(PresnelKimpembe); France.ajouterDefenseur(TheoHernandez);

    //Garde de but France -> nom, prenom, age, nationalite, score Fifa, poste, score arret
    Gardien HugoLloris("Lloris", "Hugo", 34, "Francais", 88, "Gardien", 88);
    Gardien SteveMandanda("Mandanda", "Steve", 35, "Francais", 85, "Gardien", 85);
    
	France.ajouterGardien(HugoLloris); France.ajouterGardien(SteveMandanda);

    //staff technique France -> nom, prenom, age, nationalite, expérience, nbr de trophées
    Staff_technique DidierDeschamps("Deschamps", "Didier", 50, "Francais", 20, 3);

    // staff médical France -> nom, prenom, age, nationalite, expérience, diplome bac+ ?
    Staff_medical JeanLucMillet("Millet", "Jean-Luc", 60, "Francais", 30, 9); // diplome medecine generale bac+9

    // on met les Joueurs dans un vecteur 
    vector<Joueur> list_France;
    list_France.push_back(AntoineGriezmann); list_France.push_back(KylianMbappe); list_France.push_back(KarimBenzema); list_France.push_back(RaphaelVarane); list_France.push_back(PresnelKimpembe); list_France.push_back(TheoHernandez); list_France.push_back(HugoLloris); list_France.push_back(SteveMandanda);


    ///////////////////////////////////////////       MAROC       ///////////////////////////////////////////////

    //Attaquant Maroc -> nom, prenom, age, nationalite, score Fifa, poste, score tir, score dribble
    Attaquant YoussefEnNesyri("En-Nesyri", "Youssef", 24, "Marocain", 85, "Attaquant", 80, 95);
    Attaquant SofianeBoufal("Boufal", "Sofiane", 29, "Marocain", 88, "Attaquant", 78, 98);
    Attaquant HakimZiyech("Ziyech", "Hakim", 28, "Marocain", 87, "Attaquant", 80, 99);

	Maroc.ajouterAttaquant(YoussefEnNesyri); Maroc.ajouterAttaquant(SofianeBoufal); Maroc.ajouterAttaquant(HakimZiyech);

    //Defenseur Maroc -> nom, prenom, age, nationalite, score Fifa, poste, score tacle, score interception
    Defenseur AchrafHakimi("Hakimi", "Achraf", 24, "Marocain", 86, "Defenseur", 85, 82);
    Defenseur AyoubElKaabi("El-Kaabi", "Ayoub", 23, "Marocain", 82, "Defenseur", 81, 78);
    Defenseur NabilDirar("Dirar", "Nabil", 32, "Marocain", 78, "Defenseur", 76, 88);

	Maroc.ajouterDefenseur(AchrafHakimi); Maroc.ajouterDefenseur(AyoubElKaabi); Maroc.ajouterDefenseur(NabilDirar);

    //Garde de but Maroc -> nom, prenom, age, nationalite, score Fifa, poste, score arret
    Gardien YassineBounou("Bounou", "Yassine", 31, "Marocain", 87, "Gardien", 87);
    Gardien MunirMohammed("Mohammed", "Munir", 28, "Marocain", 81, "Gardien", 81);

	Maroc.ajouterGardien(YassineBounou); Maroc.ajouterGardien(MunirMohammed);

    //staff technique Maroc -> nom, prenom, age, nationalite, expérience, nbr de trophées
    Staff_technique WalidRegragui("Regragui", "Walid", 47, "Francais", 13, 0);

    //staff medical Maroc -> nom, prenom, age, nationalite, expérience, diplome bac+ ?
    Staff_medical KarimSerhane("Serhane", "Karim", 60, "Francais", 10, 5); // il est physiotherapeute donc bac+5

    // on met les Joueurs dans un vecteur 
    vector<Joueur> list_Maroc; list_Maroc.push_back(YoussefEnNesyri); list_Maroc.push_back(SofianeBoufal); list_Maroc.push_back(HakimZiyech); list_Maroc.push_back(AchrafHakimi); list_Maroc.push_back(AyoubElKaabi); list_Maroc.push_back(NabilDirar); list_Maroc.push_back(YassineBounou); list_Maroc.push_back(MunirMohammed);


    ////////////////////////////////////////////       ANGLETERRE       ///////////////////////////////////////////////

    //Attaquant Angleterre -> nom, prenom, age, nationalite, score Fifa, poste, score tir, score dribble
    Attaquant HarryKane("Kane", "Harry", 27, "Anglais", 90, "Attaquant", 90, 90);
    Attaquant MarcusRashford("Rashford", "Marcus", 23, "Anglais", 88, "Attaquant", 88, 88);
    Attaquant JadonSancho("Sancho", "Jadon", 21, "Anglais", 88, "Attaquant", 88, 88);

	Angleterre.ajouterAttaquant(HarryKane); Angleterre.ajouterAttaquant(MarcusRashford); Angleterre.ajouterAttaquant(JadonSancho);

    //Defenseurs Angleterre -> nom, prenom, age, nationalite, score Fifa, poste, score tacle, score interception
    Defenseur JohnStones("Stones", "John", 27, "Anglais", 86, "Defenseur", 86, 86);
    Defenseur KyleWalker("Walker", "Kyle", 30, "Anglais", 86, "Defenseur", 86, 86);
    Defenseur HarryMaguire("Maguire", "Harry", 27, "Anglais", 85, "Defenseur", 85, 85);

	Angleterre.ajouterDefenseur(JohnStones); Angleterre.ajouterDefenseur(KyleWalker); Angleterre.ajouterDefenseur(HarryMaguire);

    //Garde de but Angleterre -> nom, prenom, age, nationalite, score Fifa, poste, score arret
    Gardien JordanPickford("Pickford", "Jordan", 26, "Anglais", 85, "Gardien", 85);
	Gardien NickPope("Pope", "Nick", 30, "Anglais", 84, "Gardien", 84);

	Angleterre.ajouterGardien(JordanPickford); Angleterre.ajouterGardien(NickPope);

    //staff technique Angleterre -> nom, prenom, age, nationalite, expérience, nbr de trophées
    Staff_technique GarethSouthgate("Southgate", "Gareth", 50, "Anglais", 20, 0);

    //staff medical Angleterre -> nom, prenom, age, nationalite, expérience, diplome bac+ ?
    Staff_medical GaryLester("Lester", "Gary", 60, "Anglais", 20, 9);

    // on met les Joueurs dans un vecteur
	vector<Joueur> list_Angleterre; list_Angleterre.push_back(HarryKane); list_Angleterre.push_back(MarcusRashford); list_Angleterre.push_back(JadonSancho); list_Angleterre.push_back(JohnStones); list_Angleterre.push_back(KyleWalker); list_Angleterre.push_back(HarryMaguire); list_Angleterre.push_back(JordanPickford); list_Angleterre.push_back(NickPope);

    //au tour de l'argentine

        ////////////////////////////////////////////       ARGENTINE       ///////////////////////////////////////////////

        //Attaquant Argentine -> nom, prenom, age, nationalite, score Fifa, poste, score tir, score dribble
    Attaquant LionelMessi("Messi", "Lionel", 33, "Argentin", 94, "Attaquant", 94, 94);
    Attaquant SergioAguero("Aguero", "Sergio", 32, "Argentin", 90, "Attaquant", 90, 90);
    Attaquant PauloDybala("Dybala", "Paulo", 26, "Argentin", 88, "Attaquant", 88, 88);

	Argentine.ajouterAttaquant(LionelMessi); Argentine.ajouterAttaquant(SergioAguero); Argentine.ajouterAttaquant(PauloDybala);

    //Defenseurs Argentine -> nom, prenom, age, nationalite, score Fifa, poste, score tacle, score interception
    Defenseur NicolasTagliafico("Tagliafico", "Nicolas", 29, "Argentin", 86, "Defenseur", 86, 86);
    Defenseur NicolasOtamendi("Otamendi", "Nicolas", 32, "Argentin", 85, "Defenseur", 85, 85);
    Defenseur GabrielMercado("Mercado", "Gabriel", 32, "Argentin", 84, "Defenseur", 84, 84);

	Argentine.ajouterDefenseur(NicolasTagliafico); Argentine.ajouterDefenseur(NicolasOtamendi); Argentine.ajouterDefenseur(GabrielMercado);

    // Gardiens de but Argentine -> nom, prenom, age, nationalite, score Fifa, poste, score arret
    Gardien EmilianoMartinez("Martinez", "Emiliano", 28, "Argentin", 84, "Gardien", 84);
	Gardien FrancoArmani("Armani", "Franco", 33, "Argentin", 83, "Gardien", 83);

	Argentine.ajouterGardien(EmilianoMartinez); Argentine.ajouterGardien(FrancoArmani);

    //staff technique Argentine -> nom, prenom, age, nationalite, expérience, nbr de trophées
    Staff_technique LionelScaloni("Scaloni", "Lionel", 50, "Argentin", 20, 1);

    //staff medical Argentine -> nom, prenom, age, nationalite, expérience, diplome bac+ ?
    Staff_medical JuanPabloMascherano("Mascherano", "Pablo", 40, "Argentin", 20, 9);

    // on met les Joueurs dans un vecteur
	vector<Joueur> list_Argentine; list_Argentine.push_back(LionelMessi); list_Argentine.push_back(SergioAguero); list_Argentine.push_back(PauloDybala); list_Argentine.push_back(NicolasTagliafico); list_Argentine.push_back(NicolasOtamendi); list_Argentine.push_back(GabrielMercado); list_Argentine.push_back(EmilianoMartinez); list_Argentine.push_back(FrancoArmani);




    //on set les listes de joueurs sachant que le vecteur est un pointeur
    France.setListeJoueur(list_France);
    France.setEntraineur(DidierDeschamps);
    France.setMedecin(JeanLucMillet);
    France.setNom("Les Bleus");

    Maroc.setListeJoueur(list_Maroc);
    Maroc.setEntraineur(WalidRegragui);
    Maroc.setMedecin(KarimSerhane);
    Maroc.setNom("Les Lions de l'Atlas");

    Angleterre.setListeJoueur(list_Angleterre);
    Angleterre.setEntraineur(GarethSouthgate);
    Angleterre.setMedecin(GaryLester);
    Angleterre.setNom("Les Three Lions");

    Argentine.setListeJoueur(list_Argentine);
    Argentine.setEntraineur(LionelScaloni);
    Argentine.setMedecin(JuanPabloMascherano);
    Argentine.setNom("La Albiceleste");

    vector<Equipe> list_Equipe; list_Equipe.push_back(France); list_Equipe.push_back(Maroc); list_Equipe.push_back(Angleterre); list_Equipe.push_back(Argentine);
    //equipes[0] Fr ; equipes[1] Maroc ; equipes[2] Angleterre ; equipes[3] Argentine
    return list_Equipe;

}






