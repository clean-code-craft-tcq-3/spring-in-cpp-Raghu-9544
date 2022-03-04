#include "stats.h"


Stats Statistics::ComputeStatistics(const std::vector<double> data)
 {
    //Implement statistics here

    double minmum = 0;
    double maximum = 0;
    double average_temp = 0;
    
    if(data.size() <= 0 )
                {
                  average_temp = sqrt(-2);
                  maximum = sqrt(-2);
                  minmum = sqrt(-2);          

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
     Stats Stats_Temp_Obj();
        Stats_Temp_Obj.average = average_temp;
        Stats_Temp_Obj.max = maximum;
        Stats_Temp_Obj.min = minmum;

        return Stats_Temp_Obj;
}


//    class StatsAlerter 
//    {
//private:
    /* data */
//    double MaxThreshold;
//    std::vector<string> Alerters;
    // string //.....
    // string //......

// public:
//    StatsAlerter( double maxThreshold, const std::vector<string> alerters)
//    {
//        MaxThreshold = maxThreshold;   
//        Alerters = alerters;   
//    }

//    std::string checkAndAlert(std::vector<double>& alert())
//        {
      
//            for (int i=0; i < alert.size(); i++)
//            {
//                if ( alert[i] > MaxThreshold)
//                    {
//                        double max=alert[i];
//                        EmailAlert.emailSent ;
//                        LEDAlert.ledGlows ;
//                    }
//                else
//                    {
//                        return 0;
//                    }
//            }   
//        }
    
//}; 
