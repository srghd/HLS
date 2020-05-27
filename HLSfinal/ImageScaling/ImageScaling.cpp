#include "mini2.h"


void ImageScaling(mat_a f[row][col], mat_b g[row][col]) //image scaling
{
 ROW:for(int i = 0; i < row; i++)
    {
      COL:  for(int j = 0; j < col; j++)
        {
          g[i][j] = f[i][j] * 1/2;
        }
    }
}


