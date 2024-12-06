//
// Created by Thomas on 06/12/2024.
//

#ifndef TRAINELEMENT_H
#define TRAINELEMENT_H

#include <iostream>
#include <string>

namespace simasciitrain {

    // Interface TrainElement
    // Cette interface definit le contrat pour tout element du train (wagon, locomotive).
    class TrainElement {
    public:
        virtual ~TrainElement() {}

        // getSymbol() // retourne le symbole representant visuellement l’element (ex: '#' pour un wagon freight)
        virtual char getSymbol() const = 0;

        // getType() // retourne le type de l’element sous forme de string (ex: "marchandise")
        virtual std::string getType() const = 0;

        // Surcharge de l’operateur <<
        friend std::ostream& operator<<(std::ostream &os, const TrainElement &element) {
            element.print(os);
            return os;
        }

    protected:
        // print() // permet d’afficher l’element sur un flux de sortie
        virtual void print(std::ostream &os) const = 0;
    };

}

#endif // TRAINELEMENT_H

