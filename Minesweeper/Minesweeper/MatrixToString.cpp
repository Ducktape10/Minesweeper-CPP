#include <string>
#include "MatrixObject.h"

using namespace std;

int getWidth(matrixObject matrix[30][20])
{
	int i = -1;
	bool outOfRange = false;
	while (i < 30 && !outOfRange)
	{
		++i;
		if (!matrix[i][0].isValid) { outOfRange = true; }
	}
	return i;
}

int getHeight(matrixObject matrix[30][20])
{
	int i = -1;
	bool outOfRange = false;
	while (i < 20 && !outOfRange)
	{
		++i;
		if (!matrix[0][i].isValid) { outOfRange = true; }
	}
	return i;
}

string matrixToString(matrixObject matrix[30][20])
{


}