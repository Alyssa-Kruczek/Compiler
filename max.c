// find the max value in a list
int x[15];
int max;
int i;
int test_max;

// fill a list with values
for (i=0; i<15; i++) {
    x[i] = i;
}

x[9] = 256;

max = x[0];

// find the max
for (i=0; i<15; i++) {
    if (x[i]>max) {
        max = x[i];
        }
}

// move the variable to see the max value in the register
test_max = max;