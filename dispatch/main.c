#include <iostream>
#include <fstream>
#include "job.h"
#include "linkList.h"
#include "FCFS.h"
#include "SJF.h"
#include "HPF.h"
#include "RR.h"
using namespace std;

int main() {
	//读取测试数据文件
    ifstream file("data.txt", ios::in);
    if(!file.is_open()) {
        cout << "找不到测试数据的文件！" << endl;
        system("pause");
        exit(1);
    }
    char str[45];
    //将首行读出
    file.getline(str, 45);

    //作业表
    NodeList<Job> jobs;
    jobs.SetCompareFunction(jobSortArrivalTime);//按到达时间

    Job job;
	//数据插入到作业表中
    while(file >> job.jobId) {
        file >> job.arrivalTime;
        file >> job.executionTime;
        file >> job.priority;
        jobs.Insert(jobs.GetLength(), job, true);
    }
    file.close();

    //先来先服务
    cout << "--------------------------------  FCFS 先来先服务--------------------------------\n\n";
    FCFS fcfs(jobs);
    fcfs.execute(cout);
    cout << '\n';
    cout << "----------------------------------------------------------------\n";

    //短作业优先
    cout << "--------------------------------SJF 短作业优先--------------------------------\n\n";
    SJF sjf(jobs);
    sjf.execute(cout);
    cout << '\n';
    cout << "----------------------------------------------------------------\n";

    //优先权高者优先
    cout << "--------------------------------HPF 优先权高者优先--------------------------------\n\n";
    HPF hpf(jobs);
    hpf.execute(cout);
    cout << '\n';
    cout << "----------------------------------------------------------------\n";

    //时间片轮转
    cout << "--------------------------------RR 时间片轮转准备阶段--------------------------------"
        << endl << "请输入时间片大小x（x > 0）：";
    unsigned int slice = 0;
    while(slice <= 0) {
        cin >> slice;
    }
    cout << "--------------------------------RR 时间片轮转开始阶段--------------------------------\n\n";
    RR rr(jobs, slice);
    rr.execute(cout);
    cout << '\n';
    cout << "----------------------------------------------------------------\n";
    system("pause");
    return 0;
}

