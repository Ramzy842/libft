#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"libft.h"


    int bidaya(const char *phrase, const char *set){
        int found;
        int start = 0;
        int finish = strlen(phrase)-1;
        size_t j;

    while (start<finish){
        found=0;
        j=0;
        while (j<strlen(set)){
            if (phrase[start]==set[j]) 
            {
                found=1;
                break;
            }
            j++;}
        if (found==0) 
			break;
        start++;
        }
        return (start);
    }
    int nihaya(const char *phrase, const char *set){
    int found;
        //int start = 0;
        int finish = strlen(phrase)-1;
        size_t j;
    while (0<finish){
        found=0;
        j=0;
        while (j<strlen(set)){
            if (phrase[finish]==set[j]) {found=1;
                break;
            }
            j++;}
        if (found==0) break;
        finish--;
        }
        return (finish);
}




char *ft_strtrim(char const *s1, char const *set){

    if(!set || !s1)
        return 0;

int lowel;
int lekher;
int b = 0;
char *natija;
lowel= bidaya(s1,set);
lekher= nihaya(s1,set); 
if(lekher<=lowel)
    return "";
natija=malloc((lekher-lowel)* sizeof(char) + 2);
if (!natija)
return 0;




while (lowel <= lekher)
{
    natija[b]=s1[lowel];
    lowel++;
    b++;
}
natija[b]='\0';
return (natija);




}

int main()
{
    char phrase[]="batman o l3adalfdadd";
    char chr[]="kd333tabm";
    //printf("%d and %d",bidaya(phrase,chr),nihaya(phrase,chr));
    //ft_strtrim(phrase,chr);
    printf("%s",ft_strtrim(phrase,chr));
    }