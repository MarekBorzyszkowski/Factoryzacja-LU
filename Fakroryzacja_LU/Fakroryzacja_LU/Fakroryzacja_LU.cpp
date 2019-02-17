#include <iostream>
#include "matrix.h"
int main()
{
	Matrix Test(3);
	for (int i = 0; i < Test.getRows(); i++){
		for (int j = 0; j < Test.getColumns(); j++){
			Test.setVar(i, j, i + j+1);
		}
	}
	Test.printMatrix();

	return 0;
}
