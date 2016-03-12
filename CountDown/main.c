//
//  main.c
//  CountDown
//
//  Created by Cordavi on 1/15/16.
//  Copyright © 2016 Cordavi. All rights reserved.
//

#import <readline/readline.h>
#import <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    
    printf("Where should I start counting ?");
    const char *userStartingNumber = readline(NULL);
    
    int startingNumber = atoi(userStartingNumber);
    
    for (int i = startingNumber; i > 0; i--) {
     if (i % 3 == 0) {
            printf("%d\n", i);
         if (i % 5 == 0) {
                printf("Found one!\n");
         }
     }
        
      
    }
    
    return 0;
}
