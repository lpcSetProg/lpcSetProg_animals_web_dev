# lpcSetProg_animals_web_dev
 This application is an HTML file, that uses a form to provide parameters to 
 a web server (using CGI).The page asks user for a name and validates using JS, 
 and provides a combo box to select from 1 of 6 birds native to New Zealand. 


# Programmer : 
lpcSetProg
# First Version: 
2016-09-10

# Description:
 
In this program, a CGI (in C++) script handles the query string passed from Bird_get.html. Query string from html file is 
displayed as ex. "name=Lev&userSelect=Kiwi". The CGI program acts as a server to display HTML script in a 
browser. There is a related PHP server (animals.php) which processes Bird_post.html. On the server, two 
directories exist which hold the text descriptions and image files. The user name and bird selection are 
sent to the server as key value pairs, using the 'GET' method for CGI. If the user clicks the "Submit" button, the
form-data will be handled by a CGI server contained in animals.exe.
 
NOTE: Run program in "C:\\inetpub\\wwwroot\\"

