static struct user_regs_struct riscv_regs;
#define ARCH_REGS_FOR_GETREGSET riscv_regs
#define ARCH_PC_REG riscv_regs.pc
#define ARCH_SP_REG riscv_regs.sp
