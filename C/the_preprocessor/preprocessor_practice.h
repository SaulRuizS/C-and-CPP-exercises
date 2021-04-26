#ifndef PREPROCESSOR_PRACTICE_H
#define PREPROCESSOR_PRECTICE_H

#define PI 3.141592
#define CIRCLE_AREA(r) (PI*(r*r))/2
#define G 9.81
#define KELVIN 275

    #if (KELVIN > 273) || (KELVIN < 273)
        #undef KELVIN
        #define KELVIN 273
    #elif (G > 9.81) || (G < 9.81)
        #undef G
        #define G 9.81
    #else
        #define e 2.7182
    #endif
#endif