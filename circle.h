#ifndef Circle_H
#define Circle_H
using namespace std;
#include <string>
#include <vector>

class Circle
{
	public:
	string r;
	void loadFromFile(char *filename);
	void saveToFile(char *filename);
	Circle(string r);
	Circle();
	~Circle();
	string ukuran1[100];
	void printAll();
	int getSize();
	int index;
	void sort();
};
#endif