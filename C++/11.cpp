/*

Prompt:

Given two vectors, crew_position and hole_position.
There are multiple crews and potholes along a straight road.
Each element of the two vectors represents their position coordinate on x-axis only.
The program takes in the two vectors and returns the minimum distance each of the crews have to be sent to repair the holes.

Assume there is a crew for every hole, i:e, for n holes there are n number of crews.

*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){

    // Declaration
    vector<int> crew_position, hole_position;
    int i, input_cv, n, min_dist = 0;

    // Taking in the length of vectors
    cout << "Enter the number of potholes: " << endl;
    cin >> n;

    // Taking in the crew position
    cout << "Enter crew position: " << endl;
    for(int i = 0; i < n; i++){
            cin >> input_cv;
            crew_position.push_back(input_cv);
    }

    // Taking in the potholes position
    cout << "Enter potholes position: " << endl;
    for(i = 0; i < n; i++){
            cin >> input_cv;
            hole_position.push_back(input_cv);
    }

    // Sorting both the vectors in ascending order
    sort(crew_position.begin(), crew_position.end());
    sort(hole_position.begin(), hole_position.end());

    for(i = 0; i < n; i++){
        min_dist += abs((crew_position.at(i) - hole_position.at(i)));
    }

    // print minimum distance
    cout << "Minimum distance is: "<< min_dist << endl;

    return 0;
}
