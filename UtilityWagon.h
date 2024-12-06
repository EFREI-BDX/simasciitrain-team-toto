//
// Created by Thomas on 06/12/2024.
//

#ifndef UTILITYWAGON_H
#define UTILITYWAGON_H

#include "AbstractWagon.h"
#include "TypeWagon.h"

namespace simasciitrain {

    // UtilityWagon represente un wagon utilitaire.
    // Il affiche un seul symbole, par exemple: [@]
    class UtilityWagon : public AbstractWagon {
    public:
        // Constructeur
        UtilityWagon();
        ~UtilityWagon();

        // print() // affiche le wagon sous la forme: [@]
        virtual void print(std::ostream &os) const override;
    };

}

#endif // UTILITYWAGON_H
