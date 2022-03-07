#include <vector>


class Stats
{
    public:
             float average;
                float max;
                float min;

};

    
namespace Statistics 
        {
            Stats ComputeStatistics(const std::vector<float>& Data);
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
                public:
                    bool emailSent;
                    void set_alert()
                    {
                        emailSent = true;
                    }
                };


class LEDAlert : public IAlerter
                    {
                    public:
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



