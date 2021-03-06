/*
 *  For information on usage and redistribution, and for a DISCLAIMER OF ALL
 *  WARRANTIES, see the file, LICENSE, in the root of this repository.
 *
 */

#ifndef __ABL_LINK_TILDE_H__
#define __ABL_LINK_TILDE_H__

#ifdef WIN32
#define DLLEXPORT __declspec(dllexport)
#endif

extern "C" {
  DLLEXPORT void abl_link_tilde_setup();
}

#endif
