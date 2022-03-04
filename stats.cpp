#include "stats.h"
#include <iostream>


Stats Statistics::ComputeStatistics(const std::vector<double>& data)
{
    //Implement statistics here

    double minmum = 0;
    double maximum = 0;
    double average_temp = 0;
    
    if(data.size() <= 0 )
                {
                  average_temp = 0.0/0.0;
                  maximum = 0.0/0.0;
                  minmum = 0.0/0.0;          

                }
    
    else 
                {
                 int count = 0;
                 double sum = 0;
                 int i;
    
                for (i=0; i < data.size(); i++)
                {
                    count++;
                    sum += data[i];

                    if ( data[i] > maximum)
                        {
                            maximum = data[i];
                        }

                    else if (data[i] < minmum)
                        {
                            minmum = data[i];
                        }
                }
                average_temp = sum/(double)count;   

                }
    
              
        Stats Stats_Temp_Obj;
        Stats_Temp_Obj.average = average_temp;
        Stats_Temp_Obj.max = maximum;
        Stats_Temp_Obj.min = minmum;

        return Stats_Temp_Obj;
        
}


Stats StatsAlerter::checkAndAlert(const std::vector<double>& data)
{

    int alert = 0;
    float maxThreshold;
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] > maxThreshold)
        {
            alert = 1;
            break;
        }
    }

    if(alert == 1)
    {
       // alerters_input[0].set_alert();
       // alerters_input[1].set_alert();
        EmailAlert x;
        LEDAlert y;

         Stats Stats_Temp_Obj1;
        Stats_Temp_Obj1.emailSent = x.emailSent;
        Stats_Temp_Obj1.ledGlows = y.ledGlows;

        return Stats_Temp_Obj1;

    }
}
