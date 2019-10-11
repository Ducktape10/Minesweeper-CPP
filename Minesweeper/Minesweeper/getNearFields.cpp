bool isInsideOfMatrix(int x, int y, int width, int heigth) {
	bool returnValue = false;
	if (x >= 0 && y >= 0 && x <= width && y <= heigth) {
		returnValue = true;
	}
	return returnValue;
}

int getLengthOfFieldPointer(int x, int y, int width, int heigth) {
	int sizeOfArray = 8;
	if (x == width && y == heigth || x == 0 && y == 0) {
		sizeOfArray = 3;
	}
	else if (x == 0 || y == 0 || x == width || y == width) {
		sizeOfArray = 5;
	}

	int** nearFields = new int* [sizeOfArray];
	for (int i = 0; i < sizeOfArray; i++) {
		nearFields[i] = new int[2];
	}

	return sizeOfArray;
}

int **getNearFields(int x, int y, int width, int heigth) {

	int sizeOfArray = 8;
	sizeOfArray = getLengthOfFieldPointer(x, y, width, heigth);

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