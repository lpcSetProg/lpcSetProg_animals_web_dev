/*
* FILE : animals.h
* PROJECT : PROG2000 - Web Design - Assignment #2
* PROGRAMMERS :  lpcSetProg
* FIRST VERSION : 2016-10-09
* DESCRIPTION :
* This file contains the prototypes, namespace, and class libraries
* used for the CGI logic in the animals.cpp, to implement the HTML page.
*/


//Class Libs
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>

#pragma warning (disable: 4996)
using namespace std;


//Prototypes 
string TextLocator(string birdTextFile);
string ImageLocator(string birdImageFile);
