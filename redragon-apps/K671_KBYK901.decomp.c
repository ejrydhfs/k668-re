// TRANSPORT FUNCTIONS:
//   00537c0b __write_nolock
//   0040fcc0 FUN_0040fcc0
//   0042a480 FUN_0042a480
//   0042a5d0 FUN_0042a5d0
//   00438396 Write
//   00531ce4 __NMSG_WRITE
//   0040fe20 FUN_0040fe20
//   0041bf60 FUN_0041bf60
//   0040f000 FUN_0040f000
//   0053754c __read_nolock
//   0042a310 FUN_0042a310
//   0042a680 FUN_0042a680
//   00404e80 FUN_00404e80
//   00438354 Read
// TOTAL TARGET FUNCTIONS: 96
//==== FUNC 00537c0b  __write_nolock ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR WVar1;
  wchar_t wVar2;
  ulong *puVar3;
  int *piVar4;
  int iVar5;
  _ptiddata p_Var6;
  BOOL BVar7;
  DWORD nNumberOfBytesToWrite;
  int iVar8;
  uint uVar9;
  char cVar10;
  WCHAR *pWVar11;
  char *pcVar12;
  int unaff_EDI;
  WCHAR *pWVar13;
  ushort uVar14;
  UINT local_1ae8;
  uint local_1ae4;
  char local_1add;
  int *local_1adc;
  char *local_1ad8;
  int local_1ad4;
  WCHAR *local_1ad0;
  char *local_1acc;
  WCHAR *local_1ac8;
  DWORD local_1ac4;
  WCHAR *local_1ac0;
  WCHAR local_1abc [852];
  CHAR local_1414 [3416];
  WCHAR local_6bc [854];
  undefined2 local_10;
  uint local_8;
  
  local_8 = DAT_005ae6a0 ^ (uint)&stack0xfffffffc;
  local_1ad0 = _Buf;
  local_1acc = (char *)0x0;
  local_1ad4 = 0;
  if (_MaxCharCount == 0) goto LAB_00538331;
  if (_Buf == (void *)0x0) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_00538331;
  }
  piVar4 = &DAT_005ba740 + (_FileHandle >> 5);
  iVar8 = (_FileHandle & 0x1fU) * 0x40;
  cVar10 = (char)(*(char *)(*piVar4 + iVar8 + 0x24) * '\x02') >> 1;
  local_1add = cVar10;
  local_1adc = piVar4;
  if (((cVar10 == '\x02') || (cVar10 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_00538331;
  }
  if ((*(byte *)(*piVar4 + iVar8 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar5 = __isatty(_FileHandle);
  if ((iVar5 == 0) || ((*(byte *)(iVar8 + 4 + *piVar4) & 0x80) == 0)) {
LAB_00537fa2:
    if ((*(byte *)((undefined4 *)(*piVar4 + iVar8) + 1) & 0x80) == 0) {
      BVar7 = WriteFile(*(HANDLE *)(*piVar4 + iVar8),local_1ad0,_MaxCharCount,(LPDWORD)&local_1ad8,
                        (LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
LAB_005382a2:
        local_1ac4 = GetLastError();
      }
      else {
        local_1ac4 = 0;
        local_1acc = local_1ad8;
      }
LAB_005382ae:
      if (local_1acc != (char *)0x0) goto LAB_00538331;
      goto LAB_005382b7;
    }
    local_1ac4 = 0;
    if (cVar10 == '\0') {
      local_1ac8 = local_1ad0;
      if (_MaxCharCount == 0) goto LAB_005382f3;
      do {
        local_1ac0 = (WCHAR *)0x0;
        uVar9 = (int)local_1ac8 - (int)local_1ad0;
        pWVar11 = local_1abc;
        do {
          if (_MaxCharCount <= uVar9) break;
          pWVar13 = (WCHAR *)((int)local_1ac8 + 1);
          WVar1 = *local_1ac8;
          uVar9 = uVar9 + 1;
          if ((char)WVar1 == '\n') {
            local_1ad4 = local_1ad4 + 1;
            *(char *)pWVar11 = '\r';
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          }
          *(char *)pWVar11 = (char)WVar1;
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          local_1ac8 = pWVar13;
        } while (local_1ac0 < (WCHAR *)0x13ff);
        BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc,
                          (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
        if (BVar7 == 0) goto LAB_005382a2;
        local_1acc = local_1acc + (int)local_1ad8;
      } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
              (piVar4 = local_1adc, (uint)((int)local_1ac8 - (int)local_1ad0) < _MaxCharCount));
      goto LAB_005382ae;
    }
    local_1ac0 = local_1ad0;
    if (cVar10 == '\x02') {
      if (_MaxCharCount != 0) {
        do {
          local_1ac8 = (WCHAR *)0x0;
          uVar9 = (int)local_1ac0 - (int)local_1ad0;
          pWVar11 = local_1abc;
          do {
            if (_MaxCharCount <= uVar9) break;
            pWVar13 = local_1ac0 + 1;
            WVar1 = *local_1ac0;
            uVar9 = uVar9 + 2;
            if (WVar1 == L'\n') {
              local_1ad4 = local_1ad4 + 2;
              *pWVar11 = L'\r';
              pWVar11 = pWVar11 + 1;
              local_1ac8 = local_1ac8 + 1;
            }
            local_1ac8 = local_1ac8 + 1;
            *pWVar11 = WVar1;
            pWVar11 = pWVar11 + 1;
            local_1ac0 = pWVar13;
          } while (local_1ac8 < (WCHAR *)0x13fe);
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc,
                            (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_005382a2;
          local_1acc = local_1acc + (int)local_1ad8;
        } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
                (piVar4 = local_1adc, (uint)((int)local_1ac0 - (int)local_1ad0) < _MaxCharCount));
        goto LAB_005382ae;
      }
    }
    else if (_MaxCharCount != 0) {
      do {
        local_1ac8 = (WCHAR *)0x0;
        uVar9 = (int)local_1ac0 - (int)local_1ad0;
        pWVar11 = local_6bc;
        do {
          if (_MaxCharCount <= uVar9) break;
          WVar1 = *local_1ac0;
          local_1ac0 = local_1ac0 + 1;
          uVar9 = uVar9 + 2;
          if (WVar1 == L'\n') {
            *pWVar11 = L'\r';
            pWVar11 = pWVar11 + 1;
            local_1ac8 = local_1ac8 + 1;
          }
          local_1ac8 = local_1ac8 + 1;
          *pWVar11 = WVar1;
          pWVar11 = pWVar11 + 1;
        } while (local_1ac8 < (WCHAR *)0x6a8);
        pcVar12 = (char *)0x0;
        iVar5 = WideCharToMultiByte(0xfde9,0,local_6bc,((int)pWVar11 - (int)local_6bc) / 2,
                                    local_1414,0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) goto LAB_005382a2;
        do {
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),local_1414 + (int)pcVar12,
                            iVar5 - (int)pcVar12,(LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) {
            local_1ac4 = GetLastError();
            break;
          }
          pcVar12 = pcVar12 + (int)local_1ad8;
        } while ((int)pcVar12 < iVar5);
      } while ((iVar5 <= (int)pcVar12) &&
              (local_1acc = (char *)((int)local_1ac0 - (int)local_1ad0), local_1acc < _MaxCharCount)
              );
      goto LAB_005382ae;
    }
  }
  else {
    p_Var6 = __getptd();
    local_1ae4 = (uint)(p_Var6->ptlocinfo->lc_category[0].wlocale == (wchar_t *)0x0);
    BVar7 = GetConsoleMode(*(HANDLE *)(iVar8 + *piVar4),&local_1ae8);
    if ((BVar7 == 0) || ((local_1ae4 != 0 && (cVar10 == '\0')))) goto LAB_00537fa2;
    local_1ae8 = GetConsoleCP();
    local_1ac8 = (WCHAR *)0x0;
    if (_MaxCharCount != 0) {
      local_1ac0 = (WCHAR *)0x0;
      pWVar11 = local_1ad0;
      do {
        piVar4 = local_1adc;
        if (local_1add == '\0') {
          cVar10 = (char)*pWVar11;
          local_1ae4 = (uint)(cVar10 == '\n');
          iVar5 = *local_1adc + iVar8;
          if (*(int *)(iVar5 + 0x38) == 0) {
            iVar5 = _isleadbyte(CONCAT22(cVar10 >> 7,(short)cVar10));
            if (iVar5 == 0) {
              uVar14 = 1;
              pWVar13 = pWVar11;
              goto LAB_00537e09;
            }
            if ((char *)((int)local_1ad0 + (_MaxCharCount - (int)pWVar11)) < (char *)0x2) {
              local_1acc = local_1acc + 1;
              *(char *)(iVar8 + 0x34 + *piVar4) = (char)*pWVar11;
              *(undefined4 *)(iVar8 + 0x38 + *piVar4) = 1;
              break;
            }
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar11,2);
            if (iVar5 == -1) break;
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          }
          else {
            local_10._0_1_ = *(CHAR *)(iVar5 + 0x34);
            *(undefined4 *)(iVar5 + 0x38) = 0;
            uVar14 = 2;
            pWVar13 = &local_10;
            local_10._1_1_ = cVar10;
LAB_00537e09:
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar13,(uint)uVar14);
            if (iVar5 == -1) break;
          }
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(local_1ae8,0,(LPCWSTR)&local_1ac4,1,(LPSTR)&local_10,5,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_1ac8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_005382a2;
          local_1acc = (char *)((int)local_1ac0 + local_1ad4);
          if ((int)local_1ac8 < (int)nNumberOfBytesToWrite) break;
          if (local_1ae4 != 0) {
            local_10._0_1_ = '\r';
            BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,1,(LPDWORD)&local_1ac8,
                              (LPOVERLAPPED)0x0);
            if (BVar7 == 0) goto LAB_005382a2;
            if ((int)local_1ac8 < 1) break;
            local_1ad4 = local_1ad4 + 1;
            local_1acc = local_1acc + 1;
          }
        }
        else {
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            local_1ac4 = (DWORD)(ushort)*pWVar11;
            local_1ae4 = (uint)(*pWVar11 == L'\n');
            pWVar11 = pWVar11 + 1;
            local_1ac0 = local_1ac0 + 1;
          }
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            wVar2 = __putwch_nolock((wchar_t)local_1ac4);
            if (wVar2 != (wchar_t)local_1ac4) goto LAB_005382a2;
            local_1acc = local_1acc + 2;
            if (local_1ae4 != 0) {
              local_1ac4 = 0xd;
              wVar2 = __putwch_nolock(L'\r');
              if (wVar2 != (wchar_t)local_1ac4) goto LAB_005382a2;
              local_1acc = local_1acc + 1;
              local_1ad4 = local_1ad4 + 1;
            }
          }
        }
      } while (local_1ac0 < _MaxCharCount);
      goto LAB_005382ae;
    }
LAB_005382b7:
    piVar4 = local_1adc;
    if (local_1ac4 != 0) {
      if (local_1ac4 == 5) {
        piVar4 = __errno();
        *piVar4 = 9;
        puVar3 = ___doserrno();
        *puVar3 = 5;
      }
      else {
        __dosmaperr(local_1ac4);
      }
      goto LAB_00538331;
    }
  }
LAB_005382f3:
  if (((*(byte *)(iVar8 + 4 + *piVar4) & 0x40) == 0) || ((char)*local_1ad0 != '\x1a')) {
    piVar4 = __errno();
    *piVar4 = 0x1c;
    puVar3 = ___doserrno();
    *puVar3 = 0;
  }
LAB_00538331:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}


//==== FUNC 0040fcc0  FUN_0040fcc0 ====

