#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float average(float * n, int i){ //Function of question 2
    int media = 0;
    for(int j = 0; j<=i; j++){
        media = media + n[j];
    }
    
    return(media/i);
} 

float variance(float * n, int i){ //Function of question 3
    int var = 0, v = 0;
    int media = average(n, i);
    for(int j = 0; j <= i; j++){
        v = pow((n[j] - media), 2);
        var = var + v;
    }
    return (var/i);
}

float bigger(float * n, int i){ //Function of question 4 
    int big = n[0];
    for (int j = 1; j <= i; j++){
        if (big < n[j]){
            big = n[j];
        }
    }
    return big;
}

float smaller(float * n, int i){ //Funtion of question 5
    int small = n[0];
    for(int j = 1; j<=i; j++){
        if(small > n[j]){
            small = n[j];
        }
    }
    return small;
}

float scalar_product(float * n, float * s,int i){ //Function of question 6
    int result = 0;
    for (int j = 0; j <= i; j++){
        result += n[j] * s[j];
    }
    
    return result;
}

int main(){

    //Question 1

    FILE * numbers = fopen("numbers.txt", "r+t");
    
    if(numbers == NULL){
        printf("\n Error while opening the file.\n");
        return 1;
    }

    float n[1000]; 
    int num, i=0;
    
    while(!feof(numbers)){
        fscanf(numbers, "%d", &num);
        n[i] = num;
        i++;
    }

    printf(" 1 - That's the number sequence in the file: ");

    for(int j = 0; j < i; j++){
        printf(" %.1f -", n[j]);
    }

    printf("\n");

    fclose(numbers);

    //Question 2

    printf(" 2 - The average is: %.1f\n", average(n, i));
    
    //Question 3

    printf(" 3 - The variance is: %.1f\n", variance(n, i));

    //Question 4

    printf(" 4 - The bigger number in the sequence is: %.1f\n", bigger(n, i));

    //Question 5

    printf(" 5 - The smaller number in the sequence is: %.1f\n", smaller(n, i));

    //Question 6

    FILE * numbers2 = fopen("numbers2.txt", "r");

    if(numbers2 == NULL){
        fclose(numbers);
        printf("\n Error while opening the file.\n");
        return 1;
    }

    float s[1000]; 
    int j=0;

    while(!feof(numbers2)){
        fscanf(numbers2, "%d", &num);
        n[j] = num;
        j++;
    }

    printf(" 6 - The scalar product is: %.1f\n", scalar_product(n, s, i));

    fclose(numbers2);

    return 0;
}