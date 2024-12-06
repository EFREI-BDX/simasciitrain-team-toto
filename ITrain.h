//
// Created by Thomas on 06/12/2024.
//

#ifndef ITRAIN_H
#define ITRAIN_H

#include <iostream>

namespace simasciitrain {

    // ITrain est une interface definissant un contrat pour les objets representant un train.
    // Toute classe l'implementant doit fournir une methode print() pour l'affichage.
    class ITrain {
    public:
        virtual ~ITrain() = default;

        // Surcharge de l'operateur << pour afficher un ITrain
        friend std::ostream& operator<<(std::ostream &os, const ITrain &train) {
            train.print(os);
            return os;
        }
        protected:
        // print() // methode virtuelle pure permettant d'afficher la representation du train
        virtual void print(std::ostream &os) const = 0;
    };

}

#endif // ITRAIN_H

