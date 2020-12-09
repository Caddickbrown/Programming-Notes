//Introduction
/*Was built as an extension or as a newer version of C
C++ is an Object Oriented Programming System (OOPS) and supports Classes and Objects
It is used for:
  Computer applications
  Games
  Software
  Graphics
  ATM Machines*/

//Basic Symbols/Characters
//If you're this far - you likely know what all of these are, but it's worthwhile going over them to ensure clarity
/*
() - Rounded Brackets
{} - Curly Brackets
[] - Square Brackets
< - Less than
; - Semicolon
"" - Quotation Marks
+ - Plus
- - Minus/Dash
* - Asteriks
/ - Forward Slash
= - Equals
*/

//1st Program
/*Be aware of case letters as C++ gets confused if case letter change
cout - Means "Console Output" '''<<''' means "Output the object"
Text after << is printed
Semicolon is used as a "Full stop" and ends every command*/

cout<<"Hello World"; //This Line prints Hello World - double slash indicates a single line comment

//Comments
//Single Line - Use "//"
/* This is the start of a multi line comment
This is the end of the same multi line comment.*/

/*Storing a value - To do this you use variables. These variables have unique names so that we can call it whenever we want.
Along side this, we also what to tell our code what type of value we are containing (words/numbers etc.)
The steps are Identify - Define type of variable, Label - Assign name to variable, Value - Put a value into the variable*/

/*Identify (Keyword): string - Variable contains words
Label: container1 - This is the name we are giving the variable
Value: container1="Hello"; - Hello has been assigned as the value*/

//This is how it looks when put together - Notice the semicolon at the end of each command
string container1; //Identify and Label
container1="Hello"; //Value

//Storing Words
string dansname = "Daniel Caddick-Brown"; //Identify, Label, and Value in one line

/*Storing Boolean Values
These are values stores for decision making - such as "True" or "False"
To store these values you use the keyword bool*/
bool isCorrect = true;
//Value stored in a variable is either True or False without the double quotes
bool = true;

//Storing Numbers
//Keyword int - as in integer such as
int score; //This only creates the integer variable but doesn't assign a value to it
int score = 100; //This creates the interver variable but also assigns a value of 100 to it
//The following code assigns the number 25 as "rollNo" and then prints that stored variable
int rollNo = 25;
cout<<rollNo;

//Maths
int a=15; //This sets up Variable a and assigns a number to it
int b=5; //This sets up Variable b and assigns a number to it
int c; //This sets up that there is a Variable c but DOES NOT assign anything to it
c=a+b; //This assigns the value of c as a+b
cout<<c<<'__'; // This prints variable c
c=a-b; //This reassigns the value of c as a-b
cout<<c<<'__'; // This prints new variable c
c=a*b; //This reassigns the value of c as a*b
cout<<c<<'__'; // This prints new variable c
c=a/b; //This reassigns the value of c as a/b
cout<<c<<'__'; // This prints new variable c
//This whole block of code would print "20 10 75 3"

//Blocks
/*Blocks are used to group together areas of code within a function - they tend to be within curly brackets or "{}"*/

//Decision Making
/*Most decisions tend to lead to a "Yes" or a "No" or multiple versions of yes or no. These can be visualised in flow charts.
These decisions can be seen as an "if..else statement" which you'll have seen above.
It can be written as below.*/
/*if(condition){
  code to be executed when Boolean is True
}else{
  code to be executed when Boolean is False
}*/
/*To understand the expression you can divide it into 3 sections - if you've worked with IF statements in Excel, then this will be familiar to you:
1. Condition
2. If Block
3. Else Block*/
if(12<43){  //if is the keyword and the condition is written within rounded brackets, then open your curly brackets
  cout<<"The condition is true"; //This code will be executed if the condition met is true, you can then close your curly brackets - Don't forget your semi-colon!
}else{
  cout<<"The condition is false"; //For the Else Block, start with the else keyword, open your curly brackets, input the code for if the condition of false and close off the curly brackets.
}
//A variation on the final code may look something like.
if(7<=9){
  cout<<"The condition is true";
}else{
  cout<<"The condition is false";
}
//The output for this final code would be "The condition is true"

//Which number is greater?
//Here we will store intergers as variables a and b and then identify which is larger using ifelse
int a = 5;
int b = 3;
if(a>b){
    cout<<"a is greater than b";
}else{
    cout<<"b is greater than a";
}
//When running this program, the output would be "a is greater than b"

