/*
* FILE : birdMethods.cpp
* PROJECT : PROG2000 - Web Design - Assignment #2
* PROGRAMMERS :  lpcSetProg
* FIRST VERSION : 2016-10-09
* DESCRIPTION :
* This file contains method definitions for the animals.cpp file. 
*/

#include "animals.h"

/*
*  METHOD        : TextLocator
*
*  DESCRIPTION   : This function locates the corresponding text file with the user choice.
*  PARAMETERS    : string : birdImageFile
*  RETURNS       : fullText : full text from 
*/

string TextLocator(string birdTextFile)
{
	string fullText; 
	string textFileData; 
	ifstream infile;

	infile.open("C:\\inetpub\\wwwroot\\NZBirdsTexts\\" + birdTextFile);
	if (infile.is_open())
	{
		while (getline(infile, textFileData)) // To get you all the lines from the related text file in the directory.
		{ 
			fullText = fullText + textFileData;	// Saves the lines from text in textFileData					 
		}
		infile.close(); //close file after pulling data
	}
	return fullText; //returns full text of bird description to main 
}


/*
*  METHOD        : ImageLocator
*  DESCRIPTION   : This function appends the relative path to the birdImage file (which has the 
				   extension .jpg. Finds the related image.)
*  PARAMETERS    : string : birdImageFile
*  RETURNS       : path : path to file with appended imagefile selection
*/

string ImageLocator(string birdImageFile)
{
	string path = "..\\NZBirdsPhotos\\"; //Full path looks like C:\inetpub\wwwroot\NZBirdsPhotos\return path + birdImageFile;

	return path + birdImageFile;
}  


