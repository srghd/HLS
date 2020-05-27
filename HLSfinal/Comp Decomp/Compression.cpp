#include "mini2.h"

void Compression(mat_a f[row][col], mat_c g[c], mat_d h[c][2], int siz)
{
    int m=0;
    int n=0;
    int tempInt;
    int counter=0;

for(int i = 0; i < row; i++){
  if (i%2 == 0){
       for(int j = 0; j < col; j++)
            {
               g[m]=f[i][j];
               m++;
            }
   }
   else {
       for (int j = col-1; j >= 0; j--)
       {
          g[m]=f[i][j];
          m++;
       }
    }
    }
tempInt=g[0];
for (int i=0; i<m; i++){

        if (i==(m-1)){
                if(g[i] == tempInt){
                    h[n][0] = tempInt;
                    h[n][1] = ++counter;
                    siz--;
                }
                else{
                    h[n][0] = tempInt;
                    h[n][1] = counter;
                    h[n+1][0]= g[i];
                    h[n+1][1]= 1;

            }
        }
        else if(g[i] == tempInt){
            counter++;
            siz--;
            }
        else{
            h[n][0]=tempInt;
            h[n][1]=counter;
            n++;
            tempInt = g[i];
            counter = 1;
        }

    }
}


void Decomp(mat_d compressed[c][2], mat_a decompressed[row][col], int siz)
{
    int temp;
    int counter;
    int r[c];
    int m = 0;
    int p = 0;
    int q = 0;
    bool switcher = true;


   for(int i = 0; i<siz-1 ; i++)
   {
       temp = compressed[i][0];
       counter = compressed[i][1];

       for(int j = 0; j < counter; j++)
       {
          r[m]=temp;
          m++;
       }
  }

  for(int n = 0; n < m ;n++)
  {
    decompressed[p][q] = r[n];
    if (switcher){
        if(q == row-1){
            switcher = false;
            p++;
        }
        else
            q++;
    }
    else
    {
         if(q == 0){
            switcher = true;
            p++;
        }
        else
            q--;
    }

  }
}
