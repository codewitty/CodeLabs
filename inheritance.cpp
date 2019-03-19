/*
Assume the existence of a Window class with a function 
getWidth that returns the width of the window. 
Define a derived class WindowWithBorder that contains a 
single additional integer instance variable named borderWidth, 
and has a constructor that accepts an integer parameter which is 
used to initialize the instance variable. There is also a function 
getUseableWidth, that returns the width of the window 
minus the width of the border.
*/

class WindowWithBorder : public Window {
private:
    int borderWidth;
    int windowWidth;
public:
    WindowWithBorder(int);
    int getUseableWidth();
};

WindowWithBorder::WindowWithBorder(int width) {
    windowWidth = getWidth();
    borderWidth = width;
}

int WindowWithBorder::getUseableWidth(){
    return (windowWidth - borderWidth);
}
