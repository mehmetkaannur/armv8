#include "emulator.h"

typedef unsigned long ulong;

extern bool exec_branch_instr(emulstate state, ulong raw);

extern ullong sign_extend_64bit(ullong n, int sign_bit);