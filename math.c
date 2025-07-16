#include <math.h>

#define SPEED_OF_LIGHT 299792458 //in m/s
#define PI 3.14159265358979323846
#define TWO_TIMES_PI 6.28318530718

//Range is based on the amount of time for EM Waves to propagate to a target
double range(double timeDisplaced){
    double targetRange = (SPEED_OF_LIGHT * timeDisplaced) / 2;

    return targetRange;
}

double ESinusoidalWAve(int frequency, int waveLength, double peakAmplitude, double positionZ, double time, double phaseShift){
    // Electric field of a sinusoidal wave at position z and time t:
    // E = E₀ * cos(k*z - ω*t + φ)
    //
    // Where:
    //   E₀  = Peak amplitude (maximum strength of the wave)
    //   k   = Wave number = 2π / λ
    //   z   = Position along the direction of wave propagation
    //   ω   = Angular frequency = 2πf
    //   t   = Time
    //   φ   = Phase shift (initial offset of the wave)

    double waveNumber = TWO_TIMES_PI / waveLength;
    double angularFrequency = TWO_TIMES_PI * frequency;

    //Oscillation Simulation Shituation
    double E = peakAmplitude * cos(waveNumber * positionZ - angularFrequency * time + phaseShift);

    return E;
}