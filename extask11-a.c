#include <stdio.h>
#include <stdlib.h>

int main(){
        #define rows 25
        #define cols 5

        int tab[rows][cols];

        #define mark0 2
        #define mark1 5

        for(int y=0; y<rows; y++)
                for(int x=0; x<cols; x++)
                        tab[y][x] = mark0 + rand() % (mark1 - mark0 + 1);

        float avg[rows];

        for(int y=0; y<rows; y++){
                int s = 0;
                for(int x=0; x<cols; x++)
                        s = s + tab[y][x];
                avg[y] = s / (float) cols;
        }

        printf("\033[1;31mnum]");

        for(int x=0; x<cols; x++)
                printf("\t%d", x+1);

        printf("\tavg\033[0m\n");

        for(int y=0; y<rows; y++){
                printf("\033[1;35m%d\033[0m", y+1);
                for(int x=0; x<cols; x++)
                printf("\t%d", tab[y][x]);
                printf("\t\033[1;32m%.1f\033[0m\n", avg[y]);
        }
       
 }
        return 0;

