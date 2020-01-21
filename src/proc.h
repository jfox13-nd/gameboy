#ifndef PROC_H
#define PROC_H

#include <stdint.h>

#define MEM_SIZE (1 << 13)

typedef struct {
    uint8_t memory[MEM_SIZE];

    uint16_t pc;
    uint16_t sp;
} proc;

proc*          proc_create();
void           proc_delete(proc* p);
void           proc_handle_word(proc *p);

#endif