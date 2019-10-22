#ifndef NEARFIELD_H
#define NEARFIELD_H

bool isInsideOfMatrix(int x, int y, int width, int heigth);
int getLengthOfFieldPointer(int x, int y, int width, int heigth);
int **getNearFields(int x, int y, int width, int heigth);

#endif