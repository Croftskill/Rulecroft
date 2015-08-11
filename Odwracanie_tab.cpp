#include <iostream>
#include <string>
#include "Odwracanie_tab.h"


using namespace std;

int z = KOK;

unsigned int licz = LICZ;

template <class T>
class Odwr
{
private:
	T *wsk;
public:
	
	void odw(T* tab, int N)
	{
		T temp = 0;
		wsk = tab;

		for (int i = 0; i < N/2; i++)
		{
			temp = *(wsk + i);
			*(wsk + i)= *(wsk + N - i - 1);
			*(wsk + N - i - 1) = temp;
		}

	}


};


int main()
{
	int num = 0;
	Odwr<float> invert;
	char Tab[] = { 'a', 'b', 'c', 'd', 'e','f', 'g','\0'};
	int Tab2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	float Tab3[] = { 0.1, 0.55, 0.63, 0.77, 5.555 };
	//num=strlen(Tab2);
	num = sizeof(Tab3)/sizeof(float);
	invert.odw(Tab3, num);

	for (int i = 0; i < num; i++)
		cout << Tab3[i] << " ";
	cout << endl;


	system("PAUSE");


} 