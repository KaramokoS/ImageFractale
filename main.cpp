#include <iostream>
#include "Bitmap.h"
#include "Mandelbrot.h"

using namespace std;

int main(){
    const int HEIGHT = 900;
    const int WIDTH = 800; 
    Bitmap btmp(HEIGHT, WIDTH);
    for(int y = 0; y++; y<WIDTH){
        for(int x = 0; x++; x<HEIGHT){
            /* build a histogram and fractal array using 
            mandelbrot method getIteration
            
            */
        }
    }
    btmp.setPixel(HEIGHT, WIDTH, 2555,2555,255);
    cout << btmp.write("test.bmp") << endl;
    cout << " Done !!" << endl;
}