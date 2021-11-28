#include <stdio.h>
#include <stdlib.h>

int main(){
        #define rows 10
        #define cols 5

        int tab[rows][cols];

        #define mark0 1
        #define mark1 10

        for(int y=0; y<rows; y++)
                for(int x=0; x<cols; x++)
                        tab[y][x] = mark0 + rand() % (mark1 - mark0 + 1);

        float avg[rows];

        for(int y=0; y<rows; y++){
                int s=0;
                for(int x=0; x<cols; x++)
                        s = s + tab[y][x];
                avg[y] = s / (float) cols;
        }

        printf("\033[1;31mnum");

        for(int x=0; x<cols; x++)
                printf("\t%d", x+1);

        printf("\tavg\033[0m\n");

        for(int y=0; y<rows; y++){
                printf("\033[1;35m%d\033[0m", y+1);
                for(int x=0; x<cols; x++)
                printf("\t%d", tab[y][x]);
                printf("\t%.1f\n", avg[y]);
        }
        int indx;
        float max_avg_sport = avg[0];
        for(int i; i<rows; i++){
                if(max_avg_sport<avg[i]){
                        indx = i+1;
                        max_avg_sport = avg[i];
             }
        }
        printf("max_avg_sport: \t%.1f\n", max_avg_sport);
        printf("num: %d\n", indx);
        return 0;
}

