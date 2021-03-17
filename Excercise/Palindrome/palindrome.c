#include <stdio.h>
#include <string.h>

#define isChar(c) (((c) >= 65 && (c) <= 90) || ((c) >= 97 && (c) <= 122))

#define isCompleted(f, e) ((f) > (e))

#define isCharMatch(c1, c2) ((c1) == (c2))

#define ifUpperCaseConvertToLower(c) (((c) >= 65 && (c) <= 90) ? c + 32 : c)

// int isNumber(char c){
//     if((c >= 65 && c<=90) || (c >= 97 && c<=122)){
//         return 1;
//     }
//     return 0;
// }

// int isCompleted(int f, int e){
//     if(f>e){
//         return 1;
//     }
//     return 0;
// }

// char ifUpperCaseConvertToLower(char c){
//     if(c>=65 && c<=90){
//         return c+32;
//     }
//     return c;
// }

int isPalindrome(char str[])
{

    //ASCII Values for A to Z is 65 to 90
    //ASCII Values for a to z is 97 to 122

    int f = 0;
    int e = strlen(str) - 1;
    int flag = 0;
    while (!(isCompleted(f, e)))
    {
        if (!(isChar(str[f])))
        {
            f++;
            continue;
        }
        if (!(isChar(str[e])))
        {
            e--;
            continue;
        }
        printf("\nMatching %c %c", ifUpperCaseConvertToLower(str[f]), ifUpperCaseConvertToLower(str[e]));
        if (!isCharMatch(ifUpperCaseConvertToLower(str[f]), ifUpperCaseConvertToLower(str[e])))
        {
            return 0;
        }
        flag = 1;
        f++;
        e--;
    }
    return flag;
}

// Driver program to test above function
int main()
{
    int a = isPalindrome("Mad134516616am547368369");
    printf("\n%d", a);
    return 0;
}
