

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Wed Aug 01 09:46:27 2012
 */
/* Compiler settings for D:\Documents and Settings\phtf\Desktop\Grupo de Controle\Projetos Especificos\Controle por bandas e MPC\MPC_Bifasico_dll\src\MPC_Bifasico_dll_idl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IClass1,0x3723DFA6,0x9143,0x462D,0x94,0xB8,0x94,0xB7,0x9E,0x73,0x89,0x7D);


MIDL_DEFINE_GUID(IID, LIBID_MPC_Bifasico_dll,0x0F47BF4B,0xF3BE,0x457E,0xA8,0x18,0xC3,0x3A,0xA4,0x04,0xF7,0x84);


MIDL_DEFINE_GUID(CLSID, CLSID_Class1,0x08021CAE,0x00EF,0x4F35,0x8E,0x88,0xA3,0x4E,0xF9,0x30,0xFA,0x14);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