void __cdecl FUN_0040fcc0(void *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  HANDLE hFile;
  uint uVar4;
  BOOL BVar5;
  DWORD DVar6;
  undefined4 extraout_ECX;
  wchar_t *pwVar7;
  DWORD local_560;
  byte local_55c [840];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_005ae6a0 ^ (uint)&local_560;
  if ((param_4 == 0) || (param_2 == 0)) {
    (*DAT_005b9074)(L"Flush_Dirty_Macro: pItem=0x%0x(%s) error",param_2,param_3);
  }
  else if (*(int *)(param_2 + 0x18) == 1) {
    iVar3 = FUN_0040f900(param_1,local_214);
    if (iVar3 == 0) {
      (*DAT_005b9074)(L"Flush_Dirty_Macro: TreeItem_To_FilePath failed");
    }
    else {
      iVar3 = FUN_00428b00(extraout_ECX,*(int *)(param_2 + 0x10));
      if ((iVar3 != 0) && ((*(uint *)(iVar3 + 8) & 0xc0000000) != 0)) {
        hFile = FUN_0040fbf0();
        uVar4 = 0;
        if (hFile != (HANDLE)0xffffffff) {
          *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0x3fffffff;
          do {
            pbVar1 = local_55c + uVar4;
            bVar2 = pbVar1[iVar3 - (int)local_55c];
            uVar4 = uVar4 + 1;
            *pbVar1 = bVar2 >> 2 | bVar2 << 6;
          } while (uVar4 < 0x342);
          local_560 = 0;
          BVar5 = WriteFile(hFile,local_55c,0x342,&local_560,(LPOVERLAPPED)0x0);
          if ((BVar5 == 0) || (local_560 != 0x342)) {
            pwVar7 = local_214;
            DVar6 = GetLastError();
            (*DAT_005b9074)(L"Flush_Dirty_Macro: WriteFile err=0x%x, %s",DVar6,pwVar7);
          }
          CloseHandle(hFile);
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&local_560);
  return;
}


//==== FUNC 0042a480  FUN_0042a480 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0042a480(void)

{
  void *_Src;
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  undefined1 *_Dst;
  undefined1 *puVar4;
  undefined4 *puVar5;
  DWORD local_fbfc;
  undefined1 local_fbf8 [63980];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_005ae6a0 ^ (uint)&local_fbfc;
  _memset(local_fbf8,0,0xf9ec);
  iVar3 = 0;
  if (DAT_005b0558 != (undefined4 *)0x0) {
    _Dst = local_fbf8;
    puVar5 = DAT_005b0558;
    do {
      if (4 < iVar3) break;
      _Src = (void *)*puVar5;
      puVar4 = _Dst;
      if ((_Src != (void *)0x0) && (*(int *)((int)_Src + 4) != 0)) {
        iVar3 = iVar3 + 1;
        puVar4 = _Dst + 0x31fc;
        _memcpy(_Dst,_Src,0x31fc);
      }
      puVar5 = (undefined4 *)puVar5[1];
      _Dst = puVar4;
    } while (puVar5 != (undefined4 *)0x0);
    if (0 < iVar3) {
      __snwprintf_s(local_20c,0x104,0x103,L"%s%s",&DAT_005b8c48,L"pro.dct");
      hFile = CreateFileW(local_20c,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffff) {
        local_fbfc = 0;
        BVar1 = WriteFile(hFile,local_fbf8,0xf9ec,&local_fbfc,(LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          DVar2 = GetLastError();
          (*DAT_005b9074)(L"Save pro: WriteFile err=%d",DVar2);
        }
        CloseHandle(hFile);
        __security_check_cookie(local_4 ^ (uint)&local_fbfc);
        return;
      }
      DVar2 = GetLastError();
      (*DAT_005b9074)(L"Save pro: CreateFile err=%d",DVar2);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_fbfc);
  return;
}


//==== FUNC 0042a5d0  FUN_0042a5d0 ====

void FUN_0042a5d0(void)

{
  int iVar1;
  HANDLE hFile;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  iVar1 = DAT_005b90dc;
  local_4 = DAT_005ae6a0 ^ (uint)&local_210;
  if (DAT_005b90dc != 0) {
    __snwprintf_s(local_20c,0x104,0x103,L"%s%s",&DAT_005b8c48,L"curid.dct");
    hFile = CreateFileW(local_20c,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      local_210 = 0;
      WriteFile(hFile,(LPCVOID)(iVar1 + 4),4,&local_210,(LPOVERLAPPED)0x0);
      CloseHandle(hFile);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_210);
  return;
}


//==== FUNC 00438396  Write ====

/* Library Function - Single Match
    public: virtual void __thiscall CFile::Write(void const *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CFile::Write(CFile *this,void *param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    BVar2 = WriteFile(*(HANDLE *)(this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      psVar4 = *(short **)(this + 0xc);
      DVar3 = GetLastError();
      ThrowOsError(DVar3,psVar4);
    }
    if (param_2 != uVar1) {
      FUN_004441fa(0xd,0xffffffff,*(short **)(this + 0xc));
    }
  }
  return;
}


//==== FUNC 00531ce4  __NMSG_WRITE ====

/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2008 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  errno_t eVar4;
  DWORD DVar5;
  size_t sVar6;
  HANDLE hFile;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == (&DAT_005ae870)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar2 = local_8;
  if (local_8 < 0x17) {
    iVar3 = __set_error_mode(3);
    if ((iVar3 != 1) && ((iVar3 = __set_error_mode(3), iVar3 != 0 || (DAT_005ae680 != 1)))) {
      if (param_1 == 0xfc) {
        return;
      }
      eVar4 = _strcpy_s(&DAT_005b5828,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_005b5945 = 0;
      DVar5 = GetModuleFileNameA((HMODULE)0x0,&DAT_005b5841,0x104);
      if ((DVar5 == 0) &&
         (eVar4 = _strcpy_s(&DAT_005b5841,0x2fb,"<program name unknown>"), eVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar6 = _strlen(&DAT_005b5841);
      if (0x3c < sVar6 + 1) {
        sVar6 = _strlen(&DAT_005b5841);
        eVar4 = _strncpy_s((char *)(sVar6 + 0x5b5806),(int)&DAT_005b5b3c - (int)(sVar6 + 0x5b5806),
                           "...",3);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar4 = _strcat_s(&DAT_005b5828,0x314,"\n\n");
      if (eVar4 == 0) {
        eVar4 = _strcat_s(&DAT_005b5828,0x314,*(char **)(local_8 * 8 + 0x5ae874));
        if (eVar4 == 0) {
          ___crtMessageBoxA(&DAT_005b5828,"Microsoft Visual C++ Runtime Library",0x12010);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    hFile = GetStdHandle(0xfffffff4);
    if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_c;
      puVar1 = (undefined4 *)(uVar2 * 8 + 0x5ae874);
      sVar6 = _strlen((char *)*puVar1);
      WriteFile(hFile,(LPCVOID)*puVar1,sVar6,lpNumberOfBytesWritten,lpOverlapped);
    }
  }
  return;
}


//==== FUNC 0040fe20  FUN_0040fe20 ====

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0040fe20(wchar_t *param_1,int param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  WCHAR WVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  HANDLE hFile;
  uint uVar6;
  WCHAR *pWVar7;
  BOOL BVar8;
  void *pvVar9;
  void *local_d1c;
  DWORD local_d18;
  HANDLE local_d14;
  undefined4 local_d10;
  undefined4 local_d0c;
  int local_d08;
  int local_d04;
  _WIN32_FIND_DATAW local_d00;
  int local_ab0;
  uint local_aac;
  uint local_aa8;
  byte local_768 [838];
  short sStack_422;
  wchar_t local_420;
  undefined2 local_41e [259];
  wchar_t local_218 [262];
  uint local_c;
  
  local_c = DAT_005ae6a0 ^ (uint)&local_d1c;
  local_d08 = param_3[2];
  local_d10 = param_3[1];
  pvVar9 = (void *)*param_3;
  local_d04 = param_3[4];
  local_d0c = 1;
  local_d1c = pvVar9;
  _wcsncpy_s(&local_420,0x104,param_1,0xffffffff);
  pwVar4 = &local_420;
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  iVar5 = (int)pwVar4 - (int)local_41e >> 1;
  if (iVar5 < 0x101) {
    if ((&sStack_422)[iVar5] != 0x5c) {
      local_41e[iVar5 + -1] = 0x5c;
      local_41e[iVar5] = 0;
    }
    __snwprintf_s(local_218,0x104,0x103,L"%s%s",&local_420,&DAT_00582760);
    local_d14 = FindFirstFileW(local_218,&local_d00);
    if (local_d14 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_d00.dwFileAttributes & 0x10) == 0) {
          __snwprintf_s(local_218,0x104,0x103,L"%s%s",&local_420,local_d00.cFileName);
          local_768[0] = 0;
          local_768[1] = 0;
          local_768[2] = 0;
          local_768[3] = 0;
          _memset(local_768 + 4,0,0x33e);
          hFile = CreateFileW(local_218,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
          if (hFile != (HANDLE)0xffffffff) {
            local_d18 = 0;
            BVar8 = ReadFile(hFile,local_768,0x342,&local_d18,(LPOVERLAPPED)0x0);
            if ((BVar8 != 0) && (local_d18 == 0x342)) {
              uVar6 = 0;
              do {
                *(byte *)((int)&local_ab0 + uVar6) = local_768[uVar6] << 2 | local_768[uVar6] >> 6;
                uVar6 = uVar6 + 1;
              } while (uVar6 < 0x342);
              if (local_ab0 == -0x5047760) {
                DAT_005b9088 = DAT_005b8ad8;
                iVar5 = FUN_0040f860((int)&local_ab0);
                if (iVar5 == 0) {
                  if (local_d08 != 0) {
                    local_aac = FUN_00428b30();
                    local_aa8 = local_aa8 | 0x40000000;
                  }
                  if (local_d04 != 0) {
                    FUN_00428a40();
                  }
                  if (pvVar9 != (void *)0x0) {
                    pWVar7 = local_d00.cFileName;
                    do {
                      WVar2 = *pWVar7;
                      pWVar7 = pWVar7 + 1;
                    } while (WVar2 != L'\0');
                    iVar5 = (int)pWVar7 - (int)(local_d00.cFileName + 1) >> 1;
                    do {
                      iVar3 = iVar5;
                      if ((iVar3 + -1 < 0) || (local_d00.cFileName[iVar3 + -1] == L'\0'))
                      goto LAB_004101a9;
                      iVar5 = iVar3 + -1;
                    } while (local_d00.cFileName[iVar3 + -1] != L'.');
                    local_d00.cFileName[iVar3 + -1] = L'\0';
LAB_004101a9:
                    FUN_0042b7d0(pvVar9,0,0,0,local_d00.cFileName,local_aac,0,5);
                    pvVar9 = local_d1c;
                  }
                }
              }
            }
            CloseHandle(hFile);
          }
        }
        else if ((((local_d00.cFileName[0] != L'.') && (local_d00.cFileName[0] != L'$')) &&
                 (param_3[3] != 0)) && (param_2 != 0)) {
          __snwprintf_s(local_218,0x104,0x103,L"%s%s\\%s.png",&local_420,local_d00.cFileName,
                        local_d00.cFileName);
          if (pvVar9 != (void *)0x0) {
            iVar5 = FUN_0042b7d0(pvVar9,0,1,local_218,local_d00.cFileName,0,0,5);
            param_3[1] = iVar5;
            pvVar9 = local_d1c;
          }
          __snwprintf_s(local_218,0x104,0x103,L"%s%s\\",&local_420,local_d00.cFileName);
          iVar5 = FUN_0040fe20(local_218,param_2,param_3);
          if (iVar5 == 0) {
            local_d0c = 0;
            goto LAB_00410013;
          }
        }
        BVar8 = FindNextFileW(local_d14,&local_d00);
        if (BVar8 == 0) {
LAB_00410013:
          FindClose(local_d14);
          __security_check_cookie(local_c ^ (uint)&local_d1c);
          return;
        }
      } while( true );
    }
  }
  __security_check_cookie(local_c ^ (uint)&local_d1c);
  return;
}


//==== FUNC 0041bf60  FUN_0041bf60 ====

void __cdecl FUN_0041bf60(LPCWSTR param_1)

{
  HANDLE hFile;
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *unaff_EDI;
  DWORD local_418;
  byte local_414 [4];
  char local_410;
  char local_400;
  ushort auStack_30c [388];
  uint local_4;
  
  local_4 = DAT_005ae6a0 ^ (uint)&local_418;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    (*DAT_005b9074)(L"open skn file err");
    __security_check_cookie(local_4 ^ (uint)&local_418);
    return;
  }
  local_418 = 0;
  ReadFile(hFile,local_414,0x208,&local_418,(LPOVERLAPPED)0x0);
  CloseHandle(hFile);
  iVar3 = (int)local_410;
  iVar2 = (int)local_400;
  if ((iVar3 - 0x15U < 0x78) && (iVar2 < 0x65)) {
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        auStack_30c[iVar1 + 0x80] =
             (ushort)(byte)(local_414[iVar1 + iVar3] >> 3 | local_414[iVar1 + iVar3] << 5);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    auStack_30c[iVar2 + 0x80] = 0;
    __snwprintf_s(unaff_EDI,0x104,0x103,L"%s",auStack_30c + 0x80);
    __security_check_cookie(local_4 ^ (uint)&local_418);
    return;
  }
  (*DAT_005b9074)(L"Error: nOffset=%d, nSize=%d",iVar3,iVar2);
  __security_check_cookie(local_4 ^ (uint)&local_418);
  return;
}


//==== FUNC 0040f000  FUN_0040f000 ====

void FUN_0040f000(void)

{
  LPCWSTR pWVar1;
  LRESULT LVar2;
  int iVar3;
  int *piVar4;
  HANDLE hFile;
  BOOL BVar5;
  undefined4 uVar6;
  void *pvVar7;
  CSimpleStringT<wchar_t,0> *pCVar8;
  undefined4 extraout_ECX;
  CWnd *unaff_EDI;
  CTreeCtrl *this;
  int local_9d8;
  int iStack_9d4;
  LPCWSTR local_9d0;
  undefined4 local_9cc;
  DWORD DStack_9c8;
  HANDLE pvStack_9c4;
  _TREEITEM a_Stack_9c0 [4];
  int iStack_9bc;
  uint uStack_9b8;
  wchar_t awStack_9a8 [408];
  CFileDialog local_678 [804];
  undefined1 auStack_354 [836];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00554d07;
  local_c = ExceptionList;
  local_10 = DAT_005ae6a0 ^ (uint)&local_9d8;
  ExceptionList = &local_c;
  LVar2 = SendMessageW(*(HWND *)(unaff_EDI + 0x115c),0x110a,9,0);
  if (LVar2 == 0) {
    LVar2 = -0x10000;
  }
  local_9cc = 0;
  FUN_0043a1fa(local_678,1,L".mck",L"*.mck",2,L"mck(*.mck)|*.mck|",unaff_EDI,0,1);
  local_4 = 0;
  iVar3 = CFileDialog::DoModal(local_678);
  if (iVar3 == 1) {
    GetFileTitle(local_678,(CSimpleStringT<wchar_t,0> *)&local_9d8);
    local_4._0_1_ = 1;
    GetPathName(local_678,&local_9d0);
    local_4._0_1_ = 2;
    if (1 < *(int *)(local_9d8 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&local_9d8,*(int *)(local_9d8 + -0xc));
    }
    this = (CTreeCtrl *)(unaff_EDI + 0x113c);
    iVar3 = FUN_0042bab0(this,LVar2,&LAB_00409cf0,local_9d8,0);
    if (iVar3 == 0) {
      piVar4 = (int *)FUN_0042cd80();
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401b80((undefined4 *)0x80004005);
      }
      iStack_9d4 = (**(code **)(*piVar4 + 0xc))();
      iStack_9d4 = iStack_9d4 + 0x10;
      local_4._0_1_ = 3;
      if (1 < *(int *)(local_9d0 + -2)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&local_9d0,*(int *)(local_9d0 + -6));
      }
      hFile = CreateFileW(local_9d0,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      pvStack_9c4 = hFile;
      if (hFile != (HANDLE)0xffffffff) {
        DStack_9c8 = 0;
        BVar5 = ReadFile(hFile,auStack_354,0x342,&DStack_9c8,(LPOVERLAPPED)0x0);
        if ((BVar5 == 0) || (DStack_9c8 != 0x342)) {
          GetLastError();
          FUN_00401830(&iStack_9d4,L"Read macro file failed. error=0x%x");
          FUN_004169e0(unaff_EDI,&iStack_9d4);
        }
        else {
          FUN_00410420((int)auStack_354);
          if (iStack_9bc == -0x5047760) {
            iVar3 = FUN_0040f860((int)&iStack_9bc);
            if (iVar3 == 0) {
              uVar6 = FUN_004021f0((CSimpleStringT<wchar_t,0> *)&local_9d8);
              __snwprintf_s(awStack_9a8,0x28,0x27,L"%s",uVar6);
              uStack_9b8 = FUN_00428b30();
              FUN_00428a40();
              pvVar7 = (void *)FUN_0042b7d0(this,1,0,0,awStack_9a8,uStack_9b8,5,0);
              FUN_0042b9e0();
              FUN_0040b980((int)&iStack_9bc,1);
              local_9cc = 1;
              FUN_0040b4d0(0xc0000000);
              pCVar8 = (CSimpleStringT<wchar_t,0> *)CTreeCtrl::GetItemText(this,a_Stack_9c0);
              local_4._0_1_ = 4;
              uVar6 = FUN_004021f0(pCVar8);
              piVar4 = FUN_0042bc30(extraout_ECX,(int)pvVar7);
              FUN_0040fcc0(pvVar7,(int)piVar4,uVar6,(int)this);
              local_4._0_1_ = 3;
              FUN_00410aa0((int *)a_Stack_9c0);
              CWnd::ShowWindow(unaff_EDI + 0xe74,0);
              hFile = pvStack_9c4;
            }
            else {
              FUN_00416a80(L"This macro contains unsupported key.",unaff_EDI);
            }
          }
          else {
            FUN_00416a80(L"This is not a valid macro file.",unaff_EDI);
          }
        }
        CloseHandle(hFile);
        local_4._0_1_ = 2;
        piVar4 = (int *)(iStack_9d4 + -4);
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 + -1 < 1) {
          (**(code **)(**(int **)(iStack_9d4 + -0x10) + 4))((undefined4 *)(iStack_9d4 + -0x10));
        }
        local_4._0_1_ = 1;
        pWVar1 = local_9d0 + -2;
        LOCK();
        iVar3 = *(int *)pWVar1;
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        UNLOCK();
        if (iVar3 + -1 < 1) {
          (**(code **)(**(int **)(local_9d0 + -8) + 4))(local_9d0 + -8);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        piVar4 = (int *)(local_9d8 + -4);
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 1 || iVar3 + -1 < 0) {
          (**(code **)(**(int **)(local_9d8 + -0x10) + 4))((undefined4 *)(local_9d8 + -0x10));
        }
        local_4 = 0xffffffff;
        CFileDialog::~CFileDialog(local_678);
        goto LAB_0040f45a;
      }
      GetLastError();
      FUN_00401830(&iStack_9d4,L"Open macro file failed. error=0x%x");
      FUN_004169e0(unaff_EDI,&iStack_9d4);
      local_4._0_1_ = 2;
      piVar4 = (int *)(iStack_9d4 + -4);
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(**(int **)(iStack_9d4 + -0x10) + 4))((undefined4 *)(iStack_9d4 + -0x10));
      }
    }
    else {
      FUN_004169e0(unaff_EDI,&DAT_005b940c);
    }
    local_4._0_1_ = 1;
    pWVar1 = local_9d0 + -2;
    LOCK();
    iVar3 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar3 + -1 < 1) {
      (**(code **)(**(int **)(local_9d0 + -8) + 4))(local_9d0 + -8);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    piVar4 = (int *)(local_9d8 + -4);
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(local_9d8 + -0x10) + 4))((undefined4 *)(local_9d8 + -0x10));
    }
  }
  local_4 = 0xffffffff;
  CFileDialog::~CFileDialog(local_678);
LAB_0040f45a:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_9d8);
  return;
}


//==== FUNC 0053754c  __read_nolock ====

/* Library Function - Single Match
    __read_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __read_nolock(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  ulong *puVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  BOOL BVar8;
  DWORD DVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int unaff_EDI;
  bool bVar14;
  longlong lVar15;
  undefined2 uVar16;
  uint local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  uVar1 = _MaxCharCount;
  local_18 = -2;
  if (_FileHandle == -2) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    return -1;
  }
  if ((_FileHandle < 0) || (DAT_005ba720 <= (uint)_FileHandle)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  piVar5 = &DAT_005ba740 + (_FileHandle >> 5);
  iVar13 = (_FileHandle & 0x1fU) * 0x40;
  bVar2 = *(byte *)(*piVar5 + iVar13 + 4);
  if ((bVar2 & 1) == 0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    goto LAB_00537656;
  }
  if (_MaxCharCount < 0x80000000) {
    local_14 = (byte *)0x0;
    if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
      return 0;
    }
    if (_DstBuf != (void *)0x0) {
      local_6 = (char)(*(char *)(*piVar5 + iVar13 + 0x24) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~_MaxCharCount & 1) == 0) goto LAB_00537644;
        uVar6 = _MaxCharCount >> 1;
        _MaxCharCount = 4;
        if (3 < uVar6) {
          _MaxCharCount = uVar6;
        }
        local_10 = __malloc_crt(_MaxCharCount);
        if (local_10 == (byte *)0x0) {
          piVar5 = __errno();
          *piVar5 = 0xc;
          puVar4 = ___doserrno();
          *puVar4 = 8;
          return -1;
        }
        lVar15 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
        iVar12 = *piVar5;
        *(int *)(iVar13 + 0x28 + iVar12) = (int)lVar15;
        *(int *)(iVar13 + 0x2c + iVar12) = (int)((ulonglong)lVar15 >> 0x20);
      }
      else {
        if (local_6 == '\x02') {
          if ((~_MaxCharCount & 1) == 0) goto LAB_00537644;
          _MaxCharCount = _MaxCharCount & 0xfffffffe;
        }
        local_10 = _DstBuf;
      }
      pbVar7 = local_10;
      uVar6 = _MaxCharCount;
      if ((((*(byte *)(*piVar5 + iVar13 + 4) & 0x48) != 0) &&
          (bVar2 = *(byte *)(*piVar5 + iVar13 + 5), bVar2 != 10)) && (_MaxCharCount != 0)) {
        *local_10 = bVar2;
        pbVar7 = local_10 + 1;
        uVar6 = _MaxCharCount - 1;
        local_14 = (byte *)0x1;
        *(undefined1 *)(iVar13 + 5 + *piVar5) = 10;
        if (((local_6 != '\0') && (bVar2 = *(byte *)(iVar13 + 0x25 + *piVar5), bVar2 != 10)) &&
           (uVar6 != 0)) {
          *pbVar7 = bVar2;
          pbVar7 = local_10 + 2;
          uVar6 = _MaxCharCount - 2;
          local_14 = (byte *)0x2;
          *(undefined1 *)(iVar13 + 0x25 + *piVar5) = 10;
          if (((local_6 == '\x01') && (bVar2 = *(byte *)(iVar13 + 0x26 + *piVar5), bVar2 != 10)) &&
             (uVar6 != 0)) {
            *pbVar7 = bVar2;
            pbVar7 = local_10 + 3;
            local_14 = (byte *)0x3;
            *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
            uVar6 = _MaxCharCount - 3;
          }
        }
      }
      _MaxCharCount = uVar6;
      BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),pbVar7,_MaxCharCount,&local_1c,
                       (LPOVERLAPPED)0x0);
      if (((BVar8 == 0) || ((int)local_1c < 0)) || (_MaxCharCount < local_1c)) {
        uVar10 = GetLastError();
        if (uVar10 != 5) {
          if (uVar10 == 0x6d) {
            local_18 = 0;
            goto LAB_00537963;
          }
          goto LAB_00537958;
        }
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        local_14 = (byte *)((int)local_14 + local_1c);
        pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
        if ((*pbVar7 & 0x80) == 0) goto LAB_00537963;
        if (local_6 == '\x02') {
          if ((local_1c == 0) || (*(short *)local_10 != 10)) {
            *pbVar7 = *pbVar7 & 0xfb;
          }
          else {
            *pbVar7 = *pbVar7 | 4;
          }
          local_14 = local_10 + (int)local_14;
          _MaxCharCount = (uint)local_10;
          pbVar7 = local_10;
          if (local_10 < local_14) {
            do {
              sVar3 = *(short *)_MaxCharCount;
              if (sVar3 == 0x1a) {
                pbVar11 = (byte *)(iVar13 + 4 + *piVar5);
                if ((*pbVar11 & 0x40) == 0) {
                  *pbVar11 = *pbVar11 | 2;
                }
                else {
                  *(undefined2 *)pbVar7 = *(undefined2 *)_MaxCharCount;
                  pbVar7 = pbVar7 + 2;
                }
                break;
              }
              if (sVar3 == 0xd) {
                if (_MaxCharCount < local_14 + -2) {
                  if (*(short *)(_MaxCharCount + 2) == 10) {
                    uVar1 = _MaxCharCount + 4;
                    goto LAB_00537a06;
                  }
LAB_00537a99:
                  _MaxCharCount = _MaxCharCount + 2;
                  uVar16 = 0xd;
LAB_00537a9b:
                  *(undefined2 *)pbVar7 = uVar16;
                }
                else {
                  uVar1 = _MaxCharCount + 2;
                  BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_c,2,&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                  goto LAB_00537a99;
                  if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                    if ((pbVar7 == local_10) && (local_c == 10)) goto LAB_00537a06;
                    __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_00537aa1;
                    goto LAB_00537a99;
                  }
                  if (local_c == 10) {
LAB_00537a06:
                    _MaxCharCount = uVar1;
                    uVar16 = 10;
                    goto LAB_00537a9b;
                  }
                  pbVar7[0] = 0xd;
                  pbVar7[1] = 0;
                  *(undefined1 *)(iVar13 + 5 + *piVar5) = (undefined1)local_c;
                  *(undefined1 *)(iVar13 + 0x25 + *piVar5) = local_c._1_1_;
                  *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
                  _MaxCharCount = uVar1;
                }
                pbVar7 = pbVar7 + 2;
                uVar1 = _MaxCharCount;
              }
              else {
                *(short *)pbVar7 = sVar3;
                pbVar7 = pbVar7 + 2;
                uVar1 = _MaxCharCount + 2;
              }
LAB_00537aa1:
              _MaxCharCount = uVar1;
            } while (_MaxCharCount < local_14);
          }
          local_14 = (byte *)((int)pbVar7 - (int)local_10);
          goto LAB_00537963;
        }
        if ((local_1c == 0) || (*local_10 != 10)) {
          *pbVar7 = *pbVar7 & 0xfb;
        }
        else {
          *pbVar7 = *pbVar7 | 4;
        }
        local_14 = local_10 + (int)local_14;
        _MaxCharCount = (uint)local_10;
        pbVar7 = local_10;
        if (local_10 < local_14) {
          do {
            bVar2 = *(byte *)_MaxCharCount;
            if (bVar2 == 0x1a) {
              pbVar11 = (byte *)(iVar13 + 4 + *piVar5);
              if ((*pbVar11 & 0x40) == 0) {
                *pbVar11 = *pbVar11 | 2;
              }
              else {
                *pbVar7 = *(byte *)_MaxCharCount;
                pbVar7 = pbVar7 + 1;
              }
              break;
            }
            if (bVar2 == 0xd) {
              if (_MaxCharCount < local_14 + -1) {
                if (*(char *)(_MaxCharCount + 1) == '\n') {
                  uVar6 = _MaxCharCount + 2;
                  goto LAB_005377e3;
                }
LAB_0053785a:
                _MaxCharCount = _MaxCharCount + 1;
                *pbVar7 = 0xd;
              }
              else {
                uVar6 = _MaxCharCount + 1;
                BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_5,1,&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                goto LAB_0053785a;
                if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                  if ((pbVar7 == local_10) && (local_5 == '\n')) goto LAB_005377e3;
                  __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_0053785e;
                  goto LAB_0053785a;
                }
                if (local_5 == '\n') {
LAB_005377e3:
                  _MaxCharCount = uVar6;
                  *pbVar7 = 10;
                }
                else {
                  *pbVar7 = 0xd;
                  *(char *)(iVar13 + 5 + *piVar5) = local_5;
                  _MaxCharCount = uVar6;
                }
              }
              pbVar7 = pbVar7 + 1;
              uVar6 = _MaxCharCount;
            }
            else {
              *pbVar7 = bVar2;
              pbVar7 = pbVar7 + 1;
              uVar6 = _MaxCharCount + 1;
            }
LAB_0053785e:
            _MaxCharCount = uVar6;
          } while (_MaxCharCount < local_14);
        }
        local_14 = (byte *)((int)pbVar7 - (int)local_10);
        if ((local_6 != '\x01') || (local_14 == (byte *)0x0)) goto LAB_00537963;
        bVar2 = pbVar7[-1];
        if ((char)bVar2 < '\0') {
          iVar12 = 1;
          pbVar7 = pbVar7 + -1;
          while ((((&DAT_005af348)[bVar2] == '\0' && (iVar12 < 5)) && (local_10 <= pbVar7))) {
            pbVar7 = pbVar7 + -1;
            bVar2 = *pbVar7;
            iVar12 = iVar12 + 1;
          }
          if ((char)(&DAT_005af348)[*pbVar7] == 0) {
            piVar5 = __errno();
            *piVar5 = 0x2a;
            goto LAB_0053795f;
          }
          if ((char)(&DAT_005af348)[*pbVar7] + 1 == iVar12) {
            pbVar7 = pbVar7 + iVar12;
          }
          else if ((*(byte *)(*piVar5 + iVar13 + 4) & 0x48) == 0) {
            __lseeki64_nolock(_FileHandle,CONCAT44(1,-iVar12 >> 0x1f),unaff_EDI);
          }
          else {
            pbVar11 = pbVar7 + 1;
            *(byte *)(*piVar5 + iVar13 + 5) = *pbVar7;
            if (1 < iVar12) {
              *(byte *)(iVar13 + 0x25 + *piVar5) = *pbVar11;
              pbVar11 = pbVar7 + 2;
            }
            if (iVar12 == 3) {
              *(byte *)(iVar13 + 0x26 + *piVar5) = *pbVar11;
              pbVar11 = pbVar11 + 1;
            }
            pbVar7 = pbVar11 + -iVar12;
          }
        }
        iVar12 = (int)pbVar7 - (int)local_10;
        local_14 = (byte *)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_10,iVar12,_DstBuf,uVar1 >> 1);
        if (local_14 != (byte *)0x0) {
          bVar14 = local_14 != (byte *)iVar12;
          local_14 = (byte *)((int)local_14 * 2);
          *(uint *)(iVar13 + 0x30 + *piVar5) = (uint)bVar14;
          goto LAB_00537963;
        }
        uVar10 = GetLastError();
LAB_00537958:
        __dosmaperr(uVar10);
      }
LAB_0053795f:
      local_18 = -1;
LAB_00537963:
      if (local_10 != _DstBuf) {
        _free(local_10);
      }
      if (local_18 == -2) {
        return (int)local_14;
      }
      return local_18;
    }
  }
LAB_00537644:
  puVar4 = ___doserrno();
  *puVar4 = 0;
  piVar5 = __errno();
  *piVar5 = 0x16;
LAB_00537656:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


//==== FUNC 0042a310  FUN_0042a310 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0042a310(void)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  void *_Dst;
  int iVar3;
  int *_Src;
  DWORD local_fbfc;
  int local_fbf8 [15995];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_005ae6a0 ^ (uint)&local_fbfc;
  _memset(local_fbf8,0,0xf9ec);
  __snwprintf_s(local_20c,0x104,0x103,L"%s%s",&DAT_005b8c48,L"pro.dct");
  hFile = CreateFileW(local_20c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
    (*DAT_005b9074)(L"Open pro file err=%d",DVar2);
  }
  else {
    local_fbfc = 0;
    BVar1 = ReadFile(hFile,local_fbf8,0xf9ec,&local_fbfc,(LPOVERLAPPED)0x0);
    CloseHandle(hFile);
    if ((BVar1 == 0) || (local_fbfc != 0xf9ec)) {
      (*DAT_005b9074)(L"Profile size is wrong");
      __security_check_cookie(local_4 ^ (uint)&local_fbfc);
      return;
    }
  }
  FUN_00416fc0();
  _Src = local_fbf8;
  iVar3 = 5;
  do {
    if (((_Src[1] != 0) && (*_Src == -0x30486ff)) && (_Src != (int *)0x0)) {
      _Dst = _malloc(0x31fc);
      if (_Dst != (void *)0x0) {
        _memcpy(_Dst,_Src,0x31fc);
        FUN_00416ef0(_Dst);
      }
    }
    _Src = _Src + 0xc7f;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  __security_check_cookie(local_4 ^ (uint)&local_fbfc);
  return;
}


//==== FUNC 0042a680  FUN_0042a680 ====

void FUN_0042a680(void)

{
  HANDLE hFile;
  undefined4 local_214;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_005ae6a0 ^ (uint)&local_214;
  __snwprintf_s(local_20c,0x104,0x103,L"%s%s",&DAT_005b8c48,L"curid.dct");
  local_214 = 0;
  hFile = CreateFileW(local_20c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    local_210 = 0;
    ReadFile(hFile,&local_214,4,&local_210,(LPOVERLAPPED)0x0);
    CloseHandle(hFile);
  }
  __security_check_cookie(local_4 ^ (uint)&local_214);
  return;
}


//==== FUNC 00404e80  FUN_00404e80 ====

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00404e80(wchar_t *param_1,int param_2,void *param_3)

{
  wchar_t wVar1;
  WCHAR WVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  HANDLE hFile;
  uint uVar6;
  WCHAR *pWVar7;
  BOOL BVar8;
  undefined1 auStack_d0c [4];
  undefined4 local_d08;
  DWORD local_d04;
  HANDLE local_d00;
  _WIN32_FIND_DATAW local_cfc;
  int local_aac;
  int local_aa8;
  byte local_764 [838];
  short sStack_41e;
  wchar_t local_41c;
  undefined2 local_41a [259];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_005ae6a0 ^ (uint)auStack_d0c;
  local_d08 = 1;
  _wcsncpy_s(&local_41c,0x104,param_1,0xffffffff);
  pwVar4 = &local_41c;
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  iVar5 = (int)pwVar4 - (int)local_41a >> 1;
  if (iVar5 < 0x101) {
    if ((&sStack_41e)[iVar5] != 0x5c) {
      local_41a[iVar5 + -1] = 0x5c;
      local_41a[iVar5] = 0;
    }
    __snwprintf_s(local_214,0x104,0x103,L"%s%s",&local_41c,&DAT_00582760);
    local_d00 = FindFirstFileW(local_214,&local_cfc);
    if (local_d00 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_cfc.dwFileAttributes & 0x10) == 0) {
          __snwprintf_s(local_214,0x104,0x103,L"%s%s",&local_41c,local_cfc.cFileName);
          hFile = CreateFileW(local_214,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
          if (hFile != (HANDLE)0xffffffff) {
            local_d04 = 0;
            BVar8 = ReadFile(hFile,local_764,0x342,&local_d04,(LPOVERLAPPED)0x0);
            if ((BVar8 != 0) && (local_d04 == 0x342)) {
              uVar6 = 0;
              do {
                *(byte *)((int)&local_aac + uVar6) = local_764[uVar6] << 2 | local_764[uVar6] >> 6;
                uVar6 = uVar6 + 1;
              } while (uVar6 < 0x342);
              if (local_aac == -0x5047760) {
                pWVar7 = local_cfc.cFileName;
                do {
                  WVar2 = *pWVar7;
                  pWVar7 = pWVar7 + 1;
                } while (WVar2 != L'\0');
                iVar5 = (int)pWVar7 - (int)(local_cfc.cFileName + 1) >> 1;
                do {
                  iVar3 = iVar5;
                  if ((iVar3 + -1 < 0) || (local_cfc.cFileName[iVar3 + -1] == L'\0'))
                  goto LAB_00405166;
                  iVar5 = iVar3 + -1;
                } while (local_cfc.cFileName[iVar3 + -1] != L'.');
                local_cfc.cFileName[iVar3 + -1] = L'\0';
LAB_00405166:
                FUN_0042b7d0(param_3,0,0,0,local_cfc.cFileName,local_aa8,0,5);
              }
            }
            CloseHandle(hFile);
          }
        }
        else if (((local_cfc.cFileName[0] != L'.') && (local_cfc.cFileName[0] != L'$')) &&
                (DAT_005b8ad0 != 0)) {
          __snwprintf_s(local_214,0x104,0x103,L"%s%s\\%s.png",&local_41c,local_cfc.cFileName,
                        local_cfc.cFileName);
          FUN_0042b7d0(param_3,0,1,local_214,local_cfc.cFileName,0,0,5);
          if (param_2 != 0) {
            __snwprintf_s(local_214,0x104,0x103,L"%s%s\\",&local_41c,local_cfc.cFileName);
            iVar5 = FUN_00404e80(local_214,param_2,param_3);
            if (iVar5 == 0) {
              local_d08 = 0;
              break;
            }
          }
        }
        BVar8 = FindNextFileW(local_d00,&local_cfc);
      } while (BVar8 != 0);
      FindClose(local_d00);
    }
  }
  __security_check_cookie(local_8 ^ (uint)auStack_d0c);
  return;
}


//==== FUNC 00438354  Read ====

/* Library Function - Single Match
    public: virtual unsigned int __thiscall CFile::Read(void *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __thiscall CFile::Read(CFile *this,void *param_1,uint param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  short *psVar3;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    BVar1 = ReadFile(*(HANDLE *)(this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      psVar3 = *(short **)(this + 0xc);
      DVar2 = GetLastError();
      ThrowOsError(DVar2,psVar3);
    }
  }
  return param_2;
}


//==== FUNC 0053833e  __write ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2008 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_005ba720)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_005ba740)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_005ba740)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_00538410();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}


//==== FUNC 00542834  __chsize_nolock ====

/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __chsize_nolock(int _FileHandle,longlong _Size)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID _Buf;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  BOOL BVar7;
  uint uVar8;
  int unaff_EDI;
  int iVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint in_stack_00000008;
  DWORD DVar14;
  SIZE_T dwBytes;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  uVar12 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
  if (uVar12 == 0xffffffffffffffff) goto LAB_005428bc;
  lVar13 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar4 = (int)((ulonglong)lVar13 >> 0x20);
  if (lVar13 == -1) goto LAB_005428bc;
  uVar8 = in_stack_00000008 - (uint)lVar13;
  uVar5 = (uint)(in_stack_00000008 < (uint)lVar13);
  iVar1 = (int)_Size - iVar4;
  iVar9 = iVar1 - uVar5;
  if ((iVar9 < 0) ||
     ((iVar9 == 0 || SBORROW4((int)_Size,iVar4) != SBORROW4(iVar1,uVar5) && (uVar8 == 0)))) {
    if ((iVar9 < 1) && (iVar9 < 0)) {
      lVar13 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar13 == -1) goto LAB_005428bc;
      pvVar2 = (HANDLE)__get_osfhandle(_FileHandle);
      BVar7 = SetEndOfFile(pvVar2);
      local_14 = (BVar7 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        piVar3 = __errno();
        *piVar3 = 0xd;
        puVar6 = ___doserrno();
        DVar14 = GetLastError();
        *puVar6 = DVar14;
        goto LAB_005429ba;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar14 = 8;
    pvVar2 = GetProcessHeap();
    _Buf = HeapAlloc(pvVar2,DVar14,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_005428bc;
    }
    iVar4 = __setmode_nolock(_FileHandle,0x8000);
    while( true ) {
      uVar5 = uVar8;
      if ((-1 < iVar9) && ((0 < iVar9 || (0xfff < uVar8)))) {
        uVar5 = 0x1000;
      }
      uVar5 = __write_nolock(_FileHandle,_Buf,uVar5);
      if (uVar5 == 0xffffffff) break;
      bVar10 = uVar8 < uVar5;
      uVar8 = uVar8 - uVar5;
      bVar11 = SBORROW4(iVar9,(int)uVar5 >> 0x1f);
      iVar1 = iVar9 - ((int)uVar5 >> 0x1f);
      iVar9 = iVar1 - (uint)bVar10;
      if ((iVar9 < 0) || ((iVar9 == 0 || bVar11 != SBORROW4(iVar1,(uint)bVar10) && (uVar8 == 0))))
      goto LAB_0054290e;
    }
    puVar6 = ___doserrno();
    if (*puVar6 == 5) {
      piVar3 = __errno();
      *piVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_0054290e:
    __setmode_nolock(_FileHandle,iVar4);
    DVar14 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar14,_Buf);
LAB_005429ba:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_005428bc;
  }
  lVar13 = __lseeki64_nolock(_FileHandle,uVar12 >> 0x20,unaff_EDI);
  if (lVar13 != -1) {
    return 0;
  }
LAB_005428bc:
  piVar3 = __errno();
  return *piVar3;
}


//==== FUNC 0040b500  FUN_0040b500 ====

int __thiscall FUN_0040b500(void *this,uint param_1,int param_2)

{
  LPCWSTR lpString;
  int *piVar1;
  CSimpleStringT<wchar_t,0> *pCVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar5;
  CTreeCtrl *this_00;
  _TREEITEM a_Stack_34 [4];
  LONG LStack_30;
  LONG LStack_2c;
  tagRECT tStack_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00554e58;
  local_14 = ExceptionList;
  lpString = (LPCWSTR)(DAT_005ae6a0 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_14;
  if (DAT_005b90a4 != (code *)0x0) {
    (*DAT_005b90a4)();
  }
  iVar4 = 0;
  if (this != (void *)0xffffff74) {
    iVar4 = *(int *)((int)this + 0xac);
  }
  if ((param_2 != iVar4) && (*(int *)((int)this + 0x13d8) != 0)) {
    FUN_004169e0(this,&DAT_005b9430);
    ExceptionList = local_14;
    return 1;
  }
  if (this == (void *)0xfffffe10) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x210);
  }
  if (param_2 == iVar4) {
    if ((*(int *)((int)this + 0x13d8) == 0) &&
       (uVar5 = (uint)(*(int *)((int)this + 0x294) == 0), uVar5 != *(uint *)((int)this + 0x294))) {
      *(uint *)((int)this + 0x294) = uVar5;
      InvalidateRect(*(HWND *)((int)this + 0x210),(RECT *)0x0,1);
    }
    goto LAB_0040b744;
  }
  iVar4 = 0;
  if (this != (void *)0xfffff028) {
    iVar4 = *(int *)((int)this + 0xff8);
  }
  if (param_2 == iVar4) {
    (**(code **)(*(int *)this + 0x15c))();
    goto LAB_0040b744;
  }
  if (this == (void *)0xfffffcac) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x374);
  }
  if (param_2 == iVar4) {
    if (*(int *)((int)this + 0x3f8) != 1) {
      *(undefined4 *)((int)this + 0x3f8) = 1;
      InvalidateRect(*(HWND *)((int)this + 0x374),(RECT *)0x0,1);
    }
    if (*(int *)((int)this + 0x55c) != 0) {
      *(undefined4 *)((int)this + 0x55c) = 0;
      InvalidateRect(*(HWND *)((int)this + 0x4d8),(RECT *)0x0,1);
    }
    if (*(int *)((int)this + 0x6c0) != 0) {
      *(undefined4 *)((int)this + 0x6c0) = 0;
      InvalidateRect(*(HWND *)((int)this + 0x63c),(RECT *)0x0,1);
    }
    FID_conflict_SetWindowTextW((HWND)&DAT_005830e4,lpString);
    CWnd::ShowWindow(*(CWnd **)((int)this + 0x13d4),5);
    iVar4 = FUN_0040e6a0();
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x40000000;
      CWnd::ShowWindow((CWnd *)((int)this + 0xe74),5);
    }
    goto LAB_0040b744;
  }
  if (this == (void *)0xfffffb48) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0x4d8);
  }
  if (param_2 == iVar4) {
    FUN_00421430(0);
    FUN_00421430(1);
    iVar4 = 0;
LAB_0040b716:
    FUN_00421430(iVar4);
    FID_conflict_SetWindowTextW((HWND)&PTR_00581f58,lpString);
    CWnd::ShowWindow(*(CWnd **)((int)this + 0x13d4),0);
    uVar5 = 0x40000000;
  }
  else {
    if ((this != (void *)0xfffff9e4) && (*(int *)((int)this + 0x63c) != 0)) {
      if (this == (void *)0xfffff9e4) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 0x63c);
      }
      if (param_2 == iVar4) {
        FUN_00421430(0);
        FUN_00421430(0);
        iVar4 = 1;
        goto LAB_0040b716;
      }
    }
    iVar4 = 0;
    if (this != (void *)0xfffff18c) {
      iVar4 = *(int *)((int)this + 0xe94);
    }
    if (param_2 == iVar4) {
      FUN_0040bb30(this);
      this_00 = (CTreeCtrl *)((int)this + 0x113c);
      iVar4 = FUN_00407840((int)this_00);
      piVar1 = FUN_0042bc30(extraout_ECX,iVar4);
      if ((piVar1 != (int *)0x0) && (piVar1[6] == 1)) {
        pCVar2 = (CSimpleStringT<wchar_t,0> *)CTreeCtrl::GetItemText(this_00,a_Stack_34);
        uStack_c = 0;
        uVar3 = FUN_004021f0(pCVar2);
        FUN_0040fcc0((void *)*piVar1,(int)piVar1,uVar3,(int)this_00);
        uStack_c = 0xffffffff;
        FUN_00410aa0((int *)a_Stack_34);
        CWnd::ShowWindow((CWnd *)((int)this + 0xe74),0);
      }
      goto LAB_0040b744;
    }
    iVar4 = 0;
    if (this != (void *)0xfffff454) {
      iVar4 = *(int *)((int)this + 0xbcc);
    }
    if (param_2 == iVar4) {
      if (*(int *)((int)this + 0x13d8) == 0) {
        FUN_0040c6a0(this);
      }
      goto LAB_0040b744;
    }
    iVar4 = 0;
    if (this != (void *)0xfffff2f0) {
      iVar4 = *(int *)((int)this + 0xd30);
    }
    if (param_2 == iVar4) {
      if (*(int *)((int)this + 0x13d8) != 0) {
        ExceptionList = local_14;
        return 1;
      }
      iVar4 = FUN_00407840((int)this + 0x1280);
      if (iVar4 == 0) {
        FUN_004169e0(this,&DAT_005b93f0);
        ExceptionList = local_14;
        return 1;
      }
      FUN_0042b990(iVar4);
      uVar5 = 0x80000000;
    }
    else {
      iVar4 = 0;
      if (this != (void *)0xffffff74) {
        iVar4 = *(int *)((int)this + 0xac);
      }
      if (param_2 != iVar4) {
        iVar4 = 0;
        if (this != (void *)0xfffff880) {
          iVar4 = *(int *)((int)this + 0x7a0);
        }
        if (param_2 == iVar4) {
          iVar4 = FUN_00407840((int)this + 0x113c);
          piVar1 = FUN_0042bc30(extraout_ECX_00,iVar4);
          if ((piVar1 == (int *)0x0) || (piVar1[6] != 1)) {
            FUN_004169e0(this,&DAT_005b93f0);
            ExceptionList = local_14;
            return 1;
          }
          GetWindowRect(*(HWND *)((int)this + 0x7a0),&tStack_28);
          LStack_30 = tStack_28.left;
          LStack_2c = tStack_28.bottom;
          FUN_0040d7f0((int)this,&LStack_30,0x8000);
        }
        goto LAB_0040b744;
      }
      if (*(int *)((int)this + 0x13d8) == 0) {
        FUN_0040d1c0(this);
        goto LAB_0040b744;
      }
      FUN_0040d300();
      uVar5 = 0xc0000000;
    }
  }
  FUN_0040b4d0(uVar5);
LAB_0040b744:
  iVar4 = CWnd::OnCommand(this,param_1,param_2);
  ExceptionList = local_14;
  return iVar4;
}


//==== FUNC 0040be70  FUN_0040be70 ====

void __fastcall FUN_0040be70(CWnd *param_1)

{
  CTreeCtrl *pCVar1;
  LRESULT LVar2;
  CStringData *pCVar3;
  int iVar4;
  short *psVar5;
  BOOL BVar6;
  void *this;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar8;
  undefined4 extraout_ECX_02;
  _TREEITEM *p_Var9;
  int *piVar10;
  CTreeCtrl *this_00;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined4 *local_a64;
  int *local_a60;
  undefined1 *local_a5c;
  CWnd *local_a58;
  int local_a54;
  CTreeCtrl *local_a50;
  CTreeCtrl *local_a4c;
  void *local_a48;
  undefined4 local_a44;
  undefined4 local_a40;
  undefined4 local_a3c;
  wchar_t local_a38 [260];
  wchar_t local_830 [260];
  wchar_t local_628 [260];
  wchar_t local_420 [260];
  wchar_t local_218 [262];
  uint local_c;
  
  local_c = DAT_005ae6a0 ^ (uint)&local_a64;
  this_00 = (CTreeCtrl *)(param_1 + 0x113c);
  local_a58 = param_1;
  local_a50 = this_00;
  LVar2 = SendMessageW(*(HWND *)(param_1 + 0x115c),0x110a,9,0);
  pwVar12 = *(wchar_t **)(param_1 + 0x1260);
  if (pwVar12 != (wchar_t *)0x0) {
    while (piVar10 = *(int **)pwVar12, local_a60 = piVar10, *piVar10 != LVar2) {
      pwVar12 = *(wchar_t **)(pwVar12 + 2);
      if (pwVar12 == (wchar_t *)0x0) {
        __security_check_cookie(local_c ^ (uint)&local_a64);
        return;
      }
    }
    local_a54 = piVar10[6];
    if (local_a54 == 2) {
      pwVar12 = local_a38;
      local_a5c = &stack0xfffff588;
      local_a64 = (undefined4 *)&stack0xfffff588;
      pwVar13 = pwVar12;
      pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_005b9420 + -0x10));
      *local_a64 = pCVar3 + 0x10;
    }
    else {
      pwVar13 = local_a38;
      local_a5c = &stack0xfffff588;
      local_a64 = (undefined4 *)&stack0xfffff588;
      pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_005b9418 + -0x10));
      *local_a64 = pCVar3 + 0x10;
    }
    iVar4 = FUN_00416be0(param_1,(int)pwVar12,pwVar13);
    if (iVar4 != 0) {
      psVar5 = FUN_0040c660(extraout_ECX,local_a38);
      if (psVar5 != (short *)0x0) {
        *psVar5 = 0;
      }
      local_a64 = (undefined4 *)SendMessageW(*(HWND *)(param_1 + 0x115c),0x110a,3,*piVar10);
      if (local_a64 == (undefined4 *)0x0) {
        local_a64 = (undefined4 *)0xffff0000;
      }
      iVar4 = FUN_0042bab0(this_00,(int)local_a64,&LAB_00409cf0,local_a38,0);
      if (iVar4 != 0) {
        FUN_004169e0(local_a58,&DAT_005b940c);
        __security_check_cookie(local_c ^ (uint)&local_a64);
        return;
      }
      iVar4 = FUN_0040f900((void *)*piVar10,local_628);
      piVar10 = local_a60;
      if (iVar4 == 0) {
        FUN_00416a80(L"Rename failed.",local_a58);
        __security_check_cookie(local_c ^ (uint)&local_a64);
        return;
      }
      uVar8 = extraout_ECX_00;
      if ((local_a54 == 2) &&
         (iVar4 = CTreeCtrl::ItemHasChildren(this_00,(_TREEITEM *)*local_a60),
         uVar8 = extraout_ECX_01, iVar4 == 0)) {
        puVar7 = *(undefined4 **)(param_1 + 0x1260);
        p_Var9 = (_TREEITEM *)*piVar10;
        if (puVar7 != (undefined4 *)0x0) {
          while (*(_TREEITEM **)*puVar7 != p_Var9) {
            puVar7 = (undefined4 *)puVar7[1];
            if (puVar7 == (undefined4 *)0x0) {
              __security_check_cookie(local_c ^ (uint)&local_a64);
              return;
            }
          }
LAB_0040c062:
          CTreeCtrl::SetItem(this_00,p_Var9,1,local_a38,0,0,0,0,0);
          __security_check_cookie(local_c ^ (uint)&local_a64);
          return;
        }
      }
      else {
        psVar5 = FUN_0040c660(uVar8,local_628);
        if (psVar5 != (short *)0x0) {
          __snwprintf_s(local_218,0x104,0x103,L"%s");
          pCVar1 = local_a50;
          psVar5[1] = 0;
          puVar11 = (undefined1 *)0x0;
          if (local_a54 == 1) {
            iVar4 = FUN_00428b00(extraout_ECX_02,piVar10[4]);
            if (iVar4 == 0) goto LAB_0040c37b;
            __snwprintf_s((wchar_t *)(iVar4 + 0x14),0x28,0x27,L"%s");
            FUN_0040fcc0((void *)*piVar10,(int)piVar10,0,(int)this_00);
            __snwprintf_s(local_420,0x104,0x103,L"%s%s");
            pwVar12 = L"%s%s.mck";
          }
          else {
            if (local_a54 == 2) {
              local_a5c = (undefined1 *)FUN_0040f800();
              if (local_a5c != (undefined1 *)0x0) {
                FUN_0040f780();
              }
              __snwprintf_s(local_420,0x104,0x103,L"%s%s\\%s.png",local_628);
              __snwprintf_s(local_830,0x104,0x103,L"%s%s\\%s.png",local_628);
              MoveFileW(local_420,local_830);
              piVar10 = local_a60;
              this_00 = pCVar1;
              puVar11 = local_a5c;
            }
            __snwprintf_s(local_420,0x104,0x103,L"%s%s");
            pwVar12 = L"%s%s";
          }
          __snwprintf_s(local_830,0x104,0x103,pwVar12,local_628,local_a38);
          BVar6 = MoveFileW(local_420,local_830);
          if (BVar6 == 0) {
            GetLastError();
            __snwprintf_s(local_420,0x104,0x103,L"Rename failed. err=0x%x");
            FUN_00416a80(local_420,local_a58);
            __security_check_cookie(local_c ^ (uint)&local_a64);
            return;
          }
          if (puVar11 == (undefined1 *)0x0) {
            puVar7 = *(undefined4 **)(this_00 + 0x124);
            p_Var9 = (_TREEITEM *)*piVar10;
            if (puVar7 != (undefined4 *)0x0) {
              while (*(_TREEITEM **)*puVar7 != p_Var9) {
                puVar7 = (undefined4 *)puVar7[1];
                if (puVar7 == (undefined4 *)0x0) {
                  __security_check_cookie(local_c ^ (uint)&local_a64);
                  return;
                }
              }
              goto LAB_0040c062;
            }
          }
          else {
            __snwprintf_s(local_830,0x104,0x103,L"%s%s\\%s.png",local_628);
            this = (void *)FUN_0042b7d0(this_00,0,1,local_830,local_a38,0,0,5);
            if (local_a54 == 2) {
              FUN_0040f900(this,local_830);
              local_a3c = 0;
              local_a44 = 0;
              local_a40 = DAT_005b8ad0;
              local_a4c = this_00;
              local_a48 = this;
              FUN_0040fe20(local_830,1,&local_a4c);
            }
          }
        }
      }
    }
  }
LAB_0040c37b:
  __security_check_cookie(local_c ^ (uint)&local_a64);
  return;
}


//==== FUNC 0040a130  FUN_0040a130 ====

void __fastcall FUN_0040a130(CWnd *param_1)

{
  FUN_0042bab0(param_1 + 0x113c,0,FUN_0040fcc0,param_1 + 0x113c,1);
  CWnd::DestroyWindow(param_1);
  return;
}


//==== FUNC 0040cb80  FUN_0040cb80 ====

undefined4 __cdecl FUN_0040cb80(void *param_1,int param_2,undefined4 param_3,int param_4)

{
  FUN_0040fcc0(param_1,param_2,0,param_4);
  return 0;
}


//==== FUNC 0041cec0  FUN_0041cec0 ====

void FUN_0041cec0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *local_4;
  
  if (DAT_005b90dc != 0) {
    bVar1 = false;
    iVar5 = 0;
    local_4 = &DAT_005b6828;
    piVar4 = (int *)(DAT_005b90dc + 0x27c);
    do {
      if ((*(char *)((int)piVar4 + -0x15) == '\x05') && (param_2 == *piVar4)) {
        piVar6 = local_4;
        piVar7 = piVar4 + -6;
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        iVar2 = *(int *)(param_1 + 0x2010);
        if ((iVar5 < 0x7e) &&
           ((iVar3 = iVar5, -1 < iVar5 || (iVar3 = *(int *)(iVar2 + 0xc50), -1 < iVar3)))) {
          *(undefined4 *)(iVar2 + 0x80 + iVar3 * 4) = 0;
          InvalidateRect(*(HWND *)(iVar2 + 0x20),(RECT *)0x0,1);
        }
        bVar1 = true;
      }
      local_4 = local_4 + 9;
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 9;
    } while ((int)local_4 < 0x5b79e0);
    if (bVar1) {
      FUN_0042a480();
    }
  }
  return;
}


//==== FUNC 0041f2e0  FUN_0041f2e0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0041f2e0(void *this,uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  CStringData *pCVar4;
  CStringData *pCVar5;
  int iVar6;
  int extraout_ECX;
  int iVar7;
  int iStack_164c;
  int iStack_1648;
  undefined1 *puStack_1644;
  undefined4 uStack_1640;
  undefined4 uStack_163c;
  undefined4 uStack_1638;
  undefined4 uStack_1634;
  CDialog aCStack_1630 [488];
  undefined4 uStack_1448;
  undefined4 uStack_1444;
  undefined4 uStack_1428;
  undefined4 uStack_1424;
  undefined4 uStack_1420;
  undefined4 uStack_141c;
  undefined4 uStack_1410;
  CDialog aCStack_1408 [5100];
  undefined4 uStack_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00555307;
  local_14 = ExceptionList;
  uStack_1c = 0x41f2ff;
  ExceptionList = &local_14;
  pvStack_18 = this;
  if (DAT_005b90a4 != (code *)0x0) {
    (*DAT_005b90a4)();
  }
  iVar6 = 0;
  if (this != (void *)0xfffff4cc) {
    iVar6 = *(int *)((int)this + 0xb54);
  }
  if (param_2 == iVar6) {
LAB_0041f792:
    if ((*(int *)((int)this + 0x2484) != 0) &&
       (*(int *)(*(int *)((int)this + 0x2484) + 0x13d8) != 0)) {
      FUN_004169e0(this,&DAT_005b9430);
      ExceptionList = local_14;
      return 1;
    }
    if ((DAT_005b7bb8 == 1) || (DAT_005b7bb8 == 3)) {
      CWnd::ShowWindow(this,0);
    }
    else {
      PostMessageW(*(HWND *)((int)this + 0x20),0x10,0,0);
    }
    goto LAB_0041f76e;
  }
  if ((this != (void *)0xfffff0a0) && (*(int *)((int)this + 0xf80) != 0)) {
    iVar6 = 0;
    if (this != (void *)0xfffff0a0) {
      iVar6 = *(int *)((int)this + 0xf80);
    }
    if (param_2 == iVar6) goto LAB_0041f792;
  }
  iVar6 = 0;
  if (this != (void *)0xfffff368) {
    iVar6 = *(int *)((int)this + 0xcb8);
  }
  if (param_2 != iVar6) {
    iVar6 = 0;
    if (this != (void *)0xffffef3c) {
      iVar6 = *(int *)((int)this + 0x10e4);
    }
    if (param_2 != iVar6) {
      if ((this != (void *)0xfffff204) && (*(int *)((int)this + 0xe1c) != 0)) {
        iVar6 = 0;
        if (this != (void *)0xfffff204) {
          iVar6 = *(int *)((int)this + 0xe1c);
        }
        if (param_2 == iVar6) goto LAB_0041f493;
      }
      iVar6 = 0;
      if (this != (void *)0xfffff630) {
        iVar6 = *(int *)((int)this + 0x9f0);
      }
      if (param_2 == iVar6) {
        CWnd::ShowWindow(this,6);
      }
      else {
        iVar6 = 0;
        if (this != (void *)0xffffe9ac) {
          iVar6 = *(int *)((int)this + 0x1674);
        }
        if (param_2 == iVar6) {
          FUN_00409d10(aCStack_1408);
          iStack_c = 4;
          FUN_0042e689(aCStack_1408);
          iStack_c = 0xffffffff;
          FUN_00409f30(aCStack_1408);
        }
        else {
          if ((this != (void *)0xffffe6e4) && (*(int *)((int)this + 0x193c) != 0)) {
            iVar6 = 0;
            if (this != (void *)0xffffe6e4) {
              iVar6 = *(int *)((int)this + 0x193c);
            }
            if (param_2 == iVar6) {
              if (0 < *(int *)(DAT_005b9320 + -6)) {
                ShellExecuteW((HWND)0x0,L"open",DAT_005b9320,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
              }
              goto LAB_0041f76e;
            }
          }
          iVar6 = (int)this + 0x1228;
          iVar7 = 3;
          do {
            if (iVar6 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(iVar6 + 0x20);
            }
            if (param_2 == iVar2) {
              FUN_0041d850((int)this,*(int *)(iVar6 + 0x8c));
            }
            iVar6 = iVar6 + 0x164;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      goto LAB_0041f76e;
    }
  }
LAB_0041f493:
  if ((*(int *)((int)this + 0x21a8) == 0) && (DAT_005b7bcc == 0)) {
    FUN_004169e0(this,&DAT_005b9480);
    ExceptionList = local_14;
    return 1;
  }
  uVar3 = FUN_0042c3d0();
  if (1 < uVar3) {
    FUN_004169e0(this,&DAT_005b9470);
    ExceptionList = local_14;
    return 1;
  }
  iVar6 = 0;
  if (this != (void *)0xffffef3c) {
    iVar6 = *(int *)((int)this + 0x10e4);
  }
  if (param_2 == iVar6) {
    iVar6 = FUN_00416b40(this,&DAT_005b9458);
    if (iVar6 != 1) {
      ExceptionList = local_14;
      return 1;
    }
    FUN_0042a190();
    FUN_0041f920(extraout_ECX);
  }
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&iStack_164c);
  iStack_c = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&iStack_1648);
  iStack_c._0_1_ = 1;
  FUN_00401830(&iStack_164c,L"%sskins\\%s");
  FUN_00401830(&iStack_1648,L"%sskins\\%s");
  FUN_00423640(aCStack_1630);
  iStack_c._0_1_ = 2;
  puStack_1644 = &stack0xffffe998;
  pCVar4 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iStack_1648 + -0x10));
  pCVar4 = pCVar4 + 0x10;
  iStack_c._0_1_ = 3;
  pCVar5 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iStack_164c + -0x10));
  iStack_c = CONCAT31(iStack_c._1_3_,2);
  FUN_00424110((int)(pCVar5 + 0x10),(int)pCVar4);
  uStack_1428 = 0x2d;
  puStack_1644 = &stack0xffffe998;
  uStack_141c = 0x7b;
  uStack_1424 = 0x65;
  uStack_1420 = 0x1e6;
  uStack_1640 = 0xf;
  uStack_163c = 0xc;
  uStack_1638 = 0x1c7;
  uStack_1634 = 0x20;
  pCVar4 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_005b9474 + -0x10));
  FUN_00424070((int)(pCVar4 + 0x10));
  uStack_1448 = 0;
  uStack_1444 = 100;
  uStack_1410 = 0;
  _DAT_005b9068 = 0x8007;
  ReleaseSemaphore(DAT_005b9060,1,(LPLONG)0x0);
  FUN_0042e689(aCStack_1630);
  FUN_0042a480();
  FUN_0042a5d0();
  if ((this != (void *)0xfffff204) && (*(int *)((int)this + 0xe1c) != 0)) {
    if (this == (void *)0xfffff204) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 0xe1c);
    }
    if (param_2 == iVar6) {
      if ((DAT_005b7bb8 == 1) || (DAT_005b7bb8 == 3)) {
        CWnd::ShowWindow(this,0);
      }
      else {
        FUN_0041d640((int)this);
      }
    }
  }
  iStack_c._0_1_ = 1;
  FUN_004237c0(aCStack_1630);
  iStack_c = (uint)iStack_c._1_3_ << 8;
  piVar1 = (int *)(iStack_1648 + -4);
  LOCK();
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(iStack_1648 + -0x10) + 4))();
  }
  iStack_c = 0xffffffff;
  piVar1 = (int *)(iStack_164c + -4);
  LOCK();
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(iStack_164c + -0x10) + 4))();
  }
LAB_0041f76e:
  iVar6 = CWnd::OnCommand(this,param_1,param_2);
  ExceptionList = local_14;
  return iVar6;
}


//==== FUNC 0041fe60  FUN_0041fe60 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0041fe60(CWnd *param_1)

{
  wchar_t *pwVar1;
  void *_Src;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_5624 [4];
  int local_5620;
  int local_561c;
  wchar_t *local_5618;
  CWnd *local_5614;
  CFile local_5610 [16];
  CFileDialog local_5600 [808];
  undefined4 local_52d8;
  undefined1 local_52d4 [12792];
  undefined4 local_20dc [2086];
  wchar_t local_44 [20];
  uint local_1c;
  CWnd *pCStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  _Src = DAT_005b90dc;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00554f9c;
  local_14 = ExceptionList;
  local_1c = DAT_005ae6a0 ^ (uint)auStack_5624;
  ExceptionList = &local_14;
  local_5614 = param_1;
  pCStack_18 = param_1;
  if (DAT_005b90dc != (void *)0x0) {
    __snwprintf_s(local_44,0x14,0x13,L"%s.byk",(int)DAT_005b90dc + 0x210,
                  DAT_005ae6a0 ^ (uint)&stack0xffffa9d0);
    FUN_0043a1fa(local_5600,0,L".byk",local_44,2,L"byk(*.byk)|*.byk|",param_1,0,1);
    local_c = 0;
    iVar2 = CFileDialog::DoModal(local_5600);
    if (iVar2 == 1) {
      GetPathName(local_5600,&local_5618);
      local_c._0_1_ = 1;
      local_52d8 = 0;
      _memset(local_52d4,0,0x528c);
      _memcpy(&local_52d8,_Src,0x31fc);
      local_561c = 0;
      puVar5 = local_20dc;
      piVar4 = (int *)((int)_Src + 0x27c);
      local_5620 = 0x7e;
      do {
        if ((*(char *)((int)piVar4 + -0x15) == '\x05') &&
           (puVar3 = DAT_005b0540, DAT_005b0540 != (undefined4 *)0x0)) {
LAB_0041ff84:
          puVar6 = (undefined4 *)*puVar3;
          if ((puVar6 == (undefined4 *)0x0) || (*piVar4 != puVar6[1])) goto LAB_0041ff91;
          local_561c = local_561c + 1;
          puVar3 = puVar5;
          for (iVar2 = 0xd0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
          puVar5 = (undefined4 *)((int)puVar5 + 0x342);
          *(undefined2 *)puVar3 = *(undefined2 *)puVar6;
        }
LAB_0041ffaf:
        piVar4 = piVar4 + 9;
        local_5620 = local_5620 + -1;
      } while (local_5620 != 0);
      CFile::CFile(local_5610);
      local_c._0_1_ = 2;
      iVar2 = CFile::Open(local_5610,local_5618,0x1002,(CFileException *)0x0);
      if (iVar2 == 0) {
        piVar4 = FUN_00402490(&local_5620,L"Create profile failed.");
        local_c._0_1_ = 3;
        FUN_004169e0(local_5614,piVar4);
        local_c._0_1_ = 2;
        piVar4 = (int *)(local_5620 + -4);
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1 || iVar2 + -1 < 0) {
          (**(code **)(**(int **)(local_5620 + -0x10) + 4))((undefined4 *)(local_5620 + -0x10));
        }
      }
      else {
        CFile::Write(local_5610,&local_52d8,0x5290);
        CFile::Close(local_5610);
      }
      local_c._0_1_ = 1;
      FUN_004387a0(local_5610);
      local_c = (uint)local_c._1_3_ << 8;
      pwVar1 = local_5618 + -2;
      LOCK();
      iVar2 = *(int *)pwVar1;
      *(int *)pwVar1 = *(int *)pwVar1 + -1;
      UNLOCK();
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(**(int **)(local_5618 + -8) + 4))(local_5618 + -8);
      }
    }
    local_c = 0xffffffff;
    CFileDialog::~CFileDialog(local_5600);
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_5624);
  return;
LAB_0041ff91:
  puVar3 = (undefined4 *)puVar3[1];
  if (puVar3 == (undefined4 *)0x0) goto LAB_0041ffaf;
  goto LAB_0041ff84;
}


//==== FUNC 00463112  FUN_00463112 ====

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00463112(wchar_t *param_1)

{
  undefined4 uVar1;
  int iVar2;
  SIZE_T SVar3;
  int *unaff_EBX;
  CFile local_30 [16];
  undefined2 local_20;
  int local_1e;
  undefined2 local_1a;
  undefined2 local_18;
  int local_16;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x46311e;
  if (unaff_EBX == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    CFile::CFile(local_30);
    local_8 = 0;
    iVar2 = CFile::Open(local_30,param_1,0x1001,(CFileException *)0x0);
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = 1 << ((byte)*(short *)((int)unaff_EBX + 0xe) & 0x1f);
      if ((0x100 < iVar2) || (*(short *)((int)unaff_EBX + 0xe) == 0x20)) {
        iVar2 = 0;
      }
      local_20 = 0x4d42;
      SVar3 = GlobalSize(unaff_EBX);
      local_1e = SVar3 + 0xe;
      local_1a = 0;
      local_18 = 0;
      local_16 = *unaff_EBX + 0xe + iVar2 * 4;
      CFile::Write(local_30,&local_20,0xe);
      SVar3 = GlobalSize(unaff_EBX);
      CFile::Write(local_30,unaff_EBX,SVar3);
      uVar1 = 1;
    }
    local_8 = 0xffffffff;
    FUN_004387a0(local_30);
  }
  return uVar1;
}


//==== FUNC 0052f263  __amsg_exit ====

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  pcVar1 = (code *)__decode_pointer((int)PTR___exit_005ae820);
  (*pcVar1)(0xff);
  return;
}


//==== FUNC 00531e8f  __FF_MSGBANNER ====

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2008 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_005ae680 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}


//==== FUNC 00534dd1  __mtinitlocknum ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  LPCRITICAL_SECTION _Memory;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_005b5d5c == 0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_005ae990 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        BVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (BVar2 == 0) {
          _free(_Memory);
          piVar1 = __errno();
          *piVar1 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_00534e8b();
      iVar3 = local_20;
    }
  }
  return iVar3;
}


//==== FUNC 0052b1c2  _malloc ====

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  uint dwBytes;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_005b5d5c == (HANDLE)0x0) {
        __FF_MSGBANNER();
        __NMSG_WRITE(0x1e);
        ___crtExitProcess(0xff);
      }
      if (DAT_005ba71c == 1) {
        dwBytes = _Size;
        if (_Size == 0) {
          dwBytes = 1;
        }
LAB_0052b231:
        piVar1 = HeapAlloc(DAT_005b5d5c,0,dwBytes);
      }
      else if ((DAT_005ba71c != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0))
      {
        sVar3 = _Size;
        if (_Size == 0) {
          sVar3 = 1;
        }
        dwBytes = sVar3 + 0xf & 0xfffffff0;
        goto LAB_0052b231;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (DAT_005b61f0 == 0) {
        piVar1 = __errno();
        *piVar1 = 0xc;
        break;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
    piVar1 = __errno();
    *piVar1 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar1 = __errno();
    *piVar1 = 0xc;
  }
  return (void *)0x0;
}


//==== FUNC 0052a7b7  fast_error_exit ====

/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_005b57d8 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}


//==== FUNC 005391dc  _abort ====

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2008 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  _PHNDLR p_Var2;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_005af490 & 1) != 0) {
    __NMSG_WRITE(10);
  }
  p_Var2 = ___get_sigabrt();
  if (p_Var2 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_005af490 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


//==== FUNC 0052d8e5  __purecall ====

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2008 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__decode_pointer(DAT_005b6248);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  __NMSG_WRITE(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}


//==== FUNC 0040e700  FUN_0040e700 ====

void FUN_0040e700(void)

{
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_005ae6a0 ^ (uint)&stack0xfffffde0;
  __snwprintf_s(local_20c,0x104,0x103,L"%sMac",&DAT_005b8c48);
  FUN_0040fe20(local_20c,1,(undefined4 *)&stack0xfffffde0);
  __security_check_cookie(local_4 ^ (uint)&stack0xfffffde0);
  return;
}


//==== FUNC 0040cba0  FUN_0040cba0 ====

void __fastcall FUN_0040cba0(CWnd *param_1)

{
  int *piVar1;
  CWnd *this;
  bool bVar2;
  LRESULT LVar3;
  undefined3 extraout_var;
  int iVar4;
  short *psVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  int *piVar7;
  CWnd *local_84c;
  CWnd *local_848;
  CWnd *local_844;
  int local_840;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  wchar_t local_830;
  undefined1 local_82e [518];
  short local_628;
  undefined1 local_626 [518];
  wchar_t local_420 [260];
  wchar_t local_218 [262];
  uint local_c;
  
  local_c = DAT_005ae6a0 ^ (uint)&local_84c;
  local_84c = param_1 + 0x113c;
  local_848 = param_1;
  LVar3 = SendMessageW(*(HWND *)(param_1 + 0x115c),0x110a,9,0);
  for (piVar1 = *(int **)(param_1 + 0x1260); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    piVar7 = (int *)*piVar1;
    if (*piVar7 == LVar3) {
      if (piVar7[6] != 1) goto LAB_0040cc0d;
      goto LAB_0040cdd0;
    }
  }
  piVar7 = (int *)0x0;
LAB_0040cc0d:
  local_628 = 0;
  _memset(local_626,0,0x206);
  local_830 = L'\0';
  _memset(local_82e,0,0x206);
  bVar2 = FUN_00410440();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    if (piVar7 == (int *)0x0) {
      __snwprintf_s(&local_830,0x104,0x103,L"%sMac",&DAT_005b8c48);
      iVar4 = -0x10000;
      uVar6 = extraout_ECX_00;
    }
    else {
      iVar4 = FUN_0040f900((void *)*piVar7,&local_830);
      if (iVar4 == 0) goto LAB_0040cdd0;
      iVar4 = *piVar7;
      uVar6 = extraout_ECX;
    }
    psVar5 = FUN_0040c660(uVar6,&local_628);
    if (psVar5 != (short *)0x0) {
      psVar5 = psVar5 + 1;
      iVar4 = FUN_0042bab0(local_84c,iVar4,&LAB_00409cf0,psVar5,0);
      if (iVar4 != 0) {
        FUN_004169e0(local_848,&DAT_005b940c);
        __security_check_cookie(local_c ^ (uint)&local_84c);
        return;
      }
      FUN_0040ca00(extraout_ECX_01,&local_628);
      __snwprintf_s(local_420,0x104,0x103,L"%s\\%s",&local_830,psVar5);
      __snwprintf_s(local_218,0x104,0x103,L"%s\\%s.png",local_420,psVar5);
      this = local_84c;
      iVar4 = FUN_0042b7d0(local_84c,1,1,local_218,psVar5,0,0,5);
      local_834 = 0;
      local_844 = this;
      local_838 = DAT_005b8ad0;
      local_83c = 1;
      local_840 = iVar4;
      FUN_0040fe20(local_420,1,&local_844);
      FUN_0042bab0(this,iVar4,FUN_0040cb80,this,1);
    }
  }
LAB_0040cdd0:
  __security_check_cookie(local_c ^ (uint)&local_84c);
  return;
}


//==== FUNC 0041c0a0  FUN_0041c0a0 ====

void FUN_0041c0a0(void)

{
  int iVar1;
  wchar_t local_414 [260];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_005ae6a0 ^ (uint)local_414;
  __snwprintf_s(local_20c,0x104,0x103,L"%sskins/mak.skn",&DAT_005b8e50);
  iVar1 = FUN_0041bf60(local_20c);
  if (iVar1 != 0) {
    iVar1 = __wcsnicmp(local_414,&DAT_005b7ae6,100);
    if (iVar1 == 0) {
      __security_check_cookie(local_4 ^ (uint)local_414);
      return;
    }
    (*DAT_005b9074)(L"Tilt Error: szText=%s, tc_t=%s",local_414,&DAT_005b7ae6);
  }
  __security_check_cookie(local_4 ^ (uint)local_414);
  return;
}


//==== FUNC 0040df40  FUN_0040df40 ====

undefined4 __thiscall FUN_0040df40(void *this,uint param_1,int param_2)

{
  void *this_00;
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  LRESULT LVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puStack_9f4;
  int iStack_9f0;
  int iStack_9ec;
  int iStack_9e8;
  CDialog aCStack_9e4 [1228];
  undefined4 uStack_518;
  undefined1 auStack_510 [12];
  int aiStack_504 [3];
  CDialog aCStack_4f8 [1228];
  undefined4 uStack_2c;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  uint uStack_14;
  byte bStack_f;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00555187;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_005b90a4 != (code *)0x0) {
    (*DAT_005b90a4)(DAT_005ae6a0 ^ (uint)&stack0xfffff5fc);
  }
  piVar1 = (int *)FUN_0042cd80();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x80004005);
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
  puStack_9f4 = puVar2 + 4;
  iStack_4 = 0;
  FUN_00414db0(aCStack_9e4,this);
  uVar3 = param_1 & 0xffff;
  iStack_4._0_1_ = 1;
  if (uVar3 == 2) {
    SendMessageW(*(HWND *)((int)this + 0x115c),0x110a,9,0);
    uStack_518 = 2;
    FID_conflict_operator_(auStack_510,&DAT_005b9420);
    iVar4 = FUN_0042e689(aCStack_9e4);
    if ((iVar4 == 1) && (0 < *(int *)(aiStack_504[0] + -0xc))) {
      LVar5 = SendMessageW(*(HWND *)((int)this + 0x115c),0x110a,9,0);
      if (LVar5 == 0) {
        LVar5 = -0x10000;
      }
      if (1 < *(int *)(aiStack_504[0] + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)aiStack_504,*(int *)(aiStack_504[0] + -0xc));
      }
      iVar4 = FUN_0042bab0((void *)((int)this + 0x113c),LVar5,&LAB_00409cf0,aiStack_504[0],0);
      if (iVar4 != 0) {
        FUN_004169e0(this,&DAT_005b940c);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_00415000(aCStack_9e4);
        piVar1 = puVar2 + 3;
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        goto LAB_0040e0c1;
      }
      if (1 < *(int *)(aiStack_504[0] + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)aiStack_504,*(int *)(aiStack_504[0] + -0xc));
      }
      FUN_0042b7d0((void *)((int)this + 0x113c),1,1,0,aiStack_504[0],0,0,5);
    }
  }
  else if (uVar3 == 1) {
    FUN_0040bc50(this);
  }
  else if (uVar3 == 8) {
    FUN_0040f490(this);
  }
  else if (uVar3 == 0x10) {
    FUN_0040f000();
  }
  else if (uVar3 == 0x400) {
    iVar4 = FUN_00407840((int)this + 0x1280);
    if (iVar4 != 0) {
      FUN_0042b990(iVar4);
      FUN_0040b4d0(0x80000000);
    }
  }
  else if (uVar3 == 4) {
    FUN_0040c3d0(this);
  }
  else if (uVar3 == 0x40) {
    FUN_0040c6a0(this);
  }
  else if (uVar3 == 0x20) {
    FUN_0040be70(this);
  }
  else if (uVar3 == 0x100) {
    FUN_0040cba0(this);
  }
  else if (uVar3 == 0x200) {
    FUN_0040ca50((int)this);
  }
  else if ((param_2 == 0x8000) || (uVar3 == 0x80)) {
    this_00 = (void *)((int)this + 0x1280);
    iStack_9ec = FUN_00407840((int)this_00);
    uVar3 = param_1 >> 0x10 & 0xff;
    iVar4 = FUN_0040e6a0();
    if (iVar4 == 0) goto switchD_0040e231_default;
    iStack_9e8 = *(int *)(iVar4 + 0xc);
    if (uVar3 - 0xf0 < 7) {
      switch(uVar3) {
      case 0xf0:
        FID_conflict_operator_(&puStack_9f4,&DAT_005b9358);
        iStack_9f0 = 0xf0;
        break;
      case 0xf1:
        FID_conflict_operator_(&puStack_9f4,&DAT_005b935c);
        iStack_9f0 = 0xf1;
        break;
      case 0xf2:
        FID_conflict_operator_(&puStack_9f4,&DAT_005b9360);
        iStack_9f0 = 0xf2;
        break;
      case 0xf3:
        FID_conflict_operator_(&puStack_9f4,&DAT_005b9364);
        iStack_9f0 = 0xf3;
        break;
      case 0xf4:
        FID_conflict_operator_(&puStack_9f4,&DAT_005b9368);
        iStack_9f0 = 0xf4;
        break;
      default:
        goto switchD_0040e231_default;
      }
      if (iStack_9ec == 0) {
        uVar6 = FUN_004021f0((CSimpleStringT<wchar_t,0> *)&puStack_9f4);
        iStack_9ec = *(int *)((int)this + 0x84);
        for (puVar2 = *(undefined4 **)((int)this + 0x13a4);
            (puVar2 != (undefined4 *)0x0 && (*(int *)*puVar2 != -0x10000));
            puVar2 = (undefined4 *)puVar2[1]) {
        }
        iVar4 = FUN_00438ff4(this_00,1,uVar6,0,0,0,0,0,0xffff0000,0xffff0002);
        if ((iVar4 != 0) && (piVar1 = _malloc(0x24), piVar1 != (int *)0x0)) {
          piVar1[4] = iStack_9f0;
          piVar1[3] = 0;
          piVar1[7] = 0;
          piVar1[8] = 0;
          *piVar1 = iVar4;
          piVar1[5] = 1;
          piVar1[1] = iStack_9ec;
          piVar1[6] = 1;
          FUN_00416ef0(piVar1);
          InvalidateRect(*(HWND *)((int)this + 0x12a0),(RECT *)0x0,1);
        }
      }
      else {
        iVar8 = 1;
        iVar4 = iStack_9f0;
        uVar6 = FUN_004021f0((CSimpleStringT<wchar_t,0> *)&puStack_9f4);
        FUN_0042b8a0(1,*(int *)((int)this + 0x84),uVar6,iVar4,iVar8);
      }
      if (iStack_9e8 != 0) {
        FUN_0042b8a0(0,*(int *)((int)this + 0x88),L"50 ms",0x32,2);
      }
      iVar8 = 0;
      iVar4 = iStack_9f0;
      uVar6 = FUN_004021f0((CSimpleStringT<wchar_t,0> *)&puStack_9f4);
      FUN_0042b8a0(0,*(int *)((int)this + 0x80),uVar6,iVar4,iVar8);
      FUN_0040b4d0(0x80000000);
      goto switchD_0040e231_default;
    }
    if ((uVar3 == 0xf7) || (uVar3 == 0xf8)) {
      FUN_00414db0(aCStack_4f8,this);
      iStack_4._0_1_ = 2;
      uStack_2c = 4;
      uStack_20 = 1;
      FID_conflict_operator_(auStack_24,&DAT_005b9460);
      iVar4 = FUN_0042e689(aCStack_4f8);
      if ((iVar4 != 1) || (bStack_f == 0)) {
LAB_0040e630:
        iStack_4._0_1_ = 1;
        FUN_00415000(aCStack_4f8);
switchD_0040e231_default:
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        FUN_00415000(aCStack_9e4);
        FUN_00410aa0((int *)&puStack_9f4);
        ExceptionList = local_c;
        return 1;
      }
      uVar7 = (uint)(uVar3 == 0xf7);
      uVar3 = (uint)bStack_f;
      piVar1 = FUN_00424b80(&iStack_9e8,bStack_f);
      iStack_4._0_1_ = 3;
      FID_conflict_operator_(&puStack_9f4,piVar1);
      FUN_00410aa0(&iStack_9e8);
    }
    else {
      if (uVar3 != 0xf9) goto switchD_0040e231_default;
      FUN_00414db0(aCStack_4f8,this);
      iStack_4._0_1_ = 4;
      uStack_2c = 3;
      FID_conflict_operator_(auStack_24,&DAT_005b941c);
      iVar4 = FUN_0042e689(aCStack_4f8);
      if (iVar4 != 1) goto LAB_0040e630;
      uVar3 = uStack_14;
      if (uStack_14 < DAT_005b90c4) {
        uVar3 = DAT_005b90c4;
      }
      FUN_00401830(&puStack_9f4,L"%d ms");
      uVar7 = 2;
    }
    iStack_4._0_1_ = 1;
    FUN_00415000(aCStack_4f8);
    FUN_0040b4d0(0x80000000);
    if (iStack_9ec == 0) {
      uVar6 = FUN_004021f0((CSimpleStringT<wchar_t,0> *)&puStack_9f4);
      iStack_9e8 = *(int *)((int)this + uVar7 * 4 + 0x80);
      for (puVar2 = *(undefined4 **)((int)this + 0x13a4);
          (puVar2 != (undefined4 *)0x0 && (*(int *)*puVar2 != -0x10000));
          puVar2 = (undefined4 *)puVar2[1]) {
      }
      iVar4 = FUN_00438ff4(this_00,1,uVar6,0,0,0,0,0,0xffff0000,0xffff0002);
      if ((iVar4 != 0) && (piVar1 = _malloc(0x24), piVar1 != (int *)0x0)) {
        piVar1[5] = uVar7;
        *piVar1 = iVar4;
        piVar1[4] = uVar3;
        piVar1[1] = iStack_9e8;
        piVar1[3] = 0;
        piVar1[7] = 0;
        piVar1[6] = 1;
        piVar1[8] = 0;
        FUN_00416ef0(piVar1);
        InvalidateRect(*(HWND *)((int)this + 0x12a0),(RECT *)0x0,1);
      }
    }
    else {
      uVar9 = uVar7;
      uVar6 = FUN_004021f0((CSimpleStringT<wchar_t,0> *)&puStack_9f4);
      FUN_0042b8a0(1,*(int *)((int)this + uVar7 * 4 + 0x80),uVar6,uVar3,uVar9);
    }
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00415000(aCStack_9e4);
  puVar2 = puStack_9f4 + -4;
  piVar1 = puStack_9f4 + -1;
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
LAB_0040e0c1:
  iStack_4 = 0xffffffff;
  if (iVar4 + -1 < 1) {
    (**(code **)(*(int *)*puVar2 + 4))(puVar2);
  }
  ExceptionList = local_c;
  return 1;
}


//==== FUNC 0053f086  __tsopen_nolock ====

/* Library Function - Single Match
    __tsopen_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl
__tsopen_nolock(undefined4 *param_1,LPCWSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  errno_t eVar3;
  uint uVar4;
  ulong *puVar5;
  int *piVar6;
  DWORD DVar7;
  long lVar8;
  int iVar9;
  HANDLE pvVar10;
  byte bVar11;
  int unaff_EDI;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  _SECURITY_ATTRIBUTES local_38;
  undefined4 local_28;
  uint local_24;
  HANDLE local_20;
  uint local_1c;
  DWORD local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar13 = (param_3 & 0x80) == 0;
  local_24 = 0;
  local_6 = 0;
  local_38.nLength = 0xc;
  local_38.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar13) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_38.bInheritHandle = (BOOL)bVar13;
  eVar3 = __get_fmode((int *)&local_24);
  if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_24 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_c = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_c = 0x40000000;
        goto LAB_0053f153;
      }
    }
    else if (uVar4 != 2) goto LAB_0053f10f;
    local_c = 0xc0000000;
  }
LAB_0053f153:
  if (param_4 == 0x10) {
    local_14 = 0;
  }
  else if (param_4 == 0x20) {
    local_14 = 1;
  }
  else if (param_4 == 0x30) {
    local_14 = 2;
  }
  else if (param_4 == 0x40) {
    local_14 = 3;
  }
  else {
    if (param_4 != 0x80) goto LAB_0053f10f;
    local_14 = (uint)(local_c == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_18 = 3;
    }
    else if (uVar4 == 0x100) {
      local_18 = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_0053f258;
      if (uVar4 != 0x300) goto LAB_0053f10f;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_0053f258:
        local_18 = 5;
        goto LAB_0053f207;
      }
      if (uVar4 != 0x700) {
LAB_0053f10f:
        puVar5 = ___doserrno();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        piVar6 = __errno();
        *piVar6 = 0x16;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_0053f207:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_005b57dc & param_5))) {
    local_10 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_10 = local_10 | 0x4000000;
    local_c = local_c | 0x10000;
    local_14 = local_14 | 4;
  }
  if ((param_3 & 0x1000) != 0) {
    local_10 = local_10 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_10 = local_10 | 0x10000000;
    }
  }
  else {
    local_10 = local_10 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    piVar6 = __errno();
    *piVar6 = 0x18;
    goto LAB_0053f320;
  }
  *param_1 = 1;
  local_20 = CreateFileW(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileW(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_0053f32c;
    }
    pbVar1 = (byte *)((&DAT_005ba740)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    goto LAB_0053f320;
  }
LAB_0053f32c:
  DVar7 = GetFileType(local_20);
  if (DVar7 == 0) {
    pbVar1 = (byte *)((&DAT_005ba740)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    CloseHandle(local_20);
    if (DVar7 == 0) {
      piVar6 = __errno();
      *piVar6 = 0xd;
    }
    goto LAB_0053f320;
  }
  if (DVar7 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar7 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_005ba740)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40) = bVar11;
  pbVar1 = (byte *)((&DAT_005ba740)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_0053f6a1;
    if ((param_3 & 2) == 0) goto LAB_0053f467;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      puVar5 = ___doserrno();
      bVar11 = local_5;
      if (*puVar5 == 0x83) goto LAB_0053f467;
    }
    else {
      local_28 = 0;
      iVar12 = __read_nolock(*in_EAX,&local_28,1);
      if ((((iVar12 != 0) || ((short)local_28 != 0x1a)) ||
          (iVar12 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar12 != -1
          )) && (lVar8 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar8 != -1))
      goto LAB_0053f467;
    }
LAB_0053f419:
    __close_nolock(*in_EAX);
    goto LAB_0053f320;
  }
LAB_0053f467:
  local_5 = bVar11;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_24 & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_24 & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_0053f4d6;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_0053f4d6:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_0053f6a1;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar14 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar14 == 0) goto LAB_0053f53b;
            lVar14 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar14 & (uint)((ulonglong)lVar14 >> 0x20);
            goto LAB_0053f607;
          }
LAB_0053f532:
          if (local_18 != 5) goto LAB_0053f6a1;
        }
LAB_0053f53b:
        iVar12 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_0053f6a1;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar9 = __write(*in_EAX,(void *)((int)&local_1c + iVar12),local_18 - iVar12);
          if (iVar9 == -1) goto LAB_0053f419;
          iVar12 = iVar12 + iVar9;
        } while (iVar12 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_0053f532;
              lVar14 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar14 != 0) {
                lVar14 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar14 == -1) goto LAB_0053f419;
                goto LAB_0053f58c;
              }
            }
            goto LAB_0053f53b;
          }
          goto LAB_0053f6a1;
        }
LAB_0053f58c:
        iVar12 = __read_nolock(*in_EAX,&local_1c,3);
        if (iVar12 == -1) goto LAB_0053f419;
        if (iVar12 == 2) {
LAB_0053f615:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            piVar6 = __errno();
            *piVar6 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar8 = __lseek_nolock(*in_EAX,2,0);
            if (lVar8 == -1) goto LAB_0053f419;
            local_6 = 2;
            goto LAB_0053f6a1;
          }
        }
        else if (iVar12 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_0053f6a1;
          }
          goto LAB_0053f615;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_0053f607:
        if (uVar4 == 0xffffffff) goto LAB_0053f419;
      }
    }
  }
LAB_0053f6a1:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_005ba740)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_005ba740)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_005ba740)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar10 = CreateFileW(param_2,uVar4 & 0x7fffffff,local_14,&local_38,3,local_10,(HANDLE)0x0);
    if (pvVar10 == (HANDLE)0xffffffff) {
      DVar7 = GetLastError();
      __dosmaperr(DVar7);
      pbVar1 = (byte *)((&DAT_005ba740)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_0053f320:
      piVar6 = __errno();
      return *piVar6;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x40 + (&DAT_005ba740)[(int)*in_EAX >> 5]) = pvVar10;
  }
  return 0;
}


//==== FUNC 00537b0e  __read ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __read
   
   Library: Visual Studio 2008 Release */

int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    return -1;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_005ba720)) {
    iVar3 = (_FileHandle & 0x1fU) * 0x40;
    if ((*(byte *)((&DAT_005ba740)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      if (_MaxCharCount < 0x80000000) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_005ba740)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __read_nolock(_FileHandle,_DstBuf,_MaxCharCount);
        }
        FUN_00537c01();
        return local_20;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
      piVar2 = __errno();
      *piVar2 = 0x16;
      goto LAB_00537b5d;
    }
  }
  puVar1 = ___doserrno();
  *puVar1 = 0;
  piVar2 = __errno();
  *piVar2 = 9;
LAB_00537b5d:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


//==== FUNC 0041d660  FUN_0041d660 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0041d660(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  undefined4 *puVar5;
  int iVar6;
  int iStack_3218;
  int local_3214;
  undefined1 auStack_3210 [12800];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005551bb;
  local_c = ExceptionList;
  local_10 = DAT_005ae6a0 ^ (uint)&iStack_3218;
  uVar1 = DAT_005ae6a0 ^ (uint)&stack0xffffcdd8;
  ExceptionList = &local_c;
  local_3214 = param_1;
  piVar2 = (int *)FUN_0042cd80();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))(uVar1);
  iVar3 = iVar3 + 0x10;
  uStack_4 = 0;
  iStack_3218 = iVar3;
  FUN_00416fc0();
  FUN_0042a310();
  if (DAT_005b0550 != 3) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      FUN_00401830(&iStack_3218,L"%s%d");
      if (1 < *(int *)(iStack_3218 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&iStack_3218,*(int *)(iStack_3218 + -0xc));
      }
      iVar3 = iStack_3218;
      FUN_0042a210();
      _Dst = _malloc(0x31fc);
      if (_Dst != (void *)0x0) {
        _memcpy(_Dst,auStack_3210,0x31fc);
        FUN_00416ef0(_Dst);
      }
      param_1 = local_3214;
    } while (iVar4 < 3);
  }
  iVar4 = 0;
  if (DAT_005b0558 != (int *)0x0) {
    puVar5 = (undefined4 *)(param_1 + 0x12b4);
    piVar2 = DAT_005b0558;
    do {
      if (*piVar2 != 0) {
        if (2 < iVar4) break;
        *puVar5 = *(undefined4 *)(*piVar2 + 4);
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0x59;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  iVar4 = FUN_0042a680();
  piVar2 = DAT_005b0558;
  if (iVar4 != 0) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if ((*piVar2 != 0) && (iVar4 == *(int *)(*piVar2 + 4))) goto LAB_0041d7f7;
    }
  }
  iVar6 = 0;
  piVar2 = DAT_005b0558;
  do {
    if (piVar2 == (int *)0x0) {
LAB_0041d7f7:
      FUN_0041d850(param_1,iVar4);
      uStack_4 = 0xffffffff;
      piVar2 = (int *)(iVar3 + -4);
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)(iVar3 + -0x10) + 4))((undefined4 *)(iVar3 + -0x10));
      }
      ExceptionList = local_c;
      __security_check_cookie(local_10 ^ (uint)&iStack_3218);
      return;
    }
    if (iVar6 == 0) {
      if (*piVar2 != 0) {
        iVar4 = *(int *)(*piVar2 + 4);
      }
      goto LAB_0041d7f7;
    }
    piVar2 = (int *)piVar2[1];
    iVar6 = iVar6 + 1;
  } while( true );
}


