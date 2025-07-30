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
    //     --0- --1- --2- --3- --4- --5- --6- --7- --8- --9- -10-
    // -0-  00   01   02   03   04   05   06   07   08   09   010
    // -1-  10   11   12   13   14   15   16   17   18   19   110
    // -2-  20   21   22   23   24   25   26   27   28   29   210
    // -3-  30   31   32   33   34   35   36   37   38   39   310
    // -4-  40   41   42   43   44   45   46   47   48   49   410
    // -5-  50   51   52   53   54   55   56   57   58   59   510
    // -6-  60   61   62   63   64   65   66   67   68   69   610
    // -7-  70   71   72   73   74   75   76   77   78   79   710
    // -8-  80   81   82   83   84   85   86   87   88   89   810
    // -9-  90   91   92   93   94   95   96   97   98   99   910
    // -10  100  101  102  103  104  105  106  107  108  109  110

    //how do I manage the resolution to dumb down the circle and
    //make it look better

    for(x = 0; x <= 10; x++) {

        for(y = 0; y <= 10; y++) {

        }
    }
}