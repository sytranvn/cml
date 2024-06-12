#ifndef CML_API
#define CML_API

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef GPU
// add more stuff
#endif

#ifdef __cplusplus
extern "C"
{
#endif

  typedef enum
  {
    LOGISTIC,
    RELU,
    TANH,
    LEAKY,
    SIGMOID
  } ACTIVATION;

  typedef enum
  {
    PNG,
    BMP,
    TGA,
    JPG
  } IMTYPE;

  typedef struct
  {
    int w;
    int h;
    int c;
    float *data;
  } image;

  typedef struct
  {
    float x, y, w, h;
  } box;

  typedef struct
  {
    int rows, cols;
    float **vals;
  } matrix;

#ifdef __cplusplus
}
#endif
#endif
