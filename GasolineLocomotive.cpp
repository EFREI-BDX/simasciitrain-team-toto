//
// Created by Thomas on 06/12/2024.
//

#include "GasolineLocomotive.h"

namespace simasciitrain {

    GasolineLocomotive::GasolineLocomotive()
    : AbstractLocomotive(TypeLocomotive::GASOLINE) {
    }
    GasolineLocomotive::~GasolineLocomotive(){}


    void GasolineLocomotive::print(std::ostream &os) const {
        os << "[" << getSymbol() << "]>";
    }

}
