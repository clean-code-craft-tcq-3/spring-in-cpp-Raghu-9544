#include "stats.h"


Stats Statistics::ComputeStatistics(const std::vector<float>& Data) 
{
    float i, sum = 0, average,min,max;
    if(Data.size())
    {
        for (i = 0; i < float(Data.size()); i++)
        {
            sum += Data[i];
        }
        average = sum / float(Data.size());


        max = Data[0];
        min = Data[0];
        for (int i = 0; i < int(Data.size()); i++)
        {
            if (max < Data[i])
            {
                max = Data[i];
            }
            if (min > Data[i])
            {
                min = Data[i];
            }
        }
    }
    else
    {
        average = 0.0/0.0;
        max = 0.0/0.0;
        min = 0.0/0.0;
    }
    Stats ComputeStatIstics1; 
    ComputeStatIstics1.average = average;
    ComputeStatIstics1.max = max;
    ComputeStatIstics1.min = min;

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
