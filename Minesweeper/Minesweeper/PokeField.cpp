#include "MatrixObject.h"
#include "RevealNulls.h"

void pokeField(int x, int y, matrixObject** matrix, int width, int height)
{
	if (!matrix[x][y].isFlagged && !matrix[x][y].isVisible)
	{
		if (matrix[x][y].objType == 0)
		{
			revealNulls(x, y, matrix, width, height);
		}
		else
		{
			matrix[x][y].isVisible = true;
		}
	}
}