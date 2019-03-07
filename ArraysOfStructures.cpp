/*
Given a type Money that is a structured type with two int fields, dollars and cents. Assume that an array named monthlySales with 12 elements, each of type Money has been declared and initialized.

Assume that a Money variable yearlySales has also been declared. Write the necessary code that traverses the monthlySales array and adds it all up and stores the resulting total in yearlySales. Be sure make sure that yearlySales ends up with a valid value, i.e. a value of cents that is less than 100.
*/
yearlySales.dollars = 0;
yearlySales.cents = 0;
for (int i = 0; i < 12; ++i) {
    yearlySales.dollars += monthlySales[i].dollars;
    yearlySales.cents += monthlySales[i].cents;
}
yearlySales.dollars += yearlySales.cents / 100;
yearlySales.cents %= 100;
