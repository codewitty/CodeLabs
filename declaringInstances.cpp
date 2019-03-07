/*
Objects of the Calculator class require no additional information when created. Define an object named calc, of type Calculator.
*/

Calculator calc;

/*
Objects of the Window class require a width (integer) and a height (integer) be specified (in that order) upon definition. Define an object named window, of type Window, corresponding to a 80 x 20 window.
*/

/*
Objects of the Window class require a width (integer) and a height (integer) be specified (in that order) upon definition. Define an object named window, of type Window, corresponding to a 80 x 20 window.
*/

Window window(80, 20);

/*
Objects of the Window class require a width (integer) and a height (integer) be specified (in that order) upon definition. Define an object named window, of type Window, whose width and length are obtained from the (already declared and initialized) variables, w and l.
*/

Window window(w, l);

/*
Objects of the Window class require a width (integer) and a height (integer) be specified (in that order) upon definition. Declare two integers corresponding to a width and a length and read values into them from standard input (in that order). Use these value to define an object of type Window named newWindow.
*/

int width;
int length;

cin >> width;
cin >> length;

Window newWindow (width, length);

/*
Objects of class Name are defined by supplying last name (string) and a first name (string)-- in that order. Define an object of type Name named name and corresponding to a last name of "Black" and a first name of "Susan".
*/

Name name("Black", "Susan");
