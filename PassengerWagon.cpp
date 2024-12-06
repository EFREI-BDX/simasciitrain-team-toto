//
// Created by Thomas on 06/12/2024.
//

#include "PassengerWagon.h"

namespace simasciitrain {

    PassengerWagon::PassengerWagon(int count)
    : AbstractWagon(TypeWagon::PASSENGER), count(count) {
    }

    PassengerWagon::~PassengerWagon(){}

    int PassengerWagon::getPassengerCount() const
    {
        return count;
    }

    void PassengerWagon::setPassengerCount(int count)
    {
        this->count = count;
    }
    void PassengerWagon::print(std::ostream &os) const {
        os << "[";
        for (int i = 0; i < count; i++) {
            os << getSymbol();
        }
        os << "]";
    }

}

