// the goal for this program it to calculat how much paint is need to paint a wall

#include<iostream>
#include<iomanip>

using namespace std; 

int main()
{
	int length = 6;
	int width = 100;
	int paint = 340;
	float fenceArea = length * width;
	float gallonsPaint = fenceArea / paint;
	cout << "You need " << gallonsPaint << " gallon(s) to paint this fence \n";




	system("PAUSE");
	return 0;
}