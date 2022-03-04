#include <vector>

class Stats{

    public:
    double average;
    double max;
    double min;

};

namespace Statistics 
{
Stats ComputeStatistics(const std::vector<double>& data);
};
   
class StatsAlerter
{

};


 struct EmailAlert
 {
    bool emailSent;
 };

 struct LEDAlert
 {
    bool ledGlows;
};