//Giving input to a program
/*Changing these variables constantly wouldn't be worth your time - the solution is that you would set up a program that you input the values
and it will spit out the solution. To do this you can use the cin command.
Instead of the values being hard-coded in, they are not inputs for whoever inputs the numbers*/
int a; //This sets up that there is a Variable a
int b; //Same again with Variable b
cout<<"Enter the value of a"<< endl; //"endl" here is for formatting and ends the line - ie. the next lines will print on the next line down
cin>>a;
cout<<"Enter the value of b"<< endl;
cin>>a;
if(a>b){
    cout<<"a is greater than b";
}else{
    cout<<"b is greater than a";
}
//The output for this final code would depend on the values inputted"

//Repeating a Task (Loop statements)
/*In C++ there are three types of loop statements
1. for loops - These are used when you know in advance how many times you want to run a loop and repeat the steps a set number of times
2. while loops - These are used when you want to keep your code looping until a condition is met
3. do..while loops
Each loop is written differently*/

//for loops
//These are used when you know in advance how many times you want to run a loop and repeat the steps a specific number of times
/* for(init;cond;incr){
  code to be executed
}*/
/*To understand this let's break it down into sections
for - is the keyword to start the command
init - as in. "Initial Value" This is the starting value for a variable, for example "i=10"
cond -as in. "Condition"  This is the condition that if not met, the cope will keep running, for example "i<20"
incr -as in. "Increment"  Here you increment the variable until the condition is satisfied, for example "i=i+1"
code to be exectuted - This is the task you want repeating until the loop is "closed" when the condition is met
init, cond, and incr need to be separated with a semicolon*/
//Printing "I Love C++" 10 times could be done with the following code
for(i=1;i<11,i=i++){ //"i++" in the incr section, will increment i by 1 each time
  cout<<"I Love C++"<<endl;
}

//while Loops
//Don't know how many times we want to do a task
/* while(cond){
  code to be executed
  incr;
}*/
//Printing "I Love C++" 10 times could be done with the following code
#include<iostream>
using namespace std;
int main(){
  int s=1; // This gives varable "s" a value of 1
  while (s<11){ //while keyword starts the command, and the condition of s<11 means that the loop will keep repeating until s is no longer less than 11 (until it reaches 10)
    cout<<"I Love C++"<<endl; //this is the task you want repeated - and it is written inside the block
    s++; // The value of s is incremented by 1 until the condition is satisfied
  }
}

//do while Loops
/*do while loops are for when you need to repeat tasks, but don't know when you'll need to stop - but  you definitely need to run the code at least once
For example - Start to read a book - but you don't know how many pages there are. You continue reading page after page and once you find the end page you stop*/
/*init; //First the variable is initialised
do{ //do keyword is written
  code to be exectuted // Task to be repeated is set inside block
  incr; //Increment is set
}while(cond);*/ //While keyword with rounded brackets and semicolon
//Printing "I Love C++" could be done with the following code
int i=1;do{
  cout<<"I Love C++"<<endl;
  i=i+1
}while(i<1);
//You might notice that our condition is already false - but it will be printed at least once as the code follows sequentially. Think of it as more of a "Do this, and keep doing it again until..."

//Arrays
/*Imagine a Sock Draw and you'll be able to notice a few things
The Draw is a container which is holding all of the socks
As it is a Sock Draw - only Socks are kept/stored in it, nothing else
Each Sock is in a unique position within the draw, and we could number them 1 to 5
Each sock can then be picked out, dependant on it's numerical position - so if I wanted pair of socks number 4, I'd pick up the Socks in the 4th position
In coding - this is called an "Array" and you can store similar kinds of values within an Array
All an Array is is a "Container" which helps you store similar kinds of values (or values of the same datatype).
These values are known as Elements
You can access each element by using it's numerical position within the array (aka. it's index)
Indexes within an Array always starts with 0 - so the Array size would be 5 (The number of elements within the Array), but the index values would be 0-4*/
//type arrayName[arraySize]={array};
/*To understand this let's break it down into sections
type - is the is the type of value stored within the array (int, stirng, etc.)
arrayName - The Name of your Array
arraySize - The Size of your array/how many values can be stored within it
array - The values within your array*/
int my_rollNo[5]={1,2,3,4,5};

//Array Initialisation
// This is where you assign values to the Elements an Array - the code below stores numbers 5-9 within the array "myArray"
myArray[0]=5;
myArray[1]=6;
myArray[2]=7;
myArray[3]=8;
myArray[4]=9;
//The numbers within the square brackets are the indexes of the array where the value of that Element is after the = sign
int myArray[5]={5,6,7,8,9}; //This is a shortened form of the above, where the Array Declaration and the Array Initialisation are combined
