// search for a value in a list
int x[15];
int val;
int i;
int FLAG;
FLAG = 0;
int test_flag;

for (i=0; i<15; i++) {
    x[i] = i*57%15;
}

val = 256;

// put the value to find in the list
x[12] = val;

// search
for (i=0; i<15; i++){
    if (x[i] == val) {
        FLAG = 1;
        }
}

test_flag = FLAG;