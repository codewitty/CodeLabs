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
/* Write a full class definition for a class named GasTank, and containing the following members:

A data member named amount of type double.
A constructor that accepts no parameters. The constructor initializes the data member amount to 0.
A function named addGas that accepts a parameter of type double. The value of the amount instance variable is increased by the value of the parameter.
A function named useGas that accepts a parameter of type double. The value of the amount data member is decreased by the value of the parameter.
A function named getGasLevel that accepts no parameters. getGasLevel returns the value of the amount data member.
*/


