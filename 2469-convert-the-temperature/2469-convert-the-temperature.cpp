class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> result;
        double kelvin,fahrenheit;
        kelvin = celsius + 273.15;
        fahrenheit = celsius * 1.80 + 32.0;
        result.push_back(kelvin);
        result.push_back(fahrenheit);
        return result;

        /* or This way result = {kelvin, fahrenheit}; return result; 
        If this method is used then the result.push_back will not be used 

        */
        
    }
};
