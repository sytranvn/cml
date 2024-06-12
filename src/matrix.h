#ifndef CML_MATRIX
#define CML_MATRIX

#include "cml.h"

void free_matrix (matrix m);
float matrix_topk_accuracy (matrix truth, matrix guess, int k);
void scale_matrix (matrix m, float scale);
matrix resize_matrix (matrix, int rows);
void matrix_add_matrix (matrix from, matrix to);
matrix copy_matrix (matrix m);
matrix make_matrix (int rows, int cols);
matrix hold_out_matrix (matrix *m, int n);
float pop_column (matrix *m, int c);
matrix matrix_from_csv (char *filename);
void matrix_to_csv (matrix m, char *filename);
void print_matrix (matrix m);

#endif
