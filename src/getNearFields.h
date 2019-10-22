#ifndef NEAR_FIELDS_H
#define NEAR_FIELDS_H

bool isInsideOfMatrix(int x, int y, int width, int heigth);
int getLengthOfFieldPointer(int x, int y, int width, int heigth);
int **getNearFields(int x, int y, int width, int heigth);

#endif  // NEAR_FIELDS_H
