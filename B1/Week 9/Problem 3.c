#include<stdio.h>
#include<stdlib.h>


int STRCPY(char* str1, char* str2)
{
    int i = 0;
    while(*str1++ = *str2++) i++;
    return i;

}

int STRLEN(char *p)
{
    int i=0;
    while(*p++) i++;

    return i;
}

char* replace(char*str1,char *str2,char*str3,char**S)
{
    int i;

    int k = STRLEN(str2);
    int k1 = STRLEN(str1);
    int k3 = STRLEN(str3);

    char *p = str1 + k;
    int j = 0;
    //char* r = (char*)malloc(sizeof(char))
    char* arr[k1];

    while(*str1)
    {
        i = 0;
        while((*(str1+i) == *(str2+i)) && *(str1+i) && *(str2+i)) i++;

        if(i==k)
        {
            p = str1;
            str1 += i;
            arr[j] = p;
            j++;
        }
        else str1++;

    }

    str1 -= k1;
    //printf(str1);
    int alpha = 0;


    char* ret = (char*)malloc(sizeof(char)*(k1+j*(k3-k)));

    while(*str1)
    {
        if((arr[alpha] == str1) && alpha<j)
        {
            while(*str3)
            {
                *ret = *str3;
                ret++;
                str3++;
                //
            }
            str3-=k3;
            str1+=k;
            //printf("\n%d %s",alpha,str3);
            alpha++;
        }
        else
        {
            *ret = *str1;
            str1++;
            ret++;
        }



    }

    *ret = '\0';

    ret-=(k1+j*(k3-k));
    //while(*ret) printf("%c",*ret);

    *S = ret;
    //S = &ret;

    //STRCPY(str1,ret);









    return ret;

}


int main()
{
    char *p = "This is a book";
    char *q = "is";
    char *r = "was";
    //p=(char*)malloc(sizeof(char)*100000);


    printf(replace(p,q,r,&p));
    //replace(p,q,r,&p);
    printf("\n%s",p);




}
