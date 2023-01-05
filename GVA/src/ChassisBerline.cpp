#include "ChassisBerline.h"

ChassisBerline::ChassisBerline(ChassisOption option_, BerlineSpecification specification_) {
    this.option = option_;
    this.specification = specification_;
    this.dimention = this.dimensions[specification_]
}

ChassisBerline::~ChassisBerline()
{
    //dtor
}
