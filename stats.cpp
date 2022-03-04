#include "stats.h"
//using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& InputData) 
{
    float i, sum = 0, average,min,max;
    if(InputData.size())
    {
        for (i = 0; i < float(InputData.size()); i++)
        {
            sum += InputData[i];
        }
        average = sum / float(InputData.size());
        //std::cout<<average;

        //average = (std::accumulate(InputData.begin(),InputData.end(),0))/int(sizeof(InputData));
        //std::cout<<average;

        max = InputData[0];
        min = InputData[0];
        for (int i = 0; i < int(InputData.size()); i++)
        {
            if (max < InputData[i])
            {
                max = InputData[i];
            }
            if (min > InputData[i])
            {
                min = InputData[i];
            }
        }
    }
    else
    {
        average = 0.0/0.0;
        max = 0.0/0.0;
        min = 0.0/0.0;
    }
    Stats ComputeStatIstics_Temp; 
    ComputeStatIstics_Temp.average = average;
    ComputeStatIstics_Temp.max = max;
    ComputeStatIstics_Temp.min = min;

    return ComputeStatIstics_Temp;
}

void StatsAlerter::checkAndAlert(const std::vector<float>& inputData)
{
    //EmailAlert emailAlert;
    //LEDAlert ledAlert;
    //alert_flag = 0;
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

    /*if(alert_flag == 1)
    {
       alerters_input[0]->set_alert();
       alerters_input[1]->set_alert();
    }*/
}
