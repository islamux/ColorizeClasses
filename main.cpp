#include <iostream> 
#include <string>

using namespace std;

#include "color_forground.h"
#include "star_class.h"

int main (){

    // Initial Classes
     ColorForground color;

    PrintShapes shape;
 
    color.printBoldRed();
    shape.printStart();
    
    color.printBoldBlue();
    shape.printStart();

    color.printBoldYellow();
    shape.printStart();  

    color.printBoldRose();
    shape.printStart();  

    color.printBoldSky();
    shape.printStart();

    color.printWhite();
    shape.printStart();

    color.printTest();
    shape.printStart();

    return 0;
}