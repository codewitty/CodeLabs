/* Write a full class definition for a class named Acc2, and containing the following members:

A data member named sum of type integer.
A constructor that accepts no parameters. The constructor initializes the data member sum to 0.
A member function named getSum that accepts no parameters and returns an integer. getSum returns the value of sum.
*/

class Acc2 {
    private:
        int sum;
    public:
        Acc2(){
    sum = 0;
}
        int getSum() {
            return sum;
        }
};


/* Write a full class definition for a class named Accumulator, and containing the following members:
A data member named sum of type integer.
A constructor that accepts no parameters. The constructor initializes the data member sum to 0.
A member function named getSum that accepts no parameters and returns an integer. getSum returns the value of sum.
A member function named add that accepts an integer parameter and returns no value. add increases the value of sum by the value of the parameter.
*/

class Accumulator {
    private:
        int sum;
    public:
        Accumulator() {
            sum = 0;
        }
        int getSum() {
            return sum;
        }
        void add(int a) {
            sum += a;
        }
};
/*
