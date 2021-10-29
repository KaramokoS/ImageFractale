#pragma once

#include <fstream>

#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"

using namespace std;

class Bitmap
{
private:
    int _height;
    int _width;
    unique_ptr<uint8_t[]> _pPixels;
    BitmapFileHeader* fileHeader;
    BitmapInfoHeader* infoHeader;
public:
    Bitmap(int height, int width);
    ~Bitmap();
    bool write(string filename);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
};






