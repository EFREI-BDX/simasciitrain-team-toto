//
// Created by Thomas on 06/12/2024.
//

#ifndef WAGONS_H
#define WAGONS_H

#include <vector>
#include "AbstractWagon.h"

namespace simasciitrain {

    // Wagons gere une liste de wagons
    class Wagons {
    public:
        Wagons();
        ~Wagons();
        Wagons* addWagon(AbstractWagon* wagon);

        // getWagons() // retourne un vecteur constant de pointeurs vers les wagons
        const std::vector<AbstractWagon*>& getWagons() const;

        // Surcharge de l'operateur << pour afficher l'ensemble des wagons
        friend std::ostream& operator<<(std::ostream &os, const Wagons &wagons);

    private:
        std::vector<AbstractWagon*> wagons;
    };

}

#endif // WAGONS_H

