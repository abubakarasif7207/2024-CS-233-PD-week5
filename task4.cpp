#include<iostream>
using namespace std;
int project_time_calculation(int needed_hours,int firm_days,int all_workers);

main()
{
    int  needed_hours, firm_days, all_workers;
    cout<<"Enter the needed hours : ";
    cin>>needed_hours;
    cout<<"Enter the days that firm has: ";
    cin>>firm_days;
    cout<<"Enter the number of all workers : ";
    cin>>all_workers;
    int final_result= project_time_calculation( needed_hours, firm_days,all_workers);
    cout<<final_result;
   
}
int project_time_calculation(int needed_hours,int firm_days,int all_workers)
{
    // Aik bandey ka aik din mei kam 
int one_day_work_hour;
one_day_work_hour=9;
int all_workers_hour=(one_day_work_hour)*(firm_days)*(all_workers);
int result;
if((all_workers_hour)<=99)
{   
    result=(needed_hours)-(all_workers_hour);

    return result;
}
    else
    {
        result=( all_workers_hour)-(needed_hours);
        return result;
    }


}


    