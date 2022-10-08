#include <iostream>
using namespace std;

class ColorForground
{
private:
    // Properties
   
    const string forgroundBoldRed = "\033[1;31mforground bold red \033[0m\n";
    const string forgroundBoldGreen = "\033[1;32mforground bold  Green\033[0m\n";
    const string forgroundBoldYellow = "\033[1;33mforground bold  Yello\033[0m\n";
    const string forgroundBoldBlue = "\033[1;34mforground bold Blue\033[0m\n";
    const string forgroundBoldRose = "\033[1;35mforgound bold  Rose\033[0m\n";
    const string forgroundBoldSky = "\033[1;36mforground bold  Sky\033[0m\n";
    const string forgroundBoldWhite = "\033[1;37mforground bold  white\033[0m\n";
    //const string forgroundBoldBlack = "";
    
    

    //const string forgroundTest = "";
    

public:
    // Properties
    string test = "testing";

    // Methods
   void printForgroundRed(){
        cout << forgroundBoldRed ;}

   void  printForgroundBlue(){
        cout << forgroundBoldBlue ;}

    void printForgroundGreen(){
        cout << forgroundBoldGreen;
    }

    void printForgroundYellow(){
        cout << forgroundBoldYellow;
    }

   void printForgroundSky(){
        cout << forgroundBoldSky;
    }

    void printForgroundRose(){
        cout << forgroundBoldRose;
    }

    void printForgroundWhite(){
         cout << forgroundBoldWhite;
     }

//   void printForgroundBlack(){
//          cout << forgroundBoldBlack;
//      }


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