#define SPEED_OF_LIGHT 299792458 //in m/s


//Range is based on the amount of time for EM Waves to propagate to a target
double range(double timeDisplaced){
    double targetRange = (SPEED_OF_LIGHT * timeDisplaced) / 2;

    return targetRange;
}