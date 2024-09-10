//Given the length and width of a rectangle,  this C++ Program
//computes and outputs the perimeter and area of the rectangle
//**************************************************************

#include <iostream>

using namespace std;


int main()
{
    double length;
    double width;
    double area;
    double perimeter;
    //naming out the variable. after you do this then you can do __ = ___, double is a type of variable 

    cout << "Program to compute and output the perimeter and "
         << "area of rectangle." << endl;
    
    length = 6.0;
    width = 4.0;
    perimeter = 2 * (length + width);
    area = length * width;

    //cout is like print in python I think(?)
    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
    //<< is output, >> is input
    //endl is used to make another line on the output. kinda like enter but it flushes the entire screen. use \n also works as a enter 

    return 0;

}

/*[Running] cd "c:\Users\college\Documents\GitHub\welcome-to-github-jo-svg\" && g++ new.cpp -o new && "c:\Users\college\Documents\GitHub\welcome-to-github-jo-svg\"new
Program to compute and output the perimeter and area of rectangle.
Length = 6
Width = 4
Perimeter = 20
Area = 24

[Done] exited with code=0 in 1.818 seconds*/