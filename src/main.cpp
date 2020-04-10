#ifdef ESP_32
#include <Arduino.h>
#endif

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

#include "samlib.h"

#ifdef ESP_32

int n = 2;
char *a[5] = {"sam", "I am Sam."};

void setup()
{
    Serial.begin(921600);
    sam(n, a);
}
void loop() {}

#else

int main(int argc, char **argv)
{
    return sam(argc,argv);
}

#endif
