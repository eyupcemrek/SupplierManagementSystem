#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#include "alghoritm.h"

using namespace std;

Alghoritm::Alghoritm(){
	setN(5);
    int distanceMatrix[5][5] = {
        {0, 100, 150, 200, 250},
        {100, 0, 350, 250, 300},
        {150, 350, 0, 300, 100},
        {200, 250, 300, 0, 50},
        {250, 300, 100, 50, 0}
    };

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            this->distanceMatrix[i][j] = distanceMatrix[i][j];
        }
    }
   
}
void Alghoritm::setN(int n){
	N = n;
}
	
vector<int> Alghoritm::nearestNeighbor(int startCity){
    vector<int> path;
    vector<bool> visited(N, false);

    int currentCity = startCity;
    path.push_back(currentCity);
    visited[currentCity] = true;

    for (int i = 1; i < N; ++i) {
        int nearestCity = -1;
        int minDistance = INT_MAX;

        for (int j = 0; j < N; ++j) {
            if (!visited[j] && distanceMatrix[currentCity][j] < minDistance) {
                nearestCity = j; 
                minDistance = distanceMatrix[currentCity][j]; 
            }
        }

        if (nearestCity != -1) {
            path.push_back(nearestCity);
            visited[nearestCity] = true;
            currentCity = nearestCity;
        }
    }

    path.push_back(startCity);

    return path;
}

int Alghoritm::calculateTotalDistance(const vector<int>& path){
    int totalDistance = 0;
    for (int i = 0; i < path.size() - 1; ++i) {
        totalDistance += distanceMatrix[path[i]][path[i + 1]];
    }
    return totalDistance;
}
