#include <vector>
#include <string>
using namespace std;

namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& data());
}

struct EmailAlert
{
    string emailSent;
};

struct LEDAlert
{
    string ledGlows;
};
