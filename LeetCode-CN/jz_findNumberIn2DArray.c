#include "stdio.h"
#include "stdbool.h"

// bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target){
//     if (matrixSize == 0 || *matrixColSize == 0)
//         return false;
//     int i = 0;
//     int j = *matrixColSize - 1;
//     while(i < matrixSize && j >=0 ){
//         if (target == matrix[i][j])
//             return true;
//         else if (target > matrix[i][j])
//             i += 1;
//         else
//             j -= 1;
//     }
//     return false;
// }
bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target){
    if (matrixSize == 0 || *matrixColSize == 0)
        return false;
    int i = 0;
    int j = *matrixColSize - 1;
    while(i < matrixSize && j >=0 ){
        int val = (*(matrix + i) + j);
        if (target == val)
            return true;
        else if (target > val)
            i += 1;
        else
            j -= 1;
    }
    return false;
}


int main(){
    int matrix[5][5] = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
        };
    int matrixSize = 5;
    int colSize = 5;
    int* matrixColSize = &colSize;
    int target = 22;
    bool check = findNumberIn2DArray(matrix, matrixSize, matrixColSize, target);
    printf(check ? "true" : "false");
    return 0;


}