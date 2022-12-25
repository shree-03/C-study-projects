// project code is based on print a message when second==10 in the digital clock is at specified time
// using c programming
#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include <conio.h>
// i have used function here because there is still space for code alteration
// and also to use latter
int digiclc(int h, int m, int s);
int digiclc(int h, int m, int s)
{
    int d = 1000; // delay
    int flag = 0; // using flag to implement the
    while (1)
    { // infinite loop for clock to go on
        printf("\n%02d:%02d:%02d\n", h, m, s);
        s++;
        if (s > 1)
        {
            flag++;
        } // used for message printing at specified 10 seconds
        if (s > 59)
        {
            m++;
            s = 0;
            flag = 0;
        } // change seconds to 0 and increase minute by 1 when s>59 seconds
        if (m > 59)
        {
            h++;
            m = 0;
        } // change minute to 0 and increase hour by 1 when m>59 seconds
        if (h > 24)
        {
            h = 0;
            m = 0;
            s = 0;
        } // set all to zero when hour exceeds 24

        if (flag % 10 == 0)
        {
            printf("\nHELLO\n");
        } // prints hello at 10,20 and so on
        // but problem lies at 59 , it must print hello at 01.00 ut prints @ both 00.59 and 01.00
        // will Afind soon
        Sleep(d);      // to wait for 1sec
        system("cls"); // to clear console so that it pretends changing in same place
    }
}
int main()
{
    digiclc(0, 0, 0); // call the function
}
