/* Write a full class definition for a class named Player, and containing the following members:
A data member name of type string.
A data member score of type int.
A member function called setName that accepts a parameter and assigns it to name. The function returns no value.
A member function called setScore that accepts a parameter and assigns it to score. The function returns no value.
A member function called getName that accepts no parameters and returns the value of name.
A member function called getScore that accepts no parameters and returns the value of score.
*/


class Player{
    private:
        string name;
        int score;
    public: 
        void setName(string nameSet) {
            name = nameSet;
    }

    void setScore(int scoreSet) {
        score = scoreSet;
    }

    string getName() { 
        return name;
    }

    int getScore() {
        return score;
    }
};

/*
Write a full class definition for a class named ContestResult, and containing the following members:
A data member winner of type string, initialized to the empty string.
A data member secondPlace of type string, initialized to the empty string.
A data member thirdPlace of type string, initialized to the empty string.
A member function called setWinner that has one parameter, whose value it assigns to the data member winner.
A member function called setSecondPlace that has one parameter, whose value it assigns to the data member secondPlace.
A member function called setThirdPlace that has one parameter, whose value it assigns to the data member thirdPlace.
A member function called getWinner that has no parameters and that returns the value of the data member winner.
A member function called getSecondPlace that has no parameters and that returns the value of the data member secondPlace.
A member function called getThirdPlace that has no parameters and that returns the value of the data member thirdPlace.
*/

class ContestResult {
    private:
        string winner = "";
        string secondPlace = "";
        string thirdPlace = "";
    public:
        void setWinner(string first) {
            winner = first;
        }
        void setSecondPlace(string second) {
            secondPlace = second;
        }
        void setThirdPlace(string third) {
            thirdPlace = third;
        }
        
        string getWinner() {
            return winner;
        }
        string getSecondPlace() {
            return secondPlace;
        }
        string getThirdPlace() {
            return thirdPlace;
        }
};
        
        
        
/*
Write a full class definition for a class named Counter, and containing the following members:
A data member counter of type int.
A constructor that accepts no arguments and initializes the counter data member to 0.
A function called increment that accepts no parameters and returns no value. increment adds one to the counter data member.
A function called getValue that accepts no parameters. It returns the value of the instance variable counter.
*/
class Counter {
    private:
        int counter;
        
    public:
        Counter() {
            counter = 0;
        }
        void increment() {
            counter += 1;
        }
        int getValue () {
            return counter;
        }
};
