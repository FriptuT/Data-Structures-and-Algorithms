#include <iostream>
#include <string.h>
using namespace std;

char s1[6] = "12345";
char s2[5] = "abcd";
char *s3 = s1;

int main()
{   
    // cout<<strcpy(s1,s2+2); // cd
    // cout<<s1;              // cd
    //                         // cdcd
    
    // cout<<strcpy(s3+2, s2+1);   // bcd;
    // cout<<s1;                   // bcd + 12bcd = bcd12bcd;

    // cout<<strcpy(s1, "mnp");    // mnp
    // cout<<s3;                   // mnpmnp

    // cout<<strcpy(s3+1,s2+2);        // cd

    // *s1 = strcpy(s3,s2 + 2);
    // cout<<s1;                           //eroare

    // cout<<strcpy("ab", s1);                 // eroare

    // s3 = strcpy(s1 + 2, s2 + 2);                 //cd
    // cout<<s3 + 1;                               //d

    // cout<<strcpy(s2,"a");           // a

    // choice tests with the follow functions:
    // strcpy,strncpy,strlen,strstr,strchr,strcmp...

    return 0;
}