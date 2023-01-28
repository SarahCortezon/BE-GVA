#ifndef CHASSISBERLINE_H
#define CHASSISBERLINE_H

#include <string>

#include "Chassis.h"

class ChassisBerline : public Chassis {
    /**
     *  Constructeurs | Destructeurs
     */
    public:
        ChassisBerline();
        virtual ~ChassisBerline();

    /**
     *  Méthodes
     */
    public:
        virtual float calculerCx(void) override;
        virtual int calculerPrix(void) override;

    /**
     *  Attributs
     */
    private:
        int prixBerline = 0;
};

#endif // CHASSISBERLINE_H