//==== FUNC 00405bc0  FUN_00405bc0 ====

void __fastcall FUN_00405bc0(int param_1)

{
  undefined1 auStack_218 [4];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_005ae6a0 ^ (uint)auStack_218;
  __snwprintf_s(local_214,0x104,0x103,L"%sMac\\",&DAT_005b8c48);
  FUN_00404e80(local_214,1,(void *)(param_1 + 0xd70));
  __security_check_cookie(local_8 ^ (uint)auStack_218);
  return;
}


//==== FUNC 0041fb20  FUN_0041fb20 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0041fb20(CWnd *param_1)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_5624 [4];
  void *local_5620;
  CWnd *local_561c;
  wchar_t *local_5618;
  int local_5614;
  CFile local_5610 [16];
  CFileDialog local_5600 [808];
  int local_52d8;
  int local_52d4;
  int local_505c [3040];
  int local_20dc [2086];
  undefined4 local_44 [10];
  uint local_1c;
  CWnd *pCStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005552a2;
  local_14 = ExceptionList;
  local_1c = DAT_005ae6a0 ^ (uint)auStack_5624;
  ExceptionList = &local_14;
  local_5620 = DAT_005b90dc;
  local_561c = param_1;
  pCStack_18 = param_1;
  if (DAT_005b90dc != (void *)0x0) {
    FUN_0043a1fa(local_5600,1,L".byk",L"*.byk",2,L"byk(*.byk)|*.byk|",param_1,0,1);
    local_c = 0;
    iVar4 = CFileDialog::DoModal(local_5600);
    if (iVar4 == 1) {
      GetPathName(local_5600,&local_5618);
      local_c._0_1_ = 1;
      CFile::CFile(local_5610);
      local_c._0_1_ = 2;
      iVar4 = CFile::Open(local_5610,local_5618,0,(CFileException *)0x0);
      if (iVar4 == 0) {
        piVar5 = FUN_00402490(&local_5620,L"Open profile failed");
        local_c._0_1_ = 3;
        FUN_004169e0(param_1,piVar5);
        local_c._0_1_ = 2;
        piVar5 = (int *)((int)local_5620 + -4);
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1 || iVar4 + -1 < 0) {
          (**(code **)(**(int **)((int)local_5620 + -0x10) + 4))
                    ((undefined4 *)((int)local_5620 + -0x10));
        }
        local_c._0_1_ = 1;
        FUN_004387a0(local_5610);
        pwVar1 = local_5618 + -2;
        LOCK();
        iVar4 = *(int *)pwVar1;
        *(int *)pwVar1 = *(int *)pwVar1 + -1;
        UNLOCK();
      }
      else {
        uVar6 = CFile::Read(local_5610,&local_52d8,0x5290);
        if (uVar6 == 0) {
          piVar5 = FUN_00402490(&local_5620,L"Open profile failed.");
          local_c._0_1_ = 4;
          FUN_004169e0(param_1,piVar5);
          local_c._0_1_ = 2;
          piVar5 = (int *)((int)local_5620 + -4);
          LOCK();
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 1 || iVar4 + -1 < 0) {
            (**(code **)(**(int **)((int)local_5620 + -0x10) + 4))
                      ((undefined4 *)((int)local_5620 + -0x10));
          }
        }
        else if ((local_52d8 == -0x30486ff) && (local_52d4 != 0)) {
          piVar5 = local_505c;
          local_5614 = 0x7e;
          do {
            if (*(char *)((int)piVar5 + -0x15) == '\x05') {
              iVar4 = 0;
              piVar8 = local_20dc;
              do {
                if (*piVar5 == piVar8[1]) {
                  uVar6 = FUN_00428b30();
                  piVar8[1] = uVar6;
                  if (*(int *)(param_1 + 0x2484) != 0) {
                    FUN_0040e7a0(*(int *)(param_1 + 0x2484),piVar8);
                  }
                  break;
                }
                iVar4 = iVar4 + 1;
                piVar8 = (int *)((int)piVar8 + 0x342);
              } while (iVar4 < 10);
            }
            pvVar3 = local_5620;
            piVar5 = piVar5 + 9;
            local_5614 = local_5614 + -1;
          } while (local_5614 != 0);
          puVar7 = (undefined4 *)((int)local_5620 + 0x210);
          puVar9 = puVar7;
          puVar10 = local_44;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          uVar2 = *(undefined4 *)((int)local_5620 + 4);
          _memcpy(local_5620,&local_52d8,0x31fc);
          *(undefined4 *)((int)pvVar3 + 4) = uVar2;
          puVar9 = local_44;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
          }
          FUN_0041f920(0);
        }
        else {
          piVar5 = FUN_00402490(&local_561c,L"This is not a valid profile");
          local_c._0_1_ = 5;
          FUN_004169e0(param_1,piVar5);
          local_c._0_1_ = 2;
          FUN_00410aa0((int *)&local_561c);
        }
        CFile::Close(local_5610);
        local_c._0_1_ = 1;
        FUN_004387a0(local_5610);
        pwVar1 = local_5618 + -2;
        LOCK();
        iVar4 = *(int *)pwVar1;
        *(int *)pwVar1 = *(int *)pwVar1 + -1;
        UNLOCK();
      }
      local_c = (uint)local_c._1_3_ << 8;
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)(local_5618 + -8) + 4))(local_5618 + -8);
      }
    }
    local_c = 0xffffffff;
    CFileDialog::~CFileDialog(local_5600);
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_5624);
  return;
}


