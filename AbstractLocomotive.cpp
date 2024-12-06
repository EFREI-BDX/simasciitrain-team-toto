//
// Created by Thomas on 06/12/2024.
//

#include "AbstractLocomotive.h"

namespace simasciitrain {

    AbstractLocomotive::AbstractLocomotive(const TypeLocomotive &type)
    : type(type) {
    }

    AbstractLocomotive::~AbstractLocomotive() {
    }

    std::string AbstractLocomotive::getType() const {
        return type.getName();
    }

    char AbstractLocomotive::getSymbol() const {
        return type.getSymbol();
    }

    std::ostream& operator<<(std::ostream &os, const AbstractLocomotive &loco) {
        loco.print(os);
        return os;
    }

}

