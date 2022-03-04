#include <vector>

class Stats
{
public:
    float average, max, min;

    //constructor
    //Stats(const std::vector<double>& inputdata);
};

    //}ComputeStatIstics_Temp;
    
namespace Statistics 
{
    Stats ComputeStatistics(const std::vector<float>& inputData);
}

class IAlerter
{
    public:
    virtual void set_alert()
    {
    }
};

class EmailAlert : public IAlerter
{
    bool emailSent;
    void set_alert()
    {
        emailSent = true;
    }
};

class LEDAlert : public IAlerter
{
    bool ledGlows;
    void set_alert()
    {
        ledGlows = true;
    }
};

class StatsAlerter : public EmailAlert, public LEDAlert
{
    public:
    float maxThreshold;
    std::vector<IAlerter*> alerters_input;
    void checkAndAlert(const std::vector<float>& );

    //parametrised constructor
    StatsAlerter(const float maxThreshold_temp, std::vector<IAlerter*> &alerters)
    {
        maxThreshold = maxThreshold_temp;
        alerters_input = alerters;
    }

};



//alerters is vector of struct

