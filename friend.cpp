/* Define the following Window class: - integer data members, width and height - a constructor that accepts two integer parameters (width followed by height) and uses them to initialize the data members - a friend function, areSameSize, that accepts two Window objects and returns a boolean indicating if they are the same size. Two windows are the same size if the widths and heights match.
*/

class Window {
    private:
        int width;
        int height;
    public:
        Window(int w, int h) {
            width = w;
            height = h;
        };
        friend bool areSameSize(Window w1, Window w2) {
            if (w1.height == w2.height && w1.width == w2.width)
               return true;
            else
                return false;
        };
};
        
