//
// Created by Thomas on 06/12/2024.
//

#include "FreightWagon.h"

namespace simasciitrain {

    FreightWagon::FreightWagon(int count)
    : AbstractWagon(TypeWagon::FREIGHT), count(count) {
    }

    FreightWagon::~FreightWagon() {
    }

    int FreightWagon::getFreightCount() const
    {
        return count;
    }

    void FreightWagon::setFreightCount(int count)
    {
        this->count = count;
    }


    void FreightWagon::print(std::ostream &os) const {
        os << "[";
        for (int i = 0; i < count; i++) {
            os << getSymbol();
        }
        os << "]";
    }

}

