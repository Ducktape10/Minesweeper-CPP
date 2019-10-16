#include <string>
#include <sstream>
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
	int width = getWidth(matrix);
	int height = getHeight(matrix);
	stringstream result;
	result << "    ";
	for (int i = 0; i < width; i++)
	{
		if (i < 8) { result << (i + 1) << "  "; }
		else { result << i + 1 << " "; }
	}
	result << "\n\n";
	for (int i = 0; i < height; i++)
	{
		if (i < 9) { result << " " << i + 1 << "  "; }
		else { result << i + 1 << "  "; }
		for (int j = 0; j < width; j++)
		{
			if (matrix[j][i].isFlagged && matrix[j][i].isVisible) { result << "!F "; } // This only can happen with bombs.
			else if (matrix[j][i].isFlagged && !matrix[j][i].isVisible) { result << "F  "; }
			else if (!matrix[j][i].isVisible) { result << "X  "; }
			else if (matrix[j][i].isVisible && matrix[j][i].objType == -1) { result << "!  "; }
			else { result << matrix[j][i].objType << "  "; }
		}
		result << "\n\n";
	}
	result << "\nDo something!\nOptions: Poke(p) or Flag/UnFlag(f) a valid coardinate(x y)\nFormat: <move xCordinate yCordinate>\n";
	return result.str();
}