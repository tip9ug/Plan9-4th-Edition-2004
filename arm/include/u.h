#define nil		((void*)0)

typedef	unsigned short	ushort;
typedef	unsigned char	uchar;
typedef	unsigned long	ulong;
typedef	unsigned int	uint;
typedef	signed char	schar;
typedef	long long	vlong;
typedef	unsigned long long uvlong;
typedef	ushort		Rune;
typedef 	union FPdbleword FPdbleword;
typedef long	jmp_buf[2];
#define	JMPBUFSP	0
#define	JMPBUFPC	1
#define	JMPBUFDPC	0
typedef unsigned int	mpdigit;	/* for /sys/include/mp.h */
typedef unsigned char u8int;
typedef unsigned short u16int;
typedef unsigned int	u32int;
typedef unsigned long long u64int;

/* FCR */
#define	FPINEX	(1<<20)
#define	FPUNFL	(1<<19)
#define	FPOVFL	(1<<18)
#define	FPZDIV	(1<<17)
#define	FPINVAL	(1<<16)
#define	FPRNR	(0<<0)
#define	FPRZ	(1<<0)
#define	FPRPINF	(2<<0)
#define	FPRNINF	(3<<0)
#define	FPRMASK	(3<<0)
#define	FPPEXT	0
#define	FPPSGL	0
#define	FPPDBL	0
#define	FPPMASK	0
/* FSR */
#define	FPAINEX	(1<<4)
#define	FPAUNFL	(1<<3)
#define	FPAOVFL	(1<<2)
#define	FPAZDIV	(1<<1)
#define	FPAINVAL	(1<<0)
union FPdbleword
{
	double	x;
	struct {	/* little endian */
		ulong lo;
		ulong hi;
	};
};

typedef	char*	va_list;
#define va_start(list, start) list =\
	(sizeof(start) < 4?\
		(char*)((int*)&(start)+1):\
		(char*)(&(start)+1))
#define va_end(list)\
	USED(list)
#define va_arg(list, mode)\
	((sizeof(mode) == 1)?\
		((mode*)(list += 4))[-4]:\
	(sizeof(mode) == 2)?\
		((mode*)(list += 4))[-2]:\
		((mode*)(list += sizeof(mode)))[-1])
