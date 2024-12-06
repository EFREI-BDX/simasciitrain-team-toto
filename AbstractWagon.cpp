//
// Created by Thomas on 06/12/2024.
//

#include "AbstractWagon.h"

namespace simasciitrain {

    AbstractWagon::AbstractWagon(const TypeWagon &typeWagon): typeWagon(typeWagon) {}

    AbstractWagon::~AbstractWagon() {
    }

    std::string AbstractWagon::getType() const {
        return typeWagon.getName();
    }

    char AbstractWagon::getSymbol() const {
        return typeWagon.getSymbol();
    }

    std::ostream& operator<<(std::ostream &os, const AbstractWagon &wagon) {
        wagon.print(os);
        return os;
    }

}

