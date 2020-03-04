//Filename: ListPrinters.cpp 
//Author: EENG 221 S20
//Email: jjgiesey@milligan.edu
//Assignment: Project Milestone #07
//Description: Program to collect listPrinter functions.
//Last Changed: February 26, 2020


#include <iostream>
#include <string>
#include <stdlib.h> //Need to include library for function rand, srand
#include <time.h>  //Need to include library for function time
#include <cmath> //Need to include library for function atan
#include <iomanip> //used to organize data in columns for erin

using namespace std;

void listPrint(string SArray[], int IArray1[], int OArray[], int ArraySize);
//Precondition: Equal sized arrays of string and integer are passed SArray and IArray1. 
//				The order of the arrays to be printed is passed in OArray. OArray must have unique values between 0 and ArraySize-1.
//				The size is passed in ArraySize.
//Postcondition: The values of the three arrays will be output to console seperated by tabs in order.

void listPrint(string SArray[], double DArray[], int IArray[], int ArraySize);
//Precondition: Equal sized arrays of string, double and integer are passed SArray, DArray and IArray. 
//				The size is passed in ArraySize.
//Postcondition: The values of the three arrays will be output to console seperated by tabs in index order.

void listPrint(string SArray[], double DArray1[], double DArray2[], double DArray3[],
	double DArray4[], double DArray5[], double DArray6[], int ArraySize);
//Precondition: Equal sized arrays of string and six doubles are passed SArray, DArray1, DArray2, DArray3, DArray4, DArray5, DArray6.
//				The size is passed in ArraySize.
//Postcondition: The values of the seven arrays will be output to console separated by tabs in index order.

void listPrint(string SArray[], double DArray1[], double DArray2[], double DArray3[], int ArraySize);
//Precondition: Equal size arrays of string and three doubles passed SArray, DArray1, DArray2 and DArray3.
//				The size is passed in ArraySize.
//Postcondition: The values of the four arrays will be output to console separated by tabs in index order.

void listPrint(double dayArray[], bool bArray1[], int ArraySizeDay);
// Give preconditions and postconditions.
//One more function?

void listPrint(string names[], int values[], int numberVals);
//Precondition: A list of strings to be printed and an integer value associated with each string
//is given along with the number of strings.
//Postcondition: The strings followed by the value in parentheses are printed on separate lines
//preceded by an index staring with one.

void listPrint(string names[], int numberVals);
//Precondition: A list of strings to be printed is given along with the number of strings.
//Postcondition: The strings are printed on separate lines preceded by an index staring with one.

void listPrint(string LoadNames[], double LoadPower[], int NumberOfLoads);
//Precondition: Two list of strings are given as well as the number of strings
//Postcondition: The strings will be printed alongside each other in columns 
void listPrint(string LoadNames[], double LoadCurrent[], double load, double defVoltage, int NumberOfLoads);
//Precondition: Two strings, name and current, are given along with a load variable, an integer value, and number of strings
//Postcondition: The first string is printed in one column and the second string, each multiplied by the integer value is printed in a second column

//Tyler's void Functions

void listPrint(string name[], double number[], int Arraysize);
//Precondition: There Needs to be an string array full of names and a double array of favorite numbers declared.
//Postcondition: A sentence telling users what people's favorite numbers are.

void listPrint(string name[], int number[], string word[], int Arraysize);
//Precondition: A String array of names, interger array of numbers and a string array list of words need to be declared.
//Postcondition: A sentence telling a person what word they will right after a number of people have gone.



//Alayna function declaration

void listPrint(int numberi, int Arrayi[]);
// Precondition: user enters the length of the array and the array passes the dates of the month they are missing
// Postcondition: outputs a list with the dates that user is missing 
void listPrint(double numberj, string Arrayj[]);
// Precondition: user enters the length of the array and the array passes the name of the student leader
//Postcondition: outputs for which class period who is the leader

//alayna Varables 
int numberi;
double numberj;
//Trying to fix merging
//Brandon's listPrint
void listPrint(bool bArray[], string sArray[], int arraySize);
//Precondition: An equal sized boolean array and string arrays are passed as well the array size in arraySize
//Postcondition: The boolean value of the string will be printed with the string
void listPrint(string sArray[], int iArray[], double dArray[], int arraySize);
//Precondition: Equal sized int array for identifer, double array for value, and string array for name are passed into the function with the size of the array pass in arraySize 
//Postcondition: Outputs the name, identifer and value

const int sizeArray = 10;
const double pi = atan(1) * 4;


