#pragma once

class Mandelbrot
{
public:
    static const int MAX_Iterations = 1000;
public:
    Mandelbrot();
    virtual ~Mandelbrot();
static int getIterations(double x, double y);
};
