#include <vector>
#include <string>
using namespace std;



namespace Statistics {
    
class Stats{

    double Average;
    double Max;
    double Min;

    public: 
    //Constructor
    Stats(double average, double max, double min)
    {
        Average = average;
        Max = max;
        Min = min;       
    }

    };
    Stats ComputeStatistics(const std::vector<double> data);
    
}


 struct EmailAlert
 {
    string emailSent;
 };

 struct LEDAlert
 {
    string ledGlows;
};