//==== FUNC 005332db  __flsbuf ====

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint uVar6;
  longlong lVar7;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar6 = _File_00->_flag;
  if ((uVar6 & 0x82) == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_00533301:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_00533301;
  }
  if ((uVar6 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar6 & 0x10) == 0) {
      _File_00->_flag = uVar6 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar6 & 0xfffffffe;
  }
  uVar6 = _File_00->_flag;
  _File_00->_flag = uVar6 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar6 & 0x10c) == 0) &&
     (((ppuVar3 = FUN_005359c2(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_005359c2(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
      (iVar4 = __isatty((int)_File), iVar4 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108U) == 0) {
    uVar6 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar6 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar6 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar5 = &DAT_005ae938;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x40 + (&DAT_005ba740)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_00533429;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_00533429:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}


//==== FUNC 00531abc  __flush ====

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2008 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}


//==== FUNC 0052c852  __fwrite_nolock ====

/* Library Function - Single Match
    __fwrite_nolock
   
   Library: Visual Studio 2008 Release */

size_t __cdecl __fwrite_nolock(void *_DstBuf,size_t _Size,size_t _Count,FILE *_File)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint _Size_00;
  uint uVar5;
  uint uVar6;
  char *_Buf;
  uint local_c;
  char *local_8;
  
  if ((_Size != 0) && (_Count != 0)) {
    if ((_File != (FILE *)0x0) &&
       ((_DstBuf != (void *)0x0 && (_Count <= (uint)(0xffffffff / (ulonglong)_Size))))) {
      uVar6 = _Size * _Count;
      uVar5 = uVar6;
      if ((_File->_flag & 0x10cU) == 0) {
        local_c = 0x1000;
      }
      else {
        local_c = _File->_bufsiz;
      }
      do {
        while( true ) {
          if (uVar5 == 0) {
            return _Count;
          }
          uVar4 = _File->_flag & 0x108;
          if (uVar4 == 0) break;
          uVar3 = _File->_cnt;
          if (uVar3 == 0) break;
          if ((int)uVar3 < 0) {
            _File->_flag = _File->_flag | 0x20;
            goto LAB_0052c99f;
          }
          _Size_00 = uVar5;
          if (uVar3 <= uVar5) {
            _Size_00 = uVar3;
          }
          _memcpy(_File->_ptr,_DstBuf,_Size_00);
          _File->_cnt = _File->_cnt - _Size_00;
          _File->_ptr = _File->_ptr + _Size_00;
          uVar5 = uVar5 - _Size_00;
LAB_0052c95b:
          local_8 = (char *)((int)_DstBuf + _Size_00);
          _DstBuf = local_8;
        }
        if (local_c <= uVar5) {
          if ((uVar4 != 0) && (iVar2 = __flush(_File), iVar2 != 0)) goto LAB_0052c99f;
          uVar4 = uVar5;
          if (local_c != 0) {
            uVar4 = uVar5 - uVar5 % local_c;
          }
          _Buf = _DstBuf;
          uVar3 = uVar4;
          iVar2 = __fileno(_File);
          uVar3 = __write(iVar2,_Buf,uVar3);
          if (uVar3 != 0xffffffff) {
            _Size_00 = uVar4;
            if (uVar3 <= uVar4) {
              _Size_00 = uVar3;
            }
            uVar5 = uVar5 - _Size_00;
            if (uVar4 <= uVar3) goto LAB_0052c95b;
          }
          _File->_flag = _File->_flag | 0x20;
LAB_0052c99f:
          return (uVar6 - uVar5) / _Size;
        }
        iVar2 = __flsbuf((int)*(char *)_DstBuf,_File);
        if (iVar2 == -1) goto LAB_0052c99f;
        _DstBuf = (void *)((int)_DstBuf + 1);
        local_c = _File->_bufsiz;
        uVar5 = uVar5 - 1;
        if ((int)local_c < 1) {
          local_c = 1;
        }
      } while( true );
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}


//==== FUNC 005421ca  __flswbuf ====

/* Library Function - Single Match
    __flswbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __flswbuf(int _Ch,FILE *_File)

{
  uint uVar1;
  char *_Buf;
  char *pcVar2;
  uint _FileHandle;
  int *piVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined *puVar6;
  int unaff_EDI;
  uint _MaxCharCount;
  longlong lVar7;
  uint local_8;
  
  _FileHandle = __fileno(_File);
  uVar1 = _File->_flag;
  if ((uVar1 & 0x82) == 0) {
    piVar3 = __errno();
    *piVar3 = 9;
LAB_005421f0:
    _File->_flag = _File->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar1 & 0x40) != 0) {
    piVar3 = __errno();
    *piVar3 = 0x22;
    goto LAB_005421f0;
  }
  if ((uVar1 & 1) != 0) {
    _File->_cnt = 0;
    if ((uVar1 & 0x10) == 0) {
      _File->_flag = uVar1 | 0x20;
      return 0xffff;
    }
    _File->_ptr = _File->_base;
    _File->_flag = uVar1 & 0xfffffffe;
  }
  uVar1 = _File->_flag;
  _File->_cnt = 0;
  local_8 = 0;
  _MaxCharCount = 2;
  _File->_flag = uVar1 & 0xffffffef | 2;
  if (((uVar1 & 0x10c) == 0) &&
     (((ppuVar4 = FUN_005359c2(), _File != (FILE *)(ppuVar4 + 8) &&
       (ppuVar4 = FUN_005359c2(), _File != (FILE *)(ppuVar4 + 0x10))) ||
      (iVar5 = __isatty(_FileHandle), iVar5 == 0)))) {
    __getbuf(_File);
  }
  if ((_File->_flag & 0x108U) == 0) {
    local_8 = CONCAT22(local_8._2_2_,(short)_Ch);
    local_8 = __write(_FileHandle,&local_8,2);
  }
  else {
    _Buf = _File->_base;
    pcVar2 = _File->_ptr;
    _File->_ptr = _Buf + 2;
    _MaxCharCount = (int)pcVar2 - (int)_Buf;
    _File->_cnt = _File->_bufsiz + -2;
    if ((int)_MaxCharCount < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar6 = &DAT_005ae938;
      }
      else {
        puVar6 = (undefined *)((_FileHandle & 0x1f) * 0x40 + (&DAT_005ba740)[(int)_FileHandle >> 5])
        ;
      }
      if (((puVar6[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_00542327;
    }
    else {
      local_8 = __write(_FileHandle,_Buf,_MaxCharCount);
    }
    *(short *)_File->_base = (short)_Ch;
  }
  if (local_8 == _MaxCharCount) {
    return _Ch & 0xffff;
  }
LAB_00542327:
  _File->_flag = _File->_flag | 0x20;
  return 0xffff;
}


//==== FUNC 0040c3d0  FUN_0040c3d0 ====

void FUN_0040c3d0(CWnd *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *this;
  int iVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  DWORD DVar8;
  BOOL BVar9;
  undefined4 *puStack_220;
  int iStack_21c;
  wchar_t awStack_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00554ddb;
  local_c = ExceptionList;
  local_10 = DAT_005ae6a0 ^ (uint)&puStack_220;
  uVar2 = DAT_005ae6a0 ^ (uint)&stack0xfffffdd0;
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_0042cd80();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x80004005);
  }
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(uVar2);
  puStack_220 = puVar4 + 4;
  uStack_4 = 0;
  this = (void *)SendMessageW(*(HWND *)(param_1 + 0x115c),0x110a,9,0);
  for (puVar1 = *(undefined4 **)(param_1 + 0x1260); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[1]) {
    piVar3 = (int *)*puVar1;
    if ((void *)*piVar3 == this) goto LAB_0040c47f;
  }
  piVar3 = (int *)0x0;
LAB_0040c47f:
  if ((this == (void *)0x0) || (piVar3 == (int *)0x0)) {
    FUN_00401830(&puStack_220,L"Operation failed, hItem = 0x%x, pItem = 0x%x.");
    FUN_004169e0(param_1,&puStack_220);
LAB_0040c5fc:
    puVar4 = puStack_220 + -4;
  }
  else {
    iVar5 = FUN_004169e0(param_1,&DAT_005b945c);
    if (iVar5 == 1) {
      iVar5 = FUN_0040f900(this,awStack_218);
      if (iVar5 != 0) {
        iStack_21c = piVar3[6];
        iVar5 = FUN_0040e6a0();
        if (iVar5 != 0) {
          pHVar6 = GetParent(*(HWND *)(param_1 + 0x20));
          pCVar7 = CWnd::FromHandle(pHVar6);
          FUN_0041cec0((int)pCVar7,*(int *)(iVar5 + 4));
          FUN_00428a80(*(int *)(iVar5 + 4));
        }
        if (param_1 != (CWnd *)0xffffeec4) {
          FUN_0040f780();
        }
        FUN_0042b9e0();
        if (iStack_21c == 2) {
          iVar5 = FUN_00410200(awStack_218);
          if (((iVar5 == 0) && (DVar8 = GetLastError(), DVar8 != 3)) && (DVar8 != 2)) {
            GetLastError();
            FUN_00401830(&puStack_220,L"Remove Directory failed, err = %d.");
            FUN_004169e0(param_1,&puStack_220);
          }
        }
        else {
          BVar9 = DeleteFileW(awStack_218);
          if (((BVar9 == 0) && (DVar8 = GetLastError(), DVar8 != 3)) && (DVar8 != 2)) {
            (*DAT_005b9074)(L"DeleteFile %s, err=%d",awStack_218,DVar8);
            FUN_00401830(&puStack_220,L"Delete File failed, err = %d.");
            FUN_004169e0(param_1,&puStack_220);
            FUN_00410aa0((int *)&puStack_220);
            goto LAB_0040c627;
          }
        }
        FUN_00410aa0((int *)&puStack_220);
        goto LAB_0040c627;
      }
      FUN_00416a80(L"Get file path failed.",param_1);
      goto LAB_0040c5fc;
    }
  }
  uStack_4 = 0xffffffff;
  piVar3 = puVar4 + 3;
  LOCK();
  iVar5 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
LAB_0040c627:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&puStack_220);
  return;
}


//==== FUNC 0046752d  FUN_0046752d ====

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_0046752d(void *this,short *param_1)

{
  bool bVar1;
  LPBITMAPINFO hMem;
  int iVar2;
  undefined4 uVar3;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x467539;
  uVar3 = 0;
  if (((*(int *)((int)this + 0x14) != 0) && (*(int *)((int)this + 0x80) != 0)) &&
     (*(int *)((int)this + 0x20) == 0)) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)local_14);
    local_8 = 0;
    if (param_1 == (short *)0x0) {
      FID_conflict_operator_(local_14,(undefined4 *)((int)this + 0x8c));
    }
    else {
      FUN_00402670(local_14,param_1);
    }
    if ((*(int *)((int)this + 0x18) == 0) &&
       (bVar1 = ATL::operator==((CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)
                                local_14,(CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>
                                          *)((int)this + 0x8c)), bVar1)) {
      uVar3 = 1;
    }
    else {
      hMem = FUN_004631c4(*(HBITMAP *)((int)this + 0x80),0);
      if (hMem != (LPBITMAPINFO)0x0) {
        iVar2 = FUN_00463112(local_14[0]);
        GlobalFree(hMem);
        if (iVar2 != 0) {
          *(undefined4 *)((int)this + 0x18) = 0;
          FUN_004011f0((undefined4 *)(local_14[0] + -8));
          return 1;
        }
      }
    }
    FUN_004011f0((undefined4 *)(local_14[0] + -8));
    return uVar3;
  }
  return 0;
}


//==== FUNC 00534e94  __lock ====

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2008 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_005ae990)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_005ae990)[_File * 2]);
  return;
}


//==== FUNC 0053294c  __getptd ====

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2008 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}


//==== FUNC 0053673b  ___updatetmbcinfo ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2008 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_005af254) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_005af158) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_005aed30)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_005af158;
      lpAddend = (pthreadmbcinfo)PTR_DAT_005af158;
      InterlockedIncrement((LONG *)PTR_DAT_005af158);
    }
    FUN_005367d6();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}


//==== FUNC 00536ea7  ___updatetlocinfo ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2008 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_005af254) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_00536f11();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}


//==== FUNC 0052a7e0  ___tmainCRTStartup ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2008 Release */

int ___tmainCRTStartup(void)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  _STARTUPINFOW local_6c;
  int local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x52a7ec;
  local_8 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = 0xfffffffe;
  if ((((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
       (*(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4)
                 ) == 0x10b)) &&
     (0xe < *(uint *)(IMAGE_DOS_HEADER_00400000.e_program +
                     IMAGE_DOS_HEADER_00400000.e_lfanew + 0x34))) {
    local_20 = (uint)(*(int *)(&UNK_004000e8 + IMAGE_DOS_HEADER_00400000.e_lfanew) != 0);
  }
  else {
    local_20 = 0;
  }
  iVar1 = __heap_init();
  if (iVar1 == 0) {
    fast_error_exit(0x1c);
  }
  iVar1 = __mtinit();
  if (iVar1 == 0) {
    fast_error_exit(0x10);
  }
  __RTC_Initialize();
  local_8 = 1;
  iVar1 = __ioinit();
  if (iVar1 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_005ba854 = GetCommandLineW();
  DAT_005b57d4 = ___crtGetEnvironmentStringsW();
  iVar1 = __wsetargv();
  if (iVar1 < 0) {
    __amsg_exit(8);
  }
  iVar1 = __wsetenvp();
  if (iVar1 < 0) {
    __amsg_exit(9);
  }
  iVar1 = __cinit(1);
  if (iVar1 != 0) {
    __amsg_exit(iVar1);
  }
  pwVar2 = (wchar_t *)__wwincmdln();
  if (((byte)local_6c.dwFlags & 1) == 0) {
    uVar3 = 10;
  }
  else {
    uVar3 = (uint)local_6c.wShowWindow;
  }
  local_24 = FUN_00545e67((HINSTANCE__ *)&IMAGE_DOS_HEADER_00400000,(HINSTANCE__ *)0x0,pwVar2,uVar3)
  ;
  if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
    _exit(local_24);
  }
  __cexit();
  return local_24;
}


//==== FUNC 0054548b  copy_environ ====

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2008 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)0x0;
  if (in_EAX != (int *)0x0) {
    iVar1 = *in_EAX;
    piVar4 = in_EAX;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar1 = *piVar4;
    }
    puVar2 = __calloc_crt((int)puVar2 + 1,4);
    puVar5 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    for (; (char *)*in_EAX != (char *)0x0; in_EAX = in_EAX + 1) {
      pcVar3 = __strdup((char *)*in_EAX);
      *puVar5 = pcVar3;
      puVar5 = puVar5 + 1;
    }
    *puVar5 = 0;
  }
  return puVar2;
}


//==== FUNC 00535e2b  __getstream ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getstream
   
   Library: Visual Studio 2008 Release */

FILE * __cdecl __getstream(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  BOOL BVar5;
  int iVar6;
  FILE *pFVar7;
  FILE *_File;
  
  pFVar7 = (FILE *)0x0;
  __lock(1);
  iVar6 = 0;
  do {
    _File = pFVar7;
    if (DAT_005ba700 <= iVar6) {
LAB_00535f29:
      if (_File != (FILE *)0x0) {
        _File->_flag = _File->_flag & 0x8000;
        _File->_cnt = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_00535f5a();
      return _File;
    }
    piVar1 = (int *)(DAT_005b96ec + iVar6 * 4);
    if (*piVar1 == 0) {
      iVar6 = iVar6 * 4;
      pvVar4 = __malloc_crt(0x38);
      *(void **)(iVar6 + DAT_005b96ec) = pvVar4;
      if (*(int *)(DAT_005b96ec + iVar6) != 0) {
        BVar5 = ___crtInitCritSecAndSpinCount
                          ((LPCRITICAL_SECTION)(*(int *)(DAT_005b96ec + iVar6) + 0x20),4000);
        if (BVar5 == 0) {
          _free(*(void **)(iVar6 + DAT_005b96ec));
          *(undefined4 *)(iVar6 + DAT_005b96ec) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar6 + DAT_005b96ec) + 0x20));
          _File = *(FILE **)(iVar6 + DAT_005b96ec);
          _File->_flag = 0;
        }
      }
      goto LAB_00535f29;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && ((uVar2 & 0x8000) == 0)) {
      if ((iVar6 - 3U < 0x11) && (iVar3 = __mtinitlocknum(iVar6 + 0x10), iVar3 == 0))
      goto LAB_00535f29;
      __lock_file2(iVar6,*(void **)(DAT_005b96ec + iVar6 * 4));
      _File = *(FILE **)(DAT_005b96ec + iVar6 * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_00535f29;
      __unlock_file2(iVar6,_File);
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


//==== FUNC 005318f0  __alloc_osfhnd ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2008 Release */

int __cdecl __alloc_osfhnd(void)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_20;
  
  local_20 = -1;
  iVar5 = 0;
  bVar1 = false;
  iVar2 = __mtinitlocknum(0xb);
  if (iVar2 == 0) {
    local_20 = -1;
  }
  else {
    __lock(0xb);
    for (; iVar5 < 0x40; iVar5 = iVar5 + 1) {
      puVar4 = (undefined4 *)(&DAT_005ba740)[iVar5];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = __calloc_crt(0x20,0x40);
        if (puVar4 != (undefined4 *)0x0) {
          (&DAT_005ba740)[iVar5] = puVar4;
          DAT_005ba720 = DAT_005ba720 + 0x20;
          for (; puVar4 < (undefined4 *)((&DAT_005ba740)[iVar5] + 0x800); puVar4 = puVar4 + 0x10) {
            *(undefined1 *)(puVar4 + 1) = 0;
            *puVar4 = 0xffffffff;
            *(undefined1 *)((int)puVar4 + 5) = 10;
            puVar4[2] = 0;
          }
          local_20 = iVar5 << 5;
          *(undefined1 *)((&DAT_005ba740)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar4 < (undefined4 *)((&DAT_005ba740)[iVar5] + 0x800); puVar4 = puVar4 + 0x10) {
        if ((*(byte *)(puVar4 + 1) & 1) == 0) {
          if (puVar4[2] == 0) {
            __lock(10);
            if (puVar4[2] == 0) {
              BVar3 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(puVar4 + 3),4000);
              if (BVar3 == 0) {
                bVar1 = true;
              }
              else {
                puVar4[2] = puVar4[2] + 1;
              }
            }
            FUN_005319c3();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar4 + 3));
            if ((*(byte *)(puVar4 + 1) & 1) == 0) {
              *(undefined1 *)(puVar4 + 1) = 1;
              *puVar4 = 0xffffffff;
              local_20 = ((int)puVar4 - (&DAT_005ba740)[iVar5] >> 6) + iVar5 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar4 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_00531a81();
  }
  return local_20;
}


//==== FUNC 0053304d  __malloc_crt ====

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_005b6088 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_005b6088 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


//==== FUNC 0042cd06  FUN_0042cd06 ====

void * __cdecl FUN_0042cd06(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (PTR_thunk_FUN_0042dde8_005aa000 != (undefined *)0x0)) {
    pvVar1 = (void *)(*(code *)PTR_thunk_FUN_0042dde8_005aa000)(param_1);
    return pvVar1;
  }
  return pvVar1;
}


//==== FUNC 00507b42  InitDialogInfo ====

/* Library Function - Single Match
    protected: struct DLGTEMPLATE const * __thiscall CPropertyPage::InitDialogInfo(struct
   DLGTEMPLATE const *)
   
   Library: Visual Studio 2008 Release */

DLGTEMPLATE * __thiscall CPropertyPage::InitDialogInfo(CPropertyPage *this,DLGTEMPLATE *param_1)

{
  void *pvVar1;
  AFX_MODULE_STATE *pAVar2;
  DLGTEMPLATE *pDVar3;
  
  Cleanup(this);
  pvVar1 = _malloc(0x10);
  *(void **)(this + 0x70) = pvVar1;
  pAVar2 = AfxGetModuleState();
  pDVar3 = (DLGTEMPLATE *)
           (**(code **)(**(int **)(pAVar2 + 0x3c) + 0x14))(*(undefined4 *)(this + 0x70),param_1);
  return pDVar3;
}


//==== FUNC 00507ad6  AllocPSP ====

/* Library Function - Single Match
    protected: void __thiscall CPropertyPage::AllocPSP(unsigned long)
   
   Library: Visual Studio 2008 Release */

void __thiscall CPropertyPage::AllocPSP(CPropertyPage *this,ulong param_1)

{
  void *_Dst;
  
  if (param_1 == 0) {
    param_1 = 0x38;
  }
  _Dst = _malloc(param_1);
  *(void **)(this + 0x74) = _Dst;
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0042dde8();
  }
  _memset(_Dst,0,param_1);
  **(size_t **)(this + 0x74) = param_1;
  return;
}


//==== FUNC 0046512d  Allocate ====

/* Library Function - Single Match
    public: void * __thiscall ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class
   ATL::CCRTAllocator>::Allocate(unsigned long)
   
   Library: Visual Studio 2008 Release */

void * __thiscall
ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::Allocate
          (CAtlSafeAllocBufferManager<ATL::CCRTAllocator> *this,ulong param_1)

{
  ulong _Size;
  undefined4 *puVar1;
  
  _Size = AtlAddThrow<unsigned_long>(param_1,8);
  puVar1 = _malloc(_Size);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)this;
    *(undefined4 **)this = puVar1;
    puVar1 = puVar1 + 2;
  }
  return puVar1;
}


//==== FUNC 0052d07a  _realloc ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_005ba71c == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_0052d253;
      __lock(4);
      local_24 = (uint *)___sbh_find_block((int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_005ba70c) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)___sbh_find_block((int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_005b5d5c,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_0052d1be();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_005b5d5c,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_005b61f0 == 0) {
        piVar4 = __errno();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_0052d280;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
    if (local_24 != (uint *)0x0) goto LAB_0052d25f;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_0052d253;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_005b5d5c,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_005b61f0 == 0) {
        piVar4 = __errno();
LAB_0052d280:
        DVar5 = GetLastError();
        iVar2 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
  }
  DVar5 = GetLastError();
  iVar2 = __get_errno_from_oserr(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_0052d253:
  __callnewh(_NewSize);
  piVar4 = __errno();
LAB_0052d25f:
  *piVar4 = 0xc;
  return (void *)0x0;
}


//==== FUNC 00405c30  FUN_00405c30 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00405c30(CWnd *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  int iVar10;
  int iVar11;
  CDialog *this;
  uint uVar12;
  int unaff_EDI;
  int iVar13;
  int iVar14;
  LONG *pLVar15;
  undefined1 auStack_170 [4];
  int iStack_16c;
  LONG LStack_168;
  undefined4 *puStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  tagRECT tStack_140;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 auStack_60 [9];
  void *pvStack_3c;
  uint uStack_34;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005547e1;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  piVar3 = (int *)FUN_0042cd80();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x80004005);
  }
  iStack_16c = (**(code **)(*piVar3 + 0xc))();
  iStack_16c = iStack_16c + 0x10;
  uStack_c = 0;
  piVar3 = (int *)FUN_0042cd80();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x80004005);
  }
  iStack_160 = (**(code **)(*piVar3 + 0xc))();
  iStack_160 = iStack_160 + 0x10;
  uStack_c._0_1_ = 1;
  FUN_00401830(&iStack_16c,L"%sskins\\%s");
  puVar4 = FUN_0042cd06(0x10);
  uStack_c._0_1_ = 2;
  puStack_164 = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if (1 < *(int *)(iStack_16c + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_16c,*(int *)(iStack_16c + -0xc));
    }
    *puVar4 = Gdiplus::Bitmap::vftable;
    LStack_168 = 0;
    uVar5 = GdipCreateBitmapFromFile();
    puVar4[2] = uVar5;
    puVar4[1] = LStack_168;
  }
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  pLVar15 = &LStack_168;
  *(undefined4 **)(param_1 + 0x74) = puVar4;
  iVar13 = puVar4[1];
  LStack_168 = 0;
  iVar6 = GdipGetImageWidth();
  if (iVar6 != 0) {
    puVar4[2] = iVar6;
  }
  if ((auStack_170 == (undefined1  [4])0x0) &&
     (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0)) {
    pvVar7 = (void *)(**(code **)**(undefined4 **)(param_1 + 0x74))();
    FUN_0042cd40(pvVar7);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  pHVar8 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar9 = CWnd::FromHandle(pHVar8);
  GetWindowRect(*(HWND *)(pCVar9 + 0x20),&tStack_140);
  iVar6 = *(int *)(param_1 + 0x74);
  iVar14 = *(int *)(iVar6 + 4);
  auStack_170 = (undefined1  [4])0x0;
  iVar10 = GdipGetImageHeight();
  if (iVar10 != 0) {
    *(int *)(iVar6 + 8) = iVar10;
  }
  iVar6 = *(int *)(param_1 + 0x74);
  piVar3 = &iStack_160;
  iStack_160 = 0;
  iVar10 = GdipGetImageWidth();
  if (iVar10 != 0) {
    *(int *)(iVar6 + 8) = iVar10;
  }
  iVar6 = *(int *)(param_1 + 0x74);
  auStack_170 = (undefined1  [4])LStack_168;
  puStack_164 = (undefined4 *)0x0;
  iVar11 = GdipGetImageHeight();
  iVar10 = iStack_16c;
  if (iVar11 != 0) {
    *(int *)(iVar6 + 8) = iVar11;
  }
  iVar6 = *(int *)(param_1 + 0x74);
  iVar11 = GdipGetImageWidth();
  if (iVar11 != 0) {
    *(int *)(iVar10 + 8) = iVar11;
  }
  CWnd::MoveWindow(param_1,((uint)((iStack_150 - iStack_158) - (int)piVar3) >> 1) + iStack_160,
                   ((uint)((iStack_144 - iStack_14c) - iVar13) >> 1) + iStack_15c,unaff_EDI,iVar6,1)
  ;
  if (*(int *)(param_1 + 0xee4) != 0) {
    auStack_170 = (undefined1  [4])0x64;
    iStack_16c = 0x32;
    LStack_168 = 0x7a;
    puStack_164 = (undefined4 *)0x48;
    auStack_60[1] = 0;
    auStack_60[2] = 0;
    auStack_60[3] = 0;
    auStack_60[4] = 0;
    auStack_60[5] = 0;
    auStack_60[6] = 0;
    auStack_60[7] = 0;
    auStack_60[0] = DAT_005b8aa4;
    iVar13 = 0;
    pCVar9 = param_1 + 0xeb4;
    do {
      this = FUN_0042cd06(0x90);
      uStack_34._0_1_ = 3;
      if (this == (CDialog *)0x0) {
        this = (CDialog *)0x0;
      }
      else {
        CDialog::CDialog(this,0x6c,(CWnd *)0x0);
        *(undefined ***)this = CColorBtnDlg::vftable;
        *(undefined4 *)(this + 0x88) = 0;
        *(undefined4 *)(this + 0x7c) = 0;
        *(undefined4 *)(this + 0x74) = 0xff00;
        *(undefined4 *)(this + 0x80) = 0x969696;
        *(undefined4 *)(this + 0x84) = 0xff00;
        *(undefined4 *)(this + 0x78) = 1;
        *(undefined4 *)(this + 0x8c) = 0;
      }
      uStack_34 = CONCAT31(uStack_34._1_3_,1);
      *(CDialog **)pCVar9 = this;
      (**(code **)(*(int *)this + 0x13c))();
      CWnd::MoveWindow(*(CWnd **)pCVar9,(int)auStack_170,iStack_16c,LStack_168 - (int)auStack_170,
                       (int)puStack_164 - iStack_16c,1);
      iVar6 = *(int *)pCVar9;
      *(undefined4 *)(iVar6 + 0x74) = auStack_60[iVar13];
      InvalidateRect(*(HWND *)(iVar6 + 0x20),(RECT *)0x0,1);
      *(undefined4 *)(*(int *)pCVar9 + 0x84) = 0x969696;
      *(undefined4 *)(*(int *)pCVar9 + 0x80) = 0x1513bd;
      *(undefined4 *)(*(int *)pCVar9 + 0x78) = 0;
      *(int *)(*(int *)pCVar9 + 0x88) = iVar13;
      CWnd::ShowWindow(*(CWnd **)pCVar9,5);
      SetRect((LPRECT)auStack_170,LStack_168 + 0x14,iStack_16c,LStack_168 + 0x2a,(int)puStack_164);
      iVar13 = iVar13 + 1;
      pCVar9 = pCVar9 + 4;
    } while (iVar13 < 2);
    *(undefined4 *)(*(int *)(param_1 + 0xeb8) + 0x8c) = 1;
  }
  uStack_118 = 0x31;
  uStack_108 = 0x31;
  uStack_f4 = 0x156;
  uStack_e4 = 0x156;
  uStack_e0 = 0xf5;
  uStack_d0 = 0xf5;
  uStack_130 = 0x1b;
  uStack_120 = 0x1b;
  uStack_110 = 0x1b;
  iStack_150 = 0x1ad;
  iStack_144 = 0x1e;
  uStack_fc = 0x138;
  uStack_ec = 0x138;
  uStack_dc = 0x90;
  uStack_cc = 0x90;
  iStack_14c = 0xb;
  uStack_148 = 0x1d9;
  tStack_140.left = 0x1df;
  tStack_140.top = 5;
  tStack_140.right = 0x206;
  tStack_140.bottom = 0x23;
  uStack_12c = 0x5a;
  uStack_128 = 0xa7;
  uStack_124 = 0x8c;
  uStack_11c = 0x9a;
  uStack_114 = 0xb0;
  uStack_10c = 0xda;
  uStack_104 = 0xf0;
  uStack_100 = 0x186;
  uStack_f8 = 0x1bf;
  uStack_f0 = 0x1d1;
  uStack_e8 = 0x20a;
  uStack_d8 = 0x17f;
  uStack_d4 = 0x9f;
  uStack_c8 = 0x1d4;
  uStack_c4 = 0xa9;
  FUN_00425a20(param_1 + 0x80,param_1,*(int *)(param_1 + 0x74));
  FUN_00425a20(param_1 + 0x1e4,param_1,*(int *)(param_1 + 0x74));
  FUN_00425c80(param_1 + 0x348,0x5828c8,(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x74),
               &uStack_130,0x5828c8,0x5828c8,(int *)0x1,DAT_005b7a20,0x5b93c0);
  FUN_00425c80(param_1 + 0x4ac,0x5828c8,(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x74),
               &uStack_120,0x5828c8,0x5828c8,(int *)0x1,DAT_005b7a20,0x5b936c);
  FUN_00425c80(param_1 + 0x610,0x5828c8,(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x74),
               &uStack_110,0x5828c8,0x5828c8,(int *)0x1,DAT_005b7a20,0x5b93c8);
  FUN_00425c80(param_1 + 0x8d8,0x5828e0,(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x74),
               &uStack_100,0x5828e0,0x5828e0,(int *)0x1,DAT_005b7a20,0x5b933c);
  FUN_00425c80(param_1 + 0x774,0x5828e0,(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x74),
               &uStack_f0,0x5828e0,0x5828e0,(int *)0x1,DAT_005b7a20,0x5b9340);
  FUN_00425c80(param_1 + 0xba0,0x5828f8,(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x74),
               &uStack_e0,0x5828f8,0x5828f8,(int *)0x1,DAT_005b7a20,0);
  if (1 < *(int *)(DAT_005b93b0 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b93b0,*(int *)(DAT_005b93b0 + -0xc));
  }
  iVar13 = DAT_005b93b0;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000021;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b9374 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b9374,*(int *)(DAT_005b9374 + -0xc));
  }
  iVar13 = DAT_005b9374;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *(wchar_t *)(puVar4 + 1) = L'\0';
    *puVar4 = 0x4000022;
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b9380 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b9380,*(int *)(DAT_005b9380 + -0xc));
  }
  iVar13 = DAT_005b9380;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000025;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b937c + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b937c,*(int *)(DAT_005b937c + -0xc));
  }
  iVar13 = DAT_005b937c;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000024;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b9378 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b9378,*(int *)(DAT_005b9378 + -0xc));
  }
  iVar13 = DAT_005b9378;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000023;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b938c + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b938c,*(int *)(DAT_005b938c + -0xc));
  }
  iVar13 = DAT_005b938c;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000028;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b9384 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b9384,*(int *)(DAT_005b9384 + -0xc));
  }
  iVar13 = DAT_005b9384;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000026;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b9388 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b9388,*(int *)(DAT_005b9388 + -0xc));
  }
  iVar13 = DAT_005b9388;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000027;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b9398 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b9398,*(int *)(DAT_005b9398 + -0xc));
  }
  iVar13 = DAT_005b9398;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000030;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b93a4 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b93a4,*(int *)(DAT_005b93a4 + -0xc));
  }
  iVar13 = DAT_005b93a4;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000031;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b93a0 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b93a0,*(int *)(DAT_005b93a0 + -0xc));
  }
  iVar13 = DAT_005b93a0;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000032;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  if (1 < *(int *)(DAT_005b939c + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&DAT_005b939c,*(int *)(DAT_005b939c + -0xc));
  }
  iVar13 = DAT_005b939c;
  puVar4 = _malloc(0x40);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x4000034;
    *(wchar_t *)(puVar4 + 1) = L'\0';
    if (iVar13 != 0) {
      __snwprintf_s((wchar_t *)(puVar4 + 1),0x1e,0x1d,L"%s");
    }
    FUN_00416ef0(puVar4);
  }
  *(undefined4 *)(param_1 + 0xc2c) = 0;
  CWnd::ShowWindow(param_1 + 0xba0,0);
  pCVar9 = param_1 + 0xa3c;
  FUN_00425c80(pCVar9,0x582914,(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x74),&uStack_d0,
               0x582914,0x582914,(int *)0x1,DAT_005b7a20,0);
  CWnd::ShowWindow(pCVar9,0);
  FUN_00401830(&stack0xfffffe6c,L"%sskins\\%s");
  FUN_00401830(&stack0xfffffe78,L"%sskins\\%s");
  CopyRect((LPRECT)&stack0xfffffe44,(RECT *)0x0);
  if (1 < pLVar15[-1]) {
    ATL::CSimpleStringT<wchar_t,0>::Fork((CSimpleStringT<wchar_t,0> *)&stack0xfffffe78,pLVar15[-3]);
  }
  if (1 < *(int *)(iVar14 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&stack0xfffffe6c,*(int *)(iVar14 + -0xc));
  }
  FUN_0042bf60(0x11,param_1);
  uVar5 = DAT_005b7a0c;
  *(undefined4 *)(param_1 + 0xdf0) = DAT_005b7a04;
  *(undefined4 *)(param_1 + 0xdec) = uVar5;
  InvalidateRect(*(HWND *)(param_1 + 0xd90),(RECT *)0x0,1);
  uVar2 = DAT_005b7a00 >> 0x10;
  uVar12 = DAT_005b7a00 & 0xff;
  uVar1 = DAT_005b7a00 >> 8;
  *(uint *)(param_1 + 0xddc) =
       ((DAT_005b79fc & 0xff | 0xffffc800) << 8 | DAT_005b79fc >> 8 & 0xff) << 8 |
       DAT_005b79fc >> 0x10 & 0xff;
  *(uint *)(param_1 + 0xde0) = ((uVar12 | 0xffffc800) << 8 | uVar1 & 0xff) << 8 | uVar2 & 0xff;
  CWnd::ShowWindow(param_1 + 0xd70,0);
  if ((_DAT_005b7c1c != 0) && (*(int *)(param_1 + 0xed8) != -1)) {
    iVar13 = 0;
    do {
      if (((&DAT_005b7c1c)[iVar13] != '\0') &&
         ((&DAT_005b7c1c)[iVar13] == (&DAT_005b6845)[*(int *)(param_1 + 0xed8) * 0x24])) {
        CWnd::ShowWindow(param_1 + 0x348,0);
        CWnd::ShowWindow(param_1 + 0x4ac,0);
        CWnd::ShowWindow(param_1 + 0x610,0);
        CWnd::ShowWindow(pCVar9,0);
        break;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 4);
  }
  uStack_34 = uStack_34 & 0xffffff00;
  piVar3 = pLVar15 + -1;
  LOCK();
  iVar13 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar13 + -1 < 1) {
    (**(code **)(*(int *)pLVar15[-4] + 4))();
  }
  uStack_34 = 0xffffffff;
  piVar3 = (int *)(iVar14 + -4);
  LOCK();
  iVar13 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar13 == 1 || iVar13 + -1 < 0) {
    (**(code **)(**(int **)(iVar14 + -0x10) + 4))();
  }
  ExceptionList = pvStack_3c;
  return;
}


