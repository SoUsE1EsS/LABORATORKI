#pragma once

#include <iostream>
#include <map>
class Matr3Diag
{
private:
	int n;
	double* elem;
public:
	Matr3Diag();
	Matr3Diag(const Matr3Diag& temp);
	~Matr3Diag();

	double get_elem(int i, int j) const;
	bool add_to_row(int number_of_row, int number_of_row_to_add, int mult_coef);
	Matr3Diag sum(const Matr3Diag& temp);
	void print() const;
	void input(int size);


	void operator+=(const Matr3Diag& temp);

	friend std::ostream& operator<<(std::ostream& out, const Matr3Diag& temp);
};
