#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{
    int i_old = 13, j_old = 19, l_old = 14, i = 0, j = 0, l = 0;
    for (int k = 0; k < 50; k++) {
        i = (abs((i_old + 1)) * (abs(abs(k - j_old) - abs(i_old - l_old))) / (i_old + 1));
        if (j_old - k < l_old - k) {
            if (remainder(i_old, 20) > j_old - k) {
                j = remainder(j_old, 20) + remainder(i_old, 20) - 10;
            } else if (j_old - k > remainder(j_old, 20)) {
                j = remainder(j_old, 20) + j_old - k - 10;
            }
        } else if (l_old - k < j_old - k) {
            if (remainder(i_old, 20) > l_old - k) {
                j = remainder(j_old, 20) + remainder(i_old, 20) - 10;
            } else if (l_old - k > remainder(j_old, 20)) {
                j = remainder(j_old, 20) + l_old - k - 10;
            }
        }
        l = remainder(k * (i_old + 1) * (j_old + 2) * (l_old + 3), 20);
        if (-1 * (i + 20) <= j && j <= -1 * (i + 10)) {
            printf("Yes\n");
            printf("%d%d%d\n", i, j, k);
        } else {
            i_old = i;
            j_old = j;
            l_old = l;
            if (k == 49) {
                printf("No ");
                printf("%d%d%d\n", i, j, k);
            }
        }  
    }
    return 0;
}
