#undef __FILE_ID__
#define __FILE_ID__ 0x0A
/**
 * PyMite usr native function file
 *
 * automatically created by pmImgCreator.py
 * on Tue Jan 11 21:25:50 2011
 *
 * DO NOT EDIT THIS FILE.
 * ANY CHANGES WILL BE LOST.
 *
 * @file    main_nat.c
 */

#define __IN_LIBNATIVE_C__
#include "pm.h"

PmReturn_t
nat_placeholder_func(pPmFrame_t *ppframe)
{

    /*
     * Use placeholder because an index 
     * value of zero denotes the stdlib.
     * This function should not be called.
     */
    PmReturn_t retval;
    PM_RAISE(retval, PM_RET_EX_SYS);
    return retval;

}

/* Native function lookup table */
pPmNativeFxn_t const usr_nat_fxn_table[] =
{
    nat_placeholder_func,
};
