#include "fadeColorPicker.h"


fadeColorPicker::fadeColorPicker(double fade)
{
    /* your code here */
    this->fadeFactor = fade;
}

HSLAPixel fadeColorPicker::operator()(point p)
{
    /* your code here */
    HSLAPixel res = p.c.color;

    double dist = sqrt((p.x - p.c.x)*(p.x - p.c.x) + (p.y-p.c.y)*(p.y-p.c.y));
    
    res.l = p.c.color.l* pow(fadeFactor,dist);
    return res;

    //centerL * (fadeFactor)^(distSq)
}
