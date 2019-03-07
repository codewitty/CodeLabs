/*
Write the interface (.h file) of a class Player containing:

A data member name of type string.
A data member score of type int.
A member function called setName that accepts a parameter and assigns it to name. The function returns no value.
A member function called setScore that accepts a parameter and assigns it to score. The function returns no value.
A member function called getName that accepts no parameters and returns the value of name.
A member function called getScore that accepts no parameters and returns the value of score.
*/

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:
        string name;
        int score;
    public:
        Player();
        void setName(string nameSet);
        void setScore(int scoreSet);
        string getName() ;
        int getScore() ;
};
#endif

/*
Write the implementation (.cpp file) of the Player class from the previous exercise. Again, the class contains:
A data member name of type string.
A data member score of type int.
A member function called setName that accepts a parameter and assigns it to name. The function returns no value.
A member function called setScore that accepts a parameter and assigns it to score. The function returns no value.
A member function called getName that accepts no parameters and returns the value of name.
A member function called getScore that accepts no parameters and returns the value of score.
*/


        string name;
        int score;

        void Player::setName(string nameSet){
            name = nameSet;
        }
        void Player::setScore(int scoreSet) {
            score = scoreSet;
        }
        string Player::getName() {
            return name;
        }
        int Player::getScore() {
            return score;
        }

/*
Write the interface (.h file) of a class Counter containing:   * A data member counter of type int.   * A constructor that takes one int argument.   * A function called increment that accepts no parameters and returns no value.   * A function called decrement that accepts no parameters and returns no value.   * A function called getValue that accepts no parameters. ------- ignore: Write the interface (.h file) of a class Counter containing:

A data member counter of type int.
A constructor that takes one int argument.
A function called increment that accepts no parameters and returns no value.
A function called decrement that accepts no parameters and returns no value.
A function called getValue that accepts no parameters and returns an int.
*/

#ifndef COUNTER_H
#define COUNTER_H

class Counter {
    private:
        int counter;
    public:
        Counter(int count);
        void increment();
        void decrement();
        int getValue() ;
};
#endif

/*
Write the implementation (.cpp file) of the Counter class from the previous exercise. Here is the full specification of the class:
A data member counter of type int.
A constructor that takes one int argument and assigns its value to counter
A function called increment that accepts no parameters and returns no value. increment adds one to the counter data member.
A function called decrement that accepts no parameters and returns no value. decrement subtracts one to the counter data member.
A function called getValue that accepts no parameters. It returns the value of the instance variable counter.
*/

int counter;

Counter::Counter(int count) {
    counter = count;
}

void Counter::increment(){
    counter += 1;
}
void Counter::decrement() {
    counter -= 1;
}

int Counter::getValue() {
    return counter;
}

/*
Write the interface (.h file) of a class Accumulator containing:
A data member named sum of type integer.
A constructor accepting an integer parameter.
A function named getSum that accepts no parameters and returns an integer.
A function named add that accepts an integer parameter and returns no value.
*/
#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

class Accumulator {
    private:
        int sum;
    public:
        Accumulator(int count);
        void add(int);
        int getSum() ;
};
#endif

/*
Write the implementation (.cpp file) of the Accumulator class of the previous exercise. The full specification of the class is:
An data member named sum of type integer.
A constructor that accepts an integer parameter. THe constructor initializes the data member sum to the value of the parameter.
A function named getSum that accepts no parameters and returns an integer. getSum returns the value of sum.
A function named add that accepts an integer parameter and returns no value. add increases the value of sum by the value of the parameter.
*/
int sum;

Accumulator::Accumulator(int count) {
    sum = count;
}

void Accumulator::add(int addSum){
    sum += addSum;
}

int Accumulator::getSum() {
    return sum;
}

/*
Write the interface (.h file) of a class Averager containing:
A data member named sum of type integer.
A data member named count of type integer.
A constructor accepting no parameters.
A function named getSum that accepts no parameters and returns an integer.
A function named add that accepts an integer parameter and returns no value.
A function named getCount that accepts no parameters and returns an integer.
A function named getAverage that accepts no parameters and returns a double.
*/

#ifndef AVERAGER_H
#define AVERAGER_H

