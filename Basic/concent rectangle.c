#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x = 320, y = 240, size = 20, step = 10;
    
    for (int i = 0; i < 50; i++) {
        rectangle(x - size, y - size, x + size, y + size);
        size += step;
    }

    getch();
    closegraph();
    return 0;
}
