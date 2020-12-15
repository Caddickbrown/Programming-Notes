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
: - Colon
; - Semicolon
"" - Quotation Marks
+ - Plus
- - Minus/Dash
* - Asteriks
/ - Forward Slash
= - Equals
*/

//Considerations
/*When starting to write code, you first need to use the following code*/
#include <iostream> //The code will not compile without this line. In order to read or write to the standard input/output streams you need to include it.
using namespace std; //You don't technically need this line. Without it you will need to "qualify" the namespace of each command when you type it for example "std::cout" or "std::endl". By using this line, you tell the compiler that symbol names defined within the std namespace are to be brought into your program's scope, so you can omit the namespace qualifier from now on.
//There can be multiple namespaces and those namespaces can use the same "Names" for variables, but with different values behind them.

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
/*Output
20 10 75 3
*/

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
/*Output
The condition is true
*/

//Which number is greater?
//Here we will store intergers as variables a and b and then identify which is larger using ifelse
int a = 5;
int b = 3;
if(a>b){
    cout<<"a is greater than b";
}else{
    cout<<"b is greater than a";
}
/*Output
a is greater than b
*/

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
//The output for this final code would depend on the values inputted

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

//Accessing elements
/*To Access elements you can use a for loop to access elements by looping through it's index
For example*/
int myArray[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
  cout<<"Element's Value at the index "<<i<<" is: "<<myArray[i]<<endl; //If you've used concatenate in Excel - you may have noticed you're able to string things together in a similar fashion
}
/*Output
Element's Value at the index 0 is: 1
Element's Value at the index 1 is: 2
Element's Value at the index 2 is: 3
Element's Value at the index 3 is: 4
Element's Value at the index 4 is: 5
*/
// The code will loop through the indexes of the array and access the Elements through myArray[i]

//Functions
/*A function is a group of statements that when put together - do a tasksEvery C++ program has at least one function which is called main()
Generally Functions look something like this:
FunctionOne{
  Statement 1;
  Statement 2;
  Statement 3;
}
When you run FunctionOne it will run statements 1, 2, and 3 one after another.
Functions come into use when you have to run a lot of statements multiple times. For instance, running 50 statements 10 times would be 500 statements.
Or you can write those 50 statements into a function and run that function 10 times and you only ave around 60 statements instead of 500.
This could also be paired with loops to cut down the lines even further*/
/*The final code for a function has 4 parts and looks like this:
return_type function_name(parameter list){
function_body
}
*/
/*To understand this let's break it down into sections
return_type - a function may return a value after it runs. It could be a string or integer etc. if it doesn't return a value then it's defined as "void"
function_name - The name you want to call the function (FunctionOne earlier)
parameter - this is here you pass a value to the function (But is not always required)
function_body - This holds the statements within the function
*/
void myFunction(){ //This sets up your function but doesn't run it
  cout<<"I am Awesome\n"; // "\n" will add a new line to your output
}
int main(){ //You'll need this to call up your functions to run within your program
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  return 0; // This signals an exit from "int main()" command
}
/*Output
I am Awesome
I am Awesome
I am Awesome
I am Awesome
I am Awesome
*/

//Strings
/*A string is the word computers use for "Text"
A string "Class" defines a number of functionalities that allow us to do different tasks on strings*/
//Example
string str1 = "Hello"; //This assigns the word "Hello" to a string varible
cout<<str1; //This prints the string that is held within the variable

//Using strings - Different Keywords
strcopy(s1,s2) //If we had two strings called s1 and s2 you could copy the value for s2 into s1 with the following
strcat(s1,s2) //You can concatenate the two with
strlen(s1) //returns the length of s1
strcmp(s1,s2) //Compare strings and return a value
strchr(s1,ch) //Point to first occurance of character ch in string s1
strstr(s1,s2) //Point to first occurance of string s2 in string s1
//Example
string str1 = "Hello";
string str2 = " World";
string str3;
int len;
str3=strcpy(str3,str1); //copy str1 into str3
str3=strcat(str1,str2); //join str1 and str2
cout<<"str1+str2:"<<str3<<endl;
len=strln(str3); //Total length of str3 after concatenation
cout<<"Strlen(str3):"<<len<<endl;
/*Output
str3 : Hello
str1 + str2 : Hello World
strlen(str1) : 10
*/

//Pointers
/*Pointers remember locations/addresses of variables. In essence, a Pointer is just another variable, but one that "points" to other variables
The delcaration is the same as any other variable
datatype *variable_name;
An Asterisk is used in the declatation of pointers.
An asterisk reads as "The value at" for example:
*a reads as "the value at a"
An ampersand reads as "The address of" - for example:
&a reads as "The address of a"
Thus:*/
*a=&p;
//Tells us that the value at a is the address of p. a is a pointer to the address of p.
