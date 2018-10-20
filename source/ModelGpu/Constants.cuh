#pragma once

//simulation specific constants
#define CELL_MAX_BONDS 6
#define CELL_MAX_DISTANCE 1.3f
#define CELL_MIN_ENERGY 50.0f
#define RADIATION_PROB 0.03f
#define RADIATION_EXPONENT 1.0f
#define RADIATION_FACTOR 0.0002f
#define RADIATION_VELOCITY_PERTURBATION 0.5f

#define PROTECTION_TIMESTEPS 60
#define NUM_CLUSTERS 1000/*160000/100*/

//math constants
#define DEG_TO_RAD 3.1415926535897932384626433832795/180.0
#define RAD_TO_DEG 180.0/3.1415926535897932384626433832795

//technical constants
#define NUM_THREADS_PER_BLOCK 64
#define NUM_BLOCKS 64
#define MAX_CELLCLUSTERS 1000
#define MAX_CELLS 300000
#define MAX_PARTICLES 1000000
#define FP_PRECISION 0.00001
#define RANDOM_NUMBER_BLOCK_SIZE 123127
#define MAX_COLLIDING_CLUSTERS 10

