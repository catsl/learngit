#pragma once
#include "linklist.h"
#include "job.h"
class FCFS {
public:
    //构造函数
    FCFS(NodeList<Job> jobs) : list(jobs) 
	{
        list.SetCompareFunction(jobSortArrivalTime);
        list.Sort();
    }
    //执行
    void execute(std::ostream&);
private:
    NodeList<Job> list;
};

