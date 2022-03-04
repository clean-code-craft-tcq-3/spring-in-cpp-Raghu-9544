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

 
    StatsAlerter(const float maxThreshold_temp, std::vector<IAlerter*> &alerters)
    {
        maxThreshold = maxThreshold_temp;
        alerters_input = alerters;
    }

};



