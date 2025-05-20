//Program to Display 50 Concentric Circles:
#include <graphics.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    int i, x, y, radius;
    // Initialize graphics mode
    initgraph(&gd, &gm, "");
    // Set the center of the circles
    x = getmaxx() / 2;  // Horizontal center
    y = getmaxy() / 2;  // Vertical center
    // Draw 50 concentric circles
    for (i = 1; i <= 50; i++) {
        radius = i * 10;  // Increase radius incrementally
        circle(x, y, radius);  // Draw the circle
    }
    getch();
    // Close the graphics mode
    closegraph();
    return 0;
}