//==== FUNC 00416ef0  FUN_00416ef0 ====

undefined4 FUN_00416ef0(undefined4 param_1)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  puVar1 = _malloc(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = param_1;
  puVar1[1] = 0;
  if (*(int *)(unaff_ESI + 8) == 0) {
    puVar1[2] = 0;
    *(undefined4 **)(unaff_ESI + 0x10) = puVar1;
    *(undefined4 **)(unaff_ESI + 0x14) = puVar1;
    *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 1;
    return 1;
  }
  puVar1[2] = *(undefined4 *)(unaff_ESI + 0x14);
  *(undefined4 **)(*(int *)(unaff_ESI + 0x14) + 4) = puVar1;
  *(undefined4 **)(unaff_ESI + 0x14) = puVar1;
  *(int *)(unaff_ESI + 8) = *(int *)(unaff_ESI + 8) + 1;
  return 1;
}


//==== FUNC 0042b6a0  FUN_0042b6a0 ====

int __thiscall
FUN_0042b6a0(void *this,int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  
  piVar2 = param_1;
  if ((in_EAX == 0) || (iVar3 = FUN_0042bbf0(), iVar3 < *(int *)((int)this + 0x130))) {
    for (puVar1 = *(undefined4 **)((int)this + 0x124); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[1]) {
      piVar4 = (int *)*puVar1;
      if (*(int **)*puVar1 == param_1) goto LAB_0042b6e9;
    }
    param_1 = (int *)0x0;
    piVar4 = param_1;
LAB_0042b6e9:
    param_1 = piVar4;
    if ((piVar2 == (int *)0xffff0000) || ((param_1 != (int *)0x0 && (param_1[6] == 2)))) {
      iVar3 = FUN_00438ff4(this,1,param_5,0,0,0,0,0,piVar2,0xffff0002);
      if (iVar3 != 0) {
        piVar4 = _malloc(0x24);
        if (piVar4 == (int *)0x0) {
          return 0;
        }
        piVar4[5] = param_7;
        piVar4[3] = param_4;
        piVar4[4] = param_6;
        piVar4[1] = param_3;
        *piVar4 = iVar3;
        piVar4[7] = param_8;
        piVar4[6] = (in_EAX != 0) + 1;
        piVar4[8] = 0;
        FUN_00416ef0(piVar4);
        if (param_2 != 0) {
          if ((piVar2 != (int *)0xffff0000) && (param_1 != (int *)0x0)) {
            param_1[8] = 1;
          }
          SendMessageW(*(HWND *)((int)this + 0x20),0x110b,9,iVar3);
        }
        InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)0x0,1);
      }
      return iVar3;
    }
  }
  return 0;
}


