// Project:	MIPS 
// Entity	Global Functions
// File	globals_fns.h
// Date:	27 Jul 2004


//Additional methods which type convert inputs and send to above methods
int BitOp(int a, int b, char op);
int BitShiftRight(int a, int shift);
int BitShiftLeft(int a, int shift);

int pow(int, int);  // forms exponential without using doubles

class t_reg_args Decode_Register(char *Instruction);

int Decode_LOAD(t_mips_instrn_set Instruction);

int Decode_STORE(t_mips_instrn_set Instruction);

int Decode_MOVE(t_mips_instrn_set Instruction);

int Decode_ALU(t_mips_instrn_set Instruction);

int Decode_ALUI(t_mips_instrn_set Instruction);

int Decode_JIMM(t_mips_instrn_set Instruction);

int Decode_BRNC(t_mips_instrn_set Instruction);

int Decode_DBL(t_mips_instrn_set Instruction);

int is_a_function(t_mips_instrn_set Instruction);