class Averager {
    private:
        int sum;
        int count;
    public:
        Averager();
        void add(int);
        int getSum() ;
        int getCount();
        double getAverage();
};
#endif

/*
Write the implementation (.cpp file) of the Averager class of the previous exercise. The full specification of the class is:
An data member named sum of type integer.
An data member named count of type integer.
A constructor with no parameters. The constructor initializes the data members sum and the data member count to 0.
A function named getSum that accepts no parameters and returns an integer. getSum returns the value of sum.
A function named add that accepts an integer parameter and returns no value. add increases the value of sum by the value of the parameter, and increments the value of count by one.
A function named getCount that accepts no parameters and returns an integer. getCount returns the value of the count data member, that is, the number of values added to sum.
A function named getAverage that accepts no parameters and returns a double. getAverage returns the average of the values added to sum. The value returned should be a value of type double (and therefore you must cast the data members to double prior to performing the division).
*/

int sum;
int count;

Averager::Averager() {
    sum = 0;
	count = 0;
}

void Averager::add(int addSum){
    sum += addSum;
	count += 1;
}

int Averager::getSum() {
    return sum;
}


int Averager::getCount() {                                                         
      return count; 
}

double Averager::getAverage() {                                                         
    return (double)sum / (double)count; 
}

/*
Write the interface (.h file) of a class GasTank containing:
A data member named amount of type double.
A data member named capacity of type double.
A constructor that accepts a parameter of type double.
A function named addGas that accepts a parameter of type double and returns no value.
A function named useGas that accepts a parameter of type double and returns no value.
A function named isEmpty that accepts no parameters and returns a boolean value.
A function named isFull that accepts no parameters and returns a boolean value.
A function named getGasLevel that accepts no parameters and returns a double.
A function named fillUp that accepts no parameters and returns a double.
*/

#ifndef GASTANK_H
#define GASTANK_H

class GasTank {
    private:
        double amount;
	    double capacity;
    public:
        GasTank(double );
        void addGas(double);
        void useGas(double);
	    bool isFull();
	    bool isEmpty();
    	double getGasLevel();
	    double fillUp();
};
#endif

/*
Write the implementation (.cpp file) of the GasTank class of the previous exercise. The full specification of the class is:

A data member named amount of type double.
An data member named capacity of type double.
A constructor that accepts a parameter of type double. The value of the parameter is used to initialize the value of capacity. The constructor also sets amount to zero.
A function named addGas that accepts a parameter of type double. The value of the amount instance variable is increased by the value of the parameter. However, if the value of amount is increased beyond the value of capacity, amount is set to capacity.
A function named useGas that accepts a parameter of type double. The value of the amount data member is decreased by the value of the parameter. However, if the value of amount is decreased below 0, amount is set to 0.
A function named isEmpty that accepts no parameters and returns a boolean value. isEmpty returns true if the value of amount is less than 0.1, and false otherwise.
A function named isFull that accepts no parameters and returns a boolean value.. isFull returns true if the value of amount is greater than capacity-0.1, and false otherwise.
A function named getGasLevel that accepts no parameters. getGasLevel returns the value of the amount data member.
A function named fillUp that accepts no parameters and returns a double. fillUp increases amount to capacity and returns the difference between the value of capacity and the original value of amount (that is, the amount of gas that is needed to fill the tank to capacity).
*/

double amount;
double capacity;

GasTank::GasTank(double sum) {
    amount = 0;
	capacity = sum;
}

void GasTank::addGas(double addSum){
	amount += addSum;
	if (amount > capacity) {
		amount = capacity;
}
}

void GasTank::useGas(double less) {
	amount -= less;
	if (amount < 0) {
		amount = 0;
}
}
bool GasTank::isEmpty() {
    if (amount < 0.1) {
		return true; 
}
    else
        return false;
}

bool GasTank::isFull() {                                                         
	if (amount > (capacity - 0.1)) {
		return true;
}
    else
        return false;
}

double GasTank::getGasLevel() {
	return amount;
}

double GasTank::fillUp() {
	int ogAmt;
	ogAmt = amount;
	amount = capacity;
	return capacity - ogAmt;
}
