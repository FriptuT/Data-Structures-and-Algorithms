#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
    Given n activites with their start and finish times.
    Select the maximum number of activities that can be performed by a single person,
    assuming that a person can only work on a single activity at a time
*/
struct Activity
{
    int start;
    int finish;
};

bool activityCompare(const Activity &a, const Activity &b)
{
    return a.finish < b.finish;
}

void printMaxActivities(Activity arr[], int n)
{

    // Sortam in functie de timpul de terminare
    sort(arr, arr + n, activityCompare);

    // selectam prima activitate mereu
    int i = 0;
    cout << "(" << arr[i].start << "," << arr[i].finish << "),";

    // iteram asupra celorlalte activitati
    for (int j = 1; j <= n; j++)
    {
        // daca activ. curenta are timpul de start mai mare decat timpul de terminare a ultimei activ.
        // inseamna ca ultima s-a terminat si cea curenta poate incepe
        // daca am fi avut-o pe cea curenta mai mica,
        // inseamna ca nu ar fi putut incepe dpdv logic
        if (arr[j].start > arr[i].finish)
        {
            cout<< "(" << arr[j].start << ","<<arr[j].finish<< ")";
            i = j;
        }
    }
    
}

int main()
{
    Activity activites[] = {
        {5,8}, {1,2}, {3,4},{0,6}, {5,7}, {8,9}
    };
    int n = sizeof(activites) / sizeof(activites[0]);
    printMaxActivities(activites, n);

    return 0;
}