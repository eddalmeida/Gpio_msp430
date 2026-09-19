#ifndef MACROS_H_
#define MACROS_H_

#define SET(BIT) (1 << BIT)
#define SET_BIT(Y,BIT) (Y |= (BIT))
#define CLR_BIT(Y,BIT) (Y &= ~(BIT))
#define CPL_BIT(Y,BIT) (Y ^= (BIT))
#define TST_BIT(Y,BIT) (Y & (BIT))

#endif
