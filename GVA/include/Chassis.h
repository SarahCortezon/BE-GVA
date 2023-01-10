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
        Chassis(ChassisOption option_);
        virtual ~Chassis(void) = 0;

        virtual float calculerCx(void) = 0;
        virtual float calculerPrix(void);

    protected:
        int nbPortes = 0;
        float dimensions[4];

        ChassisOption option;

    private:
        float R=0.03;
};

#endif // CHASSIS_H
