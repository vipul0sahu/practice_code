#include <stdio.h>
#include <stdbool.h>
int main()
{
    char A = 'W'; // single character    %c
    char B[] = "What"; // array of characters %s  

    float C = 1.3839834747474747; // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double D = 2.3838383838383838; // 8 bytes (64 bits of precision) 15 - 16 digits %lf (More accurate)

    bool E = false; // 1 byte (true or false) %d

    char F = -125; // 1 byte (-128 to +127) %d or %c
    unsigned char G = 255; // 1 byte (0 to +255) %d or %c

    short int H = -32688; // 2 bytes (−32,768 to +32,767) %d
    unsigned short int I = 53333; // 2 bytes (0 to +65,535) %d

    int J = 2133333888; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int K = 4294967294; // 4 bytes (0 to +4,294,967,295) %u

    long long int L = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int M = 18446744073709551615u; // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n",A); //char
    printf("%s\n",B); //character array

    printf("%0.16f\n",C); //float
    printf("%0.16lf\n",D); //double

    printf("%d\n",E); //bool

    printf("%c\n",F); //char as numeric value
    printf("%d\n",G); //unsigned char

    printf("%d\n",H); //short int
    printf("%d\n",I); //unsigned short int

    printf("%d\n",J); //int
    printf("%u\n",K); //unsigned int

    printf("%lld\n",L); //long long int
    printf("%llu",M); //unsigned long long int

    return 0;

}