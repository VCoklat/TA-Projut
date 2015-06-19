#ifndef Circle_H
#define Circle_H
using namespace std;
#include <string>
#include <vector>

class Circle: public Shape
{
	public:
	string r;
	void loadFromFile(char *filename);
	void saveToFile(char *filename);
	Circle(string r);
	Circle();
	~Circle();
	vector<int>ukuran;
	void printAll();
	int getSize();
	void sort();
};
#endif