#include "matrix.h"
#include <vector>
#include <iostream>

Matrix::Matrix(int x){
	this->columns = this->rows = x;

	for (int i = 0; i < this->rows; i++){
		std::vector<double> n;
		this->values.push_back(n);
	}

	for (int i = 0; i < this->rows; i++){
		for (int j = 0; j < this->rows; j++){
			this->values[j].push_back(0);
		}
	}
}

Matrix::Matrix(int x, int y){
	this->columns = x;
	this->rows = y;

	for (int i = 0; i < this->columns; i++){
		std::vector<double> n;
		this->values.push_back(n);
	}

	for (int i = 0; i < this->rows; i++){
		for (int j = 0; j < this->columns; j++){
			this->values[j].push_back(0);
		}
	}

}

Matrix::~Matrix(){

}

void Matrix::setVar(int x, int y, double num){
	this->values[x][y] = num;
}

double Matrix::getVar(int x, int y) const{
	return this->values[x][y];
}

int Matrix::getRows() const{
	return this->rows;
}

int Matrix::getColumns() const{
	return this->columns;
}

void Matrix::printMatrix()const{
	for (int i = 0; i < this->rows; i++){
		for (int j = 0; j < this->columns; j++){
			std::cout << this->values[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
