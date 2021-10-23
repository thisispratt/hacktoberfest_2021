#include<bits/stdc++.h>

using namespace std;

// Function to Multiply two Matrices
vector<vector<int> > multiply(vector<vector<int> > &v1,vector<vector<int> > &v2) {
	// Get dimensions of input matrices
	int n1,n2,m1,m2;
	n1 = v1.size();
	m1 = v1[0].size();
	n2 = v2.size();
	m2 = v2[0].size();

	if(n2!=m1) return {}; // Return empty matrix if we cannot multiply input matrices

	vector<vector<int> > v3(n1,vector<int> (m2)); // Return matrix with dimensions n1xm2

	for(int i=0;i<n1;i++) {
		for(int j=0;j<m2;j++) {
			int val = 0; // Value to put on v3[i][j]

			// Get Cell Value by multiplying ith row of v1 with jth column of v2
			for(int k=0;k<n2;k++) {
				val += v1[i][k]*v2[k][j];
			}
			v3[i][j] = val;
		}
	}
	return v3;
}

int main() {
	int n1,m1,n2,m2; // Dimensions of Matrices
	vector<vector<int> > v1,v2; // Two Matrices to multiply

	// Input for Matrix 1
	cout<<"Enter Matrix 1 Dimensions: ";
	cin>>n1>>m1;
	for(int i=0;i<n1;i++) {
		v1.push_back(vector<int> ());
		cout<<"Row "<<i+1<<": ";
		for(int j=0;j<m1;j++) {
			int num;
			cin>>num;
			v1[i].push_back(num);
		}
	}

	// Input for Matrix 2
	cout<<"Enter Matrix 2 Dimensions: ";
	cin>>n2>>m2;
	for(int i=0;i<n2;i++) {
		v2.push_back(vector<int> ());
		cout<<"Row "<<i+1<<": ";
		for(int j=0;j<m2;j++) {
			int num;
			cin>>num;
			v2[i].push_back(num);
		}
	}

	// Function call to get multiplication of 2 matrices
	// Returned Matrix will be empty incase the matrices cannot be multiplied
	// Multiply Condition - m1 = n2
	vector<vector<int> > v3 = multiply(v1,v2);
	cout<<"Matrix 3"<<endl;
	for(int i=0;i<v3.size();i++) {
		cout<<"Row "<<i<<": ";
		for(int j=0;j<v3[i].size();j++) {
			cout<<v3[i][j]<<" ";
		}
		cout<<endl;
	}

}
