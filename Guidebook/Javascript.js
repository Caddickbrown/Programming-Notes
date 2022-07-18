//Introduction
/*Javascript tends to be used to make interactive webpages.
It's main motto is "Make it Move" and tries to bring "Life" to a webpage with interactions. It has nothing to do with the Java language - and although the names are similar - they do not work the same.
It is responsible for animations across the page and is a part of the following: Search boxes, Videos, Live blogs/scores/updates.
It can be used to create iOS, Android, Web Apps (Interactive Web Pages), or games. It's also used to create fully fledged Desktop Apps. It's one of the most universal languages in that basically anything can be built with it.*/

//Comments
//Single Line - Use "//"
/*Multi-Line - Use "/*" to start. This is the start of a multi line comment
This is the end of the same multi line comment - to finish off type "* /".*/

//Hello World
document.write("Hello World"); //This will print "Hello World", it starts with the command - ends with a semi-colon. (A Semi-colon is needed after every command.)

//Variables
//Declaring Variables
//To declare a variable - start with "var" and then the name of the variable. an "=" followed by whatever the variable value is.
//Strings
var stringy = "Hello World";
document.write(stringy,stringy); // The output would be "Hello WorldHello World". A comma is required between the two variables.

//Booleans
var I_am_Awesome = true; //No need for quotations as it isn't a string.

//Numbers
var age = 27; //JS is a case sensitive language so another variable could be made as "Age"
var nodecimals = 10;
var withdecimals = 10.59; //Numbers can have decimals or are fine without. There is no need for quotation marks.

//Basic Mathematics
//JS can be used to do basic sums.
var x = 2;
var y = 2;
var z = x+y;
document.write(z); // This would print "4".
var z = x-y; // "0"
var z = x*y; // "4"
var z = x/y; // "1"
var z = x%y; // "100"

//Incrementation
var pizza = 1;
var pizza = pizza + 1; // "2" (This is incrementation)
// The syntax for incrementation can also be written as below. It is the name of the variable followed by "++" followed by a semi-colon.
var pizza = 1;
pizza++; // This is the same as the above code

//Decrementation
// The syntax for decrementation is the name of the variable followed by "--" followed by a semi-colon.
var pizza = 2;
pizza--;

//Comparisons
//"==" is used to compare if two values are equal or not. This is different to "=" which is used to declare variables. "==" will give a Boolean result.
var x = 2;
var y = 4;
x == y //False

//"!=" or "Not Equals" is used to check if two values are NOT the same.
x != y //True

//"And"
var mp = 5;
var gb = 16;
//Need to check if both of these conditions are true.
mp > 5= and gb >= 16
//"&&" can be used to check where two or more of these values are true.
mp >= 5 && gb >= 16

//Or
// "||" is used for "or" - to use when at least one condition is true in order to proceed.
mp >= 5 || gb >= 16

//Loops


