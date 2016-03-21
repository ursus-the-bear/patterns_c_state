//
//  main.c
//  patterns_c_state
//
//  Created by ursus on 21.03.16.
//  Copyright © 2016 Ursus Schneider. All rights reserved.
//

#include <stdio.h>

typedef struct watchState_t * watchStatePtr;
typedef void (* EventStartFunction)(watchStatePtr);
typedef void (* EventStopFunction)(watchStatePtr);

typedef struct _watchState {
    
    EventStartFunction start;
    EventStopFunction stop;
    
} watchState_t;

static void defaultStart (watchStatePtr state) {
    printf ("in default start\n");
}

static void defaultStop (watchStatePtr state) {
    printf ("in default stop\n");
}

void defaultImplementation (watchStatePtr state) {
    
    state->start = &defaultStart;
    state->stop = &defaultStop;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
