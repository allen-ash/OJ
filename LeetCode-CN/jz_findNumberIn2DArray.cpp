#include "stdio.h"
#include "stdbool.h"
#include <vector>
using namespace std;

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int matrixSize = matrix.size();
        if (matrixSize == 0)
            return false;
        int i = 0;
        int j =  matrix[0].size() - 1;
        while(i < matrixSize && j >=0 ){
            if (target == matrix[i][j])
                return true;
            else if (target > matrix[i][j])
                i += 1;
            else
                j -= 1;
        }
        return false;
    }
};


int main(){
    vector<vector<int>> matrix= {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
        };
    int target = 22;
    Solution myS;
    bool check = myS.findNumberIn2DArray(matrix, target);
    printf(check ? "true" : "false");
    return 0;


}