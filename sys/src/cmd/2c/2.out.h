#define	NSYM	50
#define	NSNAME	8

/* R0 is return */
#define	REGEXT	7
/* A7 is sp A6 is sb */
#define	AREGEXT	5
/* F0 is ret */
#define	FREGEXT	7

enum	as
{
	AXXX = 0,
	AABCD,
	AADDB,
	AADDL,
	AADDW,
	AADDXB,
	AADDXL,
	AADDXW,
	AADJSP,
	AANDB,
	AANDL,
	AANDW,
	AASLB,
	AASLL,
	AASLW,
	AASRB,
	AASRL,
	AASRW,
	ABCASE,
	ABCC,
	ABCHG,
	ABCLR,
	ABCS,
	ABEQ,
	ABFCHG,
	ABFCLR,
	ABFEXTS,
	ABFEXTU,
	ABFFFO,
	ABFINS,
	ABFSET,
	ABFTST,
	ABGE,
	ABGT,
	ABHI,
	ABKPT,
	ABLE,
	ABLS,
	ABLT,
	ABMI,
	ABNE,
	ABPL,
	ABRA,
	ABSET,
	ABSR,
	ABTST,
	ABVC,
	ABVS,
	ACALLM,
	ACAS2B,
	ACAS2L,
	ACAS2W,
	ACASB,
	ACASEW,
	ACASL,
	ACASW,
	ACHK2B,
	ACHK2L,
	ACHK2W,
	ACHKL,
	ACHKW,
	ACLRB,
	ACLRL,
	ACLRW,
	ACMP2B,
	ACMP2L,
	ACMP2W,
	ACMPB,
	ACMPL,
	ACMPW,
	ADATA,
	ADBCC,
	ADBCS,
	ADBEQ,
	ADBF,
	ADBGE,
	ADBGT,
	ADBHI,
	ADBLE,
	ADBLS,
	ADBLT,
	ADBMI,
	ADBNE,
	ADBPL,
	ADBT,
	ADBVC,
	ADBVS,
	ADIVSL,
	ADIVSW,
	ADIVUL,
	ADIVUW,
	AEND,
	AEORB,
	AEORL,
	AEORW,
	AEXG,
	AEXTBL,
	AEXTBW,
	AEXTWL,
	AFABSB,
	AFABSD,
	AFABSF,
	AFABSL,
	AFABSW,
	AFACOSB,
	AFACOSD,
	AFACOSF,
	AFACOSL,
	AFACOSW,
	AFADDB,
	AFADDD,
	AFADDF,
	AFADDL,
	AFADDW,
	AFASINB,
	AFASIND,
	AFASINF,
	AFASINL,
	AFASINW,
	AFATANB,
	AFATAND,
	AFATANF,
	AFATANHB,
	AFATANHD,
	AFATANHF,
	AFATANHL,
	AFATANHW,
	AFATANL,
	AFATANW,
	AFBEQ,
	AFBF,
	AFBGE,
	AFBGT,
	AFBLE,
	AFBLT,
	AFBNE,
	AFBT,
	AFCMPB,
	AFCMPD,
	AFCMPF,
	AFCMPL,
	AFCMPW,
	AFCOSB,
	AFCOSD,
	AFCOSF,
	AFCOSHB,
	AFCOSHD,
	AFCOSHF,
	AFCOSHL,
	AFCOSHW,
	AFCOSL,
	AFCOSW,
	AFDBEQ,
	AFDBF,
	AFDBGE,
	AFDBGT,
	AFDBLE,
	AFDBLT,
	AFDBNE,
	AFDBT,
	AFDIVB,
	AFDIVD,
	AFDIVF,
	AFDIVL,
	AFDIVW,
	AFETOXB,
	AFETOXD,
	AFETOXF,
	AFETOXL,
	AFETOXM1B,
	AFETOXM1D,
	AFETOXM1F,
	AFETOXM1L,
	AFETOXM1W,
	AFETOXW,
	AFGETEXPB,
	AFGETEXPD,
	AFGETEXPF,
	AFGETEXPL,
	AFGETEXPW,
	AFGETMANB,
	AFGETMAND,
	AFGETMANF,
	AFGETMANL,
	AFGETMANW,
	AFINTB,
	AFINTD,
	AFINTF,
	AFINTL,
	AFINTRZB,
	AFINTRZD,
	AFINTRZF,
	AFINTRZL,
	AFINTRZW,
	AFINTW,
	AFLOG10B,
	AFLOG10D,
	AFLOG10F,
	AFLOG10L,
	AFLOG10W,
	AFLOG2B,
	AFLOG2D,
	AFLOG2F,
	AFLOG2L,
	AFLOG2W,
	AFLOGNB,
	AFLOGND,
	AFLOGNF,
	AFLOGNL,
	AFLOGNP1B,
	AFLOGNP1D,
	AFLOGNP1F,
	AFLOGNP1L,
	AFLOGNP1W,
	AFLOGNW,
	AFMODB,
	AFMODD,
	AFMODF,
	AFMODL,
	AFMODW,
	AFMOVEB,
	AFMOVED,
	AFMOVEF,
	AFMOVEL,
	AFMOVEM,
	AFMOVEMC,
	AFMOVEW,
	AFMULB,
	AFMULD,
	AFMULF,
	AFMULL,
	AFMULW,
	AFNEGB,
	AFNEGD,
	AFNEGF,
	AFNEGL,
	AFNEGW,
	AFREMB,
	AFREMD,
	AFREMF,
	AFREML,
	AFREMW,
	AFRESTORE,
	AFSAVE,
	AFSCALEB,
	AFSCALED,
	AFSCALEF,
	AFSCALEL,
	AFSCALEW,
	AFSEQ,
	AFSF,
	AFSGE,
	AFSGT,
	AFSINB,
	AFSIND,
	AFSINF,
	AFSINHB,
	AFSINHD,
	AFSINHF,
	AFSINHL,
	AFSINHW,
	AFSINL,
	AFSINW,
	AFSLE,
	AFSLT,
	AFSNE,
	AFSQRTB,
	AFSQRTD,
	AFSQRTF,
	AFSQRTL,
	AFSQRTW,
	AFST,
	AFSUBB,
	AFSUBD,
	AFSUBF,
	AFSUBL,
	AFSUBW,
	AFTANB,
	AFTAND,
	AFTANF,
	AFTANHB,
	AFTANHD,
	AFTANHF,
	AFTANHL,
	AFTANHW,
	AFTANL,
	AFTANW,
	AFTENTOXB,
	AFTENTOXD,
	AFTENTOXF,
	AFTENTOXL,
	AFTENTOXW,
	AFTSTB,
	AFTSTD,
	AFTSTF,
	AFTSTL,
	AFTSTW,
	AFTWOTOXB,
	AFTWOTOXD,
	AFTWOTOXF,
	AFTWOTOXL,
	AFTWOTOXW,
	AGLOBL,
	AGOK,
	AHISTORY,
	AILLEG,
	AINSTR,
	AJMP,
	AJSR,
	ALEA,
	ALINKL,
	ALINKW,
	ALOCATE,
	ALONG,
	ALSLB,
	ALSLL,
	ALSLW,
	ALSRB,
	ALSRL,
	ALSRW,
	AMOVB,
	AMOVEM,
	AMOVEPL,
	AMOVEPW,
	AMOVESB,
	AMOVESL,
	AMOVESW,
	AMOVL,
	AMOVW,
	AMULSL,
	AMULSW,
	AMULUL,
	AMULUW,
	ANAME,
	ANBCD,
	ANEGB,
	ANEGL,
	ANEGW,
	ANEGXB,
	ANEGXL,
	ANEGXW,
	ANOP,
	ANOTB,
	ANOTL,
	ANOTW,
	AORB,
	AORL,
	AORW,
	APACK,
	APEA,
	ARESET,
	AROTLB,
	AROTLL,
	AROTLW,
	AROTRB,
	AROTRL,
	AROTRW,
	AROXLB,
	AROXLL,
	AROXLW,
	AROXRB,
	AROXRL,
	AROXRW,
	ARTD,
	ARTE,
	ARTM,
	ARTR,
	ARTS,
	ASBCD,
	ASCC,
	ASCS,
	ASEQ,
	ASF,
	ASGE,
	ASGT,
	ASHI,
	ASLE,
	ASLS,
	ASLT,
	ASMI,
	ASNE,
	ASPL,
	AST,
	ASTOP,
	ASUBB,
	ASUBL,
	ASUBW,
	ASUBXB,
	ASUBXL,
	ASUBXW,
	ASVC,
	ASVS,
	ASWAP,
	ASYS,
	ATAS,
	ATEXT,
	ATRAP,
	ATRAPCC,
	ATRAPCS,
	ATRAPEQ,
	ATRAPF,
	ATRAPGE,
	ATRAPGT,
	ATRAPHI,
	ATRAPLE,
	ATRAPLS,
	ATRAPLT,
	ATRAPMI,
	ATRAPNE,
	ATRAPPL,
	ATRAPT,
	ATRAPV,
	ATRAPVC,
	ATRAPVS,
	ATSTB,
	ATSTL,
	ATSTW,
	AUNLK,
	AUNPK,
	AWORD,
	ASIGNAME,
};

