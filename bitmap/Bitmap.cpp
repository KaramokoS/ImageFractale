#include "Bitmap.h"

Bitmap::Bitmap(int height, int width):
    _height(height),
    _width(width),
    _pPixels(new uint8_t[height*width*3]{})
{
    fileHeader = new BitmapFileHeader;
    infoHeader = new BitmapInfoHeader;
}
bool Bitmap::write(string filename){
    fileHeader->file_size = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + _height*_width*3;
    fileHeader->offset_data = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

    infoHeader->height = _height;
    infoHeader->width = _width;

    ofstream of;
    of.open(filename, ios::out | ios::binary);
    if(!of){
        return false;
    }
    of.write((char*)fileHeader, sizeof(fileHeader));
    of.write((char*)infoHeader, sizeof(infoHeader));
    of.write((char*)_pPixels.get(), _height*_width*3);

    of.close();

    return true;
}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue){
    
    uint8_t *pPixel = _pPixels.get();
    pPixel += (y*3)*_width+(x*3);

    pPixel[0] = blue;
    pPixel[1] = green;
    pPixel[2] = red;
}

Bitmap::~Bitmap(){
    delete fileHeader;
    delete infoHeader;
}