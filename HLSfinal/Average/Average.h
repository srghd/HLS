#include "mini2.h"

void Avg (mat_a f[row][col],mat_b g[row][col]) //Average
{
 ROW:for(int i = 0; i < row; i++)
    {
        COL:for(int j = 0; j < col; j++)
        {
            if ((i == 0) && (j == 0))
            {
                 g[i][j] = (f[i][j]+f[i][j+1]+f[i+1][j]+f[i+1][j+1])/4;
            }
            else if((i == 0) && (j == col-1)){
                  g[i][j] = (f[i][j-1]+f[i][j]+f[i+1][j-1]+f[i+1][j])/4;
            }
            else if ((i==row-1) && (j == 0)){
                 g[i][j] = (f[i-1][j]+f[i-1][j+1]+f[i][j]+f[i][j+1])/4;
            }
             else if ((i == row-1) && (j == col-1)){
                 g[i][j] = (f[i-1][j-1]+f[i-1][j]+f[i][j-1]+f[i][j])/4;
            }
            else if (i == 0){
                 g[i][j] = (f[i][j-1]+f[i][j]+f[i][j+1]+f[i+1][j-1]+f[i+1][j]+f[i+1][j+1])/6;
            }
             else if (i == row-1){
                 g[i][j] = (f[i-1][j-1]+f[i-1][j]+f[i-1][j+1]+f[i][j-1]+f[i][j]+f[i][j+1])/6;
            }
            else if(j==0){
                g[i][j] = (f[i-1][j]+f[i-1][j+1]+f[i][j]+f[i][j+1]+f[i+1][j]+f[i+1][j+1])/6;
            }
            else if(j==col-1){
                g[i][j] = (f[i-1][j-1]+f[i-1][j]+f[i][j-1]+f[i][j]+f[i+1][j-1]+f[i+1][j])/6;
            }
            else{
                g[i][j] = (f[i-1][j-1]+f[i-1][j]+f[i-1][j+1]+f[i][j-1]+f[i][j]+f[i][j+1]+f[i+1][j-1]+f[i+1][j]+f[i+1][j+1])/9;
            }

        }
    }
}
