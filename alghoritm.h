#ifndef ALGHORITM_H
#define ALGHORITM_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Alghoritm{
    public:
        Alghoritm();
        vector<int> nearestNeighbor(int startCity);
		void setN(int n);
		int calculateTotalDistance(const vector<int>& path);
    
	private:
        int distanceMatrix[5][5];
		int N;
};


#endif
