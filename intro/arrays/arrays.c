#include <stdio.h>

int main(){

    // - declaring and assigning values

    int numbers[10]; //declaring an array
    
    numbers[0] = 5; //assigning values to an array
    numbers[1] = 10;
    
    // - indexing an array - 
    printf("The 2nd item in the array is: %d", numbers[1]); //indexing into 2nd element. Indexes 0-9 are valid in this array.

    //Compiler will not compile with an array out of bounds error.

    //sum and average with array
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0;

    printf("\nEnter 10 grades:\n");

    for(int i=0; i<count; i++){
        printf("Student %d: ",i+1);
        scanf("%d", &grades[i]); //assigning input to array
        sum += grades[i]; 
    }

    average = (float)sum/count;
    printf("\nThe average of your ten grades is: %.2f\n \nThe grades are: ",average);

    for(int i=0; i<count; i++){
        printf("%d, ",grades[i]); //printing out the entire array
    }

    // - initializing an array -
    int defined[5] = {1,2,3,4,5};
    printf("\n\nThird Number: %d\n",defined[2]);
    

    float sample_data[100] = {99.9, 88.7, 93.2}; //The rest of these values will be 0.0
    printf("\n\nIndex 1: %.3f\nIndex 10: %f", sample_data[1], sample_data[10]);

    // - designated initializers - 
    float designated[99] = {[2] = 300.2, [0] = 4.22, [83] = 10.0}; //sets values 3, 1, and 84 to designated numbers

    int days[12] = {31, 28, [4]=31, 30, 31, [1] = 29}; //[1] = 29 will overwrite the 28. Will become 0->31, 1->29, 4->31, 5->30, 6->31

    //no shortcuts are provided for declaring arrays all of the same count

    int samecount[500];

    for(int i=0; i<500; i++){
        samecount[i] = 99; //quickest way to declare an array with all the same value (99)
    }

    // - multidimentional arrays -

    int matrix[4][5] = {//the array matrix is a two dimentional array consisting of 4 rows and 5 columns
        {1,2,10,4,5},
        {9,1,11,12,40},
        {3,0,1,5,8},
        {4,3,2,1,1}
    };

    int identity[3][3] = {[0][0]=1,[1][1]=1,[2][2]=1}; //this is the identity matrix

    printf("\n\n3x3 Identity array: \n\n");
    for(int x=0; x<3; x++){
        for(int y=0;y<3;y++){
            printf("%d ", identity[x][y]);
        }
        printf("\n");
    }

    //these dimentions stack accordingly for 3 dimentional arrays

    // - variable length arrays -
    int length = 10;
    int variable_length[length];
    
    //not allowed: float a[0];, float a[-2], float a[2.5];

//prime numbers challenge
    // printf("Printing primes");
    // int primes[100] = {2,3};

    // int i;
    // int index = 1;
    // for(int p=5;p<100;p++){
    //     i = 0;
    //     printf("Checking %d", p);
    //     while(p/primes[i] <=primes[i]){ 
    //         if(p % primes[i] == 0){
    //             continue;
    //         }
    //     }
    //     ++index;
    //     primes[index] = p;
    // }

    // printf("Primes from 0-100: ");
    // for(int j = 0; j <= index; j++){
    //     printf("%d, ", primes[j]);
    // }
    return 0;
} 