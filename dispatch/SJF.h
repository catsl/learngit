#pragma once
#include "linkList.h"
#include "job.h"
class SJF {
public:
    //构造函数
    SJF(NodeList<Job> jobs) : list(jobs) {
        list.SetCompareFunction(jobSortArrivalTime);
        list.Sort();
    }
    //执行
    void execute(std::ostream&);
private:
    NodeList<Job> list;
};

