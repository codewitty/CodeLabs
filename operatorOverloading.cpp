/*
Assume the existence of a Window class with integer data members width and height. Overload the << operator for the Window class-- i.e., write a nonmember ostream-returning function that accepts a reference to an ostream object and a constant reference to a Window object and sends the following to the ostream: 'a (width x height) window' (without the quotes and with width and height replaced by the actual width and height of the window. Thus for example, if the window had width=80 and height=20, << would send 'a (80 x 20) window' to the ostream object.) Don't forget to have the function return the proper value as well. Assume the operator has been declared a friend in the Window class.
*/

friend ostream &operator <<  (ostream &strm, Window &win ){
    return strm << "a (" << (win.width) << " x " << (win.height) << ") window";
};
