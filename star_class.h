#include <iostream>
using namespace std;

class PrintShapes{

private:
    string stars = "***************";
    string hashtag = "#########";
    string equals = "==========";

public:
    void printStart(){cout << stars <<"\n";}
    void printHashTag(){cout << hashtag <<"\n";}
    void printEquals(){cout << equals << "\n";}

};