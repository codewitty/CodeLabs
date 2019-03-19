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

/*
Assume the existence of a Phone class. Define a derived class, CameraPhone that contains two data members: an integer named, imageSize, representing the size in megabytes of each picture, and an integer named memorySize, representing the number of megabytes in the camera's memory. There is a constructor that accepts two integer parameters corresponding to the above two data members and which are used to initialize the respective data members. There is also a function named numPictures that returns (as an integer) the number of pictures the camera's memory can hold.
*/

class CameraPhone : public Phone {
private:
    int imageSize;
    int memorySize;
public:
    CameraPhone(int , int);
    int numPictures();
};

CameraPhone::CameraPhone(int iSize, int mSize) {
    imageSize = iSize;
    memorySize = mSize;
}

int CameraPhone::numPictures(){
    return (memorySize / imageSize);
}

/*
Assume the existence of a Building class. Define a derived class, ApartmentBuilding that contains four (4) data members: an integer named numFloors, an integer named unitsPerFloor, a boolean named hasElevator, and a boolean named hasCentralAir. There is a constructor containing parameters for the initialization of the above variables (in the same order as they appear above). There are also two functions: the first, getTotalUnits, accepts no parameters and returns the total number of units in the building; the second, isLuxuryBuilding accepts no parameters and returns true if the building has central air, an elevator and 2 or less units per floor.
*/


