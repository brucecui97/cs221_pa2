#include "borderColorPicker.h"

borderColorPicker::borderColorPicker(unsigned int borderSize, HSLAPixel fillColor, PNG &img, double tolerance)
{
    /* your code here */
    this->borderSize = borderSize; // Number of pixels to use for border
    this->fillColor = fillColor;   // Color used for the border
    this->img = img;               // Image used in flood fill algorithm
    this->tolerance = tolerance;   // Tolerance used in flood fill algorithm
}

HSLAPixel borderColorPicker::operator()(point p)
{
    /* your code here */

    //int signedInt = (int) myUnsigned;
    int p_x = (int)p.x;
    int p_y = (int)p.y;
    int bSize = (int)borderSize;

    if (p.x<borderSize || img.width()-borderSize<=p.x ||p.y<borderSize || img.height()-borderSize<=p.y){
        return fillColor;
    }


    for (int x = p_x - bSize; x <= p_x + bSize; x++)
    {
        for (int y = p_y - bSize; y <= p_y + bSize; y++)
        {
            if (0 <= x && x < img.width() && 0 <= y && y < img.height())
            {

                if (((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y)) <= borderSize * borderSize)
                {
                    if (p.c.color.dist(*img.getPixel(x, y)) > tolerance)
                    {
                        return fillColor;
                    }
                }
            }
        }
    }

    return *img.getPixel(p.x, p.y);
}
