#include <vector>
#include <string>

using namespace std;

class Stats{

    public:
    double average;
    double max;
    double min;
    bool emailSent;
    bool ledGlows;
    
};

namespace Statistics 
{
Stats ComputeStatistics(const std::vector<double>& data);
};
   
/* class StatsAlerter
{
    Stats checkAndAlert(const std::vector<double>& data);
};

struct EmailAlert
        {
             bool emailSent;
        };

struct LEDAlert
        {
            bool ledGlows;
        }; */

