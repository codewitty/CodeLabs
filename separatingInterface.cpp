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


