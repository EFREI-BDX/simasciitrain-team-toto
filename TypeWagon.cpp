//
// Created by Thomas on 06/12/2024.
//
#include "TypeWagon.h"

namespace simasciitrain {

    const TypeWagon TypeWagon::PASSENGER("passager", 'o');
    const TypeWagon TypeWagon::FREIGHT("marchandise", '#');
    const TypeWagon TypeWagon::UTILITY("utilitaire", '@');

    TypeWagon::TypeWagon(const std::string &name, const char symbol)
        : name(name), symbol(symbol) {
    }

    std::string TypeWagon::getName() const {
        return name;
    }

    char TypeWagon::getSymbol() const {
        return symbol;
    }

}

