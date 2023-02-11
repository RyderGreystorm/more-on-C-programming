#include <stdio.h>


int mian(){
    int arr [] [10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {11, 12, 23, 25, 24, 26, 29,898, 98, 10}};

    int row = sizeof(arr)/sizeof(arr[0]);
    int column = sizeof(arr[0])/sizeof(arr[0][0]);


    for(int i =0; i <row; i ++){
        for (int j = 0; j < column; j++)
        {
            // if( arr[i][j] % 2 == 0){
            //     printf("%d", arr[i][j]);
            // }
            printf("%d", arr[i][j]);
        }
        
    }



    return 0;
}