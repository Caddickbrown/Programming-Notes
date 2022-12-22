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
//Need to check if both of these conditions are true. "&&" can be used to check where two or more of these values are true. Basically "&&" means "and"
mp >= 5 && gb >= 16 

//Or
// "||" is used for "or" - to use when at least one condition is true in order to proceed.
mp >= 5 || gb >= 16

//Making Decisions
if(condition){
    //Task if Condition is true
}else{
    //Task if condition is false
}

var x = 2;
var y = 9;
if(x>y){
    document.write("x is greater than y")
}else{
    document.write("x is not greater than y")
}

//Arrays
//Arrays can store multiple values in a single variable.
var array_colours = ["red","blue","green","yellow"];
//You can only store variables of the same type - so you can't have an array of strings and numbers. You'll need two separate array's. One for the Strings and one for the numbers.
//To access an array you need to use the Array Index (which starts at 0). As above "2" would return "green". To access the value of the array you need to writ ethe following.
array_colours[2]
// You can print "green" as below.
document.write(array_colours[2]);

//Loops
var myLoop = "I only want to type this once"; //define your first variable
//For Loop
var i; //create the variable
/*for (int i=0; i<10; i++){ //for loop
document.write(myLoop); //task to do
}*/
//Do While Loop
var i = 1;
do {
    document.write(myLoop);
    i= i + 1;
}while(i<=10); // Remember to  put the semi-colon after while

//Dialog Boxes
/*Used for showcasing important messages. There are three types of dialog boxes in JavaScript: Confirmation Messages, Pop Up an Error, or Show Warning Messages.
You can also get inputs from said dialog boxes.*/

//Alert Box
// Used to display messages, or worning messages. It only has one "OK" to select and proceed.
alert("This is an Alert Box");

//Prompt Dialog Box
// This is used when the user needs to input something. It consists of two buttons, "OK" and "Cancel", and a text box to input values.
prompt("What's your name?");

//Confirm Dialog Box
/* This provides confirmation for a specific action, for example "Do you realy want to delete this picture?" - we can either accept and hit "Ok", or decline and say "Cancel".
Hitting "Ok", returns "true" otherwise it returns "false"*/
confirm("Hit Ok if you're an idiot.");

//Functions
//These are reusable lines of code that can be called upon to complete tasks. This eliminates the need to re-write the code again.
function print(){ //define the function name
    document.write("I can print this quickly like this.");
}
//This function can then be called as below.
print();
//Another example is adding two numbers together. Putting different values in the function to have it spit out a different result can be done with Parameters.
function add(num1,num2){
    var result=num1+num2;
    document.write(result);
}
add(3,4); //In this scenario we're passing 3 and 4 as parameters to the function. num1 becomes 3, num2 becomes 4. then the result variable dtores the result and prints it out.
