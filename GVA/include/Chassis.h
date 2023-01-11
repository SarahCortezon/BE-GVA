#ifndef CHASSIS_H
#define CHASSIS_H

enum ChassisOption {
    Standard,
    Luxe
};

enum ChassisDimension {
    L1,
    L2,
    h,
    l
};

class Chassis {
    public:
        Chassis();
        virtual ~Chassis(void) = 0;

        virtual float calculerCx(void) = 0;
        virtual float calculerPrix(void) = 0;

    protected:
        float R=0.03;
        int nbPortes;
        float dimensions[4];

    private:

};

#endif // CHASSIS_H
