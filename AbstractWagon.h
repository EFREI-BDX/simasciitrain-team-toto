//
// Created by Thomas on 06/12/2024.
//

#ifndef ABSTRACTWAGON_H
#define ABSTRACTWAGON_H

#include <iostream>
#include "TypeWagon.h"
#include "TrainElement.h"

namespace simasciitrain {

    // Classe de base abstraite pour tous les wagons
    class AbstractWagon : TrainElement {
    public:
        //AbstractWagon(const std::string &name, char symbol);
        AbstractWagon(const TypeWagon& typeWagon);
        virtual ~AbstractWagon();
        virtual void print(std::ostream &os) const = 0;
        std::string getType() const override;
        char getSymbol() const override;

        // Surcharge de l'operateur << pour afficher le wagon
        friend std::ostream& operator<<(std::ostream &os, const AbstractWagon &wagon);

    private:
        const TypeWagon typeWagon;
    };

}

#endif // ABSTRACTWAGON_H

