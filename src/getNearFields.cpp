bool isInsideOfMatrix(int x, int y, int width, int height) {
	bool returnValue = false;
	if (x >= 0 && y >= 0 && x < width && y < height) {
		returnValue = true;
	}
	return returnValue;
}

int getLengthOfFieldPointer(int x, int y, int width, int height) {
	int sizeOfArray = 8;
	if ((x == (width - 1) && y == (height - 1)) || (x == 0 && y == 0) || (x == 0 && y == (height - 1)) || (x == (width - 1) && y == 0)) {
		sizeOfArray = 3;
	}
	else if (x == 0 || y == 0 || x == (width - 1) || y == (height - 1)) {
		sizeOfArray = 5;
	}

	return sizeOfArray;
}

int **getNearFields(int x, int y, int width, int height) {

	int sizeOfArray = 8;

	int **nearFields = new int*[sizeOfArray];
	for (int i = 0; i < sizeOfArray; i++) {
		nearFields[i] = new int[2];
	}

	int insertedIndex = 0;

	for (int i = (x - 1); i <= x + 1; i++) {
		for (int j = (y - 1); j <= y + 1; j++) {
			if (!(x == i && y == j)) {
				if (isInsideOfMatrix(i, j, width, height)) {
					nearFields[insertedIndex][0] = i;
					nearFields[insertedIndex][1] = j;

					insertedIndex++;
				}
			}
		}
	}

	return nearFields;
}