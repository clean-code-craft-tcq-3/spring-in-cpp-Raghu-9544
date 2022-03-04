#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<double>& data())
 {

    //Implement statistics here

    double& min = 0;
    double& max = 0;
    double& average = 0;
    
    if(data.size() <= 0 )
    {
        return 0;
        min = sqrt(-2);
        max = sqrt(-2);
        average = sqrt(-2);
    }
    else {
        return 0;
    }

    int count = 0;
    double sum = 0;
    int i;
    
    for (i=0; i < data.size(); i++)
    {
        count++;
        sum += data[i];

        if ( data[i] > max)
        {
            max=data[i];
        }

        else if (data[i] < min)
        {
            min=data[i];
        }
        else
        {
            return 0;
        }
    }
    average = sum/(double)count;   
}

class StatsAlerter
    {
private:
    /* data */
    double MaxThreshold;
    std::vector<string> Alerters;
    // string //.....
    // string //......

public:
    StatsAlerter( double maxThreshold, const std::vector<string> alerters)
    {
        MaxThreshold = maxThreshold;   
        Alerters = alerters;   
    }

    std::string checkAndAlert(std::vector<double>& alert())
        {
      
            for (int i=0; i < alert.size(); i++)
            {
                if ( alert[i] > MaxThreshold)
                    {
                        double max=alert[i];
                        EmailAlert.emailSent ;
                        LEDAlert.ledGlows ;
                    }
                else
                    {
                        return 0;
                    }
            }   
        }
    
};
