//
// Created by Thomas on 06/12/2024.
//

#include "ElectricLocomotive.h"

namespace simasciitrain {

    ElectricLocomotive::ElectricLocomotive()
    : AbstractLocomotive(TypeLocomotive::ELECTRIC) {
    }
    ElectricLocomotive::~ElectricLocomotive() {}


    void ElectricLocomotive::print(std::ostream &os) const {
        os << "[" << getSymbol() << "]>";
    }

}

