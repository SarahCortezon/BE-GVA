#ifndef CHASSIS_H
#define CHASSIS_H

enum ChassisType {
    Berline,
    Coupe
};

enum ChassisOption {
    Standard,
    Luxe
};

enum ChassisDimension {
    L1,
    L2,
    h,
    l,
    last
};

class Chassis {
    public:
        Chassis();
        virtual ~Chassis(void) = 0;

        virtual float calculerCx(void) = 0;
        virtual float calculerPrix(void) = 0;

        //virtual string[] getInformation(void) = 0;

    protected:
        ChassisType type;
        int nbPortes = 0;

        ChassisOption option;
        float dimmensions[4] = {0., 0., 0., 0.};

    private:
};

#endif // CHASSIS_H
