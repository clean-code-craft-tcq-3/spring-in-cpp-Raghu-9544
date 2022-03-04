#include <vector>

class Stats
{
public:
    float average, max, min;
};
namespace Statistics 
{
    Stats ComputeStatistics(const std::vector<float>& inputData);
}

class StatsAlerter
{

};

struct EmailAlert
{
    bool emailSent;
}

struct LEDAlert
{
    bool ledGlows;
}
