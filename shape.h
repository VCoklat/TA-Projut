// derived classes
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <malloc.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstring>
//#include "circle.h"
using namespace std;

class Shape {
   public:
		vector<double> jariList,Lling,Kling;
        virtual int getArea() const = 0;
 };
 #endif

