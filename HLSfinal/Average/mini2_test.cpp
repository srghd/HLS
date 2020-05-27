#include <iostream>
#include "mini2.h"

using namespace std;

int main(int argc, char **argv)
{
	mat_a in_mat_a[25][25] = {
				  {23, 42, 232, 30, 31, 23 ,32 ,32 ,43 ,56,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {130, 209, 7, 16, 54, 23, 42, 232, 30,34,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {140, 140, 153, 106, 10, 23, 42, 232, 30, 45,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {70, 61, 50, 40, 30, 40, 153, 106, 10, 23,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {81, 50, 40, 30, 20, 40, 30, 40, 153, 106,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {23, 42, 232, 30, 31, 23 ,32 ,32 ,43 ,56,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {130, 209, 7, 16, 54, 23, 42, 232, 30,34,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {140, 140, 153, 106, 10, 23, 42, 232, 30, 45,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {70, 61, 50, 40, 30, 40, 153, 106, 10, 23,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {81, 50, 40, 30, 20, 40, 30, 40, 153, 106,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {23, 42, 232, 30, 31, 23 ,32 ,32 ,43 ,56,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {130, 209, 7, 16, 54, 23, 42, 232, 30,34,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {140, 140, 153, 106, 10, 23, 42, 232, 30, 4581, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {70, 61, 50, 40, 30, 40, 153, 106, 10, 23,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {81, 50, 40, 30, 20, 40, 30, 40, 153, 106,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {23, 42, 232, 30, 31, 23 ,32 ,32 ,43 ,56,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {130, 209, 7, 16, 54, 23, 42, 232, 30, 34,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {140, 140, 153, 106, 10, 23, 42, 232, 30, 45,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {70, 61, 50, 40, 30, 40, 153, 106, 10, 23, 81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {23, 42, 232, 30, 31, 23 ,32 ,32 ,43 ,56,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {130, 209, 7, 16, 54, 23, 42, 232, 30,34, 81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {140, 140, 153, 106, 10, 23, 42, 232, 30, 45,81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {70, 61, 50, 40, 30, 40, 153, 106, 10, 23, 81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56},
				  {81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 81, 50, 40, 30, 20, 40, 30, 40, 153, 106, 23 ,32 ,32 ,43 ,56}

	   };
	   mat_b in_mat_b[25][25];

	  Avg(in_mat_a ,in_mat_b);

   return 0;
}
