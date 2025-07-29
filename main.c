#include <stdio.h>
#include <math.h>

int main() {
    //rows then columns
    char grid[10][10];

    //parametric equations
    int x = 5 + 5*cos(0.0);
    int y = 5 + 5*sin(0.0);
    printf("%d", x);
    printf("%d", y);

    //going to use the array to "set" the positions of the x and y coordinate, empty values will be replaced with spaces
    //need to also set up a new line system as well and figure that shit out.
}