enum
{
	NREG		= 8,

	D_R0		= 0,
	D_A0		= NREG,
	D_F0		= D_A0+NREG,
	D_NONE		= D_F0+NREG,
	D_TOS,
	D_BRANCH,
	D_STACK,
	D_TREE,
	D_EXTERN,
	D_STATIC,
	D_AUTO,
	D_PARAM,
	D_CONST,
	D_FCONST,
	D_QUICK,

	D_CCR,
	D_SR,
	D_SFC,
	D_CACR,
	D_USP,
	D_VBR,
	D_CAAR,
	D_MSP,
	D_ISP,
	D_DFC,
	D_FPCR,
	D_FPSR,
	D_FPIAR,
	D_SCONST,
	D_FILE,

	D_TC,		/* new for 68040 */
	D_ITT0,
	D_ITT1,
	D_DTT0,
	D_DTT1,
	D_MMUSR,
	D_URP,
	D_SRP,

	D_FILE1,

	D_MASK		= 63/(D_SRP>=63?0:1),

	I_DIR		= (D_MASK+1)*0,
	I_INDINC	= (D_MASK+1)*1,
	I_INDDEC	= (D_MASK+1)*2,
	I_INDIR		= (D_MASK+1)*3,
	I_ADDR		= (D_MASK+1)*4,

	I_INDEX1	= (D_MASK+1)*1,
	I_INDEX2	= (D_MASK+1)*2,
	I_INDEX3	= (D_MASK+1)*3,

	I_MASK		= (D_MASK+1)*7,

	T_FIELD		= 1<<0,
	T_INDEX		= 1<<1,
	T_TYPE		= 1<<2,
	T_OFFSET	= 1<<3,
	T_FCONST	= 1<<4,
	T_SYM		= 1<<5,
	T_SCONST	= 1<<6
};

/*
 * this is the ranlib header
 */
#define	SYMDEF	"__.SYMDEF"

/*
 * this is the simulated IEEE floating point
 */
typedef	struct	ieee	Ieee;
struct	ieee
{
	long	l;	/* contains ls-man	0xffffffff */
	long	h;	/* contains sign	0x80000000
				    exp		0x7ff00000
				    ms-man	0x000fffff */
};
