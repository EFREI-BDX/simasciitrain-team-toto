//
// Created by Thomas on 06/12/2024.
//

#ifndef ELECTRICLOCOMOTIVE_H
#define ELECTRICLOCOMOTIVE_H

#include "AbstractLocomotive.h"
#include "TypeLocomotive.h"

namespace simasciitrain {

    // ElectricLocomotive represente une locomotive electrique.
    // Elle est affichee sous la forme: [E]>
    class ElectricLocomotive : public AbstractLocomotive {
    public:
        ElectricLocomotive();
        ~ElectricLocomotive();
        void print(std::ostream &os) const override;
    };

}

#endif // ELECTRICLOCOMOTIVE_H

