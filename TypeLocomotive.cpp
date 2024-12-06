//
// Created by Thomas on 06/12/2024.
//

#include "TypeLocomotive.h"

namespace simasciitrain {

    const TypeLocomotive TypeLocomotive::ELECTRIC("Electric", 'E');
    const TypeLocomotive TypeLocomotive::GASOLINE("Gasoline", 'G');

    TypeLocomotive::TypeLocomotive(const std::string &name, char symbol)
        : name(name), symbol(symbol) {
    }

    std::string TypeLocomotive::getName() const {
        return name;
    }

    char TypeLocomotive::getSymbol() const {
        return symbol;
    }

}

