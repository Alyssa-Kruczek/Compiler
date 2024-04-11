// file to test the that everything compiles
int x;
int y[5];
int i;
int t;

x = 7;

for (i=0; i<5; ++i) {
    y[i-1] = i;
}

if (x > y[3]){
    t = 1;
}
else {t=0;}

while (x<10) {
    x++;
    t += x;
}

do {
    t -= x%3;
    x--;
} 
while (x>5);
