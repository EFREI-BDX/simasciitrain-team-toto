//
// Created by Thomas on 06/12/2024.
//

#ifndef FREIGHTWAGON_H
#define FREIGHTWAGON_H

#include "AbstractWagon.h"
#include "TypeWagon.h"

namespace simasciitrain {

    // FreightWagon represente un wagon de marchandise.
    class FreightWagon : public AbstractWagon {
    public:
        // Constructeur
        // count : nombre d'unites de marchandise
        FreightWagon(int count);
        ~FreightWagon();
        int getFreightCount() const;
        void setFreightCount(int count);

        // Implementation de la methode virtuelle print()
        // Affiche le wagon sous la forme: [#####...]
        virtual void print(std::ostream &os) const override;

    private:
        int count;

    };

}

#endif // FREIGHTWAGON_H