int main()
{
	int iArray1[sizeArray] = { 1,2,3,4,5,6,7,8,9, 0};
	int iArray2[sizeArray] = { 9,8,7,6,5,4,3,2,1,0 };
	int iArray3[sizeArray] = { 9,8,5,6,5,4,3,9,1,0 };
	int iArray4[sizeArray], iArray5[sizeArray];
	double dArray1[sizeArray] = { 0,1,2,3,4,5,6,7,8,9 };
	double dArray2[sizeArray] = { 9,8,7,6,5,4,3,2,1,0 };
	double dArray4[sizeArray], dArray5[sizeArray];
	double dArray3[sizeArray] = { 9,0,7,4,5,4,3,1,1,0 };
	string sArray1[sizeArray] = { "The ","rain ","in ","Spain ","stays ","mainly ","in ","the ","plain ","." };
	string sArray2[sizeArray] = { "Bob","Joe","Susan","Pat","Jan","Pat","Ronny","Mary Jane","Matt","Alex" };
	bool bArray1[sizeArray] = { true, false,true,false, true,false,true,false, true,false };

	string nameArray[sizeArray] = { "ctm_fbi","ctm_gign","ctm_gsg9","ctm_idf","ctm_sas",
									"tm_anarchist","tm_phoenix","tm_pirate","tm_professional","tm_separatist" };
	double bbminX[sizeArray] = { -0.4,-0.6,-0.2,-0.2,-1,-0.8,-0.4,-0.8,-0.5,-0.8 };
	double bbminY[sizeArray] = { 0.9,0.9,0.9,1.1,1.8,1.3,1.2,1.5,0.9,1.1 };
	double bbminZ[sizeArray] = { 0,0,0,0,0,0,0.1,0.1,0,0 };
	double bbmaxX[sizeArray] = { 3.3,3.4,3.6,3.6,3.5,3.1,2.8,2.6,2.4,2.8 };
	double bbmaxY[sizeArray] = { 0.7,0.3,0.1,0.1,0.2,-0.4,0,0.3,0,0.1 };
	double bbmaxZ[sizeArray] = { 0,0,0,0,0,0,0.2,0.2,0.1,0.1 };
	double cylinderHeight[sizeArray], hitboxVolume[sizeArray];
	double radiusArray[sizeArray] = { 4.2,4.2,4.2,4.2,4.2,4.2,4.3,4.2,4.2,4.2 };
	
	//erins variables
	const int MAXLOADS = 5;
	double load = 0, defVoltage = 12.0;
	int NumberOfLoads = 5;
	string LoadNames[MAXLOADS];
	double LoadCurrent[MAXLOADS] = { 50.0,60.0,30.0,70.0,10.0 };
	double LoadPower[MAXLOADS] = { 120.0,240.0,150.0,300.0,100.0 };

	// for Johns listPrint
	double dayArray[30] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 };
	bool bArray[30] = { true, false,true,false, true,false,true,false, true,false,  true, false,true,false, true,false,true,false, true,false,  true, false,true,false, true,false,true,false, true,false };

	char option;

	//Use two digits for double output
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//Make some arrays with random values
	long int currentTime = static_cast<long int>(time(0)); //Generate random seed
	srand(currentTime);

	for (int i = 0; i < sizeArray; i++)
	{
		iArray4[i] = rand() % 1000;
		dArray4[i] = 1.0 * rand();
		iArray5[i] = rand() % 10;
		dArray5[i] = rand() * 7.2 * i;
	}

	listPrint(sArray2, iArray4, iArray2, sizeArray);
	cout << endl;
	listPrint(sArray1, dArray5, iArray2, sizeArray);
	cout << endl;
	listPrint(sArray1, sizeArray);
	cout << endl;
	for (int i = 0; i < sizeArray; i++)
	{
		//Calculate the distance between two points in three-dimensional Cartesion space.
		cylinderHeight[i] = sqrt(pow(bbmaxX[i] - bbminX[i], 2) + pow(bbmaxY[i] - bbminY[i], 2) + pow(bbmaxZ[i] - bbminZ[i], 2));
		//Total volume = volume(cylinder) + volume(sphere)
		hitboxVolume[i] = pi * pow(radiusArray[i], 2) * cylinderHeight[i] + 4.0 / 3.0 * pi * pow(radiusArray[i], 3);
	}

	listPrint(nameArray, bbminX, bbminY, bbminZ, bbmaxX, bbmaxY, bbmaxZ, sizeArray);
	cout << endl;
	listPrint(nameArray, cylinderHeight, radiusArray, hitboxVolume, sizeArray);
	cout << endl;

	cout << "Enter a character to continue: ";
	cin >> option;

	listPrint(dayArray, bArray, 30);

	//call for erins list print
	cout << "\n";
	listPrint(sArray1, LoadPower, NumberOfLoads);
	listPrint(sArray2, LoadCurrent, load, defVoltage, NumberOfLoads);

	cin >> option;



	///Alayna function call

	cout << "Enter how many days you need a subsitute for...";
	cin >> numberi;
	listPrint(numberi, iArray1);
	cout << "Enter how many periods there will be...";
	cin >> numberj;
	listPrint(numberj, sArray1);

	//Tyler's Call
	cout << endl;
	listPrint(sArray2, dArray1, sizeArray);
	cout << endl;
	listPrint(sArray2, iArray1, sArray1, sizeArray);

	return 0;
}

