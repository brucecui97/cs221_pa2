#include "borderColorPicker.h"

borderColorPicker::borderColorPicker(unsigned int borderSize, HSLAPixel fillColor, PNG &img, double tolerance)
{
    /* your code here */
    this->borderSize = borderSize; // Number of pixels to use for border
    this->fillColor = fillColor;     // Color used for the border
    this->img = img;                 // Image used in flood fill algorithm
    this->tolerance = tolerance;        // Tolerance used in flood fill algorithm
}

HSLAPixel borderColorPicker::operator()(point p)
{
    /* your code here */
    if (p.x>=img.width()-borderSize || p.x<=borderSize || p.y>=img.height()-borderSize || p.y<=borderSize){
        return fillColor;
    }

    else{
        return *img.getPixel(p.x,p.y);
    }

}
