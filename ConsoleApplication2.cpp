#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;




void Func(FILE* Text)
{
    FILE* C_file = fopen("copytext.txt", "w");
    int Lines = 1;
    char str[1000];
 
   
    while (fgets(str, sizeof(str), Text) != NULL) 
    {
        if (Lines % 2 != 0) 
        {
            fputs(str, C_file);
        }
        Lines++;
    }
    
    fclose(C_file);
}
       
   
int main() {
    setlocale(0, "RU");
    
    FILE* file = fopen("text.txt", "w");
    fprintf(file, "Съешь\nже\nещё\nэтих\nмягких\nфранцузских\nбулок,\nда\nвыпей\nчаю\nВедь\nэто\nтак\nвкусно.\nПривет,\nМир!Как\nдела?Что\nты\nделаешь?\nПока,\nпока" );
    fclose(file);
    
    file = fopen("text.txt", "r");
    Func(file);
    fclose(file);
}
