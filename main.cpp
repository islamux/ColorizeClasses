#include <iostream> 
#include <string>

using namespace std;

#include "color_forground.h"
#include "color_background.h"
#include "star_class.h"

int main (){

    // Initial Classes
     ColorForground colorFor;
     ColorBackground colorBack;

    PrintShapes shape;
 

    // Color : Forground 
    colorFor.printForgroundRed();
    colorBack.printBackGroundBoldRed();
    shape.printStart();
    
    // colorFor.printForgroundBlue();
    // shape.printStart();

    // colorFor.printForgroundYellow();
    // shape.printStart();  

    // colorFor.printForgroundRose();
    // shape.printStart();  

    // colorFor.printForgroundSky();
    // shape.printStart();

    // colorFor.printForgroundWhite();
    // shape.printStart();

    // color.printTest();
    // shape.printStart();

    return 0;
}