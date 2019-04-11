/*
	Copyright (c) 2019 by Rizky Khapidsyah
	Compiler   :
	I.D.E.     :
*/

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
	char Kalimat1[]="Apakah kamu sayang dan";
	char Kalimat2[]=" mencintaiku atau tidak?";
	char Kalimat3[50];
	
	strcpy(Kalimat3, Kalimat1);
	
	cout << "Hasil menggabungkan kalimat menggunakan: strcat   = " << strcat(Kalimat3, Kalimat2) << endl;
	cout << "Hasil menggabungkan kalimat menggunakan: strncat  = " << strncat(Kalimat1, Kalimat2, 13) << endl << endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
