bool isInsideOfMatrix(int x, int y, int width, int heigth) {
	bool returnValue = false;
	if (x >= 0 && y >= 0 && x < width && y < heigth) {
		returnValue = true;
	}
	return returnValue;
}

int getLengthOfFieldPointer(int x, int y, int width, int heigth) {
	int sizeOfArray = 8;
	if ((x == (width-1) && y == (heigth-1)) || (x == 0 && y == 0)) {
		sizeOfArray = 3;
	}
	else if (x == 0 || y == 0 || x == (width-1) || y == (heigth-1)) {
		sizeOfArray = 5;
	}

	return sizeOfArray;
}

int **getNearFields(int x, int y, int width, int heigth) {

	int sizeOfArray = 8;

	int **nearFields = new int*[sizeOfArray];
	for (int i = 0; i < sizeOfArray; i++) {
		nearFields[i] = new int[2];
	}

	int insertedIndex = 0;

	for (int i = (x - 1); i <= x + 1; i++) {
		for (int j = (y - 1); j <= y + 1; j++) {
			if (!(x == i && y == j)) {
				if (isInsideOfMatrix(i, j, width, heigth)) {
					nearFields[insertedIndex][0] = i;
					nearFields[insertedIndex][1] = j;

					insertedIndex++;
				}
			}
		}
	}

	return nearFields;
}