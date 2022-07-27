#include <stdio.h>
#include <stdbool.h>

int main(){
//Looping statements 

//  - for loop - 
for (int count = 0; count <= 10; ++count){ //if loop control variable (++count) remains unmodified, the loop becomes infinite.
    printf("\n%d", count);
}

printf("\nMultiplication Loop:");

for(int i=1, j=2; i<=5; ++i, j += 2){ //Multiple variables can be defigned in the loop
    printf("\n%d",(i*j));
}

//for(;;){printf("hello")}; runs forever. DONT RUN THIS.

unsigned int number;
unsigned long long sum = 0ll;
printf("\nEnter the number of integers you want to sum: ");
scanf(" %u", &number);
for(unsigned int i = 1; i <= number; sum += i++); //iterates from 1, adding each number to sum until it reaches number.
printf("\nTotal of the first %u numbers is %llu\n", number, sum);

// - while loop -
int f = 0;
while (f <=5){ //same as for(;test;)
    printf("%i\n", f);
    ++f;
}

// - do...while loop -
long int input_pwd;
long int pwd = 19304853;
int tries = 0;
do { //will always execute once. avoid using this loop.
    printf("\nPlease enter password: ");
    scanf(" %ld", &input_pwd);
    ++tries;
} while ((input_pwd != pwd) && (tries <= 5));
if(input_pwd == pwd){
    printf("\nWelcome, user.\n");
} else{
    printf("\nTries exceeded. Go away.\n");
}

// - nested loop - 

for(int x = 1; x <=10; ++x){
    sum = 0;
    for(int y = 1; y<=x; ++y){
        sum += y;
    }
    printf("\n%d\t%d",x,sum);
}

// - loop control statements -

// continue - skips an iteration

enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

for(enum Day day = Monday; day <=Sunday; ++day){
    if(day == Wednesday){
        printf("\nIt is Wednesday");
        continue;
    }
    printf("\nIt is not Wednesday.");
}

// break - breaks out of the loop
int q, p = 1;

while(p > 0){
    printf("\n%d",p);
    scanf("\n%d", &q);
    while(q >0){
        printf("\n%d", (q*p));
        if(q >100){
            break; //break from inner loop
        }
        scanf("\n%d", &q);
    }
    if(q >100){
            break; //break from outer loop
    }
}

    return 0;
}
