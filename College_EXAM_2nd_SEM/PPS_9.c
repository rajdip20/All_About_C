/*
    Price tag in word.
    ~~~~~~ Update Date : 09/07/2021 ~~~~~~
*/

#include <stdio.h>
int main()
{
    int i, a[10], q, r, p, s = 0, t, u;
    float n;
    printf("Enter price in RRRR.PP format: ");
    scanf("%f", &n);
    q = n;
    s = n * 100;
    p = 1000;
    for (i = 0; i < 2; i++)
    {
        a[i] = q / p;
        q = q % p;
        p = p / 10;
    }
    switch (a[0])
    {
    case 1:
        printf("One Thousand ");
        break;
    case 2:
        printf("Two Thousand ");
        break;
    case 3:
        printf("Three Thousand ");
        break;
    case 4:
        printf("Four Thousand ");
        break;
    case 5:
        printf("Five Thousand ");
        break;
    case 6:
        printf("Six Thousand ");
        break;
    case 7:
        printf("Seven Thousand ");
        break;
    case 8:
        printf("Eight Thousand ");
        break;
    case 9:
        printf("Nine Thousand ");
        break;
    default:
        printf("\0");
        break;
    }
    switch (a[1])
    {
    case 1:
        printf("One Hundred ");
        break;
    case 2:
        printf("Two Hundred ");
        break;
    case 3:
        printf("Three Hundred ");
        break;
    case 4:
        printf("Four Hundred ");
        break;
    case 5:
        printf("Five Hundred ");
        break;
    case 6:
        printf("Six Hundred ");
        break;
    case 7:
        printf("Seven Hundred ");
        break;
    case 8:
        printf("Eight Hundred ");
        break;
    case 9:
        printf("Nine Hundred ");
        break;
    default:
        printf("\0");
        break;
    }
    if (q >= 0 && q <= 19)
    {
        r = q;
        switch (r)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        case 10:
            printf("Ten ");
            break;
        case 11:
            printf("Eleven ");
            break;
        case 12:
            printf("Twelve ");
            break;
        case 13:
            printf("Thirteen ");
            break;
        case 14:
            printf("Fourteen ");
            break;
        case 15:
            printf("Fifteen ");
            break;
        case 16:
            printf("Sixteen ");
            break;
        case 17:
            printf("Seventeen ");
            break;
        case 18:
            printf("Eighteen ");
            break;
        case 19:
            printf("Nineteen ");
            break;
        default:
            printf("\0");
            break;
        }
    }
    else
    {
        for (i = 2; i < 4; i++)
        {
            a[i] = q / p;
            q = q % p;
            p = p / 10;
        }
        switch (a[2])
        {
        case 2:
            printf("Twenty ");
            break;
        case 3:
            printf("Thirty ");
            break;
        case 4:
            printf("Forty ");
            break;
        case 5:
            printf("Fifty ");
            break;
        case 6:
            printf("Sixty ");
            break;
        case 7:
            printf("Seventy ");
            break;
        case 8:
            printf("Eighty ");
            break;
        case 9:
            printf("Ninty ");
            break;
        default:
            printf("\0");
            break;
        }
        switch (a[3])
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
    }
    printf("Rupees ");
    u = 100000;
    for (i = 0; i < 4; i++)
    {
        s = s % u;
        u = u / 10;
    }
    if (s >= 0 && s <= 19)
    {
        t = s;
        switch (t)
        {
        case 1:
            printf("and One Paise");
            break;
        case 2:
            printf("and Two Paise");
            break;
        case 3:
            printf("and Three Paise");
            break;
        case 4:
            printf("and Four Paise");
            break;
        case 5:
            printf("and Five Paise");
            break;
        case 6:
            printf("and Six Paise");
            break;
        case 7:
            printf("and Seven Paise");
            break;
        case 8:
            printf("and Eight Paise");
            break;
        case 9:
            printf("and Nine Paise");
            break;
        case 10:
            printf("and Ten Paise");
            break;
        case 11:
            printf("and Eleven Paise");
            break;
        case 12:
            printf("and Twelve Paise");
            break;
        case 13:
            printf("and Thirteen Paise");
            break;
        case 14:
            printf("and Fourteen Paise");
            break;
        case 15:
            printf("and Fifteen Paise");
            break;
        case 16:
            printf("and Sixteen Paise");
            break;
        case 17:
            printf("and Seventeen Paise");
            break;
        case 18:
            printf("and Eighteen Paise");
            break;
        case 19:
            printf("and Nineteen Paise");
            break;
        default:
            printf("\0");
            break;
        }
    }
    else
    {
        for (i = 4; i <= 5; i++)
        {
            a[i] = s / u;
            s = s % u;
            u = u / 10;
        }
        switch (a[4])
        {
        case 2:
            printf("and Twenty Paise");
            break;
        case 3:
            printf("and Thirty Paise");
            break;
        case 4:
            printf("and Forty Paise");
            break;
        case 5:
            printf("and Fifty Paise");
            break;
        case 6:
            printf("and Sixty Paise");
            break;
        case 7:
            printf("and Seventy Paise");
            break;
        case 8:
            printf("and Eighty Paise");
            break;
        case 9:
            printf("and Ninty Paise");
            break;
        default:
            printf("\0");
            break;
        }
        switch (a[5])
        {
        case 1:
            printf("One Paise");
            break;
        case 2:
            printf("Two Paise");
            break;
        case 3:
            printf("Three Paise");
            break;
        case 4:
            printf("Four Paise");
            break;
        case 5:
            printf("Five Paise");
            break;
        case 6:
            printf("Six Paise");
            break;
        case 7:
            printf("Seven Paise");
            break;
        case 8:
            printf("Eight Paise");
            break;
        case 9:
            printf("Nine Paise");
            break;
        }
    }
}