//==== FUNC 004088b0  FUN_004088b0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004088b0(undefined4 *param_1)

{
  CStringData *pCVar1;
  CStringData *pCVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  CSimpleStringT<wchar_t,0> *pCVar10;
  CStringData *pCVar11;
  CWnd *pCVar12;
  CWnd *pCStack_1dc;
  tagRECT tStack_1d8;
  int iStack_1c8;
  CSimpleStringT<wchar_t,0> *pCStack_1c4;
  CStringData *pCStack_1c0;
  uint uStack_1bc;
  undefined4 *puStack_1b8;
  undefined4 uStack_1b4;
  CStringData *pCStack_1b0;
  undefined4 uStack_1ac;
  undefined4 auStack_1a8 [101];
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00554eed;
  local_14 = ExceptionList;
  uVar3 = DAT_005ae6a0 ^ (uint)&stack0xfffffe18;
  ExceptionList = &local_14;
  piVar4 = (int *)FUN_0042cd80();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x80004005);
  }
  iStack_1c8 = (**(code **)(*piVar4 + 0xc))(uVar3);
  iStack_1c8 = iStack_1c8 + 0x10;
  iStack_c = 0;
  FUN_00401830(&iStack_1c8,L"%sskins\\%s");
  puVar5 = FUN_0042cd06(0x10);
  iStack_c._0_1_ = 1;
  puStack_1b8 = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (1 < *(int *)(iStack_1c8 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_1c8,*(int *)(iStack_1c8 + -0xc));
    }
    *puVar5 = Gdiplus::Bitmap::vftable;
    pCStack_1dc = (CWnd *)0x0;
    uVar6 = GdipCreateBitmapFromFile(iStack_1c8,&pCStack_1dc);
    puVar5[2] = uVar6;
    puVar5[1] = pCStack_1dc;
  }
  iStack_c = (uint)iStack_c._1_3_ << 8;
  if (puVar5 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_00404a40(DAT_005b051c,DAT_005b0524 - DAT_005b051c,DAT_005b0518,DAT_005b051c,
                          DAT_005b0520 - DAT_005b0518);
  }
  param_1[0x1d] = puVar7;
  if (puVar5 != (undefined4 *)0x0) {
    pvVar8 = (void *)(**(code **)*puVar5)(0);
    FUN_0042cd40(pvVar8);
  }
  FUN_00401830(&iStack_1c8,L"%sskins\\%s");
  puVar5 = FUN_0042cd06(0x10);
  iStack_c._0_1_ = 2;
  puStack_1b8 = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (1 < *(int *)(iStack_1c8 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_1c8,*(int *)(iStack_1c8 + -0xc));
    }
    *puVar5 = Gdiplus::Bitmap::vftable;
    pCStack_1dc = (CWnd *)0x0;
    uVar6 = GdipCreateBitmapFromFile(iStack_1c8,&pCStack_1dc);
    puVar5[2] = uVar6;
    puVar5[1] = pCStack_1dc;
  }
  iStack_c = (uint)iStack_c._1_3_ << 8;
  param_1[0x20] = puVar5;
  FUN_00407a70();
  tStack_1d8.bottom = DAT_005b9130;
  tStack_1d8.top = DAT_005b9128;
  tStack_1d8.left = DAT_005b9124;
  tStack_1d8.right = DAT_005b912c;
  FUN_00425c80((CWnd *)(param_1 + 0x1a1),0x582c38,param_1,param_1[0x1d],&tStack_1d8,0x582c38,
               0x582c1c,(int *)0x0,DAT_005b7a20,0);
  if (param_1[0x1ca] != 1) {
    param_1[0x1ca] = 1;
    InvalidateRect((HWND)param_1[0x1a9],(RECT *)0x0,1);
  }
  CWnd::ShowWindow((CWnd *)(param_1 + 0x1a1),0);
  pCStack_1dc = (CWnd *)(param_1 + 0x682);
  tStack_1d8.left = DAT_005b9134;
  tStack_1d8.top = DAT_005b9138;
  tStack_1d8.right = DAT_005b913c;
  tStack_1d8.bottom = DAT_005b9140;
  FUN_00425c80(pCStack_1dc,0x5828f8,param_1,param_1[0x1d],&tStack_1d8,0x5828f8,0x5828f8,(int *)0x0,
               DAT_005b7a20,0);
  tStack_1d8.bottom = DAT_005b9224;
  tStack_1d8.left = DAT_005b9218;
  tStack_1d8.top = DAT_005b921c;
  tStack_1d8.right = DAT_005b9220;
  FUN_00425c80((CWnd *)(param_1 + 0x7b),0x5828f8,param_1,param_1[0x1d],&tStack_1d8,0x5828f8,0x5828f8
               ,(int *)0x1,DAT_005b7a20,0);
  param_1[0x9e] = 0;
  piVar4 = (int *)FUN_0042cd80();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x80004005);
  }
  iVar9 = (**(code **)(*piVar4 + 0xc))();
  pCStack_1c0 = (CStringData *)(iVar9 + 0x10);
  iStack_c._0_1_ = 3;
  pCStack_1c4 = (CSimpleStringT<wchar_t,0> *)0x0;
  uStack_1bc = 1;
  do {
    pCVar10 = pCStack_1c4;
    puVar5 = (undefined4 *)FUN_00407bc0();
    pCVar2 = pCStack_1c0;
    iStack_c._0_1_ = 4;
    pvVar8 = (void *)*puVar5;
    pCVar1 = (CStringData *)((int)pvVar8 + -0x10);
    pCVar11 = pCStack_1c0 + -0x10;
    if (pCVar1 != pCVar11) {
      if ((*(int *)(pCStack_1c0 + -4) < 0) || (*(int *)pCVar1 != *(int *)pCVar11)) {
        FUN_004025c0(&pCStack_1c0,pvVar8,*(int *)((int)pvVar8 + -0xc));
      }
      else {
        pCStack_1b0 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar1);
        pCVar2 = pCVar2 + -4;
        LOCK();
        iVar9 = *(int *)pCVar2;
        *(int *)pCVar2 = *(int *)pCVar2 + -1;
        UNLOCK();
        if (iVar9 == 1 || iVar9 + -1 < 0) {
          (**(code **)(**(int **)pCVar11 + 4))(pCVar11);
        }
        pCStack_1c0 = pCStack_1b0 + 0x10;
      }
    }
    iStack_c._0_1_ = 3;
    piVar4 = puStack_1b8 + -1;
    LOCK();
    iVar9 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar9 == 1 || iVar9 + -1 < 0) {
      (**(code **)(*(int *)puStack_1b8[-4] + 4))(puStack_1b8 + -4);
    }
    if (*(int *)(pCStack_1c0 + -0xc) == 0) break;
    if ((_DAT_005b7c00 & uStack_1bc) == 0) {
      if (1 < *(int *)(pCStack_1c0 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&pCStack_1c0,*(int *)(pCStack_1c0 + -0xc));
      }
      FUN_00401dd0(pCStack_1dc,(uint)(byte)(&DAT_005b7c28)[(int)pCVar10]);
      pCVar10 = pCStack_1c4;
    }
    pCStack_1c4 = (CSimpleStringT<wchar_t,0> *)((int)pCVar10 + 1);
    uStack_1bc = uStack_1bc << 1 | (uint)((int)uStack_1bc < 0);
  } while ((int)pCStack_1c4 < 0x1e);
  uStack_1bc = 0;
  pCStack_1dc = (CWnd *)0x1;
  pCStack_1c4 = (CSimpleStringT<wchar_t,0> *)&DAT_005b9518;
  do {
    pCVar10 = pCStack_1c4;
    iVar9 = *(int *)pCStack_1c4;
    if (*(int *)(iVar9 + -0xc) == 0) break;
    if ((_DAT_005b8ab0 & (uint)pCStack_1dc) == 0) {
      if (1 < *(int *)(iVar9 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork(pCStack_1c4,*(int *)(iVar9 + -0xc));
      }
      iVar9 = *(int *)pCVar10;
      piVar4 = _malloc(0x40);
      if (piVar4 != (int *)0x0) {
        *piVar4 = uStack_1bc;
        *(wchar_t *)(piVar4 + 1) = L'\0';
        if (iVar9 != 0) {
          __snwprintf_s((wchar_t *)(piVar4 + 1),0x1e,0x1d,L"%s",iVar9);
        }
        puVar5 = _malloc(0xc);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = piVar4;
          puVar5[1] = 0;
          if (param_1[0xd6] == 0) {
            puVar5[2] = 0;
            param_1[0xd8] = puVar5;
          }
          else {
            puVar5[2] = param_1[0xd9];
            *(undefined4 **)(param_1[0xd9] + 4) = puVar5;
          }
          param_1[0xd6] = param_1[0xd6] + 1;
          param_1[0xd9] = puVar5;
        }
      }
    }
    uStack_1bc = uStack_1bc + 1;
    pCStack_1c4 = pCStack_1c4 + 4;
    pCStack_1dc = (CWnd *)((int)pCStack_1dc << 1 | (uint)((int)pCStack_1dc < 0));
  } while ((int)pCStack_1c4 < 0x5b9554);
  param_1[0xee] = 0x85;
  iVar9 = ((DAT_005b91f4 - DAT_005b91ec) + -0x12) / 2 + DAT_005b91ec;
  SetRect(&tStack_1d8,DAT_005b91f0 + 8,iVar9,DAT_005b91f0 + 0x2d,iVar9 + 0x12);
  FUN_00425a20(param_1 + 0xef,param_1,param_1[0x1d]);
  uVar6 = DAT_005b79e4;
  param_1[0x115] = DAT_005b79e4;
  param_1[0x117] = uVar6;
  param_1[0x116] = uVar6;
  param_1[0x11c] = 0x8134;
  iVar9 = ((DAT_005b91e4 - DAT_005b91dc) + -0x12) / 2 + DAT_005b91dc;
  SetRect(&tStack_1d8,DAT_005b91e0 + 10,iVar9,DAT_005b91e0 + 0x23,iVar9 + 0x12);
  FUN_00425a20(param_1 + 0x148,param_1,param_1[0x1d]);
  uVar6 = DAT_005b79e4;
  param_1[0x16e] = DAT_005b79e4;
  param_1[0x170] = uVar6;
  param_1[0x16f] = uVar6;
  param_1[0x175] = 0x8134;
  pCStack_1dc = (CWnd *)((DAT_005b82e4 - DAT_005b82e0) + 1);
  tStack_1d8.top = DAT_005b91dc;
  tStack_1d8.right = DAT_005b91e0;
  tStack_1d8.bottom = DAT_005b91e4;
  pCStack_1c4 = (CSimpleStringT<wchar_t,0> *)(param_1 + 0x1fa);
  tStack_1d8.left = DAT_005b91d8;
  puStack_1b8 = (undefined4 *)0x0;
  uStack_1b4 = 6;
  FUN_004269c0((int)pCStack_1c4,DAT_005b82e0,DAT_005b82e4,0x94,&puStack_1b8,DAT_005b91d8,
               DAT_005b91dc,DAT_005b91e0,DAT_005b91e4,DAT_005b91d8,DAT_005b91dc,DAT_005b91e0,
               DAT_005b91e4);
  pCVar12 = pCStack_1dc;
  param_1[0x41c] = DAT_005b8b60;
  param_1[0x43c] = 0;
  FUN_004226c0(auStack_1a8);
  if (extraout_ECX != 0) {
    if (pCVar12 != (CWnd *)((param_1[0x425] - param_1[0x424]) + 1)) {
      MessageBoxW((HWND)0x0,L"CPngSlider::SetScalePos  dwScale and Range unmatch!",L"Warning",0);
    }
    if ((CWnd *)0xf9 < pCVar12) {
      pCVar12 = (CWnd *)0xfa;
    }
    _memcpy(param_1 + 0x322,auStack_1a8,(int)pCVar12 * 4);
    param_1[0x321] = pCVar12;
  }
  FUN_004221e0((undefined4 *)((int)pCStack_1c4 + 0x54),*(int *)((int)pCStack_1c4 + 0x908));
  pCStack_1dc = (CWnd *)((DAT_005b82ec - DAT_005b82e8) + 1);
  tStack_1d8.top = DAT_005b91ec;
  tStack_1d8.right = DAT_005b91f0;
  tStack_1d8.left = DAT_005b91e8;
  tStack_1d8.bottom = DAT_005b91f4;
  puStack_1b8 = param_1 + 0x43e;
  pCStack_1b0 = (CStringData *)0x0;
  uStack_1ac = 6;
  FUN_004269c0((int)puStack_1b8,DAT_005b82e8,DAT_005b82ec,0x95,&pCStack_1b0,DAT_005b91e8,
               DAT_005b91ec,DAT_005b91f0,DAT_005b91f4,DAT_005b91e8,DAT_005b91ec,DAT_005b91f0,
               DAT_005b91f4);
  pCVar12 = pCStack_1dc;
  param_1[0x660] = DAT_005b8b60;
  param_1[0x680] = 0;
  FUN_004226c0(auStack_1a8);
  if (extraout_ECX_00 != 0) {
    if (pCVar12 != (CWnd *)((param_1[0x669] - param_1[0x668]) + 1)) {
      MessageBoxW((HWND)0x0,L"CPngSlider::SetScalePos  dwScale and Range unmatch!",L"Warning",0);
    }
    if ((CWnd *)0xf9 < pCVar12) {
      pCVar12 = (CWnd *)0xfa;
    }
    _memcpy(param_1 + 0x566,auStack_1a8,(int)pCVar12 * 4);
    param_1[0x565] = pCVar12;
  }
  FUN_004221e0(puStack_1b8 + 0x15,puStack_1b8[0x242]);
  iStack_c = (uint)iStack_c._1_3_ << 8;
  pCVar1 = pCStack_1c0 + -4;
  LOCK();
  iVar9 = *(int *)pCVar1;
  *(int *)pCVar1 = *(int *)pCVar1 + -1;
  UNLOCK();
  if (iVar9 == 1 || iVar9 + -1 < 0) {
    (**(code **)(**(int **)(pCStack_1c0 + -0x10) + 4))(pCStack_1c0 + -0x10);
  }
  iStack_c = 0xffffffff;
  piVar4 = (int *)(iStack_1c8 + -4);
  LOCK();
  iVar9 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar9 == 1 || iVar9 + -1 < 0) {
    (**(code **)(**(int **)(iStack_1c8 + -0x10) + 4))((undefined4 *)(iStack_1c8 + -0x10));
  }
  ExceptionList = local_14;
  return;
}


//==== FUNC 00401dd0  FUN_00401dd0 ====

undefined4 FUN_00401dd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  if (3 < unaff_EBX) {
    return 0;
  }
  puVar1 = _malloc(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = param_2;
  *(wchar_t *)(puVar1 + 1) = L'\0';
  if (unaff_EDI != 0) {
    __snwprintf_s((wchar_t *)(puVar1 + 1),0x1e,0x1d,L"%s");
  }
  uVar2 = FUN_00416ef0(puVar1);
  return uVar2;
}


//==== FUNC 00428a40  FUN_00428a40 ====

bool FUN_00428a40(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (in_EAX != (undefined4 *)0x0) {
    puVar1 = _malloc(0x342);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      for (iVar2 = 0xd0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *in_EAX;
        in_EAX = in_EAX + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)puVar3 = *(undefined2 *)in_EAX;
      iVar2 = FUN_00416ef0(puVar1);
      return iVar2 != 0;
    }
  }
  return false;
}


//==== FUNC 0040ed20  FUN_0040ed20 ====

void FUN_0040ed20(int param_1,int param_2,void *param_3)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *this;
  int iVar7;
  int *piVar8;
  uint local_1c;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005544e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00416fc0();
  SendMessageW(*(HWND *)((int)this + 0x20),0x1101,0,-0x10000);
  local_14 = 0;
  if ((DAT_005b90d8 == 0) || (local_1c = DAT_005b90d8, 0x59 < DAT_005b90d8)) {
    local_1c = 0x5a;
  }
  uVar2 = *(ushort *)(param_2 + 0x6a);
  iVar4 = *(int *)(param_2 + 0x6e);
  sVar3 = *(short *)(param_2 + 0x6c);
  piVar1 = (int *)(param_2 + 0x6e);
  while( true ) {
    if (uVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    FUN_00424b80((int *)&param_3,(byte)uVar2);
    local_4 = 0;
    if (1 < *(int *)((int)param_3 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&param_3,*(int *)((int)param_3 + -0xc));
    }
    iVar5 = *(int *)(param_1 + 0x80 + (uint)(sVar3 != 0) * 4);
    for (puVar6 = *(undefined4 **)((int)this + 0x124);
        (puVar6 != (undefined4 *)0x0 && (*(int *)*puVar6 != -0x10000));
        puVar6 = (undefined4 *)puVar6[1]) {
    }
    iVar7 = FUN_00438ff4(this,1,param_3,0,0,0,0,0,0xffff0000,0xffff0002);
    if ((iVar7 != 0) && (piVar8 = _malloc(0x24), piVar8 != (int *)0x0)) {
      piVar8[4] = (uint)uVar2;
      piVar8[5] = (uint)(sVar3 != 0);
      *piVar8 = iVar7;
      piVar8[1] = iVar5;
      piVar8[3] = 0;
      piVar8[7] = 0;
      piVar8[6] = 1;
      piVar8[8] = 0;
      FUN_00416ef0(piVar8);
      InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)0x0,1);
    }
    if ((*(int *)(param_2 + 0xc) != 0) && ((short)piVar1[1] != 0)) {
      FUN_00401830(&param_3,L"%d ms");
      if (1 < *(int *)((int)param_3 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&param_3,*(int *)((int)param_3 + -0xc));
      }
      iVar5 = *(int *)(param_1 + 0x88);
      for (puVar6 = *(undefined4 **)((int)this + 0x124);
          (puVar6 != (undefined4 *)0x0 && (*(int *)*puVar6 != -0x10000));
          puVar6 = (undefined4 *)puVar6[1]) {
      }
      iVar7 = FUN_00438ff4(this,1,param_3,0,0,0,0,0,0xffff0000,0xffff0002);
      if ((iVar7 != 0) && (piVar8 = _malloc(0x24), piVar8 != (int *)0x0)) {
        piVar8[1] = iVar5;
        *piVar8 = iVar7;
        piVar8[4] = iVar4;
        piVar8[5] = 2;
        piVar8[3] = 0;
        piVar8[7] = 0;
        piVar8[6] = 1;
        piVar8[8] = 0;
        FUN_00416ef0(piVar8);
        InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)0x0,1);
      }
    }
    local_14 = local_14 + 1;
    piVar8 = piVar1 + 2;
    if ((int)local_1c <= local_14) break;
    iVar4 = *piVar8;
    sVar3 = *(short *)((int)piVar1 + 6);
    uVar2 = *(ushort *)(piVar1 + 1);
    local_4 = 0xffffffff;
    piVar1 = (int *)((int)param_3 + -4);
    LOCK();
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    piVar1 = piVar8;
    if (iVar5 == 1 || iVar5 + -1 < 0) {
      (**(code **)(**(int **)((int)param_3 + -0x10) + 4))((undefined4 *)((int)param_3 + -0x10));
    }
  }
  local_4 = 0xffffffff;
  piVar1 = (int *)((int)param_3 + -4);
  LOCK();
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 != 1 && -1 < iVar4 + -1) {
    ExceptionList = local_c;
    return;
  }
  (**(code **)(**(int **)((int)param_3 + -0x10) + 4))((undefined4 *)((int)param_3 + -0x10));
  ExceptionList = local_c;
  return;
}


//==== FUNC 0040cdf0  FUN_0040cdf0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040cdf0(void *this,int param_1,uint param_2)

