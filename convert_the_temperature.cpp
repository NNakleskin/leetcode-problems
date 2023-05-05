/*
 *You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.

You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].

Return the array ans. Answers within 10-5 of the actual answer will be accepted.

Note that:

Kelvin = Celsius + 273.15
Fahrenheit = Celsius * 1.80 + 32.00
 */

const double CELSIUS_TO_KELVIN = 273.15;
const double CELSIUS_TO_FAHRENHEIT_ADD = 32.00;
const double CELSIUS_TO_FAHRENHEIT_MULT = 1.80;

class Solution {
public:
    std::vector<double> convertTemperature(double celsius) {
        std::vector<double> res;
        res.push_back(celsius + CELSIUS_TO_KELVIN);
        res.push_back(celsius * CELSIUS_TO_FAHRENHEIT_MULT +
            CELSIUS_TO_FAHRENHEIT_ADD);
        return res;
    }
};
