//
// Created by Thomas on 06/12/2024.
//

#ifndef TYPEWAGON_H
#define TYPEWAGON_H

#include <string>

namespace simasciitrain {

    // TypeWagon represente un type de wagon : nom et symboole
    class TypeWagon {
    public:
        TypeWagon(const std::string &name, char symbol);
        std::string getName() const;
        char getSymbol() const;

        // types de wagons
        static const TypeWagon PASSENGER;
        static const TypeWagon FREIGHT;
        static const TypeWagon UTILITY;

    private:
        std::string name;
        char symbol;
    };

}

#endif // TYPEWAGON_H

