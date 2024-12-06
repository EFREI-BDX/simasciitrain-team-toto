//
// Created by Thomas on 06/12/2024.
//

#ifndef TRAIN_H
#define TRAIN_H

#include "ITrain.h"
#include "Wagons.h"
#include "AbstractLocomotive.h"

namespace simasciitrain {

    // Train est une classe representant un train complet (wagons + locomotive)
    class Train : public ITrain {
    public:
        Train(Wagons* wagons, AbstractLocomotive* locomotive);
        ~Train();

        // print() // affiche le train en concatenant l'affichage des wagons et de la locomotive
        virtual void print(std::ostream &os) const override;
        Wagons* getWagons() const;

        // getLocomotive() // retourne le pointeur vers la locomotive
        AbstractLocomotive* getLocomotive() const;

    private:
        Wagons* wagons;
        AbstractLocomotive* locomotive;
    };

}

#endif // TRAIN_H

