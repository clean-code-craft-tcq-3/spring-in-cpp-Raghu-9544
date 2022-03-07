#include "stats.h"


Stats Statistics::ComputeStatistics(const std::vector<float>& Data) 
{
    float i; 
    float sum = 0;
    float average_temp;
    float minimum;
    float maximum;
    
    if(Data.size())
    {
        for (i = 0; i < float(Data.size()); i++)
        {
            sum += Data[i];
        }
        average_temp = sum / float(Data.size());


        maximum = Data[0];
        minimum = Data[0];
        for (int i = 0; i < int(Data.size()); i++)
        {
            if (maximum < Data[i])
                    {
                         maximum = Data[i];
                    }
            
            if (minimum > Data[i])
                     {
                         minimum = Data[i];
                     }
        }
        
    }
    
    
    else
    {
        average_temp = 0.0/0.0;   //returns NaN
        maximum = 0.0/0.0;       //return Nan
        minimum = 0.0/0.0;       //returns Nan
    }
    
    
    Stats ComputeStatIstics1; 
    ComputeStatIstics1.average = average_temp;
    ComputeStatIstics1.max = maximum;
    ComputeStatIstics1.min = minimum;

    return ComputeStatIstics1;
}

void StatsAlerter::checkAndAlert(const std::vector<float>& inputData)
{
    
    for (int i = 0; i < int(inputData.size()); i++)
    {
        if (inputData[i] > maxThreshold)
        {
            //alert_flag = 1;
            alerters_input[0]->set_alert();
            alerters_input[1]->set_alert();
            break;
        }
    }

   
}