void listPrint(double dayArray[], bool bArray1[], int ArraySizeDay)
{
	for (int i = 0; i < ArraySizeDay; i++)
	{
		cout << dayArray[i] << " " << bArray1[i] << "\n";
	}
	return;
}


void listPrint(string SArray[], int IArray1[], int OArray[], int ArraySize)
{
	for (int i = 0; i < ArraySize; i++)
	{
		cout << SArray[OArray[i]] << " \t" << IArray1[OArray[i]] << " \t" << OArray[OArray[i]] << endl;
	}
	cout << endl;

	return;
}

void listPrint(string SArray[], double DArray[], int IArray[], int ArraySize)
{
	for (int i = 0; i < ArraySize; i++)
	{
		cout << SArray[i] << " \t" << DArray[i] << " \t" << IArray[i] << endl;
	}
	cout << endl;

	return;
}

void listPrint(string SArray[], double DArray1[], double DArray2[], double DArray3[],
	double DArray4[], double DArray5[], double DArray6[], int ArraySize)
{
	for (int i = 0; i < ArraySize; i++)
	{
		cout << SArray[i] << " \t" << DArray1[i] << " \t" << DArray2[i] << " \t" << DArray3[i]
			<< " \t" << DArray4[i] << " \t" << DArray5[i] << " \t" << DArray6[i] << endl;
	}

	return;
}

void listPrint(string SArray[], double DArray1[], double DArray2[], double DArray3[], int ArraySize)
{
	for (int i = 0; i < ArraySize; i++)
	{
		cout << SArray[i] << " \t" << DArray1[i] << " \t" << DArray2[i] << " \t" << DArray3[i] << endl;
	}

	return;
}

//Function Definitions
void listPrint(string names[], int values[], int numberVals)
{
	for (int i = 0; i < numberVals; i++)
	{
		cout << i + 1 << ": " << names[i] << " (" << values[i] << ")" << endl;
	}
	return;
}

void listPrint(string names[], int numberVals)
{
	for (int i = 0; i < numberVals; i++)
	{
		cout << i + 1 << ": " << names[i] << endl;
	}
	return;
}

//definition for erins list print
void listPrint(string LoadNames[], double LoadPower[], int NumberOfLoads)
{
	std::cout << std::left << std::setw(12) << "Names";
	std::cout << std::right << std::setw(6) << "Load" << "\n";
	for (int i = 0; i < NumberOfLoads; i++)
	{
		std::cout << std::left << std::setw(12) << LoadNames[i];
		std::cout << std::right << std::setw(6) << LoadPower[i] << "\n";
	}
	cout << "\n";
	return;
}

void listPrint(string LoadNames[], double LoadCurrent[], double load, double defVoltage, int NumberOfLoads)
{
	std::cout << std::left << std::setw(12) << "Names";
	std::cout << std::right << std::setw(6) << "Load" << "\n";
	for (int i = 0; i < NumberOfLoads; i++)
	{
		load = LoadCurrent[i] * defVoltage;
		std::cout << std::left << std::setw(12) << LoadNames[i];
		std::cout << std::right << std::setw(6) << load << "\n";
	}
	cout << "\n";
	return;
}


///Alayna function definition 
void listPrint(int numberi, int Arrayi[])
{
	string Ordinal[10] = { "st", "nd", "rd", "th","th","th", "th", "th","th", "th" };
	for (int i = 0; i < numberi; i++)
	{
		cout << "The " << i + 1 << Ordinal[i] << " day you will miss is the " << Arrayi[i] << Ordinal[Arrayi[i]-1] << endl;
	}
}
void listPrint(double numberj, string Arrayj[])
{
	for (int i = 0; i < numberj; i++)
	{
		cout << "the student leader of period " << i + 1 << " is " << Arrayj[i] << endl;
	}
}

//Tyler's Function definitions
void listPrint(string name[], double number[], int Arraysize)
{
	for (int i = 0; i < Arraysize; i++)
	{
		cout << name[i] << "'s favorite number is " << number[i] << ". \n";
	}
}

void listPrint(string name[], int number[], string word[], int Arraysize)
{
	for (int i = 0; i < Arraysize; i++)
	{
		cout << name[i] << " will write the word " << word[i] << "in front of the class after "<< number[i] << 
			" have gone.\n";
	}
}