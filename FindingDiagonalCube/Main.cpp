#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float DiagonalCube(float nums) {
	float length = cbrt(nums);
	return length * (sqrt(3));
}


int main() {
	float cubevolume = 0;
	
	cout << "Enter a volume of a cube to find its diagonal length: ";
	cin >> cubevolume;

	float finalAnswer = DiagonalCube(cubevolume);
	cout << "\nThe answer is ";
	cout << setprecision(2) << fixed << finalAnswer<<endl;
}