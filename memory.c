#include <stdio.h>

typedef unsigned char byte;         // 8 bit
typedef unsigned short int word;    // 16 bit
typedef word address;               // 16 bit

#define MEMSIZE (64*1024)

byte mem[MEMSIZE];

void byte_write(byte b, address adr);
byte byte_read(address adr);
void word_write(word w, address adr);
word word_read(address adr);

int main()
    {
    byte b0 = 0x0a;
    byte_write(b0, 2);

    byte res = byte_read(2);

    printf("b0 = %02hx and res = %02hx", b0, res);

    return 0;
    }

void byte_write(byte b, address adr)
    {
    mem[adr] = b;
    }

byte byte_read(address adr)
    {
    return mem[adr];
    }
