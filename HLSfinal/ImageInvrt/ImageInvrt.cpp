#include "mini2.h"

void II(mat_a f[row][col], mat_b g[row][col]) //image inverter
{
 ROW:for(int i = 0; i < row; i++)
    {
        COL:for(int j = 0; j < col; j++)
        {
          g[i][j] =255-f[i][j];
        }
    }
}
