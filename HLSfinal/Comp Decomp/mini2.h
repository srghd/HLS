#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <cmath>
using namespace std;

#define row 25
#define col 25
#define c 625
#define TH 125


typedef int mat_a;
typedef int mat_b;
typedef int mat_c;
typedef int mat_d;


// Prototype of top level function for C-synthesis
void Compression(
      mat_a f[row][col],
      mat_c g[c], mat_d h[c][2], int siz);

void Decomp(mat_d h[c][2], mat_a o[row][col], int siz);

