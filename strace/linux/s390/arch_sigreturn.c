#ifndef SIGNAL_FRAMESIZE
# define SIGNAL_FRAMESIZE __SIGNAL_FRAMESIZE
#endif
#ifndef PTR_TYPE
# define PTR_TYPE unsigned long
#endif

static void
arch_sigreturn(struct tcb *tcp)
{
	kernel_ulong_t addr;

	if (!get_stack_pointer(tcp, &addr))
		return;
	addr += SIGNAL_FRAMESIZE;

	PTR_TYPE mask[NSIG_BYTES / sizeof(PTR_TYPE)];
	if (!umove_or_printaddr(tcp, addr, &mask)) {
		tprintsigmask_addr("{mask=", mask);
		tprints("}");
	}
}
