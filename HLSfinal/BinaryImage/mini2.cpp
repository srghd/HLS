#include "mini2.h"

void BI(mat_a f[row][col], mat_b g[row][col]) //binary image
{
 Row: for(int i = 0; i < row; i++)
    {
  Col: for(int j = 0; j < col; j++)
        {
          if (f[i][j] >= TH)
          {
            g[i][j]=255;
          }
          else
            g[i][j]=0;
        }
    }
}


