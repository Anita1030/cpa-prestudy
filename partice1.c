#include<stdio.h>

int isLower(char letter){
    if(letter >= 'a'&& letter<='z'){
        return 1;
    }else{
        return 0;
    }
    }

    char toUpper(char letter2){
      if(letter2 >= 'a'&& letter2<='z'){
        return letter2-32//change uppercase
      } else{
        return letter2; // no change uppercase
      }

    }

    int biggest(int first, int second, int third){
        int max = first;
           max = second;
    }
         if (third > max){
            max = third;
         }
         return max;
        }

    