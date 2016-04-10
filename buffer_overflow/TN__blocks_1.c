
#include <stdio.h>

#define BLOCK_SIZE 32

void encrypt_block(char *p)
{
  int i;
  for(i = 0; i < BLOCK_SIZE; ++i){
    p[i] = (5 * p[i]) % 256;
  }
}

void encrypt_partial_block(char *p, int size)
{
  int i;
  for(i = 0; i < size; ++i){
    p[i] = (5 * p[i]) % 256;
  }
}

void encrypt_buffer(char *t, int size)
{
  int nb_blocks = size / BLOCK_SIZE;
  int remaining_size = size - nb_blocks * BLOCK_SIZE;
  int i;

  for(i = 0; i < nb_blocks; ++i){
    encrypt_block(&t[i * BLOCK_SIZE]);
  }
  
  encrypt_partial_block(&t[i * BLOCK_SIZE], remaining_size);
}

void main(void)
{
  int i;
  char t1[125];
  char t2[237];
  for(i = 0; i < 125; ++i){
    t1[i] = i % 12345 * i % 5432;}
  encrypt_buffer(t1, 125);
  
  for(i = 0; i < 237; ++i){
    t2[i] = i % 12345 * i % 5432;}
  encrypt_buffer(t2, 237);
}
