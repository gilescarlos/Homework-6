//
// Created by Giles Pierre Carlos on 2019-04-01.
//

#include "ProductionWorker.h"

void ProductionWorker::setShift(int sh) {
    if (sh >= 0 && sh < 8)
        shift = sh;
    else
        throw Invalid();
}
void ProductionWorker::setHourlyPayRate(double rate) {
    if (rate >= 0)
        hourlyPayRate = rate;
    else
        throw Invalid();
}

int ProductionWorker::getShift() { return shift; }
double ProductionWorker::getHourlyPayRate() { return hourlyPayRate; }