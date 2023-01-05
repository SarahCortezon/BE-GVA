#ifndef CHASSIS_H
#define CHASSIS_H

enum class ChassisType {
    Berline,
    Coupe
};

enum class ChassisOption {
    Standard,
    Luxe
};

enum class ChassisDimensions {
    L1,
    L2,
    h,
    l
};

class Chassis {
    public:
        Chassis(void);
        virtual ~Chassis(void);

        virtual float cx(void) = 0;

    protected:
        virtual ChassisType type = 0;
        virtual int nbPortes = 0;

        ChassisOption option;
        float[4] dimmension;

    private:
};

#endif // CHASSIS_H
