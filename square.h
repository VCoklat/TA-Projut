#ifndef Square_H
#define Square_H
using namespace std;
#include <string>
#include <vector>

class Square: public Shape
{
	public:
	string s;
	void loadFromFile(char *filename);
	void saveToFile(char *filename);
	Square(string s);
	Square();
	~Square();
	vector<int>ukuran;
	void printAll();
	int getSize();
	void sort();
};
#endif
