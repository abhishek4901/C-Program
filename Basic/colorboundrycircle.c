//Drawing a Filled red color in Circle  and boundry color white: 
#include <graphics.h>
#include <conio.h>
int main() {
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "");
 // Draw a circle with center (200, 200) and radius 50
 circle(200, 200, 50);
 
 // Set the fill pattern to solid red and fill the circle
 setfillstyle(SOLID_FILL, RED);
 floodfill(200, 200, WHITE); // Fill the circle with red color
 getch(); // Wait for user input
 closegraph(); // Close graphics mode
 return 0