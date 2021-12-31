#include <stdio.h>
#include <string.h>
#include "ass4.h"

#define MAX_COMMAND_LENGTH 11
#define SIZE 3

void createBoard(char board[][SIZE * SIZE], char str[]) {
	// Check for legal string:

	// Check for valid length for each row
	int charsPerRow = 0;
	int invalidString = 0;
	int rowCount = 0;
	for (int i = 0; i < strlen(str); i++) {
		if ('a' <= str[i] && str[i] <= ('a' + SIZE * SIZE)) {
			charsPerRow += (str[i] - 'a') + 1;
		}
		else if (str[i] != '/') {
			charsPerRow += 1;
		}
		else if (str[i] == '/') {
			charsPerRow = 0;
			rowCount += 1;
		}

		if (charsPerRow > SIZE * SIZE) {
			invalidString = 1;
			break;
		}
	}

	if (rowCount != (SIZE*SIZE) - 1) {
		invalidString = 1;
	}
	

	if (invalidString == 1) {
		printf("Error\n");
		return;
	}


	// If string is legal, save it inside the board
	int stringIndex = 0;
	for (int i = 0; i < SIZE * SIZE; i++) {
		int cellsFilled = 0;
		for (int j = 0; j <= SIZE * SIZE; j++) {
			// if it is the end of the string, break
			if (i == (SIZE * SIZE) - 1 && j == SIZE * SIZE) {
				break;
			}

			// if str[stringIndex] is a space character, add the required amount of spaces
			if ('a' <= str[stringIndex] && str[stringIndex] <= ('a' + SIZE * SIZE)) {
				int numOfSpaces =  (str[stringIndex] - 'a') + 1;
				int numOfSpacesCopy = numOfSpaces;
				int lastJ = j;
				while (numOfSpaces != 0) {
					board[i][j] = ' ';
					numOfSpaces -= 1;
					cellsFilled += 1;
					j++;
				}
				j = lastJ;
				j += numOfSpacesCopy - 1;
				stringIndex += 1;
			}

			// if str[stringIndex] is '/'
			else if (str[stringIndex] == '/' || str[stringIndex] == '\0') {
				if (cellsFilled != SIZE * SIZE) {
					while (cellsFilled <= SIZE * SIZE) {
						cellsFilled += 1;
						if (j == SIZE * SIZE) {
							continue;
						}
						board[i][j] = ' ';
						j++;
					}
				}
				stringIndex += 1;
				break;
			}

			// if str[stringIndex] is not a special char, add it to the board
			else {
				board[i][j] = (char) str[stringIndex];
				stringIndex += 1;
				cellsFilled += 1;
			}
		}
	}
}

