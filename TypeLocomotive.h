//
// Created by Thomas on 06/12/2024.
//

#ifndef TYPELOCOMOTIVE_H
#define TYPELOCOMOTIVE_H

#include <string>

namespace simasciitrain {

    // TypeLocomotive represente un type de locomotive avec un nom et un symbole
    class TypeLocomotive {
    public:
        TypeLocomotive(const std::string &name, char symbol);
        std::string getName() const;
        char getSymbol() const;

        // Types de locomotive predefinis
        static const TypeLocomotive ELECTRIC;
        static const TypeLocomotive GASOLINE;

    private:
        std::string name;
        char symbol;
    };

}

#endif // TYPELOCOMOTIVE_H

