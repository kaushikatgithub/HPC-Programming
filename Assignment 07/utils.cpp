#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

double min_val, max_val;

// interpolation 
void interpolation(double *mesh_value, Points *points) {}

void normalization(double *mesh_value) {
    // Use global min_val, max_val variables to store the values to use it later for denormalization
}

// mover via reverse-interpolation
void mover(double *mesh_value, Points *points) {}

void denormalization(double *mesh_value) {
    // Use global min_val, max_val variables to denormalize the mesh
}

// count particles that went beyond the domain
long long int void_count(Points *points) {

    long long int voids = 0;
    for (int i = 0; i < NUM_Points; i++) {
        voids += (int)points[i].is_void;
    }
    return voids;
}

// Write mesh to file
void save_mesh(double *mesh_value) {

    FILE *fd = fopen("Mesh.out", "w");
    if (!fd) {
        printf("Error creating Mesh.out\n");
        exit(1);
    }

    for (int i = 0; i < GRID_Y; i++) {
        for (int j = 0; j < GRID_X; j++) {
            fprintf(fd, "%lf ", mesh_value[i * GRID_X + j]);
        }
        fprintf(fd, "\n");
    }

    fclose(fd);
}