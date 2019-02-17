#include <vector>

class Matrix{
	public:
	Matrix(int x);
	Matrix(int x, int y);
	~Matrix();
	void setVar(int x, int y, double num);
	double getVar(int x, int y) const;
	void printMatrix()const;
	int getRows()const;
	int getColumns()const;

	private:
	int columns, rows;
	std::vector<std::vector<double>> values;
};

