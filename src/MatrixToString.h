#pragma once

#include <string>

#include "MatrixObject.h"

int getWidth(const matrixObject (&matrix)[30][20]);
int getHeight(const matrixObject (&matrix)[30][20]);
std::string matrixToString(const matrixObject (&matrix)[30][20]);
