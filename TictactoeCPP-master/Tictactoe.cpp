#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"


    Tictactoe::Tictactoe(){ }

    void Tictactoe::afficheGrille(){
        grilleDeJeu.affiche();
        std:: cout << std::endl;
    }

    void Tictactoe::ajouteSymbole(int x, int y){
        grilleDeJeu.setContent(x,y,symboleCourant);
    }

    bool Tictactoe::testeVictoireVerticale(){

    }

    bool Tictactoe::testeVictoireHorizontale(){

    }

    bool Tictactoe::testeVictoireDiagonale(){

    }

    bool Tictactoe::testeJeuNul(){

    }

    void Tictactoe::finTour(){

    }

#endif