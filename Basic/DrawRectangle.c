//Draw a rectangle using graphics in C
//To draw a rectangle in C graphics, you can use the rectangle() function. 
//The rectangle() function is used to draw a rectangle with the specified top-left and bottom-right corners. 
//The syntax of the rectangle() function is as follows:
#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    // Initialize the graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    // Set color to draw the rectangle
    // setcolor(kali);
    // Draw a rectangle with top-left corner (100, 100) and bottom-right corner (300, 200)
    rectangle(100, 100, 300, 200);
    // Keep the output window open until a key is pressed
    getch();
    // Close the graphics mode
    closegraph();
    return 0;}
