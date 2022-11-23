https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/**********************************************
        CS415  Project 2
        Spring  2019
        Student Version
**********************************************/

#ifndef _INSTRUCTION_H_
#define _INSTRUCTION_H_

#define NOLABEL -1
#define EMPTY 0
#define STATIC_AREA_ADDRESS 1024
#define MAX_VIRTUAL_REGISTERS 4096

typedef enum opcode_name {NOP=0, ADDI, ADD, SUBI, SUB, MULT, 
	                  LOADI, LOAD, LOADAI, LOADAO, 
                          STORE, STOREAI, STOREAO, 
			  BR, CBR, CMPLT, CMPLE, CMPEQ, CMPNE, CMPGE, CMPGT,
			  OUTPUTAI, AND_INSTR, OR_INSTR} Opcode_Name;
extern 
FILE *outfile;

extern
int NextRegister();

extern
int NextLabel();

extern
int NextOffset(int units); /* units of 4 bytes */

extern
void emitComment(char *comment);

extern 
void emit(int label_index, 
	  Opcode_Name opcode, 
	  int field1, 
	  int field2, 
	  int field3);


#endif /* _INSTRUCTION_H_ */




