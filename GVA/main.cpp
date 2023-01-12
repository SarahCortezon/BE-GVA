#include <iostream>

#include "class/Chassis/ChassisBerline.h"
#include "class/Chassis/ChassisBerline4x4.h"
#include "class/Chassis/ChassisBerlineBreak.h"
#include "class/Chassis/ChassisCoupe.h"

using namespace std;

int main()
{
    /*
     *  TESTS
     */
    cout << "\n\tTESTS\n\n";

    //  ChassisBerline
    cout << "\tChassisBerline" << "\n";
    ChassisBerline cb = ChassisBerline();
    cout << "Coef:\t" << cb.calculerCx() << " (= 0.2873)\n";
    cout << "Prix:\t" << cb.calculerPrix() << " (= 0)\n\n";

    //  ChassisBerline4x4
    cout << "\tChassisBerline4x4" << "\n";
    ChassisBerline4x4 cb4x4 = ChassisBerline4x4();
    cout << "Coef:\t" << cb4x4.calculerCx() << " (= 0.4485)\n";
    cout << "Prix:\t" << cb4x4.calculerPrix() << " (= 3000.)\n\n";

    //  ChassisBerlineBreak
    cout << "\tChassisBerlineBreak" << "\n";
    ChassisBerlineBreak cbb = ChassisBerlineBreak();
    cout << "Coef:\t" << cbb.calculerCx() << " (= 0.3604)\n";
    cout << "Prix:\t" << cbb.calculerPrix() << " (= 1000.)\n\n";

    // ChassisCoupe
    cout << "\tChassisCoupe" << "\n";
    ChassisCoupe cc = ChassisCoupe();
    cout << "Coef:\t" << cc.calculerCx() << " (= 0.1973)\n";
    cout << "Prix:\t" << cc.calculerPrix() << " (= 2000.)\n\n";


    return 0;
}
