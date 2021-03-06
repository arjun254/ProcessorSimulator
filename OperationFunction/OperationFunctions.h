#ifndef _OPERATION_FUNCTIONS_H_
#define _OPERATION_FUNCTIONS_H_

#include <Global\Global.h>
#include <State\State.h>

namespace opfun
{

	// data transfer
	// MOVE R,R ---------------------------------------------------------------------------
	void mov_a_a(State* s)
	{
		s->a = s->a;
		s->pc += 1;
	}
	
	void mov_a_b(State* s)
	{
		s->a = s->b;
		s->pc += 1;
	}

	void mov_a_c(State* s)
	{
		s->a = s->c;
		s->pc += 1;
	}

	void mov_a_d(State* s)
	{
		s->a = s->d;
		s->pc += 1;
	}

	void mov_a_e(State* s)
	{
		s->a = s->e;
		s->pc += 1;
	}

	void mov_a_h(State* s)
	{
		s->a = s->h;
		s->pc += 1;
	}

	void mov_a_l(State* s)
	{
		s->a = s->l;
		s->pc += 1;
	}

	void mov_b_a(State* s)
	{
		s->b = s->a;
		s->pc += 1;
	}

	void mov_b_b(State* s)
	{
		s->b = s->b;
		s->pc += 1;
	}

	void mov_b_c(State* s)
	{
		s->b = s->c;
		s->pc += 1;
	}

	void mov_b_d(State* s)
	{
		s->b = s->d;
		s->pc += 1;
	}

	void mov_b_e(State* s)
	{
		s->b = s->e;
		s->pc += 1;
	}

	void mov_b_h(State* s)
	{
		s->b = s->h;
		s->pc += 1;
	}

	void mov_b_l(State* s)
	{
		s->b = s->l;
		s->pc += 1;
	}

	void mov_c_a(State* s)
	{
		s->c = s->a;
		s->pc += 1;
	}
	
	void mov_c_b(State* s)
	{
		s->c = s->b;
		s->pc += 1;
	}

	void mov_c_c(State* s)
	{
		s->c = s->c;
		s->pc += 1;
	}

	void mov_c_d(State* s)
	{
		s->c = s->d;
		s->pc += 1;
	}

	void mov_c_e(State* s)
	{
		s->c = s->e;
		s->pc += 1;
	}

	void mov_c_h(State* s)
	{
		s->c = s->h;
		s->pc += 1;
	}

	void mov_c_l(State* s)
	{
		s->c = s->l;
		s->pc += 1;
	}

	void mov_d_a(State* s)
	{
		s->d = s->a;
		s->pc += 1;
	}

	void mov_d_b(State* s)
	{
		s->d = s->b;
		s->pc += 1;
	}

	void mov_d_c(State* s)
	{
		s->d = s->c;
		s->pc += 1;
	}

	void mov_d_d(State* s)
	{
		s->d = s->d;
		s->pc += 1;
	}

	void mov_d_e(State* s)
	{
		s->d = s->e;
		s->pc += 1;
	}

	void mov_d_h(State* s)
	{
		s->d = s->h;
		s->pc += 1;
	}

	void mov_d_l(State* s)
	{
		s->d = s->l;
		s->pc += 1;
	}

	void mov_e_a(State* s)
	{
		s->e = s->a;
		s->pc += 1;
	}

	void mov_e_b(State* s)
	{
		s->e = s->b;
		s->pc += 1;
	}

	void mov_e_c(State* s)
	{
		s->e = s->c;
		s->pc += 1;
	}

	void mov_e_d(State* s)
	{
		s->e = s->d;
		s->pc += 1;
	}

	void mov_e_e(State* s)
	{
		s->e = s->e;
		s->pc += 1;
	}

	void mov_e_h(State* s)
	{
		s->e = s->h;
		s->pc += 1;
	}

	void mov_e_l(State* s)
	{
		s->e = s->l;
		s->pc += 1;
	}

	void mov_h_a(State* s)
	{
		s->h = s->a;
		s->pc += 1;
	}

	void mov_h_b(State* s)
	{
		s->h = s->b;
		s->pc += 1;
	}

	void mov_h_c(State* s)
	{
		s->h = s->c;
		s->pc += 1;
	}

	void mov_h_d(State* s)
	{
		s->h = s->d;
		s->pc += 1;
	}

	void mov_h_e(State* s)
	{
		s->h = s->e;
		s->pc += 1;
	}

	void mov_h_h(State* s)
	{
		s->h = s->h;
		s->pc += 1;
	}

	void mov_h_l(State* s)
	{
		s->h = s->l;
		s->pc += 1;
	}

	void mov_l_a(State* s)
	{
		s->l = s->a;
		s->pc += 1;
	}

	void mov_l_b(State* s)
	{
		s->l = s->b;
		s->pc += 1;
	}

	void mov_l_c(State* s)
	{
		s->l = s->c;
		s->pc += 1;
	}

	void mov_l_d(State* s)
	{
		s->l = s->d;
		s->pc += 1;
	}

	void mov_l_e(State* s)
	{
		s->l = s->e;
		s->pc += 1;
	}

	void mov_l_h(State* s)
	{
		s->l = s->h;
		s->pc += 1;
	}

	void mov_l_l(State* s)
	{
		s->l = s->l;
		s->pc += 1;
	}

	// MOV M,R ----------------------------------------------------------------------------------------------------

