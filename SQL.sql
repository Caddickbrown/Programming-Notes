--Introduction
--SQL (Structured Query Language) is a language used for communicating with a database. It is the standard language for Relational Databases

--Comments
--Single Line - Use "--"
/*Multi-Line - Use "/*" to start. This is the start of a multi line comment
This is the end of the same multi line comment.*/

--DBMS
/*The DBMS (Database Management System) manages the Database (Collection of Data files). It is the "Librarian" to the "Library of Data" and helps manage and organise everything efficiently.
The DBMS is a collection of programs which enable users to:
  - Create a Database
  - Access the Database
  - Manipulate the Data
  - Protect and Secure the Data within the Database

An RDBMS (Relational Database Management System) contains tables of information which have a relation between different tables.
A program can be both DBMS and RDBMS - as long as it can store data in files and tables.

Tables contain Rows (/Records/Tuples) and Columns (/Attributes). Columns define the Data that the Rows under it must hold.*/

--Entity Relationship (ER) Diagram
/*An Entity Relationship (ER) Diagram is the structured representation of a database with the help of a diagram.
An Entity can be a place, person, object with a conceptual existence (college, job, course etc.), etc.
If "Student" is the "Entity", then "Student ID, Name, Age, etc. would be the "Attributes" describing the Entity.
First identify the Entity, Use an ER Diagram to define the Attributes before converting the diagram to a table. ER Diagrams are purely for reference and enable better planning of data management.
ER Diagrams are just a visual representation of the database used by designers.

ER Diagrams helps conceptualise the Database and are used to identify:
  - Entity - A Larger block about which you want to store data (Employee)
  - Attributes - A column name and the fields that fall under it (Employee I.D., Job Title, Start Date etc.)
  - Relationships - The link between 2 tables

Representatons
  - Rectangle - Entity
  - Rhombus - Action
  - Ellipse - Attributes*/

--Tables (Relations)
/*Tables come from an Entity, the Attributes for that Entity define the data wihin the table.
A Table lives within a Database.
A table can be named anything - but ideally is named as something related to the "Super-Set". It's likely to use more than one word without any spaces - such as "EmployeeInfo". Capitalisation of the first word helps with readability - but isn't required.*/

--Keys
/*"Keys" can be identified in an ER Diagram. Keys are identifiers for unique columns within Tables. Such as Employee_ID in a table of EmployeeInfo.*/

--Attributes
/*Attributes are the properties of the Entity, and the "Variables" of each entry.
No Attribute can have the same name as another - they must be unique.*/

--Super Sets vs Sub-Sets
/*All tables under the RDBMS are interrelated.*/

--Databases
/*By Default an SQL Server shows "Master" as Database - to cahnge it we need to give it the right Command.*/

Change Database Fred --Fred Can be replaced with whatever name you desire. Hit enter and the Command will run.

Create Database Employee --This creates the database "Employee".

Use Employee --This will change the default Database to Employee.

Create Table EmployeeInfo -- This creates the "EmployeeInfo" Table.
