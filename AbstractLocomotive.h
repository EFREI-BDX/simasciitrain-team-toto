//
// Created by Thomas on 06/12/2024.
//

#ifndef ABSTRACTLOCOMOTIVE_H
#define ABSTRACTLOCOMOTIVE_H

#include <iostream>
#include "TypeLocomotive.h"
#include "TrainElement.h"

namespace simasciitrain {

    // AbstractLocomotive est la classe abstraite de base pour les locomotives.
    class AbstractLocomotive : public TrainElement{
    public:
        AbstractLocomotive(const TypeLocomotive &type);
        virtual ~AbstractLocomotive();
        virtual void print(std::ostream &os) const = 0;
        virtual std::string getType() const;
        virtual char getSymbol() const;

        // Surcharge de l'operateur << pour afficher la locomotive
        friend std::ostream& operator<<(std::ostream &os, const AbstractLocomotive &loco);

    protected:
        const TypeLocomotive &type;
    };

}

#endif // ABSTRACTLOCOMOTIVE_H

