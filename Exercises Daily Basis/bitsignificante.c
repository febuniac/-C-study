#include <stdio.h>

int comprime (unsigned char pixel[4]){
    unsigned short s1 = pixel[0];
    unsigned short s2 = pixel[1];
    unsigned short s3 = pixel[2];
    unsigned short s4 = pixel[3];
    unsigned short resposta;
    s1= (s1>>4)<<12;//desloca 4 e volta 12 bits na memoria
    s2= (s2>>4)<<8; //desloca 4 e volta 8 bits
    s3= (s3>>4)<<4;//desloca 4 e volta 4 bits
    s4= (s4>>4); //desloca 4 e volta 0 bits
    resposta = s1|s2|s3|s4;
    return resposta;
}


int main(int argc, char **argv){
    unsigned char pixel[4]= {0x12,0x34,0x56,0x78};
    unsigned short pixel_comprimido;
    pixel_comprimido= comprime(pixel);
    printf("%x \n",pixel_comprimido);
    
    
}