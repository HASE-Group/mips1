// Project:	MIPS 
// Entity	Global Functions
// File	globals_fns.h
// Date:	27 Jul 2004
class scoreboard;  // Units are declared here to allow forward references
class control_box;    // between them. HASE automatically declares them from
class clock;       // the mips.edl file, but in sequence, only allowing
class registers;   // backward references.
class memory;
class instr_fetch;
class instr_decode;
class int_exe;
class execute;
class mem_access;
class write_back;


//Additional methods which type convert inputs and send to above methods
int BitOp(int a, int b, char op);
int BitShiftRight(int a, int shift);
int BitShiftLeft(int a, int shift);

int pow(int, int);  // forms exponential without using doubles


struct t_reg_args {
  char type;       // Either R or F
  int  number;     // Register number
  int  index;	   // Offset (if any)
};

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





