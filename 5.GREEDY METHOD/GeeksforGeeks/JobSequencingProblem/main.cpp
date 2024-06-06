/*
    Given an array of jobs where every job has a deadline and
    associated profit if the jobs is finished before deadline.
    It is also given that every job takes single unit of time,
    so the minimum possible deadline for any job is 1.
    HOW TO MAXIMIZE TOTAL PROFIT IF ONLY ONE JOB CAN BE SCHEDULED AT A TIME?
*/
#include <iostream>
#include <algorithm>
using namespace std;

struct Job
{
    char id;
    int deadline;
    int profit;
};

bool profitCompare(const Job &a, const Job &b)
{
    return a.profit > b.profit;
}

void maximizeProfit(Job arr[], int n)
{
    // sorting jobs on decreasing order of profit
    sort(arr, arr + n, profitCompare);

    int *result = new int[n]; // result, sequence of jobs
    bool *slot = new bool[n]; // keep track of free time slots

    // init all slots to be free
    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }

    // iteram peste toate joburile
    for (int i = 0; i < n; i++)
    {
        // gaseste loc liber pentru job-ul curent(i);
        // incepem de la ultimul loc posibil
        for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--)
        {
            // loc liber gasit
            if (slot[j] == false)   
            {
                result[j] = i;  // adaugam job-ul la rezultat
                slot[j] = true; // marcam locul ca fiind ocupat
                break;
            }
        }
    }

    // print the result
    for (int i = 0; i < n; i++)
    {
        if (slot[i])
        {
            cout << arr[result[i]].id << " ";
        }
    }

    delete[] result;
    delete[] slot;
}

int main()
{

    Job jobs[] = {
        {'A', 2, 100},
        {'E', 3, 15},
        {'C', 2, 27},
        {'B', 1, 19},
        {'D', 1, 25}
    };
    int n = sizeof(jobs) / sizeof(jobs[0]);

    maximizeProfit(jobs,n);
    return 0;
}