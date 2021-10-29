#pragma once
#pragma pack(2)

#include <cstdint>

struct BitmapFileHeader
{
    char filetype[2]{'B', 'M'};
    //int16_t filetype{0x4D42};
    int32_t file_size{0};
    int32_t reserved{0};
    int32_t offset_data{0};
};
