#include<iostream>
#include<conio.h> 

using namespace std;
int myPause(), mapSele;
void map_1(), map_2(), map_3(), map_4(), map_5(), map_6(); 
int main()
{
	cout << "Map List (Enter Corresponding Number):";
	cout << "\n1 - Shared.map";
	cout << "\n2 - Mainmenu.map";
	cout << "\n3 - Lockout.map";
	cout << "\n4 - Cyclotron.map";
	cout << "\n5 - Midship.map";
	cout << "\n6 - Waterworks.map" << endl;
	cout << "\nMap: "; 
	cin >> mapSele;
	switch (mapSele)
	{
	case 1:
		map_1(); 
		break;
	case 2:
		map_2();
		break;
	case 3:
		map_3();
		break;
	case 4:
		map_4();
		break;
	case 5:
		map_5();
		break;
	case 6:
		map_6();
		break;
	default:
		cout << "Please Select A vaild Option" << endl; 
		break;

	}
	myPause();
}


int myPause()
{
	cout << "\n\nEnter Any Key To Close" << endl;
	_getch(); //leaves terminal open untill user inputs any key                           
	return 0;
}
void map_1()
{
	cout << "\ndervish_mp_e3.bipd" << endl; 
	cout << "	TagID: 200C95ED" << endl;
	cout << "	File Offset: 7A27AC4, Size: 2812"; 
	cout << "\nelite.bipd" << endl;
	cout << "	TagID: 4501BAE2" << endl; 
	cout << "	File Offset: 714E20C, Size: 3396";
	cout << "\nmasterchief.bipd" << endl; 
	cout << "	TagID: 5400C9E1" << endl;
	cout << "	File Offset: 6F8BCD4, Size: 2588";
	cout << "\nfalcon.vehi" << endl;
	cout << "	TagID: 8504FAE5" << endl;
	cout << "	File Offset: 75140EC, Size: 3844";
	cout << "\nspectre.vehi" << endl;
	cout << "	TagID: B00C25EE" << endl;
	cout << "	File Offset: 7AB1FD0, Size: 3100";
	cout << "\nmongoose.vehi" << endl;
	cout << "	TagID: A20517E7" << endl;
	cout << "	File Offset: 75968A8, Size: 2632"; 
}

void map_2()
{
	cout << "\n-.-" << endl;
	cout << "	TagID: -" << endl;
	cout << "	File Offset: -, Size: -";
}

void map_3()
{
	cout << "\n-.-" << endl;
	cout << "	TagID: -" << endl;
	cout << "	File Offset: -, Size: -";
}
void map_4()
{
	cout << "\n-.-" << endl;
	cout << "	TagID: -" << endl;
	cout << "	File Offset: -, Size: -";
}

void map_5()
{
	cout << "\n-.-" << endl;
	cout << "	TagID: -" << endl;
	cout << "	File Offset: -, Size: -";
}

void map_6()
{
	cout << "\n-.-" << endl;
	cout << "	TagID: -" << endl;
	cout << "	File Offset: -, Size: -";
}







