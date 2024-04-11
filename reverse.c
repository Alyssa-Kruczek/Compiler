// sort a list in reverse order
int x[15];
int y[15];
int max;
int max_index;
int count;
count = 0;
int i;
int j;

for (i = 0; i < 15; i++) {
    x[i] = i;
}


for (i = 0; i < 15; i++) {
    max = x[0];
    for (j = 0; j < 15; j++) {
        if (x[j] > max) {
            max = x[j];
            max_index = j;
        }
    }
    y[i] = max;
    x[max_index] = 0;
}

for (i = 0; i < 15; i++) {
    x[i] = y[i];
}