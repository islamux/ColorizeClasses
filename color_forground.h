#include <iostream>
using namespace std;

class ColorForground
{
private:
    // Properties
   const string bold_test = "\033[1;45mbold  test\033[0m\n";
    
    const string bold_red = "\033[1;31mbold Red \033[0m\n";
    const string bold_green = "\033[1;32mbold  Green\033[0m\n";
    const string bold_yellow = "\033[1;33mbold  Yello\033[0m\n";
    const string bold_blue = "\033[1;34mred Blue\033[0m\n";
    const string bold_rose = "\033[1;35mbold  Rose\033[0m\n";
    const string bold_sky = "\033[1;36mbold  Sky\033[0m\n";
    const string bold_white = "\033[1;37mbold  white\033[0m\n";
    
    const string bold_black = "black";

public:
    // Properties
    string test = "testing";

    // Methods
   void printBoldRed(){
        cout << bold_red ;}

   void  printBoldBlue(){
        cout << bold_blue ;}

    void printBoldBlack(){
        cout << bold_black;
    }

    void printBoldGreen(){
        cout << bold_green;
    }

    void printBoldYellow(){
        cout << bold_yellow;
    }

   void printBoldSky(){
        cout << bold_sky;
    }

    void printBoldRose(){
        cout << bold_rose;
    }

    void printWhite(){
         cout << bold_white;
     }

    void printTest(){
         cout << bold_test;
     }

};



/*
black        30         40
red          31         41
green        32         42
yellow       33         43
blue         34         44
magenta      35         45
cyan         36         46
white        37         47


reset             0  (everything back to normal)
bold/bright       1  (often a brighter shade of the same colour)
underline         4
inverse           7  (swap foreground and background colours)
bold/bright off  21
underline off    24
inverse off      27

*/