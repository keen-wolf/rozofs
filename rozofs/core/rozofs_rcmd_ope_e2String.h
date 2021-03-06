#ifndef __rozofs_rcmd_ope_e2String_h__
#define __rozofs_rcmd_ope_e2String_h__
#ifdef __cplusplus
extern "C" {
#endif /*__cplusplus*/

/*___________________________________________________________________
 
   Generated by enum2String.py 
   Date : Thursday 2017 July 27, 15:05:57
   Command line : 
 ../../tools/enum2String.py -f rozofs_rcmd.h -n rozofs_rcmd_ope_e -c 16

 ____________________________________________________________________
 */

/*_________________________________________________________________
 * Builds a string from an integer value supposed to be within
 * the enumerated list rozofs_rcmd_ope_e
 *
 * @param x : value from rozofs_rcmd_ope_e to translate into a string
 *
 * The input value is translated into a string deduced from the enum
 * definition. When the input value do not fit any of the predefined
 * values, "??" is returned
 *
 * @return A char pointer to the constant string or "??"
 *_________________________________________________________________*/ 
static inline char * rozofs_rcmd_ope_e2String (rozofs_rcmd_ope_e x) {

  switch(x) {
    case rozofs_rcmd_ope_unknown                 : return("unknown");
    case rozofs_rcmd_ope_rebuild_list            : return("rebuild list");
    case rozofs_rcmd_ope_rebuild_list_clear      : return("rebuild list clear");
    case rozofs_rcmd_ope_getfile                 : return("getfile");
    case rozofs_rcmd_ope_puttmpfile              : return("puttmpfile");
    case rozofs_rcmd_ope_fid2path                : return("fid2path");
    case rozofs_rcmd_ope_getrmfile               : return("getrmfile");
    case rozofs_rcmd_ope_max                     : return("max");
    /* Unexpected value */
    default: return "??";
  }
}
#ifdef	__cplusplus
}
#endif
#endif