void makeMove(char board[][SIZE * SIZE], char move[]) {
	// Extract the type of move from the string
	// Max move type is 11 chars, 'replaceAll' + \0
	char moveType[MAX_COMMAND_LENGTH];
	int lastComma = 0;

	for (int i = 0; i < 11; i++) {
		if (move[i] == ',') {
			lastComma = i;
			moveType[i] = '\0';
			break;
		}
		moveType[i] = move[i];
	}

	if (strcmp(moveType, "replaceAll") == 0) {
		// Check valid string
		if (move[lastComma + 2] != ',') {
			printf("Error\n");
			return;
		}
		if (move[lastComma + 4] != '\0') {
			printf("Error\n");
			return;
		}

		// Get the char to replace
		char charToReplace = move[lastComma + 1];
		// Check that charToReplace is valid
		if ('a' <= charToReplace && charToReplace <= ('a' + SIZE * SIZE)) {
			printf("Error\n");
			return;
		}
		if (charToReplace == ' ' || charToReplace == '/') {
			printf("Error\n");
			return;
		}

		// Check if charToReplace appears in  board
		int charPresent = 0;
		for (int i = 0; i < SIZE * SIZE; i++) {
			for (int j = 0; j < SIZE * SIZE; j++) {
				if (board[i][j] == charToReplace) {
					charPresent = 1;
				}
			}
		}

		if (charPresent == 0) {
			printf("Error\n");
			return;
		}

		// Get the char to replace with
		char replaceWithChar = move[lastComma + 3];
		// Check that replaceWithChar is legal
		if ('a' <= replaceWithChar && replaceWithChar <= ('a' + SIZE * SIZE)) {
			printf("Error\n");
			return;
		}
		if (replaceWithChar == '/' || replaceWithChar == ' ' || replaceWithChar == '\0') {
			printf("Error\n");
			return;
		}

		// Replace the char in the board
		int numReplaced = 0;
		for (int i = 0; i < SIZE * SIZE; i++) {
			for (int j = 0; j < SIZE * SIZE; j++) {
				if (board[i][j] == charToReplace) {
					board[i][j] = replaceWithChar;
					numReplaced += 1;
				}
			}
		}

		// Check that a char was actually replaced
		if (numReplaced == 0) {
			printf("Error\n");
			return;
		}
	}

	else if (strcmp(moveType, "change") == 0) {
		// Check that string is valid
		if (move[lastComma + 2] != ',') {
			printf("Error\n");
			return;
		}
		if (move[lastComma + 4] != ',') {
			printf("Error\n");
			return;
		}
		if (move[lastComma + 6] != '\0') {
			printf("Error\n");
			return;
		}
		// Get the rowIndex and colIndex from the string
		int rowIndex = move[lastComma + 1] - '0';
		int colIndex = move[lastComma + 3] - '0';
		char charToReplaceWith = move[lastComma + 5];

		// Check for valid index/char
		if (rowIndex > (SIZE * SIZE - 1) || rowIndex < 0) {
			printf("Error\n");
			return;
		}
		if (colIndex > (SIZE * SIZE - 1) || colIndex < 0) {
			printf("Error\n");
			return;
		}

		// check for legal char
		if ('a' <= charToReplaceWith && charToReplaceWith <= ('a' + SIZE * SIZE)) {
			printf("Error\n");
			return;
		}
		if (charToReplaceWith == '/' || charToReplaceWith == ' ' || charToReplaceWith == '\0') {
			printf("Error");
			return;
		}

		// Replace the specified index
		if (board[rowIndex][colIndex] == ' ') {
			printf("Error\n");
			return;
		}
		else {
			board[rowIndex][colIndex] = charToReplaceWith;
		}
	}

	else if (strcmp(moveType, "add") == 0) {
		// Check that string is valid
		if (move[lastComma + 2] != ',') {
			printf("Error\n");
			return;
		}
		if (move[lastComma + 4] != ',') {
			printf("Error\n");
			return;
		}
		if (move[lastComma + 6] != '\0') {
			printf("Error\n");
			return;
		}
		// Get the rowIndex and colIndex from the string
		int rowIndex = move[lastComma + 1] - '0';
		int colIndex = move[lastComma + 3] - '0';
		char charToAdd = move[lastComma + 5];

		// Check for valid index/char
		if (rowIndex > (SIZE * SIZE - 1) || rowIndex < 0) {
			printf("Error\n");
			return;
		}
		if (colIndex > (SIZE * SIZE - 1) || colIndex < 0) {
			printf("Error\n");
			return;
		}

		// Check for valid char
		if ('a' <= charToAdd && charToAdd <= ('a' + SIZE * SIZE)) {
			printf("Error\n");
			return;
		}
		if (charToAdd == '/' || charToAdd == ' ') {
			printf("Error");
			return;
		}
		// Add to the specified index
		if (board[rowIndex][colIndex] != ' ') {
			printf("Error\n");
			return;
		}
		else {
			board[rowIndex][colIndex] = charToAdd;
		}
	}

	else if (strcmp(moveType, "delete") == 0) {
		// Check that string is valid
		if (move[lastComma + 2] != ',') {
			printf("Error\n");
			return;
		}
		if (move[lastComma + 4] != '\0') {
			printf("Error\n");
			return;
		}
		// Get the rowIndex and colIndex from the string
		int rowIndex = move[lastComma + 1] - '0';
		int colIndex = move[lastComma + 3] - '0';

		// Check for valid index/char
		if (rowIndex > (SIZE * SIZE - 1) || rowIndex < 0) {
			printf("Error\n");
			return;
		}
		if (colIndex > (SIZE * SIZE - 1) || colIndex < 0) {
			printf("Error\n");
			return;
		}

		// Delete from the specified index
		if (board[rowIndex][colIndex] == ' ') {
			printf("Error\n");
			return;
		}
		else {
			board[rowIndex][colIndex] = ' ';
		}
	}

	else {
		printf("Error\n");
	}
}


void printBoard(char board[][SIZE * SIZE]) {
	for (int i = 0; i < SIZE * SIZE; i++) {
		for (int j = 0; j < SIZE * SIZE; j++) {
			printf("%c", board[i][j]);

			if (SIZE == 3) {
				if (j == SIZE - 1 || j == 2 * SIZE - 1) {
					printf(" | ");
				}
			}
			if (SIZE == 2) {
				if (j == SIZE - 1) {
					printf(" | ");
				}
			}
		}
		printf("\n");

		if (SIZE == 3) {
			if (i == SIZE - 1 || i == 2 * SIZE - 1) {
				printf("\n");
			}
		}
		if (SIZE == 2) {
			if (i == SIZE - 1) {
				printf("\n");
			}
		}
	}
	printf("\n");
	
}

