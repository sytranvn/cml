#include "matrix.h"
#include <stdlib.h>

void
free_matrix (matrix m)
{
  for (int i = 0; i < m.rows; i++)
    free (m.vals[i]);
  free (m.vals);
}

void
scale_matrix (matrix m, float scale)
{
  for (int i = 0; i < m.rows; i++)
    for (int j = 0; j < m.cols; j++)
      m.vals[i][j] *= scale;
}
