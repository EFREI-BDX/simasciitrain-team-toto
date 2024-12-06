//
// Created by Thomas on 06/12/2024.
//

#ifndef PASSENGERWAGON_H
#define PASSENGERWAGON_H

#include "AbstractWagon.h"
#include "TypeWagon.h"

namespace simasciitrain {

    // PassengerWagon represente un wagon de passagers.
    class PassengerWagon : public AbstractWagon {
    public:
        PassengerWagon(int count);
        ~PassengerWagon();
        int getPassengerCount() const;
        void setPassengerCount(int count);

        // print() // affiche le wagon sous la forme: [ooooo...]
        virtual void print(std::ostream &os) const override;

    private:
        int count;
    };

}

#endif // PASSENGERWAGON_H

