#include <iostream>
using namespace std;

class ColorBackground
{
private:
    // Properties
    //const string printBackGround_BoldTest
    const string background_bold_red = "\033[1;41mbackground_bold Red \033[0m\n";
    const string background_bold_green = "\033[1;42mbackground_bold  Green\033[0m\n";
    const string background_bold_yellow = "\033[1;43mbackground_bold  Yello\033[0m\n";
    const string background_bold_blue = "\033[1;44mred Blue\033[0m\n";
    const string background_bold_rose = "\033[1;45mbackground_bold  Rose\033[0m\n";
    const string background_bold_sky = "\033[1;46mbackground_bold  Sky\033[0m\n";
    const string background_bold_white = "\033[1;47mbackground_bold  white\033[0m\n";
    

public:
    // Properties
    string test = "testing";

    // Methods
   void printBackGroundBoldRed(){
        cout << background_bold_red ;}

   void  printBackGround_boldBlue(){
        cout << background_bold_blue ;}


    void printBackGround_boldGreen(){
        cout << background_bold_green;
    }

    void printBackGround_boldYellow(){
        cout << background_bold_yellow;
    }

   void printBackGround_boldSky(){
        cout << background_bold_sky;
    }

    void printBackGround_boldRose(){
        cout << background_bold_rose;
    }

    void printBackGround_boldWhite(){
         cout << background_bold_white;
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
background_bold/bright       1  (often a brighter shade of the same colour)
underline         4
inverse           7  (swap foreground and background colours)
background_bold/bright off  21
underline off    24
inverse off      27

*/