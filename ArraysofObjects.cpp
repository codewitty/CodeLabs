/* Assume a class Window with a constructor that accepts two integer 
arguments: width and height (in that order). 
Declare an array named winarr, consisting of 3 Window objects, 
where the first element is an 80x20 window, the second a 10x10 window,and the third a 133x40 window.
*/

Window winarr[] { 
    Window(80, 20), Window(10, 10), Window(133, 40)
    };

/* Assume a class Window with accessor method getWidth that 
accepts no parameters and returns an integer.
Assume further an array of 3 Window elements named winarr, 
has been declared and initialized. 
Write a sequence of statements that prints out the width of the widest window in the array. */

int maxwidth = 0;
for (int i = 0; i < 3; ++i) {
    if (maxwidth < winarr[i].getWidth()) {
        maxwidth = winarr[i].getWidth();
    }
};
cout << maxwidth;

