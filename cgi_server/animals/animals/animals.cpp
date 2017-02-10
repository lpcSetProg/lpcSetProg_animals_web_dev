/*
* FILE : animals.cpp
* PROJECT : PROG2000 - Web Design - Assignment #2
* PROGRAMMERS :  lpcSetProg
* FIRST VERSION : 2016-10-09
* DESCRIPTION :
* This file contains the CGI script to handle the query string passed from 
* Bird_get.html. Query string from html file is displayed as ex. "name=Lev&userSelect=Kiwi"
* The CGI program acts as a server to display HTML script in a browser. There is a related PHP server (animals.php)
* which processes Bird_post.html. On the server, two directories exist which hold the text descriptions and image files. 
*/


#include "animals.h"

int main()
{
	//Variables
	string birdImageContents;
	string birdImageFile;
	string birdTextFile;
	string birdTextContents;
	string fileExtentionImage;
	string fileExtentionText; 
	string userName;
	string userSelect;
	string QueryString;
	int position1 = 0; //used for find positions of delimiters 
	int position2 = 0;
	int position3 = 0;


	//Query string from html file is displayed as ex. "name=Lev&userSelect=Kiwi" 
	//The two form values are separated by an ampersand (&).
	//Researched information at : http://www.cgi101.com/book/ch3/text.html
	//Parse string by location of delemiters '=' and '&' and find the 'userName' and 'userSelect' from combobox 
	QueryString = getenv("QUERY_STRING");
	position1 = QueryString.find_first_of('=');
	position2 = QueryString.find_first_of('&');
	position3 = QueryString.find_last_of('=');
	userName = QueryString.substr(++position1, position2 - position1);  //assign
	userSelect = QueryString.substr(++position3);


	//Locate matching text based on user selection 
	fileExtentionText = ".txt";
	birdTextFile  = userSelect + fileExtentionText;	//append .txt file extention in order to find related text file
	birdTextContents = TextLocator(birdTextFile);


	//Can be same file 
	//Locate matching image based on user selection 
	fileExtentionImage = ".jpg"; //append .jpg file extention in order to find related image 
	birdImageFile = userSelect + fileExtentionImage;
	birdImageContents = ImageLocator(birdImageFile);
	


	//MAIN CGI DISPLAY 
	cout << "Content-type:text/html\r\n\r\n"; //signifies where CGI script begins 
	cout << "<html>\n";
	cout << "<head>\n";
	cout << "<title>New Zealand Native Bird Conservatory</title>\n"; ///hello user name!
	cout << "</head>\n";
	cout << "<body>\n";
	cout << "<p> <b> Welcome: " << userName << " </b> </p>\n "; //<< endl; //break line 
	cout << "<p> <b> Your bird is : " << userSelect << " </b> </p>\n "; //<< endl; //break line 
	cout << "<p><span style='float:left; width: 426px;'>  " << birdTextContents << "</span><img src = '" << birdImageContents << "'" << " / >" << "</p>\n"; //aligns image with text
	cout << "</body>\n";
	cout << "</html>\n"; 



	///These strings were used for testing to make sure data from queryString was parsed correctly 
	//cout << userName;
	//cout << userSelect;
	//cout << QueryString;
	//cout << "<img src='" << birdImageContents << "'" << "/>" << endl;

	return 0;
}







