#include <iostream>
#include "okr.h"


Point* Point::globalPoint = new Point(5, 5);


int main()
{



	/*const Point point(0,0);
	const Okr c(1,point);*/

	/*cout << c.POkr() <<endl;
	cout << c.SOkr() << endl;

	Okr okr1 = (Okr)2.5;
	cout << okr1.GetR() << endl;
	Okr okr2 = (Okr)5;
	cout << okr2.GetR() << endl;*/

	//if (okr1 < okr2)
	//{
	//	cout << okr1.POkr() << " < " << okr2.POkr() << endl;
	//}

	//if (okr1 > okr2)
	//{
	//	cout << okr1.POkr() << " < " << okr2.POkr() << endl;
	//}

	//if (okr1 == okr2)
	//{
	//	//cout << okr1.r << " = " << okr2.r << endl;
	//	cout << "=" << endl;
	//}
	//else
	//{
	//	cout << "!=" << endl;
	//}

	//Point point1(1, 1); 
	//Point point2(2, 2);
	//Point point3;
	////cin >> point3;
	////cout << point3;
	//cout << endl <<"***********" << endl;

	//if (point1 == point2)
	//{
	//	//cout << point1 << " = " << point2 << endl;
	//	cout << "=" << endl;
	//}

	//Point pointSumm = point1 + point2;

	//cout << pointSumm; 
	//cout << endl << "***********" << endl;

	//Okr okr(1,pointSumm);
	//Okr testPref = ++okr;
	//	cout << endl << "***********" << endl;
	//	cout << okr;
	//Okr testPost = okr++;
	//cout << endl << "***********" << endl;
	////okr += 3;
	//	cout << okr;


	//	Okr testPref1 = --okr;
	//	cout << endl << "***********" << endl;
	//	cout << okr;
	//	Okr testPost1 = okr--;
	//	cout << endl << "***********" << endl;
	//	//okr += 3;
	//	cout << okr;



	//	cout << endl << "***********" << endl;
	//	Okr okrX(1, 2, 4);
	//	Okr okrY;
	//	okrX = okrY;
	//	cout << okrX;



	Point* point = new Point(1, 8);
	Point* point1=new Point;
	Circle c(2, point);
	Circle c2;
	c2 = c;
	cout << c2 << endl;

	Point* p5 = Point::getReference();
	cout << *p5<<endl;
	p5->setX(10);

	Point* p6 = Point::getReference();
	cout << *p6 << endl;

	


}