	void mov_m_a(State* s)
	{
		s->GetM().byte = s->a;
		s->pc += 1;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	void mov_m_b(State* s)
	{
		s->GetM().byte = s->b;
		s->pc += 1;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	void mov_m_c(State* s)
	{
		s->GetM().byte = s->c;
		s->pc += 1;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	void mov_m_d(State* s)
	{
		s->GetM().byte = s->d;
		s->pc += 1;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	void mov_m_e(State* s)
	{
		s->GetM().byte = s->e;
		s->pc += 1;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	void mov_m_h(State* s)
	{
		s->GetM().byte = s->h;
		s->pc += 1;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	void mov_m_l(State* s)
	{
		s->GetM().byte = s->l;
		s->pc += 1;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	// MOV R,M ---------------------------------------------------------------------------------

	void mov_a_m(State* s)
	{
		s->a = s->GetM().byte;
		s->pc += 1;
	}

	void mov_b_m(State* s)
	{
		s->b = s->GetM().byte;
		s->pc += 1;
	}

	void mov_c_m(State* s)
	{
		s->c = s->GetM().byte;
		s->pc += 1;
	}

	void mov_d_m(State* s)
	{
		s->d = s->GetM().byte;
		s->pc += 1;
	}

	void mov_e_m(State* s)
	{
		s->e = s->GetM().byte;
		s->pc += 1;
	}

	void mov_h_m(State* s)
	{
		s->h = s->GetM().byte;
		s->pc += 1;
	}

	void mov_l_m(State* s)
	{
		s->l = s->GetM().byte;
		s->pc += 1;
	}

	// MVI R/M ----------------------------------------------------------------------------------
	void mvi_a(State* s, Byte operand)
	{
		s->a = operand;
		s->pc += 2;
	}

	void mvi_b(State* s, Byte operand)
	{
		s->b = operand;
		s->pc += 2;
	}

	void mvi_c(State* s, Byte operand)
	{
		s->c = operand;
		s->pc += 2;
	}

	void mvi_d(State* s, Byte operand)
	{
		s->d = operand;
		s->pc += 2;
	}

	void mvi_e(State* s, Byte operand)
	{
		s->e = operand;
		s->pc += 2;
	}

	void mvi_h(State* s, Byte operand)
	{
		s->h = operand;
		s->pc += 2;
	}

	void mvi_l(State* s, Byte operand)
	{
		s->l = operand;
		s->pc += 2;
	}

	void mvi_m(State* s, Byte operand)
	{
		s->GetM().byte = operand;
		s->pc += 2;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	// LOAD --------------------------------------------------------------------------

	void lda(State* s, Word operand)
	{
		s->a = s->m[(size_t)operand].byte;
		s->pc += 3;
	}

	void ldax_bc(State* s)
	{
		s->a = s->m[(size_t)((s->b << 8) + s->c)].byte;
		s->pc += 1;
	}

	void ldax_de(State* s)
	{
		s->a = s->m[(size_t)((s->d << 8) + s->e)].byte;
		s->pc += 1;
	}

	void lhld(State* s, Word operand)
	{
		s->l = s->m[(size_t)operand].byte;
		s->h = s->m[(size_t)((Word)(operand + 0x0001))].byte;
		s->pc += 3;
	}

	void lxi_bc(State* s, Word operand)
	{
		s->c = operand;
		s->b = operand >> 8;
		s->pc += 3;
	}

	void lxi_de(State* s, Word operand)
	{
		s->e = operand;
		s->d = operand >> 8;
		s->pc += 3;
	}

	void lxi_hl(State* s, Word operand)
	{
		s->l = operand;
		s->h = operand >> 8;
		s->pc += 3;
	}

	void lxi_sp(State* s, Word operand)
	{
		s->sp = operand;
		s->pc += 3;
	}

	// EXCHANGE -----------------------------------------------------------

	void xchg(State* s)
	{
		Byte temp;
		temp = s->d;
		s->d = s->h;
		s->h = temp;
		temp = s->e;
		s->e = s->l;
		s->l = temp;
		s->pc += 1;
	}

	// STORE -----------------------------------------------------------------------------

	void sta(State* s, Word operand)
	{
		size_t index = (size_t)operand;
		s->m[index].byte = s->a;
		s->pc += 3;
		if (s->m[index].isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	void stax_bc(State* s)
	{
		size_t index = (size_t)((s->b << 8) + s->c);
		s->m[index].byte = s->a;
		s->pc += 1;
		if (s->m[index].isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	void stax_de(State* s)
	{
		size_t index = (size_t)((s->d << 8) + s->e);
		s->m[index].byte = s->a;
		s->pc += 1;
		if (s->m[index].isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	void shld(State* s, Word operand)
	{
		size_t index = (size_t)operand;
		size_t next_index = (size_t)((Word)(operand + 0x0001));
		s->m[index].byte = s->l;
		s->m[next_index].byte = s->h;
		s->pc += 3;
		if (s->m[index].isCode || s->m[next_index].isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
	}

	// logical

	void ana_a(State* s) // 0xa7
	{
		s->cf = false;
		s->SetAuxCarryDueToAnd(s->a);
		s->a = s->a & s->a;	
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ana_b(State* s) // 0xa0
	{
		s->cf = false;
		s->SetAuxCarryDueToAnd(s->b);
		s->a = s->a & s->b;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ana_c(State* s) // 0xa1
	{
		s->cf = false;
		s->SetAuxCarryDueToAnd(s->c);
		s->a = s->a & s->c;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ana_d(State* s) // 0xa2
	{
		s->cf = false;
		s->SetAuxCarryDueToAnd(s->d);
		s->a = s->a & s->d;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ana_e(State* s) // 0xa3
	{
		s->cf = false;
		s->SetAuxCarryDueToAnd(s->e);
		s->a = s->a & s->e;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ana_h(State* s) // 0xa4
	{
		s->cf = false;
		s->SetAuxCarryDueToAnd(s->h);
		s->a = s->a & s->h;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ana_l(State* s) // 0xa5
	{
		s->cf = false;
		s->SetAuxCarryDueToAnd(s->l);
		s->a = s->a & s->l;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ana_m(State* s) // 0xa6
	{
		s->cf = false;
		s->SetAuxCarryDueToAnd(s->GetM().byte);
		s->a = s->a & s->GetM().byte;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ani(State* s, Byte operand) // 0xe6
	{
		s->cf = false;
		s->SetAuxCarryDueToAnd(operand);
		s->a = s->a & operand;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 2;
	}

	void ora_a(State* s) // 0xb7
	{
		s->cf = false;
		s->af = false;
		s->a = s->a | s->a;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ora_b(State* s) // 0xb0
	{
		s->cf = false;
		s->af = false;
		s->a = s->a | s->b;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ora_c(State* s) // 0xb1
	{
		s->cf = false;
		s->af = false;
		s->a = s->a | s->c;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ora_d(State* s) // 0xb2
	{
		s->cf = false;
		s->af = false;
		s->a = s->a | s->d;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ora_e(State* s) // 0xb3
	{
		s->cf = false;
		s->af = false;
		s->a = s->a | s->e;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ora_h(State* s) // 0xb4
	{
		s->cf = false;
		s->af = false;
		s->a = s->a | s->h;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ora_l(State* s) // 0xb5
	{
		s->cf = false;
		s->af = false;
		s->a = s->a | s->l;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ora_m(State* s) // 0xb6
	{
		s->cf = false;
		s->af = false;
		s->a = s->a | s->GetM().byte;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void ori(State* s, Byte operand) // 0xf6
	{
		s->cf = false;
		s->af = false;
		s->a = s->a | operand;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void xra_a(State* s) // 0xaf
	{
		s->cf = false;
		s->af = false;
		s->a = s->a ^ s->a;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void xra_b(State* s) // 0xa8
	{
		s->cf = false;
		s->af = false;
		s->a = s->a ^ s->b;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void xra_c(State* s) // 0xa9
	{
		s->cf = false;
		s->af = false;
		s->a = s->a ^ s->c;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void xra_d(State* s) // 0xaa
	{
		s->cf = false;
		s->af = false;
		s->a = s->a ^ s->d;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void xra_e(State* s) // 0xab
	{
		s->cf = false;
		s->af = false;
		s->a = s->a ^ s->e;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void xra_h(State* s) // 0xac
	{
		s->cf = false;
		s->af = false;
		s->a = s->a ^ s->h;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void xra_l(State* s) // 0xad
	{
		s->cf = false;
		s->af = false;
		s->a = s->a ^ s->l;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void xra_m(State* s) // 0xae
	{
		s->cf = false;
		s->af = false;
		s->a = s->a ^ s->GetM().byte;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}
	void xri(State* s, Byte operand) // 0xee
	{
		s->cf = false;
		s->af = false;
		s->a = s->a ^ operand;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 2;
	}

	// rotate

	void ral(State* s) //0x17
	{
		s->cf = ((s->a & 0x80) == 0x80);
		s->a = (s->a << 1);
		s->pc += 1;
	}
	void rar(State* s) //0x1f
	{
		s->cf = ((s->a & 0x01) == 0x01);
		s->a = (s->a >> 1);
		s->pc += 1;
	}
	void rlc(State* s) //0x07
	{
		s->cf = ((s->a & 0x80) == 0x80);
		s->a = (s->a << 1);
		if (s->cf == true)
			s->a = s->a | 0x01; // set bit 0
		s->pc += 1;
	}
	void rrc(State* s) //0x0f
	{
		s->cf = ((s->a & 0x01) == 0x01);
		s->a = (s->a >> 1);
		if (s->cf == true)
			s->a = s->a | 0x80; // set bit 7
		s->pc += 1;
	}

	// complement, carry
	void cma(State* s) // 0x2f
	{
		s->a = ~(s->a);
		s->pc += 1;
	}
	void cmc(State* s) // 0x3f
	{
		s->cf = !(s->cf);
		s->pc += 1;
	}
	void stc(State* s) // 0x37
	{
		s->cf = true;
		s->pc += 1;
	}

	// stack
	void push_b(State* s) // 0xc5
	{
		s->sp -= 1;
		s->GetST().byte = s->b;
		s->sp -= 1;
		s->GetST().byte = s->c;
		s->pc += 1;
	}
	void push_d(State* s) // 0xd5
	{
		s->sp -= 1;
		s->GetST().byte = s->d;
		s->sp -= 1;
		s->GetST().byte = s->e;
		s->pc += 1;
	}
	void push_h(State* s) // 0xe5
	{
		s->sp -= 1;
		s->GetST().byte = s->h;
		s->sp -= 1;
		s->GetST().byte = s->l;
		s->pc += 1;
	}
	void push_psw(State* s) // 0xf5
	{
		s->sp -= 1;
		s->GetST().byte = s->a;
		s->sp -= 1;
		// condition flag byte
		// S Z 0 A 0 P 1 C
		Byte cfb = 0b00000010;
		if (s->sf == true)
			cfb = cfb | 0b10000000;
		if (s->zf == true)
			cfb = cfb | 0b01000000;
		if (s->af == true)
			cfb = cfb | 0b00010000;
		if (s->pf == true)
			cfb = cfb | 0b00000100;
		if (s->cf == true)
			cfb = cfb | 0b00000001;
		s->GetST().byte = cfb;
		s->pc += 1;
	}
	void pop_b(State* s) // 0xc1
	{
		s->c = s->GetST().byte;
		s->sp += 1;
		s->b = s->GetST().byte;
		s->sp += 1;
		s->pc += 1;
	}
	void pop_d(State* s) // 0xd1
	{
		s->e = s->GetST().byte;
		s->sp += 1;
		s->d = s->GetST().byte;
		s->sp += 1;
		s->pc += 1;
	}
	void pop_h(State* s) // 0xe1
	{
		s->l = s->GetST().byte;
		s->sp += 1;
		s->h = s->GetST().byte;
		s->sp += 1;
		s->pc += 1;
	}
	void pop_psw(State* s) // 0xf1
	{
		// condition flag byte
		// S Z 0 A 0 P 1 C
		Byte cfb = s->GetST().byte;
		s->sf = ((cfb & 0b10000000) != 0x00);
		s->zf = ((cfb & 0b01000000) != 0x00);
		s->af = ((cfb & 0b00010000) != 0x00);
		s->pf = ((cfb & 0b00000100) != 0x00);
		s->cf = ((cfb & 0b00000001) != 0x00);
		s->sp += 1;
		s->a = s->GetST().byte;
		s->sp += 1;
		s->pc += 1;
	}
	void xthl(State* s) // 0xe3
	{
		Byte oldL = s->l;
		Byte oldH = s->h;
		s->l = s->m[(size_t)s->sp].byte;
		s->h = s->m[(size_t)((Word)(s->sp + 0x0001))].byte;
		s->m[(size_t)s->sp].byte = oldL;
		s->m[(size_t)((Word)(s->sp + 0x0001))].byte = oldH;
		s->pc += 1;
	}
	void sphl(State* s) // 0xf9
	{
		s->sp = (s->h << 8) + s->l;
		s->pc += 1;
	}

	//arithmetic

	void add_a(State* s)
	{
		s->SetCarryDueToAdd(s->a);
		s->SetAuxCarryDueToAdd(s->a);
		s->a += s->a;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void add_b(State* s)
	{
		s->SetCarryDueToAdd(s->b);
		s->SetAuxCarryDueToAdd(s->b);
		s->a += s->b;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void add_c(State* s)
	{
		s->SetCarryDueToAdd(s->c);
		s->SetAuxCarryDueToAdd(s->c);
		s->a += s->c;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void add_d(State* s)
	{
		s->SetCarryDueToAdd(s->d);
		s->SetAuxCarryDueToAdd(s->d);
		s->a += s->d;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void add_e(State* s)
	{
		s->SetCarryDueToAdd(s->e);
		s->SetAuxCarryDueToAdd(s->e);
		s->a += s->e;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void add_h(State* s)
	{
		s->SetCarryDueToAdd(s->h);
		s->SetAuxCarryDueToAdd(s->h);
		s->a += s->h;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void add_l(State* s)
	{
		s->SetCarryDueToAdd(s->l);
		s->SetAuxCarryDueToAdd(s->l);
		s->a += s->l;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void add_m(State* s)
	{
		Byte toAdd = s->GetM().byte;
		s->SetCarryDueToAdd(toAdd);
		s->SetAuxCarryDueToAdd(toAdd);
		s->a += toAdd;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void adi(State* s, Byte operand)
	{
		s->SetCarryDueToAdd(operand);
		s->SetAuxCarryDueToAdd(operand);
		s->a += operand;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 2;
	}

	void adc_a(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToAdd(0x01);
			s->SetAuxCarryDueToAdd(0x01);
			s->a += 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToAdd(s->a);
		if (s->af == false)
			s->SetAuxCarryDueToAdd(s->a);
		s->a += s->a;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void adc_b(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToAdd(0x01);
			s->SetAuxCarryDueToAdd(0x01);
			s->a += 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToAdd(s->b);
		if (s->af == false)
			s->SetAuxCarryDueToAdd(s->b);
		s->a += s->b;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void adc_c(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToAdd(0x01);
			s->SetAuxCarryDueToAdd(0x01);
			s->a += 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToAdd(s->c);
		if (s->af == false)
			s->SetAuxCarryDueToAdd(s->c);
		s->a += s->c;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void adc_d(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToAdd(0x01);
			s->SetAuxCarryDueToAdd(0x01);
			s->a += 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToAdd(s->d);
		if (s->af == false)
			s->SetAuxCarryDueToAdd(s->d);
		s->a += s->d;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void adc_e(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToAdd(0x01);
			s->SetAuxCarryDueToAdd(0x01);
			s->a += 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToAdd(s->e);
		if (s->af == false)
			s->SetAuxCarryDueToAdd(s->e);
		s->a += s->e;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void adc_h(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToAdd(0x01);
			s->SetAuxCarryDueToAdd(0x01);
			s->a += 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToAdd(s->h);
		if (s->af == false)
			s->SetAuxCarryDueToAdd(s->h);
		s->a += s->h;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void adc_l(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToAdd(0x01);
			s->SetAuxCarryDueToAdd(0x01);
			s->a += 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToAdd(s->l);
		if (s->af == false)
			s->SetAuxCarryDueToAdd(s->l);
		s->a += s->l;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void adc_m(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToAdd(0x01);
			s->SetAuxCarryDueToAdd(0x01);
			s->a += 0x01;
		}

		Byte toAdd = s->GetM().byte;
		if (s->cf == false)
			s->SetCarryDueToAdd(toAdd);
		if (s->af == false)
			s->SetAuxCarryDueToAdd(toAdd);
		s->a += toAdd;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void aci(State* s, Byte operand)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToAdd(0x01);
			s->SetAuxCarryDueToAdd(0x01);
			s->a += 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToAdd(operand);
		if (s->af == false)
			s->SetAuxCarryDueToAdd(operand);
		s->a += operand;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 2;
	}

	void sub_a(State* s)
	{
		s->SetCarryDueToSub(s->a);
		s->SetAuxCarryDueToSub(s->a);
		s->a -= s->a;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 1;
	}

	void sub_b(State* s)
	{
		s->SetCarryDueToSub(s->b);
		s->SetAuxCarryDueToSub(s->b);
		s->a -= s->b;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 1;
	}

	void sub_c(State* s)
	{
		s->SetCarryDueToSub(s->c);
		s->SetAuxCarryDueToSub(s->c);
		s->a -= s->c;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 1;
	}

	void sub_d(State* s)
	{
		s->SetCarryDueToSub(s->d);
		s->SetAuxCarryDueToSub(s->d);
		s->a -= s->d;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 1;
	}

	void sub_e(State* s)
	{
		s->SetCarryDueToSub(s->e);
		s->SetAuxCarryDueToSub(s->e);
		s->a -= s->e;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 1;
	}

	void sub_h(State* s)
	{
		s->SetCarryDueToSub(s->h);
		s->SetAuxCarryDueToSub(s->h);
		s->a -= s->h;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 1;
	}

	void sub_l(State* s)
	{
		s->SetCarryDueToSub(s->l);
		s->SetAuxCarryDueToSub(s->l);
		s->a -= s->l;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 1;
	}

	void sub_m(State* s)
	{
		Byte toSub = s->GetM().byte;
		s->SetCarryDueToSub(toSub);
		s->SetAuxCarryDueToSub(toSub);
		s->a -= toSub;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 1;
	}

	void sui(State* s, Byte operand)
	{
		s->SetCarryDueToSub(operand);
		s->SetAuxCarryDueToSub(operand);
		s->a -= operand;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 2;
	}

	void sbb_a(State* s)
	{
		s->a = 0xff;
		s->cf = true;
		s->af = true;
		s->zf = false;
		s->sf = true;
		s->pf = true;
		s->pc += 1;
	}

	void sbb_b(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToSub(0x01);
			s->SetAuxCarryDueToSub(0x01);
			s->a -= 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToSub(s->b);
		if (s->af == false)
			s->SetAuxCarryDueToSub(s->b);
		s->a -= s->b;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void sbb_c(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToSub(0x01);
			s->SetAuxCarryDueToSub(0x01);
			s->a -= 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToSub(s->c);
		if (s->af == false)
			s->SetAuxCarryDueToSub(s->c);
		s->a -= s->c;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void sbb_d(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToSub(0x01);
			s->SetAuxCarryDueToSub(0x01);
			s->a -= 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToSub(s->d);
		if (s->af == false)
			s->SetAuxCarryDueToSub(s->d);
		s->a -= s->d;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void sbb_e(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToSub(0x01);
			s->SetAuxCarryDueToSub(0x01);
			s->a -= 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToSub(s->e);
		if (s->af == false)
			s->SetAuxCarryDueToSub(s->e);
		s->a -= s->e;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void sbb_h(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToSub(0x01);
			s->SetAuxCarryDueToSub(0x01);
			s->a -= 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToSub(s->h);
		if (s->af == false)
			s->SetAuxCarryDueToSub(s->h);
		s->a -= s->h;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void sbb_l(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToSub(0x01);
			s->SetAuxCarryDueToSub(0x01);
			s->a -= 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToSub(s->l);
		if (s->af == false)
			s->SetAuxCarryDueToSub(s->l);
		s->a -= s->l;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void sbb_m(State* s)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToSub(0x01);
			s->SetAuxCarryDueToSub(0x01);
			s->a -= 0x01;
		}

		Byte toSub = s->GetM().byte;
		if (s->cf == false)
			s->SetCarryDueToSub(toSub);
		if (s->af == false)
			s->SetAuxCarryDueToSub(toSub);
		s->a -= toSub;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 1;
	}

	void sbi(State* s, Byte operand)
	{
		if (s->cf == true)
		{
			s->SetCarryDueToSub(0x01);
			s->SetAuxCarryDueToSub(0x01);
			s->a -= 0x01;
		}

		if (s->cf == false)
			s->SetCarryDueToSub(operand);
		if (s->af == false)
			s->SetAuxCarryDueToSub(operand);
		s->a -= operand;
		s->SetSf();
		s->SetZf();
		s->SetPf();
		s->pc += 2;
	}

	void inr_a(State* s)
	{
		s->SetAuxCarryDueToAdd(s->a, 0x01);
		s->a += 0x01;
		s->SetPf(s->a);
		s->SetSf(s->a);
		s->SetZf(s->a);
		s->pc += 1;
	}

	void inr_b(State* s)
	{
		s->SetAuxCarryDueToAdd(s->b, 0x01);
		s->b += 0x01;
		s->SetPf(s->b);
		s->SetSf(s->b);
		s->SetZf(s->b);
		s->pc += 1;
	}

	void inr_c(State* s)
	{
		s->SetAuxCarryDueToAdd(s->c, 0x01);
		s->c += 0x01;
		s->SetPf(s->c);
		s->SetSf(s->c);
		s->SetZf(s->c);
		s->pc += 1;
	}

	void inr_d(State* s)
	{
		s->SetAuxCarryDueToAdd(s->d, 0x01);
		s->d += 0x01;
		s->SetPf(s->d);
		s->SetSf(s->d);
		s->SetZf(s->d);
		s->pc += 1;
	}

	void inr_e(State* s)
	{
		s->SetAuxCarryDueToAdd(s->e, 0x01);
		s->e += 0x01;
		s->SetPf(s->e);
		s->SetSf(s->e);
		s->SetZf(s->e);
		s->pc += 1;
	}

	void inr_h(State* s)
	{
		s->SetAuxCarryDueToAdd(s->h, 0x01);
		s->h += 0x01;
		s->SetPf(s->h);
		s->SetSf(s->h);
		s->SetZf(s->h);
		s->pc += 1;
	}

	void inr_l(State* s)
	{
		s->SetAuxCarryDueToAdd(s->l, 0x01);
		s->l += 0x01;
		s->SetPf(s->l);
		s->SetSf(s->l);
		s->SetZf(s->l);
		s->pc += 1;
	}

	void inr_m(State* s)
	{
		s->SetAuxCarryDueToAdd(s->GetM().byte, 0x01);
		s->GetM().byte += 0x01;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
		s->SetPf(s->GetM().byte);
		s->SetSf(s->GetM().byte);
		s->SetZf(s->GetM().byte);
		s->pc += 1;
	}

	void dcr_a(State* s)
	{
		s->SetAuxCarryDueToSub(s->a, 0x01);
		s->a -= 0x01;
		s->SetPf();
		s->SetSf();
		s->SetZf();
		s->pc += 1;
	}

	void dcr_b(State* s)
	{
		s->SetAuxCarryDueToSub(s->b, 0x01);
		s->b -= 0x01;
		s->SetPf(s->b);
		s->SetSf(s->b);
		s->SetZf(s->b);
		s->pc += 1;
	}

	void dcr_c(State* s)
	{
		s->SetAuxCarryDueToSub(s->c, 0x01);
		s->c -= 0x01;
		s->SetPf(s->c);
		s->SetSf(s->c);
		s->SetZf(s->c);
		s->pc += 1;
	}

	void dcr_d(State* s)
	{
		s->SetAuxCarryDueToSub(s->d, 0x01);
		s->d -= 0x01;
		s->SetPf(s->d);
		s->SetSf(s->d);
		s->SetZf(s->d);
		s->pc += 1;
	}

	void dcr_e(State* s)
	{
		s->SetAuxCarryDueToSub(s->e, 0x01);
		s->e -= 0x01;
		s->SetPf(s->e);
		s->SetSf(s->e);
		s->SetZf(s->e);
		s->pc += 1;
	}

	void dcr_h(State* s)
	{
		s->SetAuxCarryDueToSub(s->h, 0x01);
		s->h -= 0x01;
		s->SetPf(s->h);
		s->SetSf(s->h);
		s->SetZf(s->h);
		s->pc += 1;
	}

	void dcr_l(State* s)
	{
		s->SetAuxCarryDueToSub(s->l, 0x01);
		s->l -= 0x01;
		s->SetPf(s->l);
		s->SetSf(s->l);
		s->SetZf(s->l);
		s->pc += 1;
	}

	void dcr_m(State* s)
	{
		s->SetAuxCarryDueToSub(s->GetM().byte, 0x01);
		s->GetM().byte -= 0x01;
		if (s->GetM().isCode)
		{
			s->isInterrupted = true;
			s->interruptType = InterruptType::CodeModified;
		}
		s->SetPf(s->GetM().byte);
		s->SetSf(s->GetM().byte);
		s->SetZf(s->GetM().byte);
		s->pc += 1;
	}

	void inx_bc(State* s)
	{
		s->c += 0x01;
		if (s->c == 0x00)
			s->b += 0x01;
		s->pc += 1;
	}

	void inx_de(State* s)
	{
		s->e += 0x01;
		if (s->e == 0x00)
			s->d += 0x01;
		s->pc += 1;
	}

	void inx_hl(State* s)
	{
		s->l += 0x01;
		if (s->l == 0x00)
			s->h += 0x01;
		s->pc += 1;
	}

	void inx_sp(State* s)
	{
		s->sp += 0x0001;
		s->pc += 1;
	}

	void dcx_bc(State* s)
	{
		if (s->c == 0x00)
		{
			
			s->b -= 0x01;
			s->c = 0xff;
		}
		else
			s->c -= 0x01;
		s->pc += 1;
	}

	void dcx_de(State* s)
	{
		if (s->e == 0x00)
		{

			s->d -= 0x01;
			s->e = 0xff;
		}
		else
			s->e -= 0x01;
		s->pc += 1;
	}

	void dcx_hl(State* s)
	{
		if (s->l == 0x00)
		{

			s->h -= 0x01;
			s->l = 0xff;
		}
		else
			s->l -= 0x01;
		s->pc += 1;
	}

	void dcx_sp(State* s)
	{
		s->sp -= 0x0001;
		s->pc += 1;
	}

	void dad_bc(State* s)
	{
		Byte sumL = s->l + s->c;
		Byte sumH = s->h + s->b;
		if (sumH < s->h)
			s->cf = true;
		else
		{
			if (sumL < s->l)
			{
				sumH += 0x01;
				if (sumH < 0x01)
					s->cf = true;
				else
					s->cf = false;
			}
			else
			{
				s->cf = false;
			}
		}
		s->l = sumL;
		s->h = sumH;
		s->pc += 1;
	}

	void dad_de(State* s)
	{
		Byte sumL = s->l + s->e;
		Byte sumH = s->h + s->d;
		if (sumH < s->h)
			s->cf = true;
		else
		{
			if (sumL < s->l)
			{
				sumH += 0x01;
				if (sumH < 0x01)
					s->cf = true;
				else
					s->cf = false;
			}
			else
			{
				s->cf = false;
			}
		}
		s->l = sumL;
		s->h = sumH;
		s->pc += 1;
	}

	void dad_hl(State* s)
	{
		Byte sumL = s->l + s->l;
		Byte sumH = s->h + s->h;
		if (sumH < s->h)
			s->cf = true;
		else
		{
			if (sumL < s->l)
			{
				sumH += 0x01;
				if (sumH < 0x01)
					s->cf = true;
				else
					s->cf = false;
			}
			else
			{
				s->cf = false;
			}
		}
		s->l = sumL;
		s->h = sumH;
		s->pc += 1;
	}

	void dad_sp(State* s)
	{
		Byte lower = s->sp;
		Byte upper = Byte(s->sp >> 8);
		Byte sumL = s->l + lower;
		Byte sumH = s->h + upper;
		if (sumH < s->h)
			s->cf = true;
		else
		{
			if (sumL < s->l)
			{
				sumH += 0x01;
				if (sumH < 0x01)
					s->cf = true;
				else
					s->cf = false;
			}
			else
			{
				s->cf = false;
			}
		}
		s->l = sumL;
		s->h = sumH;
		s->pc += 1;
	}

	void daa(State* s) // 0x27
	{
		if (((s->a & 0x0f) > 0x09) || (s->af == true))
		{
			s->a += 0x06;
			s->af = true;
		}
		if (((s->a & 0xf0) > 0x90) || (s->cf == true))
		{
			s->a += 0x60;
			s->cf = true;
		}
		s->SetZf();
		s->SetSf();
		s->SetPf();
		s->pc += 1;
	}

	// branching
	void jmp(State* s, Word operand) // 0xc3
	{
		s->pc = operand;
	}
	void jc(State* s, Word operand) // 0xda
	{
		if (s->cf == true)
			s->pc = operand;
		else
			s->pc += 3;
	}
	void jnc(State* s, Word operand) // 0xd2
	{
		if (s->cf == false)
			s->pc = operand;
		else
			s->pc += 3;
	}
	void jm(State* s, Word operand) // 0xfa
	{
		if (s->sf == true)
			s->pc = operand;
		else
			s->pc += 3;
	}
	void jp(State* s, Word operand) // 0xf2
	{
		if (s->sf == false)
			s->pc = operand;
		else
			s->pc += 3;
	}
	void jz(State* s, Word operand) // 0xca
	{
		if (s->zf == true)
			s->pc = operand;
		else
			s->pc += 3;
	}
	void jnz(State* s, Word operand) // 0xc2
	{
		if (s->zf == false)
			s->pc = operand;
		else
			s->pc += 3;
	}
	void jpe(State* s, Word operand) // 0xea
	{
		if (s->pf == true)
			s->pc = operand;
		else
			s->pc += 3;
	}
	void jpo(State* s, Word operand) // 0xe2
	{
		if (s->pf == false)
			s->pc = operand;
		else
			s->pc += 3;
	}
	
	void push_pc(State* s)
	{
		s->sp -= 1;
		s->GetST().byte = (s->pc >> 8); // higher bits
		s->sp -= 1;
		s->GetST().byte = (Byte)s->pc; // lower bits
		s->pc += 1;
	}
	void call(State* s, Word operand) // 0xcd
	{
		s->pc += 3;
		push_pc(s);
		s->pc = operand;
	}
	void cc(State* s, Word operand) // 0xdc
	{
		s->pc += 3;
		if (s->cf == true)
		{
			push_pc(s);
			s->pc = operand;
		}
	}
	void cnc(State* s, Word operand) // 0xd4
	{
		s->pc += 3;
		if (s->cf == false)
		{
			push_pc(s);
			s->pc = operand;
		}
	}
	void cm(State* s, Word operand) // 0xfc
	{
		s->pc += 3;
		if (s->sf == true)
		{
			push_pc(s);
			s->pc = operand;
		}
	}
	void cp(State* s, Word operand) // 0xf4
	{
		s->pc += 3;
		if (s->sf == false)
		{
			push_pc(s);
			s->pc = operand;
		}
	}
	void cz(State* s, Word operand) // 0xcc
	{
		s->pc += 3;
		if (s->zf == true)
		{
			push_pc(s);
			s->pc = operand;
		}
	}
	void cnz(State* s, Word operand) // 0xc4
	{
		s->pc += 3;
		if (s->zf == false)
		{
			push_pc(s);
			s->pc = operand;
		}
	}
	void cpe(State* s, Word operand) // 0xec
	{
		s->pc += 3;
		if (s->pf == true)
		{
			push_pc(s);
			s->pc = operand;
		}
	}
	void cpo(State* s, Word operand) // 0xe4
	{
		s->pc += 3;
		if (s->pf == false)
		{
			push_pc(s);
			s->pc = operand;
		}
	}
	
	void pop_pc(State* s)
	{
		Byte c = s->GetST().byte;
		s->sp += 1;
		Byte p = s->GetST().byte;
		s->sp += 1;
		s->pc = (p << 8) + c;
	}
	void ret(State* s) // 0xc9
	{
		pop_pc(s);
	}
	void rc(State* s) // 0xd8
	{
		if (s->cf == true)
			pop_pc(s);
		else
			s->pc += 1;
	}
	void rnc(State* s) // 0xd0
	{
		if (s->cf == false)
			pop_pc(s);
		else
			s->pc += 1;
	}
	void rm(State* s) // 0xf8
	{
		if (s->sf == true)
			pop_pc(s);
		else
			s->pc += 1;
	}
	void rp(State* s) // 0xf0
	{
		if (s->sf == false)
			pop_pc(s);
		else
			s->pc += 1;
	}
	void rz(State* s) // 0xc8
	{
		if (s->zf == true)
			pop_pc(s);
		else
			s->pc += 1;
	}
	void rnz(State* s) // 0xc0
	{
		if (s->zf == false)
			pop_pc(s);
		else
			s->pc += 1;
	}
	void rpe(State* s) // 0xe8
	{
		if (s->pf == true)
			pop_pc(s);
		else
			s->pc += 1;
	}
	void rpo(State* s) // 0xe0
	{
		if (s->pf == false)
			pop_pc(s);
		else
			s->pc += 1;
	}

	// program counter
	void pchl(State* s) // 0xe9
	{
		s->pc = (s->h << 8) + s->l;
	}
	void rst_0(State* s) // 0xc7
	{
		if (s->ie == true)
		{
			s->pc += 1;
			push_pc(s);
			s->pc = 0x0000;
		}
	}
	void rst_1(State* s) // 0xcf
	{
		if (s->ie == true)
		{
			s->pc += 1;
			push_pc(s);
			s->pc = 0x0008;
		}
	}
	void rst_2(State* s) // 0xd7
	{
		if (s->ie == true)
		{
			s->pc += 1;
			push_pc(s);
			s->pc = 0x0010;
		}
	}
	void rst_3(State* s) // 0xdf
	{
		if (s->ie == true)
		{
			s->pc += 1;
			push_pc(s);
			s->pc = 0x0018;
		}
	}
	void rst_4(State* s) // 0xe7
	{
		if (s->ie == true)
		{
			s->pc += 1;
			push_pc(s);
			s->pc = 0x0020;
		}
	}
	void rst_5(State* s) // 0xef
	{
		if (s->ie == true)
		{
			s->pc += 1;
			push_pc(s);
			s->pc = 0x0028;
		}
	}
	void rst_6(State* s) // 0xf7
	{
		if (s->ie == true)
		{
			s->pc += 1;
			push_pc(s);
			s->pc = 0x0030;
		}
	}
	void rst_7(State* s) // 0xff
	{
		if (s->ie == true)
		{
			s->pc += 1;
			push_pc(s);
			s->pc = 0x0038;
		}
	}

	// machine control
	void hlt(State* s) // 0x76
	{
		s->isInterrupted = true;
		s->interruptType = InterruptType::Halted;
	}

	void nop(State* s) // 0x00
	{
		s->pc += 1;
	}

	void ei(State* s) // 0xfb
	{
		s->ie = true;
		s->pc += 1;
	}

	void di(State* s) // 0xf3
	{
		s->ie = false;
		s->pc += 1;
	}

	// compare functions
	void cmp_a(State* s)
	{
		s->SetCarryDueToSub(s->a);
		s->SetAuxCarryDueToSub(s->a);
		Byte result = s->a - s->a;
		s->SetPf(result);
		s->SetSf(result);
		s->SetZf(result);
		s->pc += 1;
	}

	void cmp_b(State* s)
	{
		s->SetCarryDueToSub(s->b);
		s->SetAuxCarryDueToSub(s->b);
		Byte result = s->a - s->b;
		s->SetPf(result);
		s->SetSf(result);
		s->SetZf(result);
		s->pc += 1;
	}

	void cmp_c(State* s)
	{
		s->SetCarryDueToSub(s->c);
		s->SetAuxCarryDueToSub(s->c);
		Byte result = s->a - s->c;
		s->SetPf(result);
		s->SetSf(result);
		s->SetZf(result);
		s->pc += 1;
	}

	void cmp_d(State* s)
	{
		s->SetCarryDueToSub(s->d);
		s->SetAuxCarryDueToSub(s->d);
		Byte result = s->a - s->d;
		s->SetPf(result);
		s->SetSf(result);
		s->SetZf(result);
		s->pc += 1;
	}

	void cmp_e(State* s)
	{
		s->SetCarryDueToSub(s->e);
		s->SetAuxCarryDueToSub(s->e);
		Byte result = s->a - s->e;
		s->SetPf(result);
		s->SetSf(result);
		s->SetZf(result);
		s->pc += 1;
	}

	void cmp_h(State* s)
	{
		s->SetCarryDueToSub(s->h);
		s->SetAuxCarryDueToSub(s->h);
		Byte result = s->a - s->h;
		s->SetPf(result);
		s->SetSf(result);
		s->SetZf(result);
		s->pc += 1;
	}

	void cmp_l(State* s)
	{
		s->SetCarryDueToSub(s->l);
		s->SetAuxCarryDueToSub(s->l);
		Byte result = s->a - s->l;
		s->SetPf(result);
		s->SetSf(result);
		s->SetZf(result);
		s->pc += 1;
	}

	void cmp_m(State* s)
	{
		Byte toSub = s->GetM().byte;
		s->SetCarryDueToSub(toSub);
		s->SetAuxCarryDueToSub(toSub);
		Byte result = s->a - toSub;
		s->SetPf(result);
		s->SetSf(result);
		s->SetZf(result);
		s->pc += 1;
	}

	void cpi(State* s, Byte operand)
	{
		s->SetCarryDueToSub(operand);
		s->SetAuxCarryDueToSub(operand);
		Byte result = s->a - operand;
		s->SetPf(result);
		s->SetSf(result);
		s->SetZf(result);
		s->pc += 2;
	}

}

#endif