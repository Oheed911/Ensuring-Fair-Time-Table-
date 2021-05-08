/*

	Oheed Imran
	Saroosh Hammad
	CS-A

	Discrete Project

*/



#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	fstream myobj;
	ofstream myobj2;
	myobj.open("kBase.txt");
	string Read;

	while (!myobj.eof())
	{
		string Read2 = "";
		getline(myobj,Read);
		for (int i = 0 ; i < Read.length() ; i++)
		{
			if (int(Read[i]) >= 65 && int(Read[i]) <= 90 || int(Read[i]) >= 97 && int(Read[i]) <= 122 || int(Read[i]) == 40 || int(Read[i]) == 41 || int(Read[i]) == 44 || int(Read[i]) >= 48 && int(Read[i]) <= 57)
			{
				Read2 += char(tolower(Read[i]));
			}
		}
		if (Read2.length() > 5)
		{
			Read2 += ".";
			for (int i = 0 ; i < Read2.length() ; i++)
			{
				if (int(Read2[i]) >= 48 && int(Read[i]) <= 57)
				{
					if (int(Read2[i+1]) >= 48 && int(Read2[i+1]) <= 57)
					{
						if (Read2[i+2] == 'i' || Read2[i+2] == 'k')
						{
							char t1 = Read2[i];
							char t2 = Read2[i+1];
							char t3 = Read2[i+2];
							Read2[i] = t3;
							Read2[i+1] = t1;
							Read2[i+2] = t2;
						}
					}
				}
			}
			myobj2.open("kb.pl",ios::app);
			myobj2 << Read2 << endl ;
			myobj2.close();
		}
	}
}