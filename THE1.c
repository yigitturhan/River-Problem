#include <stdio.h>
#include <math.h>
int main() {
    double an, anplusone, totalt = 0;
    int n = 0;
    double deltat, velocity ,currentn, xn, currentnplusone, xnplusone, current = 0;
    double tcounter, totalx, vx = 0;
    scanf(" %lf %lf", &deltat, &velocity);
    scanf(" %d",&n);
    scanf(" %lf %lf",&xn,&currentn);
    scanf(" %lf %lf",&xnplusone,&currentnplusone);
    while (totalx < xnplusone){
        anplusone = -1.0*an + 2*(currentnplusone - currentn)/(xnplusone -xn);
        current = currentn + an*(totalx - xn) + (totalx - xn)*(totalx - xn)*((anplusone - an)/(2*(xnplusone - xn)));
        if (current < 0){
            current = -1.0*current;
        }
        vx = sqrt((velocity*velocity) - (current*current));
        totalx += vx*deltat;
        tcounter += 1;
        if (totalx >= xnplusone){
            n -= 1;
            if (n > 0){
                an = anplusone;
                xn = xnplusone;
                currentn = currentnplusone;
                scanf(" %lf %lf",&xnplusone,&currentnplusone);
            }
        }
    }
    totalt = tcounter * deltat;
    printf("%f",totalt);
    return 0;
}