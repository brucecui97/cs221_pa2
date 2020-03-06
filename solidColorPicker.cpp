#include "solidColorPicker.h"

solidColorPicker::solidColorPicker(HSLAPixel fillColor)
{
    /* your code here */
    this->color = fillColor;
}

HSLAPixel solidColorPicker::operator()(point p)
{
    /* your code here */
    return color;
}