{
  void *this_00;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  DWORD DVar4;
  int *piVar5;
  LRESULT LVar6;
  undefined4 uVar7;
  int iVar8;
  int lParam;
  void *pvVar9;
  int iStack_1c;
  void *local_18;
  int iStack_14;
  DWORD local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00554520;
  local_c = ExceptionList;
  uVar2 = DAT_005ae6a0 ^ (uint)&stack0xffffffd4;
  if ((DAT_005b908c == param_1) && (DAT_005b9090 == param_2)) {
    return 0;
  }
  uVar3 = 0x5a;
  if ((DAT_005b90d8 != 0) && (DAT_005b90d8 < 0x5a)) {
    uVar3 = DAT_005b90d8;
  }
  DAT_005b9098 = DAT_005b9098 + 1;
  if (uVar3 < DAT_005b9098) {
    return 1;
  }
  this_00 = (void *)((int)this + 0x1280);
  ExceptionList = &local_c;
  local_18 = this;
  DVar4 = GetTickCount();
  local_10 = DVar4;
  piVar5 = (int *)FUN_0042cd80();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x80004005);
  }
  iStack_1c = (**(code **)(*piVar5 + 0xc))(uVar2);
  iStack_1c = iStack_1c + 0x10;
  iStack_4 = 0;
  pvVar9 = this;
  if (((*(int *)((int)this + 0x294) != 0) &&
      (LVar6 = SendMessageW(*(HWND *)((int)this + 0x12a0),0x1105,0,0), LVar6 != 0)) &&
     (uVar2 = DVar4 - _DAT_005b9094, 0 < (int)uVar2)) {
    if (DAT_005b90d4 < uVar2) {
      uVar2 = DAT_005b90d4;
    }
    FUN_00401830(&iStack_1c,L"%d ms");
    uVar7 = FUN_004021f0((CSimpleStringT<wchar_t,0> *)&iStack_1c);
    iStack_14 = *(int *)((int)this + 0x88);
    for (puVar1 = *(undefined4 **)((int)this + 0x13a4);
        (puVar1 != (undefined4 *)0x0 && (*(int *)*puVar1 != -0x10000));
        puVar1 = (undefined4 *)puVar1[1]) {
    }
    iVar8 = FUN_00438ff4(this_00,1,uVar7,0,0,0,0,0,0xffff0000,0xffff0002);
    pvVar9 = local_18;
    if ((iVar8 != 0) && (piVar5 = _malloc(0x24), pvVar9 = local_18, piVar5 != (int *)0x0)) {
      piVar5[4] = uVar2;
      *piVar5 = iVar8;
      piVar5[5] = 2;
      piVar5[1] = iStack_14;
      piVar5[3] = 0;
      piVar5[7] = 0;
      piVar5[6] = 1;
      piVar5[8] = 0;
      FUN_00416ef0(piVar5);
      InvalidateRect(*(HWND *)((int)this + 0x12a0),(RECT *)0x0,1);
      pvVar9 = local_18;
    }
  }
  if (DAT_005b7bfc == 1) {
    param_1._0_1_ = FUN_0042c980();
  }
  else if (DAT_005b7bfc == 2) {
    param_1._0_1_ = FUN_0042ca90();
  }
  uVar2 = (uint)(byte)param_1;
  piVar5 = FUN_00424b80(&iStack_14,(byte)param_1);
  iStack_4._0_1_ = 1;
  FID_conflict_operator_(&iStack_1c,piVar5);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  piVar5 = (int *)(iStack_14 + -4);
  LOCK();
  iVar8 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)(iStack_14 + -0x10) + 4))((undefined4 *)(iStack_14 + -0x10));
  }
  if ((param_2 & 0x80) == 0) {
    if (1 < *(int *)(iStack_1c + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_1c,*(int *)(iStack_1c + -0xc));
    }
    iVar8 = *(int *)((int)pvVar9 + 0x84);
    for (puVar1 = *(undefined4 **)((int)this + 0x13a4);
        (puVar1 != (undefined4 *)0x0 && (*(int *)*puVar1 != -0x10000));
        puVar1 = (undefined4 *)puVar1[1]) {
    }
    lParam = FUN_00438ff4(this_00,1,iStack_1c,0,0,0,0,0,0xffff0000,0xffff0002);
    if (lParam == 0) goto LAB_0040d14b;
    piVar5 = _malloc(0x24);
    if (piVar5 == (int *)0x0) {
      lParam = 0;
      goto LAB_0040d14b;
    }
    piVar5[4] = uVar2;
    piVar5[5] = 1;
    piVar5[6] = 1;
  }
  else {
    if (1 < *(int *)(iStack_1c + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_1c,*(int *)(iStack_1c + -0xc));
    }
    iVar8 = *(int *)((int)pvVar9 + 0x80);
    for (puVar1 = *(undefined4 **)((int)this + 0x13a4);
        (puVar1 != (undefined4 *)0x0 && (*(int *)*puVar1 != -0x10000));
        puVar1 = (undefined4 *)puVar1[1]) {
    }
    lParam = FUN_00438ff4(this_00,1,iStack_1c,0,0,0,0,0,0xffff0000,0xffff0002);
    if (lParam == 0) goto LAB_0040d14b;
    piVar5 = _malloc(0x24);
    if (piVar5 == (int *)0x0) {
      lParam = 0;
      goto LAB_0040d14b;
    }
    piVar5[4] = uVar2;
    piVar5[5] = 0;
    piVar5[6] = 1;
  }
  piVar5[1] = iVar8;
  *piVar5 = lParam;
  piVar5[3] = 0;
  piVar5[7] = 0;
  piVar5[8] = 0;
  FUN_00416ef0(piVar5);
  InvalidateRect(*(HWND *)((int)this + 0x12a0),(RECT *)0x0,1);
LAB_0040d14b:
  SendMessageW(*(HWND *)((int)this + 0x12a0),0x1114,0,lParam);
  DAT_005b9090 = param_2;
  iStack_4 = 0xffffffff;
  _DAT_005b9094 = local_10;
  piVar5 = (int *)(iStack_1c + -4);
  LOCK();
  iVar8 = *piVar5;
  DAT_005b908c = uVar2;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)(iStack_1c + -0x10) + 4))((undefined4 *)(iStack_1c + -0x10));
  }
  ExceptionList = local_c;
  return 1;
}


//==== FUNC 0042b8a0  FUN_0042b8a0 ====

int FUN_0042b8a0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int in_EAX;
  LRESULT LVar1;
  int iVar2;
  int *piVar3;
  void *unaff_EDI;
  
  if (((in_EAX != 0) && (in_EAX != -0x10000)) && (in_EAX != -0xfffe)) {
    LVar1 = SendMessageW(*(HWND *)((int)unaff_EDI + 0x20),0x110a,3,in_EAX);
    if (LVar1 == 0) {
      LVar1 = -0x10000;
    }
    if (param_1 != 0) {
      in_EAX = SendMessageW(*(HWND *)((int)unaff_EDI + 0x20),0x110a,2,in_EAX);
      if (in_EAX == 0) {
        in_EAX = -0xffff;
      }
    }
    iVar2 = FUN_00438ff4(unaff_EDI,1,param_3,0,0,0,0,0,LVar1,in_EAX);
    if (iVar2 != 0) {
      piVar3 = _malloc(0x24);
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      piVar3[4] = param_4;
      *piVar3 = iVar2;
      piVar3[5] = param_5;
      piVar3[1] = param_2;
      piVar3[3] = 0;
      piVar3[6] = 1;
      piVar3[7] = 0;
      piVar3[8] = 0;
      FUN_00416ef0(piVar3);
      InvalidateRect(*(HWND *)((int)unaff_EDI + 0x20),(RECT *)0x0,1);
    }
    return iVar2;
  }
  return 0;
}


//==== FUNC 0043a1fa  FUN_0043a1fa ====

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall
FUN_0043a1fa(void *this,int param_1,undefined4 param_2,wchar_t *param_3,uint param_4,short *param_5,
            CWnd *param_6,size_t param_7,undefined4 param_8)

{
  uint *puVar1;
  void *_Dst;
  AFX_MODULE_STATE *pAVar2;
  wchar_t *pwVar3;
  HRESULT HVar4;
  int iVar5;
  IID *rclsid;
  undefined4 local_138;
  wchar_t *local_134;
  short *local_130;
  int *local_12c;
  _OSVERSIONINFOW local_128;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 300;
  local_8 = 0x43a209;
  local_134 = param_3;
  local_130 = param_5;
  CCommonDialog::CCommonDialog(this,param_6);
  local_8 = 0;
  *(undefined ***)this = CFileDialog::vftable;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)((int)this + 0x8c)
            );
  *(undefined4 *)((int)this + 0x31c) = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)((int)this + 800) = 0;
  _memset(&local_128,0,0x114);
  local_128.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_128);
  if (local_128.dwMajorVersion < 6) {
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x78) = param_8;
  }
  if (param_7 == 0) {
    param_7 = 0x58;
  }
  _Dst = _malloc(param_7);
  *(void **)((int)this + 0x74) = _Dst;
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0042dde8();
  }
  _memset(_Dst,0,param_7);
  *(undefined2 *)((int)this + 0x90) = 0;
  pwVar3 = (wchar_t *)((int)this + 0x110);
  *pwVar3 = L'\0';
  *(int *)((int)this + 0x88) = param_1;
  *(uint *)((int)this + 0x54) = 0x7005 - (uint)(param_1 != 0);
  *(undefined4 *)((int)this + 0x318) = 0;
  **(size_t **)((int)this + 0x74) = param_7;
  *(wchar_t **)(*(int *)((int)this + 0x74) + 0x1c) = pwVar3;
  *(undefined4 *)(*(int *)((int)this + 0x74) + 0x20) = 0x104;
  *(undefined4 *)(*(int *)((int)this + 0x74) + 0x3c) = param_2;
  *(undefined2 **)(*(int *)((int)this + 0x74) + 0x24) = (undefined2 *)((int)this + 0x90);
  *(undefined4 *)(*(int *)((int)this + 0x74) + 0x28) = 0x40;
  puVar1 = (uint *)(*(int *)((int)this + 0x74) + 0x34);
  *puVar1 = *puVar1 | param_4 | 0x80020;
  if ((param_4 & 0x40) != 0) {
    puVar1 = (uint *)(*(int *)((int)this + 0x74) + 0x34);
    *puVar1 = *puVar1 & 0xff7fffff;
  }
  pAVar2 = AfxGetModuleState();
  *(undefined4 *)(*(int *)((int)this + 0x74) + 8) = *(undefined4 *)(pAVar2 + 0xc);
  *(code **)(*(int *)((int)this + 0x74) + 0x44) = _AfxCommDlgProc;
  if (local_134 != (wchar_t *)0x0) {
    ATL::Checked::tcsncpy_s(pwVar3,0x104,local_134,0xffffffff);
  }
  if (local_130 != (short *)0x0) {
    FID_conflict_operator_((void *)((int)this + 0x8c),local_130);
    pwVar3 = (wchar_t *)func_0x00401b20(0);
    while( true ) {
      pwVar3 = _wcschr(pwVar3,L'|');
      if (pwVar3 == (wchar_t *)0x0) break;
      *pwVar3 = L'\0';
      pwVar3 = pwVar3 + 1;
    }
    *(undefined4 *)(*(int *)((int)this + 0x74) + 0xc) = *(undefined4 *)((int)this + 0x8c);
  }
  if (*(int *)((int)this + 0x78) == 1) {
    HVar4 = CoInitializeEx((LPVOID)0x0,2);
    if (-1 < HVar4) {
      *(undefined4 *)((int)this + 0x31c) = CFileDialog::XFileDialogEvents::vftable;
      *(undefined ***)((int)this + 800) = CFileDialog::XFileDialogControlEvents::vftable;
      if (*(int *)((int)this + 0x88) == 0) {
        rclsid = (IID *)&DAT_005aaa74;
      }
      else {
        rclsid = (IID *)&DAT_005aaa64;
      }
      HVar4 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_0055bacc,&local_12c);
      if (-1 < HVar4) {
        iVar5 = (**(code **)*local_12c)(local_12c,&DAT_0055b8c0,&local_138);
        if (-1 < iVar5) {
          iVar5 = (**(code **)(*local_12c + 0x1c))
                            (local_12c,(undefined4 *)((int)this + 0x31c),(int)this + 0x7c);
          if (-1 < iVar5) {
            *(int **)((int)this + 0x80) = local_12c;
            *(undefined4 *)((int)this + 0x84) = local_138;
            goto LAB_0043a467;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0042de20();
      }
    }
    *(undefined4 *)((int)this + 0x78) = 0;
  }
LAB_0043a467:
  FUN_0052d767();
  return;
}


//==== FUNC 0042cd86  Allocate ====

/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall CAfxStringMgr::Allocate(int,int)
   
   Library: Visual Studio 2008 Release */

CStringData * __thiscall CAfxStringMgr::Allocate(CAfxStringMgr *this,int param_1,int param_2)

{
  CStringData *pCVar1;
  
  if ((-1 < param_1) &&
     (pCVar1 = _malloc((param_1 + 1) * param_2 + 0x10), pCVar1 != (CStringData *)0x0)) {
    *(undefined4 *)(pCVar1 + 4) = 0;
    *(CAfxStringMgr **)pCVar1 = this;
    *(undefined4 *)(pCVar1 + 0xc) = 1;
    *(int *)(pCVar1 + 8) = param_1;
    return pCVar1;
  }
  return (CStringData *)0x0;
}


//==== FUNC 0042cfa8  AllocateHeap ====

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall ATL::CTempBuffer<char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall AllocateHeap(void *this,size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x8007000e);
  }
  *(void **)this = pvVar1;
  return;
}


//==== FUNC 00443ab3  AfxUnlockTempMaps ====

/* Library Function - Single Match
    int __stdcall AfxUnlockTempMaps(int)
   
   Library: Visual Studio 2008 Release */

int AfxUnlockTempMaps(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  CNoTrackObject *pCVar4;
  size_t sVar5;
  void *pvVar6;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x10) != 0) &&
     (iVar2 = *(int *)(pAVar1 + 0x10) + -1, *(int *)(pAVar1 + 0x10) = iVar2, iVar2 == 0)) {
    if (param_1 != 0) {
      if (((param_1 != -1) && (iVar2 = FUN_0043e1e3(), iVar2 != 0)) &&
         (*(code **)(iVar2 + 0x3c) != (code *)0x0)) {
        (**(code **)(iVar2 + 0x3c))(0,0);
      }
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x20));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x1c));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x18));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x14));
      CHandleMap::DeleteTemp(*(CHandleMap **)(pAVar1 + 0x24));
    }
    pAVar3 = AfxGetModuleState();
    iVar2 = *(int *)(pAVar3 + 4);
    pCVar4 = CThreadLocalObject::GetDataNA((CThreadLocalObject *)&DAT_005b23b0);
    if ((((pCVar4 != (CNoTrackObject *)0x0) && (iVar2 != 0)) &&
        ((*(void **)(pCVar4 + 0xc) == (void *)0x0 ||
         (sVar5 = __msize(*(void **)(pCVar4 + 0xc)), sVar5 < *(uint *)(iVar2 + 0x98))))) &&
       (*(int *)(iVar2 + 0x98) != 0)) {
      param_1 = 0;
      if (*(void **)(pCVar4 + 0xc) != (void *)0x0) {
        param_1 = __msize(*(void **)(pCVar4 + 0xc));
        _free(*(void **)(pCVar4 + 0xc));
      }
      pvVar6 = _malloc(*(size_t *)(iVar2 + 0x98));
      *(void **)(pCVar4 + 0xc) = pvVar6;
      if ((pvVar6 == (void *)0x0) && (param_1 != 0)) {
        pvVar6 = _malloc(param_1);
        *(void **)(pCVar4 + 0xc) = pvVar6;
      }
    }
  }
  return (uint)(*(int *)(pAVar1 + 0x10) != 0);
}


//==== FUNC 0053f9cb  __crtGetStringTypeA_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_005ae6a0 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_005b6380 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_005b6380 = 2;
      }
      goto LAB_0053fa26;
    }
    DAT_005b6380 = 1;
  }
  else {
LAB_0053fa26:
    if ((DAT_005b6380 == 2) || (DAT_005b6380 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if ((puVar5 != (ushort *)0xffffffff) &&
         (((puVar5 == param_5 ||
           (_Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,
                                           (uint *)&param_3,(LPSTR)0x0,0), param_2 = (ulong)_Memory,
           _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_0053fb73;
    }
    if (DAT_005b6380 != 1) goto LAB_0053fb73;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_0053fb73;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0053fab6:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_0053fab6;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_0053fb73:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


//==== FUNC 00540931  ___convertcp ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2008 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_005ae6a0 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_00540ad3;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_00540ad3;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      puVar4 = (undefined4 *)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_00540a13:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_00540a13;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = __calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_00540ad3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00544f8d  __crtCompareStringA_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *lpMultiByteStr;
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  undefined4 *puVar5;
  uint uVar6;
  LPWSTR lpWideCharStr;
  char *pcVar7;
  int *in_ECX;
  byte *in_EDX;
  byte *_Memory;
  int unaff_EDI;
  PCNZCH _Memory_00;
  byte *local_28;
  PCNZWCH local_24;
  char *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  lpMultiByteStr = param_4;
  local_8 = DAT_005ae6a0 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_005b6390 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_005b6390 = 2;
      }
    }
    else {
      DAT_005b6390 = 1;
    }
  }
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_005452eb;
  }
  else {
    param_3 = strncnt((char *)param_3,unaff_EDI);
  }
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_005452eb;
  }
  else {
    param_5 = strncnt((char *)param_5,unaff_EDI);
  }
  if ((DAT_005b6390 == 2) || (DAT_005b6390 == 0)) {
    _Memory_00 = (PCNZCH)0x0;
    _Memory = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp((LCID)param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_005452eb;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      _Memory = (byte *)___convertcp((UINT)param_6,(UINT)pcVar7,(char *)in_EDX,&param_3,(LPSTR)0x0,0
                                    );
      if (_Memory == (byte *)0x0) goto LAB_005452eb;
      _Memory_00 = (PCNZCH)___convertcp((UINT)param_6,(UINT)pcVar7,lpMultiByteStr,(uint *)&param_5,
                                        (LPSTR)0x0,0);
      local_28 = _Memory;
      local_20 = _Memory_00;
      if (_Memory_00 == (PCNZCH)0x0) {
        _free(_Memory);
        goto LAB_005452eb;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (_Memory != (byte *)0x0) {
      _free(_Memory);
      _free(_Memory_00);
    }
    goto LAB_005452eb;
  }
  if (DAT_005b6390 != 1) goto LAB_005452eb;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_005452eb;
    if (0 < (int)param_3) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_005452eb;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               (((byte)*lpMultiByteStr < *pBVar4 || (pBVar4[1] < (byte)*lpMultiByteStr))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_005452eb;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_005452eb;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_00545164:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_00545164;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_005452eb;
  iVar1 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_3,local_24,cchWideChar);
  if ((iVar1 != 0) &&
     (uVar6 = MultiByteToWideChar((UINT)param_6,9,lpMultiByteStr,param_5,(LPWSTR)0x0,0), uVar6 != 0)
     ) {
    if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar6 * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_00545225;
        lpWideCharStr = (LPWSTR)&stack0xffffffcc;
      }
      else {
        lpWideCharStr = _malloc(_Size);
        if (lpWideCharStr != (LPWSTR)0x0) {
          lpWideCharStr[0] = L'\xdddd';
          lpWideCharStr[1] = L'\0';
          lpWideCharStr = lpWideCharStr + 4;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar1 = MultiByteToWideChar((UINT)param_6,1,lpMultiByteStr,param_5,lpWideCharStr,uVar6);
      if (iVar1 != 0) {
        CompareStringW((LCID)param_1,param_2,local_24,cchWideChar,lpWideCharStr,uVar6);
      }
      __freea(lpWideCharStr);
    }
  }
LAB_00545225:
  __freea(local_24);
LAB_005452eb:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


//==== FUNC 0053af7f  __crtLCMapStringA_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  undefined4 *puVar6;
  LPCWSTR lpDestStr;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPSTR lpMultiByteStr;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_005ae6a0 ^ (uint)&stack0xfffffffc;
  if (DAT_005b6320 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_005b6320 = 2;
      }
    }
    else {
      DAT_005b6320 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_0053aff0;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_0053aff0:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_005b6320 == 2) || (DAT_005b6320 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_0053b312;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_0053b312;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_0053b2ef;
          pcVar5 = &stack0xffffffe4;
        }
        else {
          pcVar5 = _malloc(local_c + 8);
          if (pcVar5 != (char *)0x0) {
            pcVar5[0] = -0x23;
            pcVar5[1] = -0x23;
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 8;
          }
        }
        if (pcVar5 != (char *)0x0) {
          _memset(pcVar5,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pcVar5,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pcVar5,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pcVar5);
        }
      }
    }
LAB_0053b2ef:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_0053b312;
  }
  if (DAT_005b6320 != 1) goto LAB_0053b312;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_0053b312;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_0053b098:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_0053b098;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_0053b312;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_0053b1a8;
          lpDestStr = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          lpDestStr = _malloc(uVar1);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,lpDestStr,local_c);
        if (iVar3 != 0) {
          lpMultiByteStr = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            lpMultiByteStr = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,lpMultiByteStr,(int)pcVar5,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_0053b1a8:
  __freea(local_10);
LAB_0053b312:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


//==== FUNC 00545730  __strdup ====

/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2008 Release */

char * __cdecl __strdup(char *_Src)

{
  char *_Dst;
  size_t sVar1;
  errno_t eVar2;
  
  if (_Src == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else {
    sVar1 = _strlen(_Src);
    _Dst = _malloc(sVar1 + 1);
    if (_Dst == (char *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}


//==== FUNC 0047054b  FUN_0047054b ====

void FUN_0047054b(size_t param_1)

{
  _malloc(param_1);
  return;
}


//==== FUNC 00530c63  _wcsupr_s_l_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _wcsupr_s_l_stat(wchar_t *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2008 Release */

int __cdecl _wcsupr_s_l_stat(wchar_t *param_1,uint param_2,localeinfo_struct *param_3)

{
  uint _Size;
  wchar_t wVar1;
  uint uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  wchar_t *unaff_EBX;
  int iVar6;
  wchar_t *local_c;
  
  uVar2 = DAT_005ae6a0 ^ (uint)&stack0xfffffffc;
  if (unaff_EBX == (wchar_t *)0x0) {
LAB_00530c7d:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    pwVar4 = (wchar_t *)_wcsnlen(unaff_EBX,(size_t)param_1);
    if (param_1 <= pwVar4) {
      *unaff_EBX = L'\0';
      goto LAB_00530c7d;
    }
    if (*(DWORD *)(*(int *)param_2 + 0x14) == 0) {
      wVar1 = *unaff_EBX;
      while (wVar1 != L'\0') {
        wVar1 = *unaff_EBX;
        if ((0x60 < (ushort)wVar1) && ((ushort)wVar1 < 0x7b)) {
          *unaff_EBX = wVar1 + L'￠';
        }
        unaff_EBX = unaff_EBX + 1;
        wVar1 = *unaff_EBX;
      }
      goto LAB_00530de2;
    }
    pwVar4 = (wchar_t *)
             ___crtLCMapStringW((LPCWSTR)param_2,*(DWORD *)(*(int *)param_2 + 0x14),(LPCWSTR)0x200,
                                (int)unaff_EBX,(LPWSTR)0xffffffff,0);
    if (pwVar4 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_00530d14:
      __errno();
      goto LAB_00530de2;
    }
    if (pwVar4 <= param_1) {
      if (((int)pwVar4 < 1) || (0xffffffe0U / (uint)pwVar4 < 2)) {
        local_c = (wchar_t *)0x0;
      }
      else {
        _Size = (int)pwVar4 * 2 + 8;
        if (_Size < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffe8;
          local_c = (wchar_t *)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_00530d75:
            local_c = (wchar_t *)(puVar5 + 2);
          }
        }
        else {
          puVar5 = _malloc(_Size);
          local_c = (wchar_t *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_00530d75;
          }
        }
      }
      if (local_c != (wchar_t *)0x0) {
        iVar6 = ___crtLCMapStringW((LPCWSTR)param_2,*(DWORD *)(*(int *)param_2 + 0x14),
                                   (LPCWSTR)0x200,(int)unaff_EBX,(LPWSTR)0xffffffff,(int)local_c);
        if (iVar6 == 0) {
          piVar3 = __errno();
          *piVar3 = 0x2a;
        }
        else {
          _wcscpy_s(unaff_EBX,(rsize_t)param_1,local_c);
        }
        __freea(local_c);
        goto LAB_00530de2;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_00530d14;
    }
    *unaff_EBX = L'\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_00530de2:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}


//==== FUNC 00530e3f  _wcslwr_s_l_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _wcslwr_s_l_stat(wchar_t *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2008 Release */

int __cdecl _wcslwr_s_l_stat(wchar_t *param_1,uint param_2,localeinfo_struct *param_3)

{
  uint _Size;
  wchar_t wVar1;
  uint uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  wchar_t *unaff_EBX;
  int iVar6;
  wchar_t *local_c;
  
  uVar2 = DAT_005ae6a0 ^ (uint)&stack0xfffffffc;
  if (unaff_EBX == (wchar_t *)0x0) {
LAB_00530e59:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    pwVar4 = (wchar_t *)_wcsnlen(unaff_EBX,(size_t)param_1);
    if (param_1 <= pwVar4) {
      *unaff_EBX = L'\0';
      goto LAB_00530e59;
    }
    if (*(DWORD *)(*(int *)param_2 + 0x14) == 0) {
      wVar1 = *unaff_EBX;
      while (wVar1 != L'\0') {
        wVar1 = *unaff_EBX;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          *unaff_EBX = wVar1 + L' ';
        }
        unaff_EBX = unaff_EBX + 1;
        wVar1 = *unaff_EBX;
      }
      goto LAB_00530fbe;
    }
    pwVar4 = (wchar_t *)
             ___crtLCMapStringW((LPCWSTR)param_2,*(DWORD *)(*(int *)param_2 + 0x14),(LPCWSTR)0x100,
                                (int)unaff_EBX,(LPWSTR)0xffffffff,0);
    if (pwVar4 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_00530ef0:
      __errno();
      goto LAB_00530fbe;
    }
    if (pwVar4 <= param_1) {
      if (((int)pwVar4 < 1) || (0xffffffe0U / (uint)pwVar4 < 2)) {
        local_c = (wchar_t *)0x0;
      }
      else {
        _Size = (int)pwVar4 * 2 + 8;
        if (_Size < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffe8;
          local_c = (wchar_t *)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_00530f51:
            local_c = (wchar_t *)(puVar5 + 2);
          }
        }
        else {
          puVar5 = _malloc(_Size);
          local_c = (wchar_t *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_00530f51;
          }
        }
      }
      if (local_c != (wchar_t *)0x0) {
        iVar6 = ___crtLCMapStringW((LPCWSTR)param_2,*(DWORD *)(*(int *)param_2 + 0x14),
                                   (LPCWSTR)0x100,(int)unaff_EBX,(LPWSTR)0xffffffff,(int)local_c);
        if (iVar6 == 0) {
          piVar3 = __errno();
          *piVar3 = 0x2a;
        }
        else {
          _wcscpy_s(unaff_EBX,(rsize_t)param_1,local_c);
        }
        __freea(local_c);
        goto LAB_00530fbe;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_00530ef0;
    }
    *unaff_EBX = L'\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_00530fbe:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}


//==== FUNC 00504964  FUN_00504964 ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_00504964(void *this,LPCWSTR param_1,LPCWSTR param_2)

{
  size_t _Size;
  HMODULE hModule;
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  char *_Str;
  size_t sVar3;
  undefined4 *puVar4;
  wchar_t *_Memory;
  undefined **ppuVar5;
  
  uVar1 = DAT_005ae6a0 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (LPCWSTR)0x0) || (param_2 == (LPCWSTR)0x0)) goto LAB_00504a3d;
  pAVar2 = AfxGetModuleState();
  hModule = *(HMODULE *)(pAVar2 + 0xc);
  hResInfo = FindResourceW(hModule,param_1,param_2);
  if ((hResInfo == (HRSRC)0x0) ||
     (hResData = LoadResource(hModule,hResInfo), hResData == (HGLOBAL)0x0)) goto LAB_00504a3d;
  _Str = LockResource(hResData);
  if (_Str == (char *)0x0) goto LAB_005049c7;
  sVar3 = _strlen(_Str);
  _Size = sVar3 + 9 + sVar3 + 1;
  if ((int)_Size < 0x401) {
    puVar4 = (undefined4 *)&stack0xffffffe0;
    _Memory = (wchar_t *)&stack0xffffffe0;
    if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_00504a05:
      _Memory = (wchar_t *)(puVar4 + 2);
    }
  }
  else {
    puVar4 = _malloc(_Size);
    _Memory = (wchar_t *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xdddd;
      goto LAB_00504a05;
    }
  }
  if (_Memory == (wchar_t *)0x0) {
LAB_005049c7:
                    /* WARNING: Subroutine does not return */
    FUN_0042de20();
  }
  ppuVar5 = (undefined **)AfxA2WHelper(_Memory,_Str,sVar3 + 1);
  if (ppuVar5 != (undefined **)0x0) {
    FUN_00504946(this,ppuVar5);
  }
  FreeResource(hResData);
  __freea(_Memory);
LAB_00504a3d:
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00508d60  BuildPropPageArray ====

/* Library Function - Single Match
    public: virtual void __thiscall CPropertySheet::BuildPropPageArray(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CPropertySheet::BuildPropPageArray(CPropertySheet *this)

{
  uint uVar1;
  LPCSTR pCVar2;
  CPropertyPage *pCVar3;
  _PROPSHEETPAGEA *p_Var4;
  size_t _Size;
  _PROPSHEETPAGEA *p_Var5;
  int iVar6;
  _PROPSHEETPAGEA *p_Var7;
  int local_8;
  
  _free(*(void **)(this + 0x74));
  iVar6 = 0;
  _Size = 0;
  *(undefined4 *)(this + 0x74) = 0;
  if (0 < *(int *)(this + 0x90)) {
    do {
      pCVar3 = GetPage(this,iVar6);
      _Size = _Size + **(int **)(pCVar3 + 0x74);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this + 0x90));
  }
  p_Var4 = _malloc(_Size);
  if (p_Var4 == (_PROPSHEETPAGEA *)0x0) {
LAB_00508dab:
                    /* WARNING: Subroutine does not return */
    FUN_0042dde8();
  }
  p_Var5 = (_PROPSHEETPAGEA *)((int)&p_Var4->dwSize + _Size);
  if (p_Var5 < p_Var4) {
                    /* WARNING: Subroutine does not return */
    FUN_0042de20();
  }
  uVar1 = *(uint *)(this + 0x58);
  local_8 = 0;
  *(_PROPSHEETPAGEA **)(this + 0x74) = p_Var4;
  p_Var7 = p_Var4;
  if (0 < *(int *)(this + 0x90)) {
    do {
      pCVar3 = GetPage(this,local_8);
      if ((p_Var7 < p_Var4) || (p_Var5 < p_Var7)) goto LAB_00508dab;
      FUN_0042d596(p_Var7,(int)p_Var5 - (int)p_Var7,*(rsize_t **)(pCVar3 + 0x74),
                   **(rsize_t **)(pCVar3 + 0x74));
      pCVar2 = *(LPCSTR *)(pCVar3 + 0x80);
      if (*(int *)(pCVar2 + -0xc) != 0) {
        p_Var7->dwFlags = p_Var7->dwFlags | 0x1000;
        p_Var7->pszHeaderTitle = pCVar2;
      }
      pCVar2 = *(LPCSTR *)(pCVar3 + 0x84);
      if (*(int *)(pCVar2 + -0xc) != 0) {
        p_Var7->dwFlags = p_Var7->dwFlags | 0x2000;
        p_Var7->pszHeaderSubTitle = pCVar2;
      }
      CPropertyPage::PreProcessPageTemplate(pCVar3,p_Var7,uVar1 & 0x1000020);
      p_Var7 = (_PROPSHEETPAGEA *)((int)&p_Var7->dwSize + p_Var7->dwSize);
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(this + 0x90));
  }
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 0x90);
  return;
}


//==== FUNC 0053fff3  exception ====

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = vftable;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}


//==== FUNC 00540052  FUN_00540052 ====

void FUN_00540052(void)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = std::exception::vftable;
  iVar1 = *(int *)(unaff_EBX + 8);
  unaff_ESI[2] = iVar1;
  pcVar3 = *(char **)(unaff_EBX + 4);
  if (iVar1 == 0) {
    unaff_ESI[1] = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    unaff_ESI[1] = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    unaff_ESI[1] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(unaff_EBX + 4));
    }
  }
  return;
}


