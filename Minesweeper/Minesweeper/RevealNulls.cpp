#include "MatrixObject.h"
#include "getNearFields.h"

using namespace std;

void revealNulls(int x, int y, matrixObject** matrix, int width, int heigth)
{
	matrix[x][y].isVisible = true;
	int** nearFields = getNearFields(x, y, width, heigth);
	for (int i = 0; i < getLengthOfFieldPointer(x, y, width, heigth); ++i)
	{
		if (!matrix[nearFields[i][0]][nearFields[i][1]].isVisible)
		{
			revealNulls(nearFields[i][0], nearFields[i][1], matrix, width, heigth);
		}
	}
}