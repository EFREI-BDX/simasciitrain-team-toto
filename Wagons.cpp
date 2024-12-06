//
// Created by Thomas on 06/12/2024.
//

#include "Wagons.h"

namespace simasciitrain {

    Wagons::Wagons() {
    }

    Wagons::~Wagons() {
        // Libere la memoire des wagons
        for (auto w : wagons) {
            delete w;
        }
    }

    Wagons* Wagons::addWagon(AbstractWagon* wagon) {
        wagons.push_back(wagon);
        return this;
    }

    const std::vector<AbstractWagon*>& Wagons::getWagons() const {
        return wagons;
    }

    std::ostream& operator<<(std::ostream &os, const Wagons &wagons) {
        const auto &list = wagons.getWagons();
        for (size_t i = 0; i < list.size(); i++) {
            os << *list[i];
            if (i < list.size() - 1) {
                os << "-";
            }
        }
        return os;
    }

}

