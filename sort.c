// sort a list
int x[15];
int y[15];
int min_index;
int t;
int i;
int j;

// create a list
for (i=0; i<15; i++) {
    x[i] = i%5+1;
}


// sort
for (i=0; i<15; i++) {
    min_index = i;
    for (j=i; j<15; j++) {
        if (x[j]<=x[min_index]) {
            min_index = j;
        }
    }
    t = x[i];
    x[i] = x[min_index];
    x[min_index] = t;
}


// fill a new list to see the sorted list moving in the registers     
for (i=0; i<15; i++) {
    y[i]=x[i];
}