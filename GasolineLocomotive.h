//
// Created by Thomas on 06/12/2024.
//

#ifndef GASOLINELOCOMOTIVE_H
#define GASOLINELOCOMOTIVE_H

#include "AbstractLocomotive.h"
#include "TypeLocomotive.h"

namespace simasciitrain {

    // GasolineLocomotive represente une locomotive a essence
    class GasolineLocomotive : public AbstractLocomotive {
    public:
        GasolineLocomotive();
        ~GasolineLocomotive();

        void print(std::ostream &os) const override;
    };

}

#endif // GASOLINELOCOMOTIVE_H

