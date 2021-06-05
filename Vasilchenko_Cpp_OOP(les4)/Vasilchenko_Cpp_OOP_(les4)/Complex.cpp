#include "Complex.h"


Complex::Complex(int _real, int _img):
	real{_real},
	img{_img}
{
	cout << "Base constructor" << endl;
}

Complex::Complex(const Complex& copy):real{copy.real}, img{copy.img}
{
	cout << "Copy constructor" << endl;
}


const char* Complex::ToString()
{
	char strReal[100];
	if (this->img == 0)
	{
		sprintf(strReal, "%d", this->real);
		return strReal;
	}
	char strImg[100];
	//sprintf(strImg, "%d", this->img);
	char* pImg = itoa(this->img, strImg, 10);
	char* pReal = itoa(this->real, strReal, 10);
	cout << pImg << endl;
	cout << pReal << endl;

	const char* pRealP = strcat(pReal, " + ");
	cout << pRealP << endl;
	const char* pImgI = strcat(pImg, "i");
	cout << pImgI<< endl;
	const char* concat = strcat((char*)pRealP, pImgI);
	cout << concat << endl << endl;
	return concat;
}

Complex::~Complex()
{
	cout << "DEAD" << endl;
}