//==== FUNC 00532e5c  terminate ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


//==== FUNC 0040b950  FUN_0040b950 ====

undefined4 __fastcall FUN_0040b950(CDialog *param_1)

{
  CDialog::OnInitDialog(param_1);
  FUN_0040a730();
  FUN_0040e700();
  return 1;
}


//==== FUNC 0041d240  FUN_0041d240 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041d240(CDialog *param_1)

{
  LPCWSTR pWVar1;
  bool bVar2;
  LPCWSTR lpString;
  HMENU pHVar3;
  CMenu *pCVar4;
  int *piVar5;
  int iVar6;
  HMODULE pHVar7;
  HANDLE pvVar8;
  AFX_MODULE_STATE *pAVar9;
  HICON pHVar10;
  undefined3 extraout_var;
  uint uVar11;
  BOOL BVar12;
  int extraout_ECX;
  int extraout_ECX_00;
  LPCWSTR lpNewItem;
  LPCWSTR pWStack_424;
  wchar_t local_420 [260];
  wchar_t awStack_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005551fb;
  local_c = ExceptionList;
  local_10 = DAT_005ae6a0 ^ (uint)&pWStack_424;
  lpString = (LPCWSTR)(DAT_005ae6a0 ^ (uint)&stack0xfffffbcc);
  ExceptionList = &local_c;
  CDialog::OnInitDialog(param_1);
  pHVar3 = GetSystemMenu(*(HWND *)(param_1 + 0x20),0);
  pCVar4 = CMenu::FromHandle(pHVar3);
  if (pCVar4 != (CMenu *)0x0) {
    piVar5 = (int *)FUN_0042cd80();
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401b80((undefined4 *)0x80004005);
    }
    iVar6 = (**(code **)(*piVar5 + 0xc))();
    uStack_4 = 0;
    pWStack_424 = (LPCWSTR)(iVar6 + 0x10);
    pHVar7 = (HMODULE)FUN_00437cc7();
    lpNewItem = (LPCWSTR)(iVar6 + 0x10);
    if (pHVar7 != (HMODULE)0x0) {
      FUN_00402350(&pWStack_424,pHVar7,0x65);
      lpNewItem = pWStack_424;
    }
    if (*(int *)(lpNewItem + -6) != 0) {
      AppendMenuW(*(HMENU *)(pCVar4 + 4),0x800,0,(LPCWSTR)0x0);
      AppendMenuW(*(HMENU *)(pCVar4 + 4),0,0x10,lpNewItem);
    }
    uStack_4 = 0xffffffff;
    pWVar1 = lpNewItem + -2;
    LOCK();
    iVar6 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar6 == 1 || iVar6 + -1 < 0) {
      (**(code **)(**(int **)(lpNewItem + -8) + 4))();
    }
  }
  __snwprintf_s(local_420,0x104,0x103,L"%s%s",&DAT_005b8e50);
  pvVar8 = LoadImageW((HINSTANCE)0x0,local_420,1,0,0,0x50);
  *(HANDLE *)(param_1 + 0x2490) = pvVar8;
  if (pvVar8 == (HANDLE)0x0) {
    GetLastError();
    (*DAT_005b9074)(L"Load Icon err=%x");
    AfxGetModuleState();
    pAVar9 = AfxGetModuleState();
    pHVar10 = LoadIconW(*(HINSTANCE *)(pAVar9 + 0xc),(LPCWSTR)0x80);
    *(HICON *)(param_1 + 0x2490) = pHVar10;
  }
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,1,*(LPARAM *)(param_1 + 0x2490));
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,0,*(LPARAM *)(param_1 + 0x2490));
  _DAT_005b0554 = FUN_0041c7a0;
  _DAT_005b054c = 0x10;
  _DAT_005b053c = FUN_0041c7a0;
  _DAT_005b0534 = 0x10;
  FUN_0041e040();
  FID_conflict_SetWindowTextW((HWND)&DAT_005b7ae6,lpString);
  FUN_0041ecf0(*(HANDLE *)(param_1 + 0x20));
  SetTimer(*(HWND *)(param_1 + 0x20),0x240,0x514,(TIMERPROC)0x0);
  FUN_0042c680();
  iVar6 = FUN_0042c450((int)(param_1 + 0x2188));
  if (iVar6 == 0) {
    if (DAT_005b7c24 != 0) {
      iVar6 = extraout_ECX;
      if (1 < *(int *)(DAT_005b9354 + -2)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&DAT_005b9354,*(int *)(DAT_005b9354 + -6));
        iVar6 = extraout_ECX_00;
      }
      pWStack_424 = (LPCWSTR)&stack0xfffffbc4;
      FUN_00402490(&stack0xfffffbc4,DAT_005b9354);
      bVar2 = FUN_00416d50((CWnd *)param_1,iVar6);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        __snwprintf_s(awStack_218,0x104,0x103,L"%supdate.exe");
        ShellExecuteW((HWND)0x0,L"open",awStack_218,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
      }
      PostMessageW(*(HWND *)(param_1 + 0x20),0x10,0,0);
      goto LAB_0041d5cb;
    }
    if (DAT_005b7a24 == 0) {
      if (1 < *(int *)((int)DAT_005b9480 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&DAT_005b9480,*(int *)((int)DAT_005b9480 + -0xc));
      }
      FUN_00416a80(DAT_005b9480,(CWnd *)param_1);
      PostMessageW(*(HWND *)(param_1 + 0x20),0x10,0,0);
      goto LAB_0041d5cb;
    }
  }
  uVar11 = FUN_0042c3d0();
  if (1 < uVar11) {
    FUN_004169e0((CWnd *)param_1,&DAT_005b9470);
  }
  FUN_0041d160();
  FUN_00401040(param_1 + 0x2188);
  FUN_0040e700();
  if ((DAT_005b7bb8 == 1) || (DAT_005b7bb8 == 3)) {
    FUN_0041f0e0();
  }
  if (*(int *)(param_1 + 0x2178) != 0) {
    BVar12 = IsWindowVisible(*(HWND *)(param_1 + 0x20));
    if (BVar12 == 0) {
      FUN_0041d660((int)param_1);
      *(undefined4 *)(param_1 + 0x2178) = 1;
      CWnd::ShowWindow((CWnd *)param_1,5);
    }
    else {
      SetForegroundWindow(*(HWND *)(param_1 + 0x20));
    }
  }
LAB_0041d5cb:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&pWStack_424);
  return;
}


//==== FUNC 0041c230  FUN_0041c230 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0041c230(CWinApp *param_1)

{
  uint uVar1;
  int iVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  HWND hWnd;
  BOOL BVar5;
  wchar_t *lpName;
  undefined1 auStack_3114 [4];
  _SYSTEMTIME local_3110;
  undefined4 local_30f8;
  undefined4 local_30f4;
  undefined4 local_30f0;
  undefined4 local_30ec;
  wchar_t awStack_c5c [2];
  wchar_t awStack_c58 [258];
  wchar_t awStack_a54 [260];
  WCHAR aWStack_84c [260];
  wchar_t awStack_644 [260];
  wchar_t awStack_43c [260];
  wchar_t awStack_234 [264];
  uint uStack_24;
  void *local_1c;
  CWinApp *pCStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005559ed;
  local_14 = ExceptionList;
  local_1c = (void *)(DAT_005ae6a0 ^ (uint)auStack_3114);
  uVar1 = DAT_005ae6a0 ^ (uint)&stack0xffffcee0;
  ExceptionList = &local_14;
  local_3110.wYear = 8;
  local_3110.wMonth = 0;
  local_3110.wDayOfWeek = 0xff;
  local_3110.wDay = 0;
  pCStack_18 = param_1;
  InitCommonControlsEx((INITCOMMONCONTROLSEX *)&local_3110);
  CWinApp::InitInstance(param_1);
  AfxEnableControlContainer((COccManager *)0x0);
  CWinApp::SetRegistryKey(param_1,L"Local AppWizard-Generated Applications");
  local_30f8 = 1;
  local_30f4 = 0;
  local_30f0 = 0;
  local_30ec = 0;
  GdiplusStartup(param_1 + 0xe8,&local_30f8,0,uVar1);
  GetModuleFileNameW((HMODULE)0x0,aWStack_84c,0x104);
  __wsplitpath_s(aWStack_84c,awStack_c5c,0x104,awStack_a54,0x104,awStack_234,0x104,awStack_43c,0x104
                );
  __wmakepath_s((wchar_t *)&DAT_005b8e50,0x104,awStack_c5c,awStack_a54,(wchar_t *)0x0,(wchar_t *)0x0
               );
  __wmakepath(awStack_644,awStack_c5c,awStack_a54,L"text",L"xml");
  FUN_00418f10(awStack_644);
  iVar2 = FUN_004285f0();
  if (iVar2 == 0) {
    MessageBoxW((HWND)0x0,L"     Data Init failed.     ",L"Error",0);
  }
  else {
    GetLocalTime(&local_3110);
    (*DAT_005b9074)(L"--------------------------------------------------");
    if (1 < *(int *)(DAT_005b9334 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&DAT_005b9334,*(int *)(DAT_005b9334 + -0xc));
    }
    (*DAT_005b9074)(L"Launch %04d-%d-%d:%dH, App Ver=%s",local_3110._0_4_ & 0xffff,
                    (uint)local_3110._0_4_ >> 0x10,(uint)local_3110._4_4_ >> 0x10,local_3110.wHour,
                    DAT_005b9334);
    if (DAT_005b7ae6 == 0) {
      if (1 < *(int *)(DAT_005b9318 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&DAT_005b9318,*(int *)(DAT_005b9318 + -0xc));
      }
      __snwprintf_s(&DAT_005b7ae6,100,99,L"%s",DAT_005b9318);
    }
    FUN_004149e0();
    iVar2 = FUN_0041c0a0();
    if (iVar2 != 0) {
      FUN_00426b30();
      iVar2 = FUN_00426be0();
      if (4 < iVar2) {
        FUN_00426b00();
      }
      FUN_004287a0();
      if (*(int *)(DAT_005b931c + -6) == 0) {
        lpName = L"MUTEX_BY_901";
      }
      else {
        lpName = DAT_005b931c;
        if (1 < *(int *)(DAT_005b931c + -2)) {
          ATL::CSimpleStringT<wchar_t,0>::Fork
                    ((CSimpleStringT<wchar_t,0> *)&DAT_005b931c,*(int *)(DAT_005b931c + -6));
          lpName = DAT_005b931c;
        }
      }
      pvVar3 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,lpName);
      *(HANDLE *)(param_1 + 0xec) = pvVar3;
      if ((pvVar3 == (HANDLE)0x0) || (DVar4 = GetLastError(), DVar4 != 0xb7)) {
        __snwprintf_s(awStack_c58,0x104,0x103,L"%sKBGetKey.dll",&DAT_005b8e50);
        BVar5 = PathFileExistsW(awStack_c58);
        if (BVar5 != 0) {
          FUN_0041c150();
        }
        FUN_0041c7c0();
        local_14 = (void *)0x0;
        *(CDialog **)(param_1 + 0x20) = (CDialog *)&local_30f0;
        FUN_0042e689((CDialog *)&local_30f0);
        local_14 = (void *)0xffffffff;
        FUN_0041c580((CDialog *)&local_30f0);
      }
      else {
        hWnd = FindWindowW((LPCWSTR)0x0,&DAT_005b7ae6);
        (*DAT_005b9074)(L"hWnd=0x%x",hWnd);
        if (hWnd != (HWND)0x0) {
          PostMessageW(hWnd,0x46c,0,0x203);
        }
      }
    }
  }
  ExceptionList = local_1c;
  __security_check_cookie(uStack_24 ^ (uint)&stack0xffffcee4);
  return;
}


//==== FUNC 0053f7a6  __wsopen_helper ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wsopen_helper
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl
__wsopen_helper(wchar_t *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  int *piVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_005a3730;
  uStack_c = 0x53f7b2;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (wchar_t *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = __tsopen_nolock(local_20,_Filename,_OFlag,_ShFlag,(byte)_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_0053f844();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


//==== FUNC 0052c595  __fread_nolock_s ====

/* Library Function - Single Match
    __fread_nolock_s
   
   Library: Visual Studio 2008 Release */

size_t __cdecl
__fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *_DstBuf_00;
  uint local_10;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_DstBuf != (void *)0x0) {
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize))) {
LAB_0052c610:
        uVar8 = _ElementSize * _Count;
        uVar7 = uVar8;
        puVar2 = _DstBuf;
        uVar1 = _DstSize;
        if ((_File->_flag & 0x10cU) == 0) {
          local_10 = 0x1000;
        }
        else {
          local_10 = _File->_bufsiz;
        }
joined_r0x0052c636:
        do {
          while( true ) {
            if (uVar7 == 0) {
              return _Count;
            }
            if ((_File->_flag & 0x10cU) == 0) break;
            uVar4 = _File->_cnt;
            if (uVar4 == 0) break;
            if ((int)uVar4 < 0) {
LAB_0052c787:
              _File->_flag = _File->_flag | 0x20;
LAB_0052c78b:
              return (uVar8 - uVar7) / _ElementSize;
            }
            uVar6 = uVar7;
            if (uVar4 <= uVar7) {
              uVar6 = uVar4;
            }
            if (uVar1 < uVar6) {
              if (_DstSize != 0xffffffff) {
                _memset(_DstBuf,0,_DstSize);
              }
              piVar3 = __errno();
              *piVar3 = 0x22;
              goto LAB_0052c5cc;
            }
            _memcpy_s(puVar2,uVar1,_File->_ptr,uVar6);
            _File->_cnt = _File->_cnt - uVar6;
            _File->_ptr = _File->_ptr + uVar6;
            uVar7 = uVar7 - uVar6;
            uVar1 = uVar1 - uVar6;
            puVar2 = puVar2 + uVar6;
          }
          if (local_10 <= uVar7) {
            if (local_10 == 0) {
              uVar4 = 0x7fffffff;
              if (uVar7 < 0x80000000) {
                uVar4 = uVar7;
              }
            }
            else {
              if (uVar7 < 0x80000000) {
                uVar6 = uVar7 % local_10;
                uVar4 = uVar7;
              }
              else {
                uVar6 = (uint)(0x7fffffff % (ulonglong)local_10);
                uVar4 = 0x7fffffff;
              }
              uVar4 = uVar4 - uVar6;
            }
            if (uVar1 < uVar4) {
LAB_0052c75a:
              if (_DstSize != 0xffffffff) {
                _memset(_DstBuf,0,_DstSize);
              }
              piVar3 = __errno();
              *piVar3 = 0x22;
              goto LAB_0052c5cc;
            }
            _DstBuf_00 = puVar2;
            iVar5 = __fileno(_File);
            iVar5 = __read(iVar5,_DstBuf_00,uVar4);
            if (iVar5 == 0) {
              _File->_flag = _File->_flag | 0x10;
              goto LAB_0052c78b;
            }
            if (iVar5 == -1) goto LAB_0052c787;
            uVar7 = uVar7 - iVar5;
            uVar1 = uVar1 - iVar5;
            puVar2 = puVar2 + iVar5;
            goto joined_r0x0052c636;
          }
          iVar5 = __filbuf(_File);
          if (iVar5 == -1) goto LAB_0052c78b;
          if (uVar1 == 0) goto LAB_0052c75a;
          *puVar2 = (char)iVar5;
          local_10 = _File->_bufsiz;
          uVar7 = uVar7 - 1;
          uVar1 = uVar1 - 1;
          puVar2 = puVar2 + 1;
        } while( true );
      }
      if (_DstSize != 0xffffffff) {
        _memset(_DstBuf,0,_DstSize);
      }
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize)))
      goto LAB_0052c610;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
LAB_0052c5cc:
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}


//==== FUNC 00537421  __filbuf ====

/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __filbuf(FILE *_File)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char *_DstBuf;
  
  if (_File == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    uVar4 = _File->_flag;
    if (((uVar4 & 0x83) != 0) && ((uVar4 & 0x40) == 0)) {
      if ((uVar4 & 2) == 0) {
        _File->_flag = uVar4 | 1;
        if ((uVar4 & 0x10c) == 0) {
          __getbuf(_File);
        }
        else {
          _File->_ptr = _File->_base;
        }
        uVar4 = _File->_bufsiz;
        _DstBuf = _File->_base;
        iVar3 = __fileno(_File);
        iVar3 = __read(iVar3,_DstBuf,uVar4);
        _File->_cnt = iVar3;
        if ((iVar3 != 0) && (iVar3 != -1)) {
          if ((_File->_flag & 0x82) == 0) {
            iVar3 = __fileno(_File);
            if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
              puVar5 = &DAT_005ae938;
            }
            else {
              iVar3 = __fileno(_File);
              uVar4 = __fileno(_File);
              puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_005ba740)[iVar3 >> 5]);
            }
            if ((puVar5[4] & 0x82) == 0x82) {
              _File->_flag = _File->_flag | 0x2000;
            }
          }
          if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
             ((_File->_flag & 0x400U) == 0)) {
            _File->_bufsiz = 0x1000;
          }
          _File->_cnt = _File->_cnt + -1;
          bVar1 = *_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
          return (uint)bVar1;
        }
        _File->_flag = _File->_flag | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
        _File->_cnt = 0;
      }
      else {
        _File->_flag = uVar4 | 0x20;
      }
    }
  }
  return -1;
}


//==== FUNC 0054233e  __filwbuf ====

/* Library Function - Single Match
    __filwbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __filwbuf(FILE *_File)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char *_DstBuf;
  
  if (_File == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    uVar4 = _File->_flag;
    if (((uVar4 & 0x83) != 0) && ((uVar4 & 0x40) == 0)) {
      if ((uVar4 & 2) == 0) {
        _File->_flag = uVar4 | 1;
        if ((uVar4 & 0x10c) == 0) {
          __getbuf(_File);
        }
        else {
          _File->_ptr = _File->_base;
        }
        uVar4 = _File->_bufsiz;
        _DstBuf = _File->_base;
        iVar3 = __fileno(_File);
        iVar3 = __read(iVar3,_DstBuf,uVar4);
        _File->_cnt = iVar3;
        if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != -1)) {
          if ((_File->_flag & 0x82) == 0) {
            iVar3 = __fileno(_File);
            if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
              puVar5 = &DAT_005ae938;
            }
            else {
              iVar3 = __fileno(_File);
              uVar4 = __fileno(_File);
              puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_005ba740)[iVar3 >> 5]);
            }
            if ((puVar5[4] & 0x82) == 0x82) {
              _File->_flag = _File->_flag | 0x2000;
            }
          }
          if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
             ((_File->_flag & 0x400U) == 0)) {
            _File->_bufsiz = 0x1000;
          }
          _File->_cnt = _File->_cnt + -2;
          uVar1 = *(ushort *)_File->_ptr;
          _File->_ptr = (char *)((int)_File->_ptr + 2);
          return (uint)uVar1;
        }
        _File->_flag = _File->_flag | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
        _File->_cnt = 0;
      }
      else {
        _File->_flag = uVar4 | 0x20;
      }
    }
  }
  return 0xffff;
}


//==== FUNC 0041d600  FUN_0041d600 ====

void __fastcall FUN_0041d600(CWnd *param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindowVisible(*(HWND *)(param_1 + 0x20));
  if (BVar1 != 0) {
    SetForegroundWindow(*(HWND *)(param_1 + 0x20));
    return;
  }
  FUN_0041d660((int)param_1);
  *(undefined4 *)(param_1 + 0x2178) = 1;
  CWnd::ShowWindow(param_1,5);
  return;
}


//==== FUNC 0041f1a0  FUN_0041f1a0 ====

undefined4 __thiscall FUN_0041f1a0(void *this,undefined4 param_1,int param_2)

{
  BOOL BVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  HMENU hMenu;
  HWND pHStack_14;
  tagPOINT tStack_10;
  
  (*DAT_005b9074)(L"ProcessIconMsg: wParam=0x%x, lParam=0x%x",param_1,param_2);
  if (param_2 != 0x203) {
    if (param_2 == 0x205) {
      if (this == (void *)0x0) {
        pHStack_14 = (HWND)0x0;
      }
      else {
        pHStack_14 = *(HWND *)((int)this + 0x20);
      }
      pHVar2 = GetLastActivePopup(*(HWND *)((int)this + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      SetForegroundWindow(*(HWND *)(pCVar3 + 0x20));
      hMenu = CreatePopupMenu();
      AppendMenuW(hMenu,0,0x6000,DAT_005b932c);
      AppendMenuW(hMenu,0x800,0,(LPCWSTR)0x0);
      AppendMenuW(hMenu,0,0x6001,DAT_005b9330);
      GetCursorPos(&tStack_10);
      TrackPopupMenu(hMenu,2,tStack_10.x,tStack_10.y,0,pHStack_14,(RECT *)0x0);
      PostMessageW(*(HWND *)((int)this + 0x20),0,0,0);
      DestroyMenu(hMenu);
    }
    return 1;
  }
  BVar1 = IsWindowVisible(*(HWND *)((int)this + 0x20));
  if (BVar1 != 0) {
    SetForegroundWindow(*(HWND *)((int)this + 0x20));
    return 1;
  }
  FUN_0041d660((int)this);
  *(undefined4 *)((int)this + 0x2178) = 1;
  CWnd::ShowWindow(this,5);
  return 1;
}


//==== FUNC 00406d90  FUN_00406d90 ====

int __thiscall FUN_00406d90(void *this,uint param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00554f20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  piVar2 = (int *)FUN_0042cd80();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00401b80((undefined4 *)0x80004005);
  }
  iStack_24 = (**(code **)(*piVar2 + 0xc))();
  iStack_24 = iStack_24 + 0x10;
  iStack_c = 0;
  iVar3 = 0;
  if (this != (void *)0xffffff80) {
    iVar3 = *(int *)((int)this + 0xa0);
  }
  if (param_2 != iVar3) {
    iVar3 = 0;
    if (this != (void *)0xfffff88c) {
      iVar3 = *(int *)((int)this + 0x794);
    }
    if (param_2 != iVar3) {
      iVar3 = 0;
      if (this != (void *)0xfffff728) {
        iVar3 = *(int *)((int)this + 0x8f8);
      }
      if (param_2 == iVar3) {
        if (DAT_005b6620 != (code *)0x0) {
          (*DAT_005b6620)();
        }
        iVar3 = *(int *)((int)this + 0xed4);
        if (iVar3 == 1) {
          if (*(int *)((int)this + 0xedc) == 0) {
LAB_00406e5a:
            FUN_004169e0(this,&DAT_005b9450);
            FUN_00410aa0(&iStack_24);
            ExceptionList = local_14;
            return 1;
          }
          *(undefined4 *)((int)this + 0xefc) = 0;
          *(undefined4 *)((int)this + 0xf00) = 0;
          *(undefined4 *)((int)this + 0xf04) = 0;
          *(undefined4 *)((int)this + 0xf08) = 0;
          *(undefined4 *)((int)this + 0xf0c) = 0;
          *(undefined4 *)((int)this + 0xf10) = 0;
          *(undefined4 *)((int)this + 0xf14) = 0;
          *(undefined4 *)((int)this + 0xf18) = 0;
          *(undefined1 *)((int)this + 0xf15) = *(undefined1 *)((int)this + 0xedd);
          *(undefined1 *)((int)this + 0xf14) = *(undefined1 *)((int)this + 0xedc);
          *(undefined1 *)((int)this + 0xf16) = *(undefined1 *)((int)this + 0xede);
          pcVar1 = *(code **)(*(int *)this + 0x158);
          *(undefined4 *)((int)this + 0xef8) = 0x2000000;
          (*pcVar1)();
        }
        else if (iVar3 == 2) {
          iVar3 = FUN_00407840((int)this + 0xd70);
          piVar2 = FUN_0042bc30(extraout_ECX,iVar3);
          if ((piVar2 == (int *)0x0) || (piVar2[6] != 1)) goto LAB_00406e5a;
          *(undefined4 *)((int)this + 0xefc) = 0;
          *(undefined4 *)((int)this + 0xf00) = 0;
          *(undefined4 *)((int)this + 0xf04) = 0;
          *(undefined4 *)((int)this + 0xf08) = 0;
          *(undefined4 *)((int)this + 0xf0c) = 0;
          *(undefined4 *)((int)this + 0xf10) = 0;
          *(undefined4 *)((int)this + 0xf14) = 0;
          *(undefined4 *)((int)this + 0xf18) = 0;
          *(undefined4 *)((int)this + 0xef8) = 0x5000000;
          pcVar1 = *(code **)(*(int *)this + 0x158);
          *(uint *)((int)this + 0xf10) = piVar2[4] & 0xffffff;
          (*pcVar1)();
        }
        else {
          if (iVar3 == 3) {
            if (*(int *)((int)this + 0xc2c) == 0) goto LAB_00406e5a;
            *(undefined4 *)((int)this + 0xefc) = 0;
            *(undefined4 *)((int)this + 0xf00) = 0;
            *(undefined4 *)((int)this + 0xf04) = 0;
            *(undefined4 *)((int)this + 0xf08) = 0;
            *(undefined4 *)((int)this + 0xf0c) = 0;
            *(undefined4 *)((int)this + 0xf10) = 0;
            *(undefined4 *)((int)this + 0xf14) = 0;
            *(undefined4 *)((int)this + 0xf18) = 0;
            *(int *)((int)this + 0xef8) = *(int *)((int)this + 0xc2c);
          }
          (**(code **)(*(int *)this + 0x158))();
        }
      }
      else {
        iVar3 = 0;
        if (this != (void *)0xfffffcb8) {
          iVar3 = *(int *)((int)this + 0x368);
        }
        if (param_2 == iVar3) {
          FUN_00406bd0(1);
        }
        else {
          iVar3 = 0;
          if (this != (void *)0xfffffb54) {
            iVar3 = *(int *)((int)this + 0x4cc);
          }
          if (param_2 == iVar3) {
            iVar3 = FUN_004078b0();
            if (iVar3 == 0) {
              FUN_00405bc0((int)this);
            }
            FUN_00406bd0(2);
          }
          else {
            iVar3 = 0;
            if (this != (void *)0xfffff9f0) {
              iVar3 = *(int *)((int)this + 0x630);
            }
            if (param_2 == iVar3) {
              FUN_00406bd0(3);
            }
            else {
              if (this == (void *)0xfffff460) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)((int)this + 0xbc0);
              }
              if (param_2 == iVar3) {
                *(uint *)((int)this + 0xef8) = *(uint *)((int)this + 0xc2c);
                puVar4 = (undefined4 *)FUN_00424530((uint *)((int)this + 0xef8));
                iStack_c._0_1_ = 1;
                FID_conflict_operator_(&iStack_24,puVar4);
                iStack_c = (uint)iStack_c._1_3_ << 8;
                FUN_00410aa0(&iStack_20);
                uVar8 = 0;
                uVar7 = 0;
                puStack_1c = &stack0xffffffc0;
                iVar3 = extraout_ECX_00;
                FUN_00407a50(&stack0xffffffc0,&iStack_24);
                FUN_00421650(iVar3,uVar7,uVar8);
              }
              else {
                iVar3 = 0;
                if (this != (void *)0xfffffe1c) {
                  iVar3 = *(int *)((int)this + 0x204);
                }
                if ((param_2 == iVar3) && (iVar3 = FUN_00416b40(this,&DAT_005b947c), iVar3 == 1)) {
                  pcVar1 = *(code **)(*(int *)this + 0x158);
                  puVar4 = &DAT_005b6828 + *(int *)((int)this + 0xed8) * 9;
                  puVar6 = (undefined4 *)((int)this + 0xef8);
                  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar6 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar6 = puVar6 + 1;
                  }
                  (*pcVar1)();
                }
              }
            }
          }
        }
      }
      goto LAB_004070c2;
    }
  }
  if (DAT_005b6620 != (code *)0x0) {
    (*DAT_005b6620)();
  }
  (**(code **)(*(int *)this + 0x15c))();
LAB_004070c2:
  iVar5 = CWnd::OnCommand(this,param_1,param_2);
  iStack_c = 0xffffffff;
  piVar2 = (int *)(iStack_24 + -4);
  LOCK();
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(iStack_24 + -0x10) + 4))();
  }
  ExceptionList = local_14;
  return iVar5;
}


