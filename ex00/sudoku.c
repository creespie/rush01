#include <stdlib.h>

void    check_missing(char array[4], char *missing)
{
     char   compare[4];
     int    i;
     int    y;
     int    found;
     int    f;
     int    amount;

     amount = 0;
     i = 0;
     f = 0;
     compare[0] = '1';
     compare[1] = '2';
     compare[2] = '3';
     compare[3] = '4';
     while (i < 4)
     {
        found = 0;
        y = 0;
        while (y < 4)
        {
            if (array[y] == compare[i])
                found = 1;
            y++;
        }
        if (found == 0)
        {
            amount++;
            
            missing[f] = compare[i];
            if (amount > 2)
                missing[1] = '5';
            f++; 
        }
        i++;
    }
     missing[f] = '\0';
}

void    check_content(char **array,int x ,char *compare_line)
{
     int    y;
     int    k;

     k = 0;
     y = 0;
     while (y < 4)
     {
        if (array[y][x] != '0')
        {
            compare_line[k] = array[y][x];
            k++;
        }
        y++;
    }
     compare_line[k] = '\0';
}


void    sudoku(char **array)
{
    char    missing[3];
    char    compare_line[4];
    int     x;
    int     y;
    int     i;
    int     n;

    y = 0;

    while(y < 4)
    {
        x = 0;
        while (x < 4)
        {
            if (array[y][x] == '0')
            {
                i = 0;
                check_missing(array[y], missing);
                if (missing[1] == '5')
                {
                    continue;
                }
                else
                {
                    check_content(array, x, compare_line);
                    while (i < 2)
                    {
                        n = 0;
                        while (n < 3)
                        {
                            if (missing[i] == compare_line[n])
                            {
                                if (i == 0)
                                    array[y][x] = missing[1];
                                else
                                    array[y][x] = missing[0];
                            }
                            n++;
                        }
                        i++;
                    }
                }
            }
            x++;
        }
        y++;
    }
}

void    three_numbers(char **array)
{
    char    county[4];
    char    countx[4];
    int     c;
    int     y;
    int     x;
    int     are_three;
    int     found;
    int     coordy;
    int     coordx;

    
    c = '1';
    while(c < '5')
    {   
        are_three = 0;
        y = 0;
        while(y < 4)
        {
            x = 0;
            found = 0;
            while (x < 4)
            {
                if (array[y][x] == c)
                {
                    countx[x] = '1';
                    found = 1;
                    are_three++;
                }
                x++;
            }
            if (found == 1)
                county[y] = '1';
            y++;
        }
        y = 0;
        x = 0;
        if(are_three == 3)
        {
            while (y < 4)
            {
                if (county[y] != '1')
                    coordy = y;
                y++;
            }
            while (x < 4)
            {
                if (countx[x] != '1')
                    coordx = x;
                x++;
            }
            array[coordy][coordx] = c;
        }
        c++;
    }
}
