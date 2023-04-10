// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

#define row 9
#define column 9

int main() {
    
    int location;
    
    // multidimensional array for the connections between points
    int road_networks[row][column] = {
        {1,1,0,0,0,1,0,0,0},
        {1,1,1,0,0,0,0,0,0},
        {0,1,1,0,1,1,0,0,1},
        {0,0,0,1,1,0,0,0,0},
        {0,0,0,1,1,0,0,0,0},
        {1,0,1,0,0,1,0,0,0},
        {1,0,0,1,0,0,1,0,0},
        {0,0,0,0,0,0,0,1,1},
        {0,0,0,0,0,0,0,1,1}
    };
  
    // no adjacency matrix. sad emogi.
    
    // array for the names of points
    char point[column] = {'A', 'B', 'C', 'D', 'E','F', 'G', 'H', 'I'};
    
    do{    
        printf("Which location are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I \n \n");
        scanf("%d", &location);
    } while (location < 0 || location > 9); // will keep asking for input if it accepts invalid one
    
    if (road_networks[location][3] == 1){               // checks if there is a direct way to point d
        printf("At point: %c \n", point[location]);     // locate the name of the point
        printf("point: D arrived to charging station");
    } else if (road_networks[location][2] == 1){        // checks if there is a direct way to point c
        printf("At point: %c \n", point[location]);     // locate the name of the point
        printf("point: C arrived to charging station");
    } else if (road_networks[location][2] == 0){        
        if (road_networks[location][1] == 1){           // checks if it is connected to the previous point
            printf("At point: %c \n", point[location]); // locate the name of the point
            printf("point: C arrived to charging station");
        }else{                                          // if there is no direct way to points c and d
            printf("At point: %c \n", point[location]); // locate the name of the point
            printf("point: no near charging station");
        }    
    }
    
    return 0;
}
