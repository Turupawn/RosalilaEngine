#ifndef COLOR_H
#define COLOR_H

class Color
{
public:
    int red;
    int green;
    int blue;
    int alpha;

    Color();
    Color(int red,int green,int blue,int alpha);
    int getRed();
    int getGreen();
    int getBlue();
    int getAlpha();
};

#endif
