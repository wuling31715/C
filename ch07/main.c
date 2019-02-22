# include <stdio.h>
# include <stdlib.h>

int main(void){
    int i, j, x, y, z, n;
    n = 1000000;
    x = 0;
    y = 0;
    z = 0;
    for (i = 1; i < n; i++){
        j = rand();
        j = j % 3;
        if (j == 0){
            x++;
        } else if (j == 1){
            y++;
        } else {
            z++;
        }        
    }
    printf("x = %.4f\n", (double) x / n);
    printf("y = %.4f\n", (double) y / n);
    printf("z = %.4f\n", (double) z / n);
}