<!-- 
 FILE : animals.php
 PROJECT : PROG2000 - Assignment #2
 PROGRAMMER : lpcSetProg
 FIRST VERSION : 2016-09-10
 DESCRIPTION :
 This application is PHP file, sourced from the BirdToPHP.html file. 
 It was captures the selection option and user name from the html file and 
 inserts it in variables to locate the related files in the directories 
 (NZBirdsTexts, and NZBirdsPhotos). The file extensions are appended to the 
 values in order to display contents. 
 
NOTE: To clarify, birds are creatures under the kingdom called Animalia.
--> 



<html>
<body style="width: 1501px">

<!-- processes the combobox selection [aka bird choice]  -->
<?php $selectOption = $_POST['userSelect']; ?>

<br> 


<!-- append proper file extensions to the values in order to find files  -->

<?php $textFilePath = "./NZBirdsTexts/" . $selectOption . ".txt"; ?> 

<?php $imageFilePath = "./NZBirdsPhotos/" . $selectOption . ".jpg"; ?>


<!-- Testing whether a file exists -->

<?php  
if (file_exists($textFilePath )) 
{ //NOTE: Information is echoed to screen because if it is HTML will execute and display even if file is not found. 
	echo "<p><b> Welcome: </b>". $_POST["name"] . "</p>"; //processes name of user and displays it on screen
	echo "<br><br>";
	echo "<p><b> Your bird: </b>" . $selectOption . "</p><p>&nbsp;</p>"; //displays usage selection
	echo "<p style='width: 426px; height: 194px; float:left'>". file_get_contents($textFilePath) . " </p>"; //displays text file contents
	echo "<img style ='float:left' src='" . $imageFilePath ."' />"; //displays image, to the left of text 

} 
else 
{
echo "The file" . $textFilePath . "does not exist"; //file does not exist 
}
?>


</body>
</html> 



