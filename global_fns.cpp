int pow(int base, int exp)
{
	int res=1;
	for (int i=0; i<exp; i++) 
		res *= base;
	return res;
}

t_reg_args Decode_Register(char *Input_Reg)
{
	t_reg_args new_reg;

	if (Input_Reg[0]=='R')
	{
		new_reg.type='R';
		new_reg.number=atoi(Input_Reg+1);
		new_reg.index=0;
	} 
	else
	{
		char temp_str[100];
		strcpy(temp_str,Input_Reg);
		char *str1=strstr(Input_Reg,"(");
		str1[0]='\0';
		new_reg.index=atoi(temp_str);
		char *str2=str1+1;
		if (str2[0]=='R')
		{new_reg.type='R';}

		str2++;
		str2[strlen(str2)-1]='\0';
		new_reg.number=atoi(str2);
	}
	return new_reg;
}

int is_a_function(t_mips_instrn_set Instruction)
{
	if (Instruction.function == t_mips_instrn_set::VOID
			|| Instruction.function == t_mips_instrn_set::LB
			|| Instruction.function == t_mips_instrn_set::LBU
			|| Instruction.function == t_mips_instrn_set::LUI
			|| Instruction.function == t_mips_instrn_set::SB
			|| Instruction.function == t_mips_instrn_set::LH
			|| Instruction.function == t_mips_instrn_set::LHU
			|| Instruction.function == t_mips_instrn_set::SH
			|| Instruction.function == t_mips_instrn_set::LW
			|| Instruction.function == t_mips_instrn_set::SW
			|| Instruction.function == t_mips_instrn_set::ADDI
			|| Instruction.function == t_mips_instrn_set::ADDIU
			|| Instruction.function == t_mips_instrn_set::SLTI
			|| Instruction.function == t_mips_instrn_set::SLTIU
			|| Instruction.function == t_mips_instrn_set::ADD
			|| Instruction.function == t_mips_instrn_set::ADDU
			|| Instruction.function == t_mips_instrn_set::SUB
			|| Instruction.function == t_mips_instrn_set::SUBU
			|| Instruction.function == t_mips_instrn_set::SLT
			|| Instruction.function == t_mips_instrn_set::SLTU
			|| Instruction.function == t_mips_instrn_set::AND
			|| Instruction.function == t_mips_instrn_set::ANDI
			|| Instruction.function == t_mips_instrn_set::OR
			|| Instruction.function == t_mips_instrn_set::ORI
			|| Instruction.function == t_mips_instrn_set::XOR
			|| Instruction.function == t_mips_instrn_set::XORI
			|| Instruction.function == t_mips_instrn_set::NOR
			|| Instruction.function == t_mips_instrn_set::SLL
			|| Instruction.function == t_mips_instrn_set::SRL
			|| Instruction.function == t_mips_instrn_set::SRA
			|| Instruction.function == t_mips_instrn_set::SLLV
			|| Instruction.function == t_mips_instrn_set::SRLV
			|| Instruction.function == t_mips_instrn_set::SRAV
			|| Instruction.function == t_mips_instrn_set::J
			|| Instruction.function == t_mips_instrn_set::JR
			|| Instruction.function == t_mips_instrn_set::BEQ
			|| Instruction.function == t_mips_instrn_set::BNE		
			|| Instruction.function == t_mips_instrn_set::BLEZ
			|| Instruction.function == t_mips_instrn_set::BGTZ
			|| Instruction.function == t_mips_instrn_set::BLTZ
			|| Instruction.function == t_mips_instrn_set::BGEZ
			|| Instruction.function == t_mips_instrn_set::BREAK
			|| Instruction.function == t_mips_instrn_set::NOP
)
			return 1;
	return 0;
}
