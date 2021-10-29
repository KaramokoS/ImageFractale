#include "Mandelbrot.h"
#include <complex>


using namespace std;

Mandelbrot::Mandelbrot()
{
}


int Mandelbrot:: getIterations(double x, double y){
    complex<double> z= 0;
    complex<double> c(x,y);
    int Iterations = 0;
    while(Iterations < Mandelbrot::MAX_Iterations){
        z = z*z + c;
        if(abs(z)>2){
            break;
        }
        Iterations++;
    }
    return Iterations;
}

