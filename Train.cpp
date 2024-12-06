//
// Created by Thomas on 06/12/2024.
//

#include "Train.h"

namespace simasciitrain {

    Train::Train(Wagons* wagons, AbstractLocomotive* locomotive)
    : wagons(wagons), locomotive(locomotive) {
    }

    Train::~Train() {
        // Le Train ne detruit pas wagons_ ni locomotive
        // car il n'en est pas forcement proprietaire
    }

    void Train::print(std::ostream &os) const {
        if (wagons) {
            os << *wagons;
        }
        if (locomotive) {
            if (wagons && !wagons->getWagons().empty()) {
                os << "-";
            }
            os << *locomotive;
        }
    }

    Wagons* Train::getWagons() const {
        return wagons;
    }

    AbstractLocomotive* Train::getLocomotive() const {
        return locomotive;
    }

}