int testBoard(char board[][SIZE * SIZE]) {
	// Check for no repeats in cols/rows
	char examinedChar;
	for (int i = 0; i < SIZE * SIZE; i++) {
		for (int j = 0; j < SIZE * SIZE; j++) {
			if (board[i][j] == ' ') {
				continue;
			}
			examinedChar = board[i][j];
			if (examinedChar == '0') {
				return 0;
			}
			// Check that char doesnt repeat in column
			for (int r = 0; r < SIZE * SIZE; r++) {
				if (r == i) {
					continue;
				}
				if (board[r][j] == examinedChar) {
					return 0;
				}
			}
			// Check that char doesnt repeat in row
			for (int c = 0; c < SIZE * SIZE; c++) {
				if (c == j) {
					continue;
				}
				if (board[i][c] == examinedChar) {
					return 0;
				}
			}
		}
	}
	// Check for no repeats in squares
	for (int t = 0; t < SIZE; t++) {
		for (int u = 0; u < SIZE; u++) {
			char charsInSquare[SIZE * SIZE] = "";
			int currentArrayIndex = 0;
			for (int i = 0; i < SIZE; i++) {
				for (int j = 0; j < SIZE; j++) {
					charsInSquare[currentArrayIndex] = board[i + (SIZE * t)][j + (SIZE * u)];
					currentArrayIndex += 1;
				}
			}
			// loop over every element in the array 
			// if it contains identicals or variables, return 0
			for (int i = 0; i < SIZE * SIZE; i++) {
				for (int j = i+1; j < SIZE * SIZE; j++) {
					// check that there arent any identicals
					// ignore spaces, its legal to have 2 of them in a square
					if (charsInSquare[i] == ' ') {
						continue;
					}
					if (charsInSquare[i] == charsInSquare[j]) {
						return 0;
					}
				}
				// check that the element is a number or a space
				if (charsInSquare[i] != ' ' && (charsInSquare[i] > '9' || charsInSquare[i] < '0')) {
					return 0;
				}
			}
		}
	}
	
	// If passed all tests, return 1
	return 1;
	
}


int isSameBoard(char board[][SIZE * SIZE], char board1[][SIZE * SIZE]) {
	for (int i = 0; i < SIZE * SIZE; i++) {
		for (int j = 0; j < SIZE * SIZE; j++) {
			if (board[i][j] != board1[i][j]) {
				printf("Found inequality on row %d col %d.\n", i, j);
				return 0;
			}
		}
	}

	return 1;
}

void completeBoard(char board[][SIZE * SIZE]) {
	// Check if board is almost solved
	// Check if board contains no variables and valid according to suduku rules using testBoard
	int validBoard = testBoard(board);
	if (validBoard == 0) {
		printf("Error\n");
		return;
	}

	// Check for only one empty space each row
	for (int i = 0; i < SIZE * SIZE; i++) {
		int sumSpacesRow = 0;
		int sumSpacesCol = 0;
		for (int j = 0; j < SIZE * SIZE; j++) {
			if (board[i][j] == ' ') {
				sumSpacesRow += 1;
			}
			if (board[j][i] == ' ') {
				sumSpacesCol += 1;
			}
		}
		
		if (sumSpacesCol > 1 || sumSpacesRow > 1) {
			printf("Error\n");
			return;
		}
	}

	// Check for only one empty space each square
	for (int t = 0; t < SIZE; t++) {
		for (int u = 0; u < SIZE; u++) {
			int sumSpaces = 0;
			for (int i = 0; i < SIZE; i++) {
				for (int j = 0; j < SIZE; j++) {
					if (board[i + (SIZE * t)][j + (SIZE * u)] == ' ') {
						sumSpaces += 1;
					}
				}
			}
			if (sumSpaces > 1) {
				printf("Error\n");
				return;
			}
		}
	}

	// if board is valid, complete it
	// Go over all the board
	char allPossibleNumbers[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	for (int i = 0; i < SIZE * SIZE; i++) {
		for (int j = 0; j < SIZE * SIZE; j++) {
			// If the current element is a space, get all elements in row, column
			if (board[i][j] == ' ') {
				int allRowElements[SIZE * SIZE];
				int rowElementIndex = 0;
				// get all row elements
				for (int r = 0; r < SIZE * SIZE; r++) {
					allRowElements[rowElementIndex] = board[i][r];
					rowElementIndex += 1;
				}
				// get all column elements
				int allColElements[SIZE * SIZE];
				int colElementIndex = 0;
				for (int c = 0; c < SIZE * SIZE; c++) {
					allColElements[colElementIndex] = board[c][j];
					colElementIndex += 1;
				}

				// Loop over every number in possible numbers
				for (int p = 0; p < SIZE * SIZE; p++) {
					int numInColElements = 0;
					int numInRowElements = 0;
					// loop over every number in allColElements
					for (int t = 0; t < SIZE * SIZE; t++) {
						if (allPossibleNumbers[p] == allColElements[t]) {
							numInColElements = 1;
							break;
						}
					}

					// loop over every number in allRowElements
					for (int t = 0; t < SIZE * SIZE; t++) {
						if (allPossibleNumbers[p] == allRowElements[t]) {
							numInRowElements = 1;
							break;
						}
					}

					// if number doesnt appear in either, set it
					if (numInColElements == 0 && numInRowElements == 0) {
						board[i][j] = allPossibleNumbers[p];
						break;
					}
				}
			}
		}
	}
}