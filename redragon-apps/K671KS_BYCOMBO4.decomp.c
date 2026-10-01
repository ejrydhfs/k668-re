// TRANSPORT FUNCTIONS:
//   005c9b18 HidD_SetFeature
//   005c9b1e HidD_GetFeature
//   005c9aee HidD_GetAttributes
//   005c9afa HidD_GetPreparsedData
//   005c9af4 HidD_GetHidGuid
//   005c9b06 HidD_FreePreparsedData
//   0047b070 FUN_0047b070
//   005bb33b __write_nolock
//   0047abf0 FUN_0047abf0
//   0047ae80 FUN_0047ae80
//   0047a070 FUN_0047a070
//   004b8cce Write
//   0043fe50 FUN_0043fe50
//   0046e9c0 FUN_0046e9c0
//   004ac610 FUN_004ac610
//   004947b0 FUN_004947b0
//   005b3974 __NMSG_WRITE
//   0042be50 FUN_0042be50
//   0046b1b0 FUN_0046b1b0
//   00493260 FUN_00493260
//   0047aa60 FUN_0047aa60
//   005bac7c __read_nolock
//   0047ad80 FUN_0047ad80
//   0047af60 FUN_0047af60
//   00479d00 FUN_00479d00
//   004b8c8c Read
//   00440050 FUN_00440050
//   0049875c FUN_0049875c
//   0049f1c0 FUN_0049f1c0
//   00497410 FUN_00497410
//   00456a00 FUN_00456a00
//   0046eb60 FUN_0046eb60
//   00424ba0 FUN_00424ba0
//   0049cc00 FUN_0049cc00
//   004ac430 FUN_004ac430
//   00494640 FUN_00494640
// TOTAL TARGET FUNCTIONS: 290
//==== FUNC 005c9b18  HidD_SetFeature ====

void HidD_SetFeature(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidD_SetFeature();
  return;
}


//==== FUNC 005c9b1e  HidD_GetFeature ====

void HidD_GetFeature(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidD_GetFeature();
  return;
}


//==== FUNC 005c9aee  HidD_GetAttributes ====

void HidD_GetAttributes(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidD_GetAttributes();
  return;
}


//==== FUNC 005c9afa  HidD_GetPreparsedData ====

void HidD_GetPreparsedData(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidD_GetPreparsedData();
  return;
}


//==== FUNC 005c9af4  HidD_GetHidGuid ====

void HidD_GetHidGuid(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidD_GetHidGuid();
  return;
}


//==== FUNC 005c9b06  HidD_FreePreparsedData ====

void HidD_FreePreparsedData(void)

{
                    /* WARNING: Could not recover jumptable at 0x005c9b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HidD_FreePreparsedData();
  return;
}


//==== FUNC 0047b070  FUN_0047b070 ====

void FUN_0047b070(void)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_210;
  if (DAT_006581e0 == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  __snwprintf_s(local_20c,0x104,0x103,L"%sRegister.dct",&DAT_0065cfa8);
  hFile = CreateFileW(local_20c,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"save gsetting: CreateFile err=%d",DVar1);
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  local_210 = 0;
  BVar2 = WriteFile(hFile,&DAT_0066fa08,0x58,&local_210,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"save register: WriteFile err=%d",DVar1);
  }
  CloseHandle(hFile);
  __security_check_cookie(local_4 ^ (uint)&local_210);
  return;
}


//==== FUNC 005bb33b  __write_nolock ====

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
  
  local_8 = DAT_0064f674 ^ (uint)&stack0xfffffffc;
  local_1ad0 = _Buf;
  local_1acc = (char *)0x0;
  local_1ad4 = 0;
  if (_MaxCharCount == 0) goto LAB_005bba61;
  if (_Buf == (void *)0x0) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    goto LAB_005bba61;
  }
  piVar4 = &DAT_00671260 + (_FileHandle >> 5);
  iVar8 = (_FileHandle & 0x1fU) * 0x40;
  cVar10 = (char)(*(char *)(*piVar4 + iVar8 + 0x24) * '\x02') >> 1;
  local_1add = cVar10;
  local_1adc = piVar4;
  if (((cVar10 == '\x02') || (cVar10 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    goto LAB_005bba61;
  }
  if ((*(byte *)(*piVar4 + iVar8 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar5 = __isatty(_FileHandle);
  if ((iVar5 == 0) || ((*(byte *)(iVar8 + 4 + *piVar4) & 0x80) == 0)) {
LAB_005bb6d2:
    if ((*(byte *)((undefined4 *)(*piVar4 + iVar8) + 1) & 0x80) == 0) {
      BVar7 = WriteFile(*(HANDLE *)(*piVar4 + iVar8),local_1ad0,_MaxCharCount,(LPDWORD)&local_1ad8,
                        (LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
LAB_005bb9d2:
        local_1ac4 = GetLastError();
      }
      else {
        local_1ac4 = 0;
        local_1acc = local_1ad8;
      }
LAB_005bb9de:
      if (local_1acc != (char *)0x0) goto LAB_005bba61;
      goto LAB_005bb9e7;
    }
    local_1ac4 = 0;
    if (cVar10 == '\0') {
      local_1ac8 = local_1ad0;
      if (_MaxCharCount == 0) goto LAB_005bba23;
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
        if (BVar7 == 0) goto LAB_005bb9d2;
        local_1acc = local_1acc + (int)local_1ad8;
      } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
              (piVar4 = local_1adc, (uint)((int)local_1ac8 - (int)local_1ad0) < _MaxCharCount));
      goto LAB_005bb9de;
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
          if (BVar7 == 0) goto LAB_005bb9d2;
          local_1acc = local_1acc + (int)local_1ad8;
        } while (((int)pWVar11 - (int)local_1abc <= (int)local_1ad8) &&
                (piVar4 = local_1adc, (uint)((int)local_1ac0 - (int)local_1ad0) < _MaxCharCount));
        goto LAB_005bb9de;
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
        if (iVar5 == 0) goto LAB_005bb9d2;
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
      goto LAB_005bb9de;
    }
  }
  else {
    p_Var6 = __getptd();
    local_1ae4 = (uint)(p_Var6->ptlocinfo->lc_category[0].wlocale == (wchar_t *)0x0);
    BVar7 = GetConsoleMode(*(HANDLE *)(iVar8 + *piVar4),&local_1ae8);
    if ((BVar7 == 0) || ((local_1ae4 != 0 && (cVar10 == '\0')))) goto LAB_005bb6d2;
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
              goto LAB_005bb539;
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
LAB_005bb539:
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
          if (BVar7 == 0) goto LAB_005bb9d2;
          local_1acc = (char *)((int)local_1ac0 + local_1ad4);
          if ((int)local_1ac8 < (int)nNumberOfBytesToWrite) break;
          if (local_1ae4 != 0) {
            local_10._0_1_ = '\r';
            BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,1,(LPDWORD)&local_1ac8,
                              (LPOVERLAPPED)0x0);
            if (BVar7 == 0) goto LAB_005bb9d2;
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
            if (wVar2 != (wchar_t)local_1ac4) goto LAB_005bb9d2;
            local_1acc = local_1acc + 2;
            if (local_1ae4 != 0) {
              local_1ac4 = 0xd;
              wVar2 = __putwch_nolock(L'\r');
              if (wVar2 != (wchar_t)local_1ac4) goto LAB_005bb9d2;
              local_1acc = local_1acc + 1;
              local_1ad4 = local_1ad4 + 1;
            }
          }
        }
      } while (local_1ac0 < _MaxCharCount);
      goto LAB_005bb9de;
    }
LAB_005bb9e7:
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
      goto LAB_005bba61;
    }
  }
LAB_005bba23:
  if (((*(byte *)(iVar8 + 4 + *piVar4) & 0x40) == 0) || ((char)*local_1ad0 != '\x1a')) {
    piVar4 = __errno();
    *piVar4 = 0x1c;
    puVar3 = ___doserrno();
    *puVar3 = 0;
  }
LAB_005bba61:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}


//==== FUNC 0047abf0  FUN_0047abf0 ====

undefined4 __fastcall FUN_0047abf0(int param_1)

{
  undefined4 *puVar1;
  LPCVOID lpBuffer;
  LPCWSTR in_EAX;
  HANDLE hFile;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 local_8;
  DWORD local_4;
  
  if (in_EAX == (LPCWSTR)0x0) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    hFile = CreateFileW(in_EAX,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      DVar2 = GetLastError();
      (*DAT_0065d3e0)(L"Save pro: CreateFile err=%d",DVar2);
      return 0;
    }
    local_4 = 0;
    if (*(int *)(param_1 + 4) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
    }
    BVar3 = WriteFile(hFile,&local_8,4,&local_4,(LPOVERLAPPED)0x0);
    if (BVar3 != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x18);
      while( true ) {
        if (puVar1 == (undefined4 *)0x0) {
          CloseHandle(hFile);
          return 1;
        }
        lpBuffer = (LPCVOID)*puVar1;
        if (((lpBuffer != (LPCVOID)0x0) && (*(int *)((int)lpBuffer + 4) != 0)) &&
           (BVar3 = WriteFile(hFile,lpBuffer,0x33fc,&local_4,(LPOVERLAPPED)0x0), BVar3 == 0)) break;
        puVar1 = (undefined4 *)puVar1[1];
      }
    }
    DVar2 = GetLastError();
    (*DAT_0065d3e0)(L"Save pro: WriteFile err=%d",DVar2);
    return 0;
  }
  return 1;
}


//==== FUNC 0047ae80  FUN_0047ae80 ====

void FUN_0047ae80(void)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_210;
  __snwprintf_s(local_20c,0x104,0x103,L"%sgSetting.dct",&DAT_0065cfa8);
  hFile = CreateFileW(local_20c,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"save gsetting: CreateFile err=%d",DVar1);
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  local_210 = 0;
  BVar2 = WriteFile(hFile,&DAT_0066f9a8,0x5c,&local_210,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"save gsetting: WriteFile err=%d",DVar1);
  }
  CloseHandle(hFile);
  __security_check_cookie(local_4 ^ (uint)&local_210);
  return;
}


//==== FUNC 0047a070  FUN_0047a070 ====

BOOL FUN_0047a070(void)

{
  uint *puVar1;
  BOOL BVar2;
  LPCVOID unaff_ESI;
  HANDLE unaff_EDI;
  DWORD local_4;
  
  local_4 = 0;
  BVar2 = WriteFile(unaff_EDI,unaff_ESI,0x58,&local_4,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0;
  }
  if (*(int *)((int)unaff_ESI + 0x14) != 0) {
    puVar1 = (uint *)(*(int *)((int)unaff_ESI + 0x14) + 8);
    *puVar1 = *puVar1 & 0x3fffffff;
    if (*(int *)((int)unaff_ESI + 0x14) == 0) {
      BVar2 = WriteFile(unaff_EDI,(LPCVOID)0x0,0,&local_4,(LPOVERLAPPED)0x0);
      return BVar2;
    }
    BVar2 = WriteFile(unaff_EDI,*(LPCVOID *)((int)unaff_ESI + 0x14),
                      *(int *)(*(int *)((int)unaff_ESI + 0x14) + 0x58) * 0xc + 0x68,&local_4,
                      (LPOVERLAPPED)0x0);
    return BVar2;
  }
  return 1;
}


//==== FUNC 004b8cce  Write ====

/* Library Function - Single Match
    public: virtual void __thiscall CFile::Write(void const *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CFile::Write(CFile *this,void *param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    BVar2 = WriteFile(*(HANDLE *)(this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      uVar4 = *(undefined4 *)(this + 0xc);
      DVar3 = GetLastError();
      ThrowOsError(DVar3,uVar4);
    }
    if (param_2 != uVar1) {
      FUN_004c523e(0xd,0xffffffff,*(undefined4 *)(this + 0xc));
    }
  }
  return;
}


//==== FUNC 0043fe50  FUN_0043fe50 ====

void __fastcall FUN_0043fe50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPCWSTR lpFileName;
  size_t _Size;
  void *lpBuffer;
  BOOL BVar4;
  DWORD DVar5;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar6;
  int local_344;
  DWORD local_340;
  undefined4 local_33c;
  CFileDialog local_338 [808];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ddb16;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_344;
  ExceptionList = &local_c;
  local_33c = param_1;
  iVar2 = FUN_0043e7a0(DAT_0064f674 ^ (uint)&stack0xfffffcac);
  if (iVar2 != 0) {
    FUN_004b9e3f(0,L".mcr",iVar2 + 0x14,2,L"mcr(*.mcr)|*.mcr|",param_1,0,1);
    local_4 = 0;
    iVar3 = CFileDialog::DoModal(local_338);
    if (iVar3 == 1) {
      CFileDialog::GetPathName(local_338);
      local_4._0_1_ = 1;
      iVar3 = DAT_0066f9a4;
      if (*(int *)(iVar2 + 4) != -0xff00) {
        iVar3 = FUN_004799c0(*(undefined4 *)(DAT_0066f9a4 + 0x10),*(int *)(iVar2 + 4));
      }
      if (iVar3 == 0) {
        piVar1 = (int *)(local_344 + -4);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        if ((*(int *)(iVar3 + 0xc) == 0) && (*(int *)(iVar3 + 0x14) != 0)) {
          pvVar6 = (HANDLE)0x0;
          dwFlagsAndAttributes = 0x80;
          dwCreationDisposition = 2;
          lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
          dwShareMode = 3;
          DVar5 = 0x40000000;
          lpFileName = (LPCWSTR)FUN_00405270();
          pvVar6 = CreateFileW(lpFileName,DVar5,dwShareMode,lpSecurityAttributes,
                               dwCreationDisposition,dwFlagsAndAttributes,pvVar6);
          if (pvVar6 != (HANDLE)0xffffffff) {
            _Size = FUN_00479ce0();
            lpBuffer = _malloc(_Size);
            if (lpBuffer != (void *)0x0) {
              *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0x3fffffff;
              FUN_0047a220();
              local_340 = 0;
              BVar4 = WriteFile(pvVar6,lpBuffer,_Size,&local_340,(LPOVERLAPPED)0x0);
              if ((BVar4 == 0) || (local_340 != _Size)) {
                DVar5 = GetLastError();
                FUN_00448ff0(L"Export failed, error=%d",DVar5);
              }
              _free(lpBuffer);
            }
            CloseHandle(pvVar6);
          }
        }
        piVar1 = (int *)(local_344 + -4);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(**(int **)(local_344 + -0x10) + 4))((undefined4 *)(local_344 + -0x10));
      }
    }
    local_4 = 0xffffffff;
    CFileDialog::~CFileDialog(local_338);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_344);
  return;
}


//==== FUNC 0046e9c0  FUN_0046e9c0 ====

void FUN_0046e9c0(undefined4 param_1)

{
  LPCWSTR pWVar1;
  LPCVOID lpBuffer;
  int iVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  LPCWSTR local_340;
  DWORD local_33c;
  CFileDialog local_338 [808];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de546;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_340;
  ExceptionList = &local_c;
  lpBuffer = (LPCVOID)FUN_0046c620(DAT_0064f674 ^ (uint)&stack0xfffffcb0);
  if (lpBuffer != (LPCVOID)0x0) {
    FUN_004b9e3f(0,L".dse",(int)lpBuffer + 8,2,L"dse(*.dse)|*.dse|",param_1,0,1);
    local_4 = 0;
    iVar2 = CFileDialog::DoModal(local_338);
    if (iVar2 == 1) {
      CFileDialog::GetPathName(local_338);
      local_4._0_1_ = 1;
      if (1 < *(int *)(local_340 + -2)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&local_340,*(int *)(local_340 + -6));
      }
      hFile = CreateFileW(local_340,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
      if (hFile == (HANDLE)0xffffffff) {
        pWVar1 = local_340 + -2;
        LOCK();
        iVar2 = *(int *)pWVar1;
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        UNLOCK();
      }
      else {
        local_33c = 0;
        BVar3 = WriteFile(hFile,lpBuffer,0x4b8,&local_33c,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          DVar4 = GetLastError();
          FUN_00448ff0(L"Export failed, error=%d",DVar4);
        }
        CloseHandle(hFile);
        pWVar1 = local_340 + -2;
        LOCK();
        iVar2 = *(int *)pWVar1;
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        UNLOCK();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar2 == 1 || iVar2 + -1 < 0) {
        (**(code **)(**(int **)(local_340 + -8) + 4))(local_340 + -8);
      }
    }
    local_4 = 0xffffffff;
    CFileDialog::~CFileDialog(local_338);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_340);
  return;
}


//==== FUNC 004ac610  FUN_004ac610 ====

void __fastcall FUN_004ac610(int param_1)

{
  undefined4 *puVar1;
  HANDLE hFile;
  DWORD local_418;
  wchar_t local_414 [260];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_418;
  if ((*(int *)(param_1 + 4) != 0) && (local_414 != (wchar_t *)0x0)) {
    __snwprintf_s(local_414,0x104,0x103,L"%s%s\\",&DAT_0065cfa8,*(int *)(param_1 + 4) + 0x46);
  }
  __snwprintf_s(local_20c,0x104,0x103,L"%sgif_list.gcc",local_414);
  hFile = CreateFileW(local_20c,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    local_418 = 0;
    WriteFile(hFile,(LPCVOID)(param_1 + 0x20),1,&local_418,(LPOVERLAPPED)0x0);
    for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[1]) {
      if ((LPCVOID)*puVar1 != (LPCVOID)0x0) {
        WriteFile(hFile,(LPCVOID)*puVar1,0x2c,&local_418,(LPOVERLAPPED)0x0);
      }
    }
    CloseHandle(hFile);
  }
  __security_check_cookie(local_4 ^ (uint)&local_418);
  return;
}


//==== FUNC 004947b0  FUN_004947b0 ====

undefined4 FUN_004947b0(LPCVOID param_1,DWORD param_2)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 uVar4;
  HANDLE unaff_ESI;
  int iVar5;
  DWORD local_18;
  _OVERLAPPED local_14;
  
  local_14.Internal = 0;
  local_14.InternalHigh = 0;
  local_14.u.s.Offset = 0;
  local_14.u.s.OffsetHigh = 0;
  local_14.hEvent = (HANDLE)0x0;
  local_14.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  iVar5 = 0;
  local_18 = 0;
  iVar1 = WriteFile(unaff_ESI,param_1,0x14,&local_18,&local_14);
  do {
    if (iVar1 != 0) {
LAB_0049488f:
      uVar4 = 1;
LAB_00494894:
      if (local_14.hEvent != (HANDLE)0x0) {
        CloseHandle(local_14.hEvent);
      }
      return uVar4;
    }
    uVar4 = 0;
    DVar2 = GetLastError();
    if (DVar2 != 0x3e5) {
      (*DAT_0065d3e0)(L"SendData_3632 Err=0x%x",DVar2);
      goto LAB_00494894;
    }
    DVar2 = param_2;
    if ((int)param_2 < 1) {
      DVar2 = 0xffffffff;
    }
    DVar2 = WaitForSingleObject(local_14.hEvent,DVar2);
    if (DVar2 != 0x102) {
      if (DVar2 != 0) goto LAB_00494894;
      GetOverlappedResult(unaff_ESI,&local_14,&local_18,0);
      goto LAB_0049488f;
    }
    BVar3 = CancelIo(unaff_ESI);
    if (BVar3 != 0) {
      GetOverlappedResult(unaff_ESI,&local_14,&local_18,1);
    }
    (*DAT_0065d3e0)(L"SendData_3632 TimeOut");
    if (2 < iVar5) goto LAB_00494894;
    FUN_004051e0(10);
    iVar5 = iVar5 + 1;
    local_18 = 0;
    iVar1 = WriteFile(unaff_ESI,param_1,0x14,&local_18,&local_14);
  } while( true );
}


//==== FUNC 005b3974  __NMSG_WRITE ====

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
    if (param_1 == (&DAT_0064f840)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar2 = local_8;
  if (local_8 < 0x17) {
    iVar3 = __set_error_mode(3);
    if ((iVar3 != 1) && ((iVar3 = __set_error_mode(3), iVar3 != 0 || (DAT_0064f648 != 1)))) {
      if (param_1 == 0xfc) {
        return;
      }
      eVar4 = _strcpy_s(&DAT_00657210,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_0065732d = 0;
      DVar5 = GetModuleFileNameA((HMODULE)0x0,&DAT_00657229,0x104);
      if ((DVar5 == 0) &&
         (eVar4 = _strcpy_s(&DAT_00657229,0x2fb,"<program name unknown>"), eVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar6 = _strlen(&DAT_00657229);
      if (0x3c < sVar6 + 1) {
        sVar6 = _strlen(&DAT_00657229);
        eVar4 = _strncpy_s((char *)(sVar6 + 0x6571ee),(int)&DAT_00657524 - (int)(sVar6 + 0x6571ee),
                           "...",3);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar4 = _strcat_s(&DAT_00657210,0x314,"\n\n");
      if (eVar4 == 0) {
        eVar4 = _strcat_s(&DAT_00657210,0x314,*(char **)(local_8 * 8 + 0x64f844));
        if (eVar4 == 0) {
          ___crtMessageBoxA(&DAT_00657210,"Microsoft Visual C++ Runtime Library",0x12010);
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
      puVar1 = (undefined4 *)(uVar2 * 8 + 0x64f844);
      sVar6 = _strlen((char *)*puVar1);
      WriteFile(hFile,(LPCVOID)*puVar1,sVar6,lpNumberOfBytesWritten,lpOverlapped);
    }
  }
  return;
}


//==== FUNC 0042be50  FUN_0042be50 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0042be50(int param_1)

{
  LPCWSTR pWVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  BOOL BVar6;
  int *piVar7;
  undefined4 uVar8;
  _TREEITEM *p_Var9;
  undefined4 *puVar10;
  int iVar11;
  size_t _Size;
  int iVar12;
  int *piVar13;
  code *pcVar14;
  CTreeCtrl *this;
  wchar_t *pwVar15;
  undefined1 auStack_37c8 [4];
  int *local_37c4;
  DWORD local_37c0;
  wchar_t *local_37bc;
  undefined4 *puStack_37b8;
  LPCWSTR local_37b4;
  int local_37b0;
  int iStack_37ac;
  int iStack_37a8;
  undefined4 uStack_37a4;
  int aiStack_37a0 [5];
  undefined1 auStack_378c [68];
  int iStack_3748;
  CFileDialog local_3738 [808];
  int local_3410;
  undefined4 local_340c;
  wchar_t local_3408 [25];
  char cStack_33d5;
  int aiStack_33d4 [3313];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de1a1;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)auStack_37c8;
  ExceptionList = &local_c;
  local_37b0 = param_1;
  FUN_004b9e3f(1,L".bcf",L"*.bcf",2,L"bcf(*.bcf)|*.bcf|",param_1,0,1);
  local_4 = 0;
  iVar3 = CFileDialog::DoModal(local_3738);
  if (iVar3 == 1) {
    GetFileTitle(&local_37bc);
    local_4._0_1_ = 1;
    CFileDialog::GetPathName(local_3738);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (1 < *(int *)(local_37b4 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&local_37b4,*(int *)(local_37b4 + -6));
    }
    piVar4 = CreateFileW(local_37b4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    local_37c4 = piVar4;
    if (piVar4 == (int *)0xffffffff) {
      DVar5 = GetLastError();
      pwVar15 = L"Open profile file failed. error=0x%x";
    }
    else {
      local_3410 = 0;
      _memset(&local_340c,0,0x33f8);
      pcVar14 = ReadFile_exref;
      local_37c0 = 0;
      BVar6 = ReadFile(piVar4,&local_3410,0x33fc,&local_37c0,(LPOVERLAPPED)0x0);
      if (((BVar6 != 0) && (local_37c0 == 0x33fc)) && (local_3410 == -0x355edbb)) {
        (*DAT_0065d3e0)(L"Start import: %s, size=%d",local_3408,0x33fc);
        iVar3 = FUN_004ad0e9(0x18);
        if (iVar3 == 0) {
          puStack_37b8 = (undefined4 *)0x0;
        }
        else {
          puStack_37b8 = (undefined4 *)FUN_0044dfe0();
        }
        puStack_37b8[3] = 0;
        puStack_37b8[1] = 0x10;
        iVar3 = ReadFile(piVar4,aiStack_37a0,0x68,&local_37c0,(LPOVERLAPPED)0x0);
        while (((iVar3 != 0 && (_Size = 0, local_37c0 == 0x68)) && (aiStack_37a0[0] == -0x534665e)))
        {
          if (&stack0x00000000 != (undefined1 *)0x37a0) {
            _Size = iStack_3748 * 0xc + 0x68;
          }
          (*DAT_0065d3e0)(L"read macro: %s, id=%x, size=%d",auStack_378c,aiStack_37a0[1],_Size);
          piVar7 = _malloc(_Size);
          if (piVar7 != (int *)0x0) {
            piVar4 = aiStack_37a0;
            piVar13 = piVar7;
            for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar13 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar13 = piVar13 + 1;
            }
            DVar5 = _Size - 0x68;
            if ((0 < (int)DVar5) &&
               ((BVar6 = ReadFile(local_37c4,piVar7 + 0x1a,DVar5,&local_37c0,(LPOVERLAPPED)0x0),
                piVar4 = local_37c4, BVar6 == 0 || (local_37c0 != DVar5)))) break;
            FUN_0044e0a0(piVar7);
            (*DAT_0065d3e0)(L"    add macro: %s",piVar7 + 5);
            piVar4 = local_37c4;
            pcVar14 = ReadFile_exref;
          }
          iVar3 = (*pcVar14)(piVar4,aiStack_37a0,0x68,&local_37c0,0);
        }
        CloseHandle(piVar4);
        iVar3 = FUN_00402ed0();
        iStack_37ac = iVar3;
        uStack_37a4 = FUN_00402ed0();
        iStack_37a8 = FUN_00479ab0();
        if (iStack_37a8 != 0) {
          local_37c4 = (int *)puStack_37b8[4];
          if (local_37c4 != (int *)0x0) {
            do {
              iVar3 = *local_37c4;
              if (iVar3 != 0) {
                piVar4 = aiStack_33d4;
                iVar12 = 4;
                do {
                  iVar11 = 0x90;
                  do {
                    if ((*(char *)((int)piVar4 + -1) == '\x05') && (*piVar4 == *(int *)(iVar3 + 4)))
                    {
                      if (*(int *)(iVar3 + 0x50) == 0) {
                        Sleep(0x14);
                        uVar8 = FUN_00479770();
                        *(undefined4 *)(iVar3 + 0x50) = uVar8;
                      }
                      *piVar4 = *(int *)(iVar3 + 0x50);
                    }
                    piVar4 = piVar4 + 4;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 0x50);
                *(undefined4 *)(iVar3 + 0x50) = 0;
                FUN_00479b20(iVar3);
              }
              local_37c4 = (int *)local_37c4[1];
            } while (local_37c4 != (int *)0x0);
            local_37c4 = (int *)0x0;
            iVar3 = iStack_37ac;
          }
          Sleep(0xf);
          local_340c = FUN_00479770();
          if (1 < *(int *)(local_37bc + -2)) {
            ATL::CSimpleStringT<wchar_t,0>::Fork
                      ((CSimpleStringT<wchar_t,0> *)&local_37bc,*(int *)(local_37bc + -6));
          }
          _wcsncpy_s(local_3408,0x14,local_37bc,0xffffffff);
          iVar12 = FUN_0047a990(iVar3 + 0xa0);
          iVar3 = local_37b0;
          uVar8 = *(undefined4 *)(local_37b0 + 0x32dc);
          uVar2 = *(undefined4 *)(iVar12 + 4);
          iStack_37ac = *(int *)(local_37b0 + 0x32d8);
          this = (CTreeCtrl *)(local_37b0 + 0x3010);
          for (puVar10 = *(undefined4 **)(local_37b0 + 0x3124);
              (puVar10 != (undefined4 *)0x0 && (*(int *)*puVar10 != -0x10000));
              puVar10 = (undefined4 *)puVar10[1]) {
          }
          p_Var9 = CTreeCtrl::InsertItem
                             (this,1,(wchar_t *)(iVar12 + 8),0,0,0,0,0,(_TREEITEM *)0xffff0000,
                              (_TREEITEM *)0xffff0002);
          if (p_Var9 == (_TREEITEM *)0x0) {
LAB_0042c2c7:
            FUN_00480070(this);
          }
          else {
            puVar10 = _malloc(0x24);
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = p_Var9;
              puVar10[4] = uVar2;
              puVar10[5] = 0;
              puVar10[1] = iStack_37ac;
              puVar10[3] = 0;
              puVar10[7] = uVar8;
              puVar10[6] = 1;
              puVar10[8] = 0;
              FUN_0044e0a0(puVar10);
              InvalidateRect(*(HWND *)(iVar3 + 0x3030),(RECT *)0x0,1);
              goto LAB_0042c2c7;
            }
          }
          if (puStack_37b8[2] != 0) {
            FUN_0043ea80(0);
          }
        }
        puVar10 = puStack_37b8;
        FUN_0044e280();
        (**(code **)*puVar10)(1);
        local_4._0_1_ = 1;
        pWVar1 = local_37b4 + -2;
        LOCK();
        iVar3 = *(int *)pWVar1;
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        UNLOCK();
        if (iVar3 + -1 < 1) {
          (**(code **)(**(int **)(local_37b4 + -8) + 4))(local_37b4 + -8);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        pwVar15 = local_37bc + -2;
        LOCK();
        iVar3 = *(int *)pwVar15;
        *(int *)pwVar15 = *(int *)pwVar15 + -1;
        UNLOCK();
        if (iVar3 == 1 || iVar3 + -1 < 0) {
          (**(code **)(**(int **)(local_37bc + -8) + 4))(local_37bc + -8);
        }
        local_4 = 0xffffffff;
        CFileDialog::~CFileDialog(local_3738);
        goto LAB_0042c3f3;
      }
      CloseHandle(piVar4);
      DVar5 = GetLastError();
      pwVar15 = L"Read profile file failed. error=0x%x";
    }
    FUN_00448ff0(pwVar15,DVar5);
    local_4._0_1_ = 1;
    pWVar1 = local_37b4 + -2;
    LOCK();
    iVar3 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar3 + -1 < 1) {
      (**(code **)(**(int **)(local_37b4 + -8) + 4))(local_37b4 + -8);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    pwVar15 = local_37bc + -2;
    LOCK();
    iVar3 = *(int *)pwVar15;
    *(int *)pwVar15 = *(int *)pwVar15 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(local_37bc + -8) + 4))(local_37bc + -8);
    }
  }
  local_4 = 0xffffffff;
  CFileDialog::~CFileDialog(local_3738);
LAB_0042c3f3:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_37c8);
  return;
}


//==== FUNC 0046b1b0  FUN_0046b1b0 ====

void FUN_0046b1b0(int param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  undefined1 auStack_8dc [4];
  DWORD local_8d8;
  int local_8d4;
  undefined1 local_8d0 [1208];
  wchar_t local_418 [260];
  wchar_t local_210 [262];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_8dc;
  if ((param_1 != 0) && (local_418 != (wchar_t *)0x0)) {
    __snwprintf_s(local_418,0x104,0x103,L"%s%s\\",&DAT_0065cfa8,param_1 + 0x46);
  }
  __snwprintf_s(local_210,0x104,0x103,L"%seffect.dse",local_418);
  hFile = CreateFileW(local_210,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"Open dse file err=%d",DVar1);
  }
  else {
    FUN_0044e280();
    local_8d8 = 0;
    local_8d4 = 0;
    DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
    if (DVar1 != 0) {
      BVar2 = ReadFile(hFile,&local_8d4,4,&local_8d8,(LPOVERLAPPED)0x0);
      if ((BVar2 != 0) && (local_8d8 == 4)) {
        local_8d8 = 0;
        iVar3 = ReadFile(hFile,local_8d0,0x4b8,&local_8d8,(LPOVERLAPPED)0x0);
        while (iVar3 != 0) {
          if (local_8d8 != 0x4b8) goto LAB_0046b323;
          iVar3 = FUN_0046b070(unaff_EBX);
          if (local_8d4 == *(int *)(iVar3 + 4)) {
            *(int *)(unaff_EBX + 0x5568) = iVar3;
          }
          local_8d8 = 0;
          iVar3 = ReadFile(hFile,local_8d0,0x4b8,&local_8d8,(LPOVERLAPPED)0x0);
        }
      }
      DVar1 = GetLastError();
      (*DAT_0065d3e0)(L"Load dse: ReadFile err=%d",DVar1);
    }
LAB_0046b323:
    if (hFile != (HANDLE)0x0) {
      CloseHandle(hFile);
    }
  }
  if (*(int *)(unaff_EBX + 0x5558) == 0) {
    if (1 < *(int *)(DAT_00670010 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&DAT_00670010,*(int *)(DAT_00670010 + -0xc));
    }
    FUN_0046b0c0(DAT_00670010);
    uVar4 = FUN_0046b070(unaff_EBX);
    *(undefined4 *)(unaff_EBX + 0x5568) = uVar4;
  }
  __security_check_cookie(local_4 ^ (uint)auStack_8dc);
  return;
}


//==== FUNC 00493260  FUN_00493260 ====

void FUN_00493260(int param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD DStack_64;
  _OVERLAPPED _Stack_60;
  HANDLE pvStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&DStack_64;
  (*DAT_0065d3e0)(L"ServiceThread_3632 Start...");
  _Stack_60.Internal = 0;
  _Stack_60.InternalHigh = 0;
  _Stack_60.u.s.Offset = 0;
  _Stack_60.u.s.OffsetHigh = 0;
  _Stack_60.hEvent = *(HANDLE *)(param_1 + 0x298);
  uStack_48 = *(undefined4 *)(param_1 + 0x29c);
  pvStack_4c = _Stack_60.hEvent;
  do {
    while( true ) {
      while( true ) {
        while (hFile = *(HANDLE *)(param_1 + 0xc), hFile == (HANDLE)0x0) {
          Sleep(200);
        }
        _memset(auStack_44,0,0x40);
        auStack_44[0] = 0x13;
        BVar1 = ReadFile(hFile,auStack_44,0x14,&DStack_64,&_Stack_60);
        if (BVar1 == 0) break;
        FUN_004933f0();
      }
      DVar2 = GetLastError();
      if (DVar2 != 0x3e5) break;
      DVar2 = WaitForMultipleObjects(2,&pvStack_4c,0,0xffffffff);
      if (DVar2 == 0) {
        FUN_004933f0();
      }
      else {
        if (DVar2 == 1) {
          (*DAT_0065d3e0)(L"hObject[1] is signal");
          BVar1 = CancelIo(*(HANDLE *)(param_1 + 0xc));
          if (BVar1 != 0) {
            GetOverlappedResult(*(HANDLE *)(param_1 + 0xc),&_Stack_60,&DStack_64,1);
          }
          goto LAB_004933c3;
        }
        if (DVar2 == 0xffffffff) {
          (*DAT_0065d3e0)(L"WaitForMultipleObjects failed. err=%d",0x3e5);
        }
      }
    }
    (*DAT_0065d3e0)(L"ServiceThread ReadFile Err=%d",DVar2);
    if (DVar2 == 0x48f) {
      auStack_44[0] = 0xff;
      FUN_004933f0();
      break;
    }
  } while (DVar2 != 6);
LAB_004933c3:
  (*DAT_0065d3e0)(L"ServiceThread_3632 Exit");
  __security_check_cookie(local_4 ^ (uint)&DStack_64);
  return;
}


//==== FUNC 0047aa60  FUN_0047aa60 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0047aa60(LPCWSTR param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  int unaff_EBX;
  DWORD local_3408;
  undefined4 local_3404;
  undefined1 local_3400 [13308];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_3408;
  if (param_1 == (LPCWSTR)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_3408);
    return;
  }
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"Open pro file err=%d",DVar1);
  }
  else {
    FUN_0044e280();
    local_3408 = 0;
    local_3404 = 0;
    DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
    if (DVar1 != 0) {
      BVar2 = ReadFile(hFile,&local_3404,4,&local_3408,(LPOVERLAPPED)0x0);
      if ((BVar2 != 0) && (local_3408 == 4)) {
        local_3408 = 0;
        iVar3 = ReadFile(hFile,local_3400,0x33fc,&local_3408,(LPOVERLAPPED)0x0);
        while (iVar3 != 0) {
          if (local_3408 != 0x33fc) goto LAB_0047ab84;
          FUN_0047a990(unaff_EBX);
          local_3408 = 0;
          iVar3 = ReadFile(hFile,local_3400,0x33fc,&local_3408,(LPOVERLAPPED)0x0);
        }
        DVar1 = GetLastError();
        (*DAT_0065d3e0)(L"Load pro: ReadFile err=%d",DVar1);
LAB_0047ab84:
        iVar3 = FUN_0047a9e0();
        if (iVar3 == 0) {
          iVar3 = FUN_0047aa30();
        }
        *(int *)(unaff_EBX + 4) = iVar3;
        CloseHandle(hFile);
        goto LAB_0047abc8;
      }
      DVar1 = GetLastError();
      (*DAT_0065d3e0)(L"Load pro: ReadFile err=%d",DVar1);
    }
    CloseHandle(hFile);
  }
LAB_0047abc8:
  __security_check_cookie(local_4 ^ (uint)&local_3408);
  return;
}


//==== FUNC 005bac7c  __read_nolock ====

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
  if ((_FileHandle < 0) || (DAT_00671240 <= (uint)_FileHandle)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    __invalid_parameter(0,0,0,0,0);
    return -1;
  }
  piVar5 = &DAT_00671260 + (_FileHandle >> 5);
  iVar13 = (_FileHandle & 0x1fU) * 0x40;
  bVar2 = *(byte *)(*piVar5 + iVar13 + 4);
  if ((bVar2 & 1) == 0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    goto LAB_005bad86;
  }
  if (_MaxCharCount < 0x80000000) {
    local_14 = (byte *)0x0;
    if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
      return 0;
    }
    if (_DstBuf != (void *)0x0) {
      local_6 = (char)(*(char *)(*piVar5 + iVar13 + 0x24) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~_MaxCharCount & 1) == 0) goto LAB_005bad74;
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
          if ((~_MaxCharCount & 1) == 0) goto LAB_005bad74;
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
            goto LAB_005bb093;
          }
          goto LAB_005bb088;
        }
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        local_14 = (byte *)((int)local_14 + local_1c);
        pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
        if ((*pbVar7 & 0x80) == 0) goto LAB_005bb093;
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
                    goto LAB_005bb136;
                  }
LAB_005bb1c9:
                  _MaxCharCount = _MaxCharCount + 2;
                  uVar16 = 0xd;
LAB_005bb1cb:
                  *(undefined2 *)pbVar7 = uVar16;
                }
                else {
                  uVar1 = _MaxCharCount + 2;
                  BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_c,2,&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                  goto LAB_005bb1c9;
                  if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                    if ((pbVar7 == local_10) && (local_c == 10)) goto LAB_005bb136;
                    __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_005bb1d1;
                    goto LAB_005bb1c9;
                  }
                  if (local_c == 10) {
LAB_005bb136:
                    _MaxCharCount = uVar1;
                    uVar16 = 10;
                    goto LAB_005bb1cb;
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
LAB_005bb1d1:
              _MaxCharCount = uVar1;
            } while (_MaxCharCount < local_14);
          }
          local_14 = (byte *)((int)pbVar7 - (int)local_10);
          goto LAB_005bb093;
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
                  goto LAB_005baf13;
                }
LAB_005baf8a:
                _MaxCharCount = _MaxCharCount + 1;
                *pbVar7 = 0xd;
              }
              else {
                uVar6 = _MaxCharCount + 1;
                BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_5,1,&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                goto LAB_005baf8a;
                if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                  if ((pbVar7 == local_10) && (local_5 == '\n')) goto LAB_005baf13;
                  __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_005baf8e;
                  goto LAB_005baf8a;
                }
                if (local_5 == '\n') {
LAB_005baf13:
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
LAB_005baf8e:
            _MaxCharCount = uVar6;
          } while (_MaxCharCount < local_14);
        }
        local_14 = (byte *)((int)pbVar7 - (int)local_10);
        if ((local_6 != '\x01') || (local_14 == (byte *)0x0)) goto LAB_005bb093;
        bVar2 = pbVar7[-1];
        if ((char)bVar2 < '\0') {
          iVar12 = 1;
          pbVar7 = pbVar7 + -1;
          while ((((&DAT_00650320)[bVar2] == '\0' && (iVar12 < 5)) && (local_10 <= pbVar7))) {
            pbVar7 = pbVar7 + -1;
            bVar2 = *pbVar7;
            iVar12 = iVar12 + 1;
          }
          if ((char)(&DAT_00650320)[*pbVar7] == 0) {
            piVar5 = __errno();
            *piVar5 = 0x2a;
            goto LAB_005bb08f;
          }
          if ((char)(&DAT_00650320)[*pbVar7] + 1 == iVar12) {
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
          goto LAB_005bb093;
        }
        uVar10 = GetLastError();
LAB_005bb088:
        __dosmaperr(uVar10);
      }
LAB_005bb08f:
      local_18 = -1;
LAB_005bb093:
      if (local_10 != _DstBuf) {
        _free(local_10);
      }
      if (local_18 == -2) {
        return (int)local_14;
      }
      return local_18;
    }
  }
LAB_005bad74:
  puVar4 = ___doserrno();
  *puVar4 = 0;
  piVar5 = __errno();
  *piVar5 = 0x16;
LAB_005bad86:
  __invalid_parameter(0,0,0,0,0);
  return -1;
}


//==== FUNC 0047ad80  FUN_0047ad80 ====

void FUN_0047ad80(void)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_210;
  __snwprintf_s(local_20c,0x104,0x103,L"%sgSetting.dct",&DAT_0065cfa8);
  hFile = CreateFileW(local_20c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"open gsetting file err=%d",DVar1);
    FUN_0047acf0();
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  local_210 = 0;
  BVar2 = ReadFile(hFile,&DAT_0066f9a8,0x5c,&local_210,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (local_210 != 0x5c)) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"load gsetting: ReadFile err=%d",DVar1);
    FUN_0047acf0();
  }
  CloseHandle(hFile);
  __security_check_cookie(local_4 ^ (uint)&local_210);
  return;
}


//==== FUNC 0047af60  FUN_0047af60 ====

void FUN_0047af60(void)

{
  HANDLE hFile;
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_210;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_210;
  if (DAT_006581e0 == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  __snwprintf_s(local_20c,0x104,0x103,L"%sRegister.dct",&DAT_0065cfa8);
  hFile = CreateFileW(local_20c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"open register file err=%d",DVar1);
    __security_check_cookie(local_4 ^ (uint)&local_210);
    return;
  }
  local_210 = 0;
  BVar2 = ReadFile(hFile,&DAT_0066fa08,0x58,&local_210,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (local_210 != 0x58)) {
    DVar1 = GetLastError();
    (*DAT_0065d3e0)(L"load register: ReadFile err=%d",DVar1);
  }
  CloseHandle(hFile);
  __security_check_cookie(local_4 ^ (uint)&local_210);
  return;
}


//==== FUNC 00479d00  FUN_00479d00 ====

void __thiscall FUN_00479d00(HANDLE param_1,undefined4 *param_2)

{
  int *lpBuffer;
  BOOL BVar1;
  int *_Memory;
  int iVar2;
  int *piVar3;
  size_t _Size;
  DWORD nNumberOfBytesToRead;
  int *piVar4;
  DWORD local_78;
  undefined4 *local_74;
  int local_70 [22];
  int local_18;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_78;
  local_74 = param_2;
  lpBuffer = _malloc(0x58);
  _Size = 0;
  if (lpBuffer == (int *)0x0) goto LAB_00479e80;
  local_78 = 0;
  BVar1 = ReadFile(param_1,lpBuffer,0x58,&local_78,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    if (local_78 == 0x58) goto LAB_00479e77;
LAB_00479e6d:
    *local_74 = 1;
  }
  else {
    if (local_78 != 0x58) goto LAB_00479e6d;
    if (*lpBuffer != -0x5747cccd) goto LAB_00479e77;
    if (lpBuffer[5] == 0) goto LAB_00479e0a;
    local_78 = 0;
    BVar1 = ReadFile(param_1,local_70,0x68,&local_78,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      if (local_78 == 0x68) goto LAB_00479e77;
LAB_00479e5a:
      *local_74 = 1;
    }
    else {
      if (local_78 != 0x68) goto LAB_00479e5a;
      if (local_70[0] == -0x534665e) {
        if (&stack0x00000000 != (undefined1 *)0x70) {
          _Size = local_18 * 0xc + 0x68;
        }
        _Memory = _malloc(_Size);
        if (_Memory != (int *)0x0) {
          nNumberOfBytesToRead = _Size - 0x68;
          if (0 < (int)nNumberOfBytesToRead) {
            local_78 = 0;
            BVar1 = ReadFile(param_1,_Memory + 0x1a,nNumberOfBytesToRead,&local_78,(LPOVERLAPPED)0x0
                            );
            if (BVar1 == 0) {
              if (nNumberOfBytesToRead == local_78) goto LAB_00479e2f;
            }
            else if (nNumberOfBytesToRead == local_78) goto LAB_00479dfa;
            *local_74 = 1;
LAB_00479e2f:
            _free(_Memory);
            _free(lpBuffer);
            __security_check_cookie(local_4 ^ (uint)&local_78);
            return;
          }
LAB_00479dfa:
          piVar3 = local_70;
          piVar4 = _Memory;
          for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar4 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar4 = piVar4 + 1;
          }
          lpBuffer[5] = (int)_Memory;
LAB_00479e0a:
          __security_check_cookie(local_4 ^ (uint)&local_78);
          return;
        }
      }
    }
  }
LAB_00479e77:
  _free(lpBuffer);
LAB_00479e80:
  __security_check_cookie(local_4 ^ (uint)&local_78);
  return;
}


//==== FUNC 004b8c8c  Read ====

/* Library Function - Single Match
    public: virtual unsigned int __thiscall CFile::Read(void *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __thiscall CFile::Read(CFile *this,void *param_1,uint param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    BVar1 = ReadFile(*(HANDLE *)(this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      uVar3 = *(undefined4 *)(this + 0xc);
      DVar2 = GetLastError();
      ThrowOsError(DVar2,uVar3);
    }
  }
  return param_2;
}


//==== FUNC 00440050  FUN_00440050 ====

void __fastcall FUN_00440050(int param_1)

{
  LPCWSTR pWVar1;
  int iVar2;
  HANDLE hFile;
  DWORD DVar3;
  int *piVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  LPCWSTR local_348;
  int *local_344;
  void *local_340;
  DWORD local_33c;
  CFileDialog local_338 [808];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ddad1;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_348;
  ExceptionList = &local_c;
  FUN_004b9e3f(1,L".mcr",L"*.mcr",2,L"mcr(*.mcr)|*.mcr|",param_1,0,1);
  local_4 = 0;
  iVar2 = CFileDialog::DoModal(local_338);
  if (iVar2 == 1) {
    GetFileTitle(&local_344);
    local_4._0_1_ = 1;
    CFileDialog::GetPathName(local_338);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (1 < *(int *)(local_348 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&local_348,*(int *)(local_348 + -6));
    }
    hFile = CreateFileW(local_348,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      DVar3 = GetLastError();
      FUN_00448ff0(L"Open macro file error=0x%x",DVar3);
    }
    else {
      DVar3 = GetFileSize(hFile,(LPDWORD)0x0);
      piVar4 = local_344;
      if (((DVar3 != 0) && (piVar4 = _malloc(DVar3), piVar4 != (int *)0x0)) &&
         (local_340 = _malloc(DVar3), local_340 != (void *)0x0)) {
        local_33c = 0;
        BVar5 = ReadFile(hFile,local_340,DVar3,&local_33c,(LPOVERLAPPED)0x0);
        if ((BVar5 == 0) || (local_33c != DVar3)) {
          DVar3 = GetLastError();
          FUN_00448ff0(L"Read macro file error=0x%x",DVar3);
        }
        else {
          FUN_0047a270();
          if (*piVar4 == -0x534665e) {
            iVar2 = FUN_00479770();
            piVar4[1] = iVar2;
            FUN_00428140();
            puVar6 = (undefined4 *)FUN_0047f8f0();
            if ((puVar6 != (undefined4 *)0x0) && (puVar6[6] != 2)) {
              FUN_00440670(*puVar6);
              FUN_0047f8f0();
            }
            iVar2 = FUN_00479b20(piVar4);
            if (iVar2 != 0) {
              FUN_0043ea80(*(undefined4 *)(iVar2 + 4));
              FUN_0043f770(iVar2,param_1 + 0x1798);
            }
          }
          else {
            FUN_00448ff0(L"This is not a macro file");
          }
        }
      }
      if (hFile != (HANDLE)0x0) {
        CloseHandle(hFile);
      }
      if (piVar4 != (int *)0x0) {
        _free(piVar4);
      }
      if (local_340 != (void *)0x0) {
        _free(local_340);
      }
    }
    local_4._0_1_ = 1;
    pWVar1 = local_348 + -2;
    LOCK();
    iVar2 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar2 + -1 < 1) {
      (**(code **)(**(int **)(local_348 + -8) + 4))(local_348 + -8);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    piVar4 = local_344 + -1;
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)local_344[-4] + 4))(local_344 + -4);
    }
  }
  local_4 = 0xffffffff;
  CFileDialog::~CFileDialog(local_338);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_348);
  return;
}


//==== FUNC 0049875c  FUN_0049875c ====

void FUN_0049875c(undefined4 param_1,ULONG_PTR param_2,ULONG_PTR param_3,undefined4 param_4,
                 undefined4 param_5,HANDLE param_6,HANDLE param_7,undefined4 param_8,
                 undefined4 param_9)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  int unaff_EDI;
  uint in_stack_00000064;
  
  (*DAT_0065d3e0)(L"ServiceThread_G5 Start...");
  param_2 = 0;
  param_3 = 0;
  param_4 = 0;
  param_5 = 0;
  param_6 = *(HANDLE *)(unaff_EDI + 0x28c);
  param_8 = *(undefined4 *)(unaff_EDI + 0x290);
  param_7 = param_6;
LAB_004987a7:
  do {
    while( true ) {
      while (hFile = *(HANDLE *)(unaff_EDI + 0xc), hFile == (HANDLE)0x0) {
        Sleep(200);
      }
      _memset(&param_9,0,0x40);
      BVar1 = ReadFile(hFile,&param_9,8,&param_1,(LPOVERLAPPED)&param_2);
      if (BVar1 == 0) break;
LAB_004987e4:
      if (DAT_0065d3dc != 0) {
        FUN_00407c90(&param_9,8,0,L"Read(Wired): ");
      }
      if ((param_9._1_1_ == '\n') && (param_9._2_1_ == '\x06')) {
        FUN_00492e70(&param_9,8);
      }
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      DVar2 = WaitForMultipleObjects(2,&param_7,0,0xffffffff);
      if (DVar2 == 0) goto LAB_004987e4;
      if (DVar2 == 1) {
        (*DAT_0065d3e0)(L"ServiceThread_G5: hObject[1] is signal");
        BVar1 = CancelIo(*(HANDLE *)(unaff_EDI + 0xc));
        if (BVar1 != 0) {
          GetOverlappedResult(*(HANDLE *)(unaff_EDI + 0xc),(LPOVERLAPPED)&param_2,&param_1,1);
        }
LAB_004988bc:
        (*DAT_0065d3e0)(L"ServiceThread_G5 Exit");
        __security_check_cookie(in_stack_00000064 ^ (uint)&param_1);
        return;
      }
      if (DVar2 == 0xffffffff) {
        (*DAT_0065d3e0)(L"WaitForMultipleObjects Err=%d",0x3e5);
      }
      goto LAB_004987a7;
    }
    (*DAT_0065d3e0)(L"ServiceThread_G5 Err=%d",DVar2);
    if ((DVar2 == 0x48f) || (DVar2 == 6)) goto LAB_004988bc;
  } while( true );
}


//==== FUNC 0049f1c0  FUN_0049f1c0 ====

void FUN_0049f1c0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE unaff_ESI;
  undefined4 *unaff_EDI;
  DWORD local_24;
  _OVERLAPPED local_20;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_24;
  local_20.Internal = 0;
  local_20.InternalHigh = 0;
  local_20.u.s.Offset = 0;
  local_20.u.s.OffsetHigh = 0;
  local_20.hEvent = (HANDLE)0x0;
  local_20.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  local_24 = 0;
  local_c = CONCAT31(local_c._1_3_,9);
  BVar1 = ReadFile(unaff_ESI,&local_c,8,&local_24,&local_20);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      DVar2 = WaitForSingleObject(local_20.hEvent,0xffffffff);
      if (DVar2 == 0) {
        if (unaff_EDI != (undefined4 *)0x0) {
          *unaff_EDI = local_c;
          unaff_EDI[1] = local_8;
        }
      }
      else if (DVar2 == 0x102) {
        BVar1 = CancelIo(unaff_ESI);
        if (BVar1 != 0) {
          GetOverlappedResult(unaff_ESI,&local_20,&local_24,1);
        }
      }
      else {
        DVar2 = GetLastError();
        (*DAT_0065d3e0)(L"ReadData_Mouse Err=0x%x, hDev=%x",DVar2);
      }
    }
    else if (DVar2 == 0x48f) {
      (*DAT_0065d3e0)(L"ReadData_Mouse Err, dev is plugout, hDev=%x");
    }
    else {
      (*DAT_0065d3e0)(L"ReadData_Mouse Err=0x%x, hDev=%x",DVar2);
    }
  }
  else if (unaff_EDI != (undefined4 *)0x0) {
    *unaff_EDI = local_c;
    unaff_EDI[1] = local_8;
  }
  CloseHandle(local_20.hEvent);
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}


//==== FUNC 00497410  FUN_00497410 ====

void FUN_00497410(undefined4 *param_1)

{
  undefined2 *puVar1;
  HANDLE hFile;
  DWORD DVar2;
  BOOL BVar3;
  int local_6c;
  HANDLE pvStack_68;
  DWORD DStack_64;
  _OVERLAPPED _Stack_60;
  HANDLE pvStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_6c;
  local_6c = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[1] != 0) {
      local_6c = param_1[1];
    }
    if (param_1[2] != 0) {
      local_6c = param_1[2];
    }
    if (local_6c != 0) {
      puVar1 = (undefined2 *)(local_6c + 0x28);
      goto LAB_00497458;
    }
  }
  puVar1 = &DAT_0060b0b0;
LAB_00497458:
  (*DAT_0065d3e0)(L"ServiceThread_Combo(%s) Start...",puVar1);
  hFile = CreateFileW((LPCWSTR)(param_1 + 3),0x120089,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,
                      (HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
    (*DAT_0065d3e0)(L"ServiceThread_Combo open err=0x%x",DVar2);
    __security_check_cookie(local_4 ^ (uint)&local_6c);
    return;
  }
  pvStack_68 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  _Stack_60.Internal = 0;
  _Stack_60.InternalHigh = 0;
  _Stack_60.u.s.Offset = 0;
  _Stack_60.u.s.OffsetHigh = 0;
  uStack_48 = DAT_0066fa8c;
  _Stack_60.hEvent = pvStack_68;
  pvStack_4c = pvStack_68;
  do {
    while( true ) {
      while( true ) {
        _memset(auStack_44,0,0x40);
        BVar3 = ReadFile(hFile,auStack_44,0x14,&DStack_64,&_Stack_60);
        if (BVar3 == 0) break;
        FUN_004972f0(param_1);
      }
      DVar2 = GetLastError();
      if (DVar2 != 0x3e5) break;
      DVar2 = WaitForMultipleObjects(2,&pvStack_4c,0,0xffffffff);
      if (DVar2 == 0) {
        FUN_004972f0(param_1);
      }
      else {
        if (DVar2 == 1) {
          (*DAT_0065d3e0)(L"ServiceThread_Combo: hObject[1] is signal");
          BVar3 = CancelIo(hFile);
          if (BVar3 != 0) {
            GetOverlappedResult(hFile,&_Stack_60,&DStack_64,1);
          }
          goto LAB_004975f8;
        }
        if (DVar2 == 0xffffffff) {
          (*DAT_0065d3e0)(L"ServiceThread_Combo: WaitForMultipleObjects err=%d",0x3e5);
        }
      }
    }
    (*DAT_0065d3e0)(L"ServiceThread_Combo ReadFile Err=%d",DVar2);
    if (DVar2 == 0x48f) {
      auStack_44[0] = 0xff;
      FUN_004972f0(param_1);
      PostMessageW((HWND)*param_1,0x45a,(WPARAM)param_1,0);
      break;
    }
  } while (DVar2 != 6);
LAB_004975f8:
  CloseHandle(hFile);
  if (pvStack_68 != (HANDLE)0x0) {
    CloseHandle(pvStack_68);
  }
  (*DAT_0065d3e0)(L"ServiceThread_Combo(%s) exit",local_6c + 0x28);
  __security_check_cookie(local_4 ^ (uint)&local_6c);
  return;
}


//==== FUNC 00456a00  FUN_00456a00 ====

void FUN_00456a00(LPCWSTR param_1)

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
  
  local_4 = DAT_0064f674 ^ (uint)&local_418;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    (*DAT_0065d3e0)(L"open skn file err");
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
  (*DAT_0065d3e0)(L"Error: nOffset=%d, nSize=%d",iVar3,iVar2);
  __security_check_cookie(local_4 ^ (uint)&local_418);
  return;
}


//==== FUNC 0046eb60  FUN_0046eb60 ====

void __fastcall FUN_0046eb60(int param_1)

{
  LPCWSTR pWVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  HANDLE hFile;
  DWORD DVar5;
  BOOL BVar6;
  _TREEITEM *p_Var7;
  undefined4 *puVar8;
  wchar_t *pwVar9;
  LPCWSTR local_800;
  int local_7fc;
  DWORD local_7f8;
  undefined4 local_7f4;
  CFileDialog local_7f0 [808];
  int local_4c8;
  undefined4 local_4c4;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de501;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_800;
  ExceptionList = &local_c;
  FUN_004b9e3f(1,L".dse",L"*.dse",2,L"dse(*.dse)|*.dse|",param_1,0,1);
  local_4 = 0;
  iVar4 = CFileDialog::DoModal(local_7f0);
  if (iVar4 != 1) goto LAB_0046ede5;
  GetFileTitle(&local_7fc);
  local_4._0_1_ = 1;
  CFileDialog::GetPathName(local_7f0);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (1 < *(int *)(local_800 + -2)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork
              ((CSimpleStringT<wchar_t,0> *)&local_800,*(int *)(local_800 + -6));
  }
  hFile = CreateFileW(local_800,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar5 = GetLastError();
    pwVar9 = L"Open dse file error=0x%x";
  }
  else {
    local_7f8 = 0;
    BVar6 = ReadFile(hFile,&local_4c8,0x4b8,&local_7f8,(LPOVERLAPPED)0x0);
    CloseHandle(hFile);
    if ((BVar6 != 0) && (local_7f8 == 0x4b8)) {
      if (local_4c8 == -0x5f5e6666) {
        local_4c4 = FUN_00479770();
        iVar4 = FUN_0046b070(param_1);
        uVar3 = DAT_00658b30;
        local_7f4 = *(undefined4 *)(iVar4 + 4);
        for (puVar8 = *(undefined4 **)(param_1 + 0x450);
            (puVar8 != (undefined4 *)0x0 && (*(int *)*puVar8 != -0x10000));
            puVar8 = (undefined4 *)puVar8[1]) {
        }
        p_Var7 = CTreeCtrl::InsertItem
                           ((CTreeCtrl *)(param_1 + 0x33c),1,(wchar_t *)(iVar4 + 8),0,0,0,0,0,
                            (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
        if (p_Var7 != (_TREEITEM *)0x0) {
          puVar8 = _malloc(0x24);
          if (puVar8 == (undefined4 *)0x0) goto LAB_0046eca7;
          *puVar8 = p_Var7;
          puVar8[4] = local_7f4;
          puVar8[5] = 0;
          puVar8[1] = 0;
          puVar8[3] = 0;
          puVar8[7] = uVar3;
          puVar8[6] = 1;
          puVar8[8] = 0;
          FUN_0044e0a0(puVar8);
          InvalidateRect(*(HWND *)(param_1 + 0x35c),(RECT *)0x0,1);
        }
        FUN_00480070((CTreeCtrl *)(param_1 + 0x33c));
      }
      else {
        FUN_00448ff0(L"This is not a dse file");
      }
LAB_0046eca7:
      FUN_0042d560();
      FUN_0042d560();
      goto LAB_0046ede5;
    }
    DVar5 = GetLastError();
    pwVar9 = L"Read dse file error=0x%x";
  }
  FUN_00448ff0(pwVar9,DVar5);
  local_4._0_1_ = 1;
  pWVar1 = local_800 + -2;
  LOCK();
  iVar4 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar4 + -1 < 1) {
    (**(code **)(**(int **)(local_800 + -8) + 4))(local_800 + -8);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  piVar2 = (int *)(local_7fc + -4);
  LOCK();
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_7fc + -0x10) + 4))((undefined4 *)(local_7fc + -0x10));
  }
LAB_0046ede5:
  local_4 = 0xffffffff;
  CFileDialog::~CFileDialog(local_7f0);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_800);
  return;
}


//==== FUNC 00424ba0  FUN_00424ba0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00424ba0(int param_1)

{
  LPCWSTR pWVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  BOOL BVar6;
  int *piVar7;
  undefined4 uVar8;
  _TREEITEM *p_Var9;
  undefined4 *puVar10;
  int iVar11;
  size_t _Size;
  int iVar12;
  int *piVar13;
  code *pcVar14;
  CTreeCtrl *this;
  wchar_t *pwVar15;
  undefined1 auStack_37c8 [4];
  int *local_37c4;
  DWORD local_37c0;
  wchar_t *local_37bc;
  undefined4 *puStack_37b8;
  LPCWSTR local_37b4;
  int local_37b0;
  int iStack_37ac;
  int iStack_37a8;
  int iStack_37a4;
  int aiStack_37a0 [5];
  undefined1 auStack_378c [68];
  int iStack_3748;
  CFileDialog local_3738 [808];
  int local_3410;
  undefined4 local_340c;
  wchar_t local_3408 [25];
  char cStack_33d5;
  int aiStack_33d4 [3313];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de1a1;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)auStack_37c8;
  ExceptionList = &local_c;
  local_37b0 = param_1;
  FUN_004b9e3f(1,L".bcf",L"*.bcf",2,L"bcf(*.bcf)|*.bcf|",param_1,0,1);
  local_4 = 0;
  iVar3 = CFileDialog::DoModal(local_3738);
  if (iVar3 == 1) {
    GetFileTitle(&local_37bc);
    local_4._0_1_ = 1;
    CFileDialog::GetPathName(local_3738);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (1 < *(int *)(local_37b4 + -2)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&local_37b4,*(int *)(local_37b4 + -6));
    }
    piVar4 = CreateFileW(local_37b4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    local_37c4 = piVar4;
    if (piVar4 == (int *)0xffffffff) {
      DVar5 = GetLastError();
      pwVar15 = L"Open profile file failed. error=0x%x";
    }
    else {
      local_3410 = 0;
      _memset(&local_340c,0,0x33f8);
      pcVar14 = ReadFile_exref;
      local_37c0 = 0;
      BVar6 = ReadFile(piVar4,&local_3410,0x33fc,&local_37c0,(LPOVERLAPPED)0x0);
      if (((BVar6 != 0) && (local_37c0 == 0x33fc)) && (local_3410 == -0x355edbb)) {
        (*DAT_0065d3e0)(L"Start import: %s, size=%d",local_3408,0x33fc);
        iVar3 = FUN_004ad0e9(0x18);
        if (iVar3 == 0) {
          puStack_37b8 = (undefined4 *)0x0;
        }
        else {
          puStack_37b8 = (undefined4 *)FUN_0044dfe0();
        }
        puStack_37b8[3] = 0;
        puStack_37b8[1] = 0x10;
        iVar3 = ReadFile(piVar4,aiStack_37a0,0x68,&local_37c0,(LPOVERLAPPED)0x0);
        while (((iVar3 != 0 && (_Size = 0, local_37c0 == 0x68)) && (aiStack_37a0[0] == -0x534665e)))
        {
          if (&stack0x00000000 != (undefined1 *)0x37a0) {
            _Size = iStack_3748 * 0xc + 0x68;
          }
          (*DAT_0065d3e0)(L"read macro: %s, id=%x, size=%d",auStack_378c,aiStack_37a0[1],_Size);
          piVar7 = _malloc(_Size);
          if (piVar7 != (int *)0x0) {
            piVar4 = aiStack_37a0;
            piVar13 = piVar7;
            for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar13 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar13 = piVar13 + 1;
            }
            DVar5 = _Size - 0x68;
            if ((0 < (int)DVar5) &&
               ((BVar6 = ReadFile(local_37c4,piVar7 + 0x1a,DVar5,&local_37c0,(LPOVERLAPPED)0x0),
                piVar4 = local_37c4, BVar6 == 0 || (local_37c0 != DVar5)))) break;
            FUN_0044e0a0(piVar7);
            (*DAT_0065d3e0)(L"    add macro: %s",piVar7 + 5);
            piVar4 = local_37c4;
            pcVar14 = ReadFile_exref;
          }
          iVar3 = (*pcVar14)(piVar4,aiStack_37a0,0x68,&local_37c0,0);
        }
        CloseHandle(piVar4);
        iVar3 = FUN_00402ed0();
        iStack_37ac = iVar3;
        iStack_37a4 = FUN_00402ed0();
        iStack_37a8 = FUN_00479ab0();
        if (iStack_37a8 != 0) {
          local_37c4 = (int *)puStack_37b8[4];
          if (local_37c4 != (int *)0x0) {
            do {
              iVar3 = *local_37c4;
              if (iVar3 != 0) {
                piVar4 = aiStack_33d4;
                iVar12 = 4;
                do {
                  iVar11 = 0x90;
                  do {
                    if ((*(char *)((int)piVar4 + -1) == '\x05') && (*piVar4 == *(int *)(iVar3 + 4)))
                    {
                      if (*(int *)(iVar3 + 0x50) == 0) {
                        Sleep(0x14);
                        uVar8 = FUN_00479770();
                        *(undefined4 *)(iVar3 + 0x50) = uVar8;
                      }
                      *piVar4 = *(int *)(iVar3 + 0x50);
                    }
                    piVar4 = piVar4 + 4;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 0x50);
                *(undefined4 *)(iVar3 + 0x50) = 0;
                FUN_00479b20(iVar3);
              }
              local_37c4 = (int *)local_37c4[1];
            } while (local_37c4 != (int *)0x0);
            local_37c4 = (int *)0x0;
            iVar3 = iStack_37ac;
          }
          Sleep(0xf);
          local_340c = FUN_00479770();
          if (1 < *(int *)(local_37bc + -2)) {
            ATL::CSimpleStringT<wchar_t,0>::Fork
                      ((CSimpleStringT<wchar_t,0> *)&local_37bc,*(int *)(local_37bc + -6));
          }
          _wcsncpy_s(local_3408,0x14,local_37bc,0xffffffff);
          iVar12 = FUN_0047a990(iVar3 + 0xa0);
          iVar3 = local_37b0;
          uVar8 = *(undefined4 *)(local_37b0 + 0x2d14);
          uVar2 = *(undefined4 *)(iVar12 + 4);
          iStack_37ac = *(int *)(local_37b0 + 0x3000);
          this = (CTreeCtrl *)(local_37b0 + 0x2d28);
          for (puVar10 = *(undefined4 **)(local_37b0 + 0x2e3c);
              (puVar10 != (undefined4 *)0x0 && (*(int *)*puVar10 != -0x10000));
              puVar10 = (undefined4 *)puVar10[1]) {
          }
          p_Var9 = CTreeCtrl::InsertItem
                             (this,1,(wchar_t *)(iVar12 + 8),0,0,0,0,0,(_TREEITEM *)0xffff0000,
                              (_TREEITEM *)0xffff0002);
          if (p_Var9 == (_TREEITEM *)0x0) {
LAB_00425017:
            FUN_00480070(this);
          }
          else {
            puVar10 = _malloc(0x24);
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = p_Var9;
              puVar10[4] = uVar2;
              puVar10[5] = 0;
              puVar10[1] = iStack_37ac;
              puVar10[3] = 0;
              puVar10[7] = uVar8;
              puVar10[6] = 1;
              puVar10[8] = 0;
              FUN_0044e0a0(puVar10);
              InvalidateRect(*(HWND *)(iVar3 + 0x2d48),(RECT *)0x0,1);
              goto LAB_00425017;
            }
          }
          if ((puStack_37b8[2] != 0) && (*(int *)(iStack_37a4 + 0xab8) != 0)) {
            FUN_0043ea80(0);
            FUN_004259b0();
          }
        }
        puVar10 = puStack_37b8;
        FUN_0044e280();
        (**(code **)*puVar10)(1);
        local_4._0_1_ = 1;
        pWVar1 = local_37b4 + -2;
        LOCK();
        iVar3 = *(int *)pWVar1;
        *(int *)pWVar1 = *(int *)pWVar1 + -1;
        UNLOCK();
        if (iVar3 + -1 < 1) {
          (**(code **)(**(int **)(local_37b4 + -8) + 4))(local_37b4 + -8);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        pwVar15 = local_37bc + -2;
        LOCK();
        iVar3 = *(int *)pwVar15;
        *(int *)pwVar15 = *(int *)pwVar15 + -1;
        UNLOCK();
        if (iVar3 == 1 || iVar3 + -1 < 0) {
          (**(code **)(**(int **)(local_37bc + -8) + 4))(local_37bc + -8);
        }
        local_4 = 0xffffffff;
        CFileDialog::~CFileDialog(local_3738);
        goto LAB_00425150;
      }
      CloseHandle(piVar4);
      DVar5 = GetLastError();
      pwVar15 = L"Read profile file failed. error=0x%x";
    }
    FUN_00448ff0(pwVar15,DVar5);
    local_4._0_1_ = 1;
    pWVar1 = local_37b4 + -2;
    LOCK();
    iVar3 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar3 + -1 < 1) {
      (**(code **)(**(int **)(local_37b4 + -8) + 4))(local_37b4 + -8);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    pwVar15 = local_37bc + -2;
    LOCK();
    iVar3 = *(int *)pwVar15;
    *(int *)pwVar15 = *(int *)pwVar15 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(local_37bc + -8) + 4))(local_37bc + -8);
    }
  }
  local_4 = 0xffffffff;
  CFileDialog::~CFileDialog(local_3738);
LAB_00425150:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_37c8);
  return;
}


//==== FUNC 0049cc00  FUN_0049cc00 ====

void FUN_0049cc00(int param_1)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD DStack_64;
  _OVERLAPPED _Stack_60;
  HANDLE pvStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [64];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&DStack_64;
  (*DAT_0065d3e0)(L"DevG5MS_ServiceThread Start...");
  _Stack_60.Internal = 0;
  _Stack_60.InternalHigh = 0;
  _Stack_60.u.s.Offset = 0;
  _Stack_60.u.s.OffsetHigh = 0;
  _Stack_60.hEvent = *(HANDLE *)(param_1 + 0x28c);
  uStack_48 = *(undefined4 *)(param_1 + 0x290);
  iVar1 = *(int *)(param_1 + 0x298);
  pvStack_4c = _Stack_60.hEvent;
  do {
    if (iVar1 != 0) {
LAB_0049cd7a:
      (*DAT_0065d3e0)(L"DevG5MS_ServiceThread Exit");
      __security_check_cookie(local_4 ^ (uint)&DStack_64);
      return;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      Sleep(500);
    }
    else {
      *(undefined4 *)(param_1 + 0x29c) = 0;
      *(undefined4 *)(param_1 + 0x2a0) = 0;
      _memset(auStack_44,0,0x40);
      auStack_44[0] = 9;
      BVar2 = ReadFile(*(HANDLE *)(param_1 + 0xc),auStack_44,8,&DStack_64,&_Stack_60);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 0x3e5) {
          DVar3 = WaitForMultipleObjects(2,&pvStack_4c,0,0xffffffff);
          if (DVar3 == 0) {
            FUN_0049cda0();
          }
          else {
            if (DVar3 == 1) {
              (*DAT_0065d3e0)(L"DevG5MS_ServiceThread hObject[1] is signal");
              BVar2 = CancelIo(*(HANDLE *)(param_1 + 0xc));
              if (BVar2 != 0) {
                GetOverlappedResult(*(HANDLE *)(param_1 + 0xc),&_Stack_60,&DStack_64,1);
              }
              goto LAB_0049cd7a;
            }
            if (DVar3 == 0xffffffff) {
              (*DAT_0065d3e0)(L"WaitForMultipleObjects failed. err=%d\n",0x3e5);
            }
          }
        }
        else {
          (*DAT_0065d3e0)(L"DevG5MS_ServiceThread ReadFile Err=%d\n",DVar3);
          if ((DVar3 == 0x48f) || (DVar3 == 6)) goto LAB_0049cd7a;
        }
      }
      else {
        FUN_0049cda0();
      }
    }
    iVar1 = *(int *)(param_1 + 0x298);
  } while( true );
}


//==== FUNC 004ac430  FUN_004ac430 ====

void __fastcall FUN_004ac430(int param_1)

{
  char cVar1;
  HANDLE hFile;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_44c [3];
  char local_449;
  DWORD local_448;
  int local_444;
  undefined1 local_440 [2];
  undefined4 local_43e;
  undefined4 local_43a;
  undefined4 local_436;
  undefined4 local_432;
  undefined4 local_42e;
  undefined4 local_42a;
  undefined4 local_426;
  undefined4 local_422;
  undefined4 local_41e;
  undefined2 local_41a;
  undefined4 local_418;
  wchar_t local_414 [260];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_44c;
  local_444 = param_1;
  if ((*(int *)(param_1 + 4) != 0) && (local_414 != (wchar_t *)0x0)) {
    __snwprintf_s(local_414,0x104,0x103,L"%s%s\\",&DAT_0065cfa8,*(int *)(param_1 + 4) + 0x46);
  }
  __snwprintf_s(local_20c,0x104,0x103,L"%sgif_list.gcc",local_414);
  hFile = CreateFileW(local_20c,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    FUN_0044e280();
    *(undefined1 *)(param_1 + 0x20) = 0xff;
    local_449 = '\0';
    local_448 = 0;
    ReadFile(hFile,&local_449,1,&local_448,(LPOVERLAPPED)0x0);
    local_43e = 0;
    local_43a = 0;
    local_436 = 0;
    local_432 = 0;
    local_42e = 0;
    local_42a = 0;
    local_426 = 0;
    local_422 = 0;
    local_41e = 0;
    local_41a = 0;
    local_418 = 0;
    local_440 = (undefined1  [2])0x0;
    iVar2 = ReadFile(hFile,local_440,0x2c,&local_448,(LPOVERLAPPED)0x0);
    while ((iVar2 != 0 && (local_448 == 0x2c))) {
      if ((&stack0x00000000 != (undefined1 *)0x440) &&
         (puVar3 = _malloc(0x2c), puVar3 != (undefined4 *)0x0)) {
        puVar4 = (undefined4 *)local_440;
        puVar5 = puVar3;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_0044e0a0(puVar3);
        param_1 = local_444;
      }
      local_440 = (undefined1  [2])0x0;
      local_43e = 0;
      local_43a = 0;
      local_436 = 0;
      local_432 = 0;
      local_42e = 0;
      local_42a = 0;
      local_426 = 0;
      local_422 = 0;
      local_41e = 0;
      local_41a = 0;
      local_418 = 0;
      iVar2 = ReadFile(hFile,local_440,0x2c,&local_448,(LPOVERLAPPED)0x0);
    }
    CloseHandle(hFile);
    if ((local_449 < '\0') || (cVar1 = local_449, *(int *)(param_1 + 0x10) <= (int)local_449)) {
      cVar1 = '\0';
    }
    *(char *)(param_1 + 0x20) = cVar1;
  }
  __security_check_cookie(local_4 ^ (uint)auStack_44c);
  return;
}


//==== FUNC 00494640  FUN_00494640 ====

void FUN_00494640(DWORD param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE unaff_ESI;
  undefined4 *unaff_EDI;
  DWORD local_30;
  _OVERLAPPED local_2c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_30;
  local_2c.Internal = 0;
  local_2c.InternalHigh = 0;
  local_2c.u.s.Offset = 0;
  local_2c.u.s.OffsetHigh = 0;
  local_2c.hEvent = (HANDLE)0x0;
  local_2c.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  local_30 = 0;
  local_18 = CONCAT31(local_18._1_3_,0x13);
  BVar1 = ReadFile(unaff_ESI,&local_18,0x14,&local_30,&local_2c);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      DVar2 = WaitForSingleObject(local_2c.hEvent,param_1);
      if (DVar2 == 0) {
        if (unaff_EDI != (undefined4 *)0x0) {
          *unaff_EDI = local_18;
          unaff_EDI[1] = local_14;
          unaff_EDI[2] = local_10;
          unaff_EDI[3] = local_c;
          unaff_EDI[4] = local_8;
        }
      }
      else if (DVar2 == 0x102) {
        BVar1 = CancelIo(unaff_ESI);
        if (BVar1 != 0) {
          GetOverlappedResult(unaff_ESI,&local_2c,&local_30,1);
        }
      }
      else {
        DVar2 = GetLastError();
        (*DAT_0065d3e0)(L"GetData_3632 Err=0x%x, hDev=%x",DVar2);
      }
    }
    else if (DVar2 == 0x48f) {
      (*DAT_0065d3e0)(L"GetData_3632 Err, dev is plugout, hDev=%x");
    }
    else {
      (*DAT_0065d3e0)(L"GetData_3632 Err=0x%x, hDev=%x",DVar2);
    }
  }
  else if (unaff_EDI != (undefined4 *)0x0) {
    *unaff_EDI = local_18;
    unaff_EDI[1] = local_14;
    unaff_EDI[2] = local_10;
    unaff_EDI[3] = local_c;
    unaff_EDI[4] = local_8;
  }
  CloseHandle(local_2c.hEvent);
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}


//==== FUNC 0049ea20  FUN_0049ea20 ====

void __thiscall FUN_0049ea20(int param_1,int param_2,int param_3)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  size_t _Size;
  undefined4 unaff_EBP;
  int iVar4;
  wchar_t *pwVar5;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte bStack_20a;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_424;
  local_420 = param_3;
  local_418 = param_1;
  if (param_3 == 0) {
    (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049ec5a:
    (*DAT_0065d3e0)(L"GetPassword failed");
  }
  else {
    local_41c = 0;
    local_424 = 0;
    do {
      iVar4 = local_424;
      _Size = 0x200;
      if ((int)(6U - local_424) < 0x200) {
        _Size = 6U - local_424;
      }
      FUN_004051e0(0x14);
      _memset(local_414,0,0x208);
      local_414[5] = (char)local_41c;
      local_41c = local_41c + 1;
      local_414[7] = (char)(_Size >> 8);
      cVar3 = '\0';
      local_414[0] = '\t';
      local_414[2] = 5;
      local_414[3] = 1;
      local_414[4] = 1;
      local_414[6] = (char)_Size;
      iVar2 = 2;
      local_414[1] = '\0';
      do {
        cVar3 = cVar3 + local_414[iVar2];
        local_414[1] = local_414[1] + local_414[iVar2 + 1];
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x208);
      local_414[1] = local_414[1] + cVar3;
      iVar2 = 3;
      do {
        cVar3 = HidD_SetFeature(local_420,local_414,0x208);
        if (cVar3 == '\0') {
          DVar1 = GetLastError();
          (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,5);
          if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049ec5a;
          (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
          iVar4 = local_424;
        }
        else {
          DVar1 = WaitForSingleObject(*(HANDLE *)(param_2 + 0x294),0x1e);
          if ((DVar1 != 0) || (*(char *)(param_2 + 0x29f) != '\x05')) {
            FUN_004051e0(0x14);
            _memset(local_414 + 0x1fc,0,0x208);
            local_414[0x1fc] = 9;
            cVar3 = HidD_GetFeature(unaff_EBP,local_414 + 0x1fc,0x208);
            if (cVar3 == '\0') {
              DVar1 = GetLastError();
              bStack_20a = 5;
              pwVar5 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
            }
            else {
              if (local_414[2] == bStack_20a) {
                _memcpy((void *)(local_418 + iVar4),auStack_204,_Size);
                break;
              }
              DVar1 = (DWORD)(byte)local_414[2];
              pwVar5 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
            }
            (*DAT_0065d3e0)(pwVar5,DVar1,bStack_20a);
            goto LAB_0049ec5a;
          }
          (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",5);
        }
        iVar2 = iVar2 + -1;
        Sleep(0x3c);
      } while (0 < iVar2);
      if (iVar2 < 0) goto LAB_0049ec5a;
      local_424 = iVar4 + _Size;
    } while (local_424 < 6);
  }
  __security_check_cookie(local_4 ^ (uint)&local_424);
  return;
}


//==== FUNC 0049ef40  FUN_0049ef40 ====

void __thiscall FUN_0049ef40(int param_1,undefined1 *param_2)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  size_t _Size;
  undefined4 unaff_EBP;
  int iVar4;
  wchar_t *pwVar5;
  int local_424;
  undefined1 *local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte bStack_20a;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_424;
  local_420 = param_2;
  if (*(int *)(param_1 + 0x234) != 1) {
    local_41c = *(int *)(param_1 + 0xc);
    if (local_41c == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049f1a5:
      (*DAT_0065d3e0)(L"GetOnline failed");
    }
    else {
      local_418 = 0;
      local_424 = 0;
      do {
        iVar4 = local_424;
        _Size = 0x200;
        if ((int)(1U - local_424) < 0x200) {
          _Size = 1U - local_424;
        }
        FUN_004051e0(0x14);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_418;
        local_418 = local_418 + 1;
        local_414[7] = (char)(_Size >> 8);
        cVar3 = '\0';
        local_414[0] = '\t';
        local_414[2] = 7;
        local_414[3] = 0;
        local_414[4] = 1;
        local_414[6] = (char)_Size;
        iVar2 = 2;
        local_414[1] = '\0';
        do {
          cVar3 = cVar3 + local_414[iVar2];
          local_414[1] = local_414[1] + local_414[iVar2 + 1];
          iVar2 = iVar2 + 2;
        } while (iVar2 < 0x208);
        local_414[1] = local_414[1] + cVar3;
        iVar2 = 3;
        do {
          cVar3 = HidD_SetFeature(local_41c,local_414,0x208);
          if (cVar3 == '\0') {
            DVar1 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,7);
            if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049f1a5;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar4 = local_424;
          }
          else {
            DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != '\a')) {
              FUN_004051e0(0x14);
              _memset(local_414 + 0x1fc,0,0x208);
              local_414[0x1fc] = 9;
              cVar3 = HidD_GetFeature(unaff_EBP,local_414 + 0x1fc,0x208);
              if (cVar3 == '\0') {
                DVar1 = GetLastError();
                bStack_20a = 7;
                pwVar5 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
              }
              else {
                if (local_414[2] == bStack_20a) {
                  _memcpy(local_420 + iVar4,auStack_204,_Size);
                  break;
                }
                DVar1 = (DWORD)(byte)local_414[2];
                pwVar5 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
              }
              (*DAT_0065d3e0)(pwVar5,DVar1,bStack_20a);
              goto LAB_0049f1a5;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",7);
          }
          iVar2 = iVar2 + -1;
          Sleep(0x3c);
        } while (0 < iVar2);
        if (iVar2 < 0) goto LAB_0049f1a5;
        local_424 = iVar4 + _Size;
      } while (local_424 < 1);
      (*DAT_0065d3e0)(L"GetOnline = %d",*local_420);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_424);
  return;
}


//==== FUNC 00495260  FUN_00495260 ====

undefined4 __fastcall
FUN_00495260(undefined1 param_1,size_t param_2,undefined4 param_3,void *param_4)

{
  char cVar1;
  DWORD DVar2;
  undefined1 *unaff_ESI;
  int iVar3;
  
  *unaff_ESI = 0;
  if (param_4 == (void *)0x0) {
    return 0;
  }
  *unaff_ESI = param_1;
  _memcpy(unaff_ESI + 1,param_4,param_2);
  iVar3 = 3;
  do {
    cVar1 = HidD_SetFeature(param_3);
    if (cVar1 != '\0') {
      return 1;
    }
    iVar3 = iVar3 + -1;
    Sleep(200);
  } while (0 < iVar3);
  DVar2 = GetLastError();
  (*DAT_0065d3e0)(L"SendCommand Err=%d",DVar2);
  return 0;
}


//==== FUNC 0049d7d0  FUN_0049d7d0 ====

void __thiscall
FUN_0049d7d0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined1 param_6,
            uint param_7,undefined4 param_8)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  bool bVar6;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  char cStack_20a;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_41c = param_2;
  iVar5 = 0;
  local_424 = param_3;
  local_420 = param_1;
  if (param_3 == 0) {
    (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
    __security_check_cookie(local_4 ^ (uint)&local_428);
    return;
  }
  if ((param_4 == 1) || (param_4 == 2)) {
    local_428 = (int)(param_7 + ((int)param_7 >> 0x1f & 0x1ffU)) >> 9;
    uVar4 = param_7 & 0x800001ff;
    bVar6 = uVar4 == 0;
    local_418 = 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_428 = local_428 + 1;
    }
    do {
      _Size = 0x200;
      if ((int)(param_7 - iVar5) < 0x200) {
        _Size = param_7 - iVar5;
      }
      if ((int)param_7 < 1) {
        local_428 = 1;
        _Size = 0;
      }
      FUN_004051e0(param_8);
      _memset(local_414,0,0x208);
      local_414[3] = param_6;
      local_414[2] = (char)param_5;
      local_414[5] = (char)local_418;
      local_418 = local_418 + 1;
      local_414[0] = '\t';
      local_414[1] = 0;
      local_414[4] = (undefined1)local_428;
      local_414[6] = (char)_Size;
      local_414[7] = (char)(_Size >> 8);
      if (((param_4 == 1) && (local_420 != 0)) && (0 < (int)param_7)) {
        _memcpy(local_414 + 8,(void *)(local_420 + iVar5),_Size);
      }
      cVar3 = '\0';
      iVar2 = 2;
      local_414[1] = '\0';
      do {
        cVar3 = cVar3 + local_414[iVar2];
        local_414[1] = local_414[1] + local_414[iVar2 + 1];
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x208);
      local_414[1] = local_414[1] + cVar3;
      iVar2 = 3;
      do {
        cVar3 = HidD_SetFeature(local_424,local_414,0x208);
        if (cVar3 == '\0') {
          DVar1 = GetLastError();
          (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,param_5);
          if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049dad3;
          (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
        }
        else {
          DVar1 = WaitForSingleObject(*(HANDLE *)(local_41c + 0x294),0x1e);
          if ((DVar1 != 0) || ((char)param_5 != *(char *)(local_41c + 0x29f))) {
            if (param_4 == 2) {
              FUN_004051e0(param_8);
              _memset(local_414 + 0x208,0,0x208);
              local_414[0x208] = 9;
              cVar3 = HidD_GetFeature(local_424,local_414 + 0x208,0x208);
              if (cVar3 == '\0') {
                DVar1 = GetLastError();
                (*DAT_0065d3e0)(L"AccessData: GetFeature nErr=%d, nCmdID=%x",DVar1,param_5);
                goto LAB_0049dad3;
              }
              if (local_414[2] != cStack_20a) {
                (*DAT_0065d3e0)(L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x"
                                ,local_414[2],cStack_20a);
                goto LAB_0049dad3;
              }
              _memcpy((void *)(local_420 + iVar5),auStack_204,_Size);
            }
            break;
          }
          (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",param_5);
        }
        iVar2 = iVar2 + -1;
        Sleep(0x3c);
      } while (0 < iVar2);
    } while ((-1 < iVar2) && (iVar5 = iVar5 + _Size, iVar5 < (int)param_7));
  }
LAB_0049dad3:
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}


//==== FUNC 00499fd0  FUN_00499fd0 ====

void __thiscall FUN_00499fd0(int param_1,int param_2)

{
  char cVar1;
  DWORD DVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  wchar_t *pwVar5;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [6];
  undefined1 local_206;
  undefined1 local_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_218;
  iVar3 = 0;
  local_218 = param_2;
  local_210 = param_1;
  if (param_2 == 0) {
    DVar2 = 0;
    pwVar5 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_0049a145:
    (*DAT_0065d3e0)(pwVar5,DVar2);
    (*DAT_0065d3e0)(L"GetPassword failed");
  }
  else {
    local_214 = 0;
    do {
      _Size = 6 - iVar3;
      if (0x1ff < (int)_Size) {
        _Size = 0x200;
      }
      FUN_004051e0(0x14);
      _memset(local_20c,0,0x208);
      local_20c[0] = ((*(int *)(*(int *)(unaff_EDI + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
      local_20c[5] = (char)local_214;
      local_214 = local_214 + 1;
      local_20c[1] = 0x82;
      local_20c[2] = 1;
      local_20c[3] = 0;
      local_20c[4] = 1;
      local_206 = (undefined1)_Size;
      local_205 = (undefined1)(_Size >> 8);
      iVar4 = 3;
      do {
        cVar1 = HidD_SetFeature(local_218,local_20c,0x208);
        if (cVar1 != '\0') break;
        iVar4 = iVar4 + -1;
        FUN_004051e0(0x46);
      } while (0 < iVar4);
      if (iVar4 < 0) {
        DVar2 = GetLastError();
        pwVar5 = L"CDevG5KB::AccessData err=%d";
        goto LAB_0049a145;
      }
      FUN_004051e0(0x14);
      cVar1 = HidD_GetFeature(local_218,local_20c,0x208);
      if (cVar1 == '\0') {
        DVar2 = GetLastError();
        (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
      }
      _memcpy((void *)(local_210 + iVar3),auStack_204,_Size);
      iVar3 = iVar3 + _Size;
    } while (iVar3 < 6);
  }
  __security_check_cookie(local_4 ^ (uint)&local_218);
  return;
}


//==== FUNC 00498f60  FUN_00498f60 ====

void __thiscall
FUN_00498f60(int param_1,int param_2,DWORD param_3,int param_4,undefined1 param_5,undefined1 param_6
            ,uint param_7,undefined4 param_8)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c;
  undefined1 local_20b;
  undefined1 local_20a;
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_220;
  local_210 = param_2;
  iVar5 = 0;
  local_220 = param_3;
  local_21c = param_1;
  if ((param_3 == 0) || ((int)param_7 < 1)) {
    pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_0049916c:
    (*DAT_0065d3e0)(pwVar7,param_3);
  }
  else if ((param_4 == 1) || (param_4 == 2)) {
    local_214 = (int)(param_7 + ((int)param_7 >> 0x1f & 0x1ffU)) >> 9;
    uVar3 = param_7 & 0x800001ff;
    bVar6 = uVar3 == 0;
    local_218 = 0;
    if ((int)uVar3 < 0) {
      bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_214 = local_214 + 1;
    }
    if (0 < (int)param_7) {
      do {
        iVar4 = local_21c;
        _Size = param_7 - iVar5;
        if (0x1ff < (int)_Size) {
          _Size = 0x200;
        }
        FUN_004051e0(param_8);
        _memset(&local_20c,0,0x208);
        local_20c = ((*(int *)(*(int *)(local_210 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
        local_208 = (undefined1)local_214;
        local_20b = param_5;
        local_207 = (undefined1)local_218;
        local_218 = local_218 + 1;
        local_20a = param_6;
        local_209 = 0;
        local_206 = (undefined1)_Size;
        local_205 = (undefined1)(_Size >> 8);
        if ((param_4 == 1) && (iVar4 != 0)) {
          _memcpy(local_204,(void *)(iVar4 + iVar5),_Size);
        }
        iVar4 = 3;
        do {
          cVar1 = HidD_SetFeature(local_220,&local_20c,0x208);
          if (cVar1 != '\0') break;
          iVar4 = iVar4 + -1;
          FUN_004051e0(0x46);
        } while (0 < iVar4);
        if (iVar4 < 0) {
          param_3 = GetLastError();
          pwVar7 = L"CDevG5KB::AccessData err=%d";
          goto LAB_0049916c;
        }
        if (param_4 == 2) {
          FUN_004051e0(param_8);
          cVar1 = HidD_GetFeature(local_220,&local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_21c + iVar5),local_204,_Size);
        }
        iVar5 = iVar5 + _Size;
      } while (iVar5 < (int)param_7);
    }
  }
  else {
    (*DAT_0065d3e0)(L"CDevG5KB::AccessData nOper err");
  }
  __security_check_cookie(local_4 ^ (uint)&local_220);
  return;
}


//==== FUNC 00495b20  FUN_00495b20 ====

void __thiscall FUN_00495b20(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  undefined1 local_204;
  undefined1 local_203;
  undefined1 local_202;
  undefined1 local_201;
  undefined1 local_200 [508];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_204;
  if (((param_2 != (void *)0x0) && ((int)param_3 < 0x17b)) &&
     (iVar1 = *(int *)(param_1 + 0x298), iVar1 != 0)) {
    local_204 = 8;
    local_203 = 10;
    local_202 = 0x7a;
    local_201 = 1;
    _memset(local_200,0,0x1fc);
    _memcpy(local_200,param_2,param_3);
    cVar2 = HidD_SetFeature(iVar1,&local_204,0x17e);
    if (cVar2 == '\0') {
      DVar3 = GetLastError();
      (*DAT_0065d3e0)(L"SendMusicData Err=0x%x",DVar3);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_204);
  return;
}


//==== FUNC 0049a160  FUN_0049a160 ====

void __thiscall FUN_0049a160(int param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  char cVar2;
  DWORD DVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  byte local_220 [4];
  int local_21c;
  int local_218;
  byte *local_214;
  undefined1 *local_210;
  char local_20c [6];
  undefined1 local_206;
  undefined1 local_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)local_220;
  local_214 = param_2;
  local_21c = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  local_210 = param_3;
  local_220[0] = 0;
  local_220[1] = 0;
  if (local_21c == 0) {
    DVar3 = 0;
    pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_0049a32d:
    (*DAT_0065d3e0)(pwVar7,DVar3);
    (*DAT_0065d3e0)(L"CDevG5KB::ReadPower failed");
  }
  else {
    local_218 = 0;
    do {
      _Size = 2 - iVar4;
      if (0x1ff < (int)_Size) {
        _Size = 0x200;
      }
      FUN_004051e0(0x14);
      _memset(local_20c,0,0x208);
      local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
      local_20c[5] = (char)local_218;
      local_218 = local_218 + 1;
      local_20c[1] = 0x87;
      local_20c[2] = 2;
      local_20c[3] = 0;
      local_20c[4] = 1;
      local_206 = (undefined1)_Size;
      local_205 = (undefined1)(_Size >> 8);
      iVar5 = 3;
      do {
        cVar2 = HidD_SetFeature(local_21c,local_20c,0x208);
        if (cVar2 != '\0') break;
        iVar5 = iVar5 + -1;
        FUN_004051e0(0x46);
      } while (0 < iVar5);
      if (iVar5 < 0) {
        DVar3 = GetLastError();
        pwVar7 = L"CDevG5KB::AccessData err=%d";
        goto LAB_0049a32d;
      }
      FUN_004051e0(0x14);
      cVar2 = HidD_GetFeature(local_21c,local_20c,0x208);
      if (cVar2 == '\0') {
        DVar3 = GetLastError();
        (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar3);
      }
      _memcpy(local_220 + iVar4,auStack_204,_Size);
      bVar1 = local_220[1];
      iVar4 = iVar4 + _Size;
    } while (iVar4 < 2);
    (*DAT_0065d3e0)(L"CDevG5KB::ReadPower  %d, %d",local_220[0],local_220[1]);
    if (local_214 != (byte *)0x0) {
      *local_214 = local_220[0];
    }
    if (local_210 != (undefined1 *)0x0) {
      bVar6 = (bVar1 & 0xf0) != 0;
      if ((bVar6) && ((bVar1 & 0xf) != 0)) {
        bVar6 = false;
      }
      *local_210 = bVar6;
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_220);
  return;
}


//==== FUNC 0049c6e0  FUN_0049c6e0 ====

void __fastcall
FUN_0049c6e0(int *param_1,code *param_2,int param_3,undefined4 param_4,int param_5,uint param_6,
            undefined1 param_7)

{
  char cVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  size_t _Size;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iStack_248;
  DWORD DStack_244;
  int iStack_240;
  int iStack_23c;
  int *local_238;
  int iStack_234;
  int iStack_230;
  int local_22c;
  uint uStack_228;
  code *local_224;
  int iStack_220;
  int local_21c;
  uint uStack_218;
  undefined4 uStack_214;
  uint uStack_210;
  char acStack_20c [4];
  char cStack_208;
  undefined1 uStack_207;
  undefined1 uStack_206;
  undefined1 uStack_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&iStack_248;
  local_22c = param_3;
  local_21c = param_5;
  local_238 = param_1;
  local_224 = param_2;
  if ((param_5 == 0) || ((int)param_6 < 1)) {
    (*DAT_0065d3e0)(L"CDevG5KB::AccessData_Page Param err");
  }
  else {
    FUN_00470c90();
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    if ((HANDLE)param_1[0x96] != (HANDLE)0x0) {
      ResetEvent((HANDLE)param_1[0x96]);
    }
    (**(code **)(param_1[0x97] + 0x14))();
    iStack_230 = (int)(param_6 + ((int)param_6 >> 0x1f & 0x1ffU)) >> 9;
    uStack_218 = param_6 & 0x800001ff;
    if ((int)uStack_218 < 0) {
      uStack_218 = (uStack_218 - 1 | 0xfffffe00) + 1;
    }
    if (uStack_218 != 0) {
      iStack_230 = iStack_230 + 1;
    }
    iVar5 = 0;
    iStack_248 = 0;
    DStack_244 = 0;
    if (0 < iStack_230) {
LAB_0049c7bb:
      uVar2 = 0x200;
      if ((uStack_218 != 0) && (DStack_244 == iStack_230 - 1U)) {
        uVar2 = uStack_218;
      }
      uVar4 = uVar2 & 0x800001ff;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffe00) + 1;
      }
      iStack_220 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1ffU)) >> 9;
      uStack_228 = uVar4;
      do {
        iVar7 = 0;
        iStack_234 = iStack_220;
        if (uVar4 != 0) {
          iStack_234 = iStack_220 + 1;
        }
        iStack_240 = 0;
        iStack_23c = 0;
        if (0 < iStack_234) {
          do {
            _Size = 0x200;
            if ((uStack_228 != 0) && (iVar7 == iStack_234 + -1)) {
              _Size = uStack_228;
            }
            _memset(acStack_20c,0,0x208);
            acStack_20c[0] = ((*(int *)(local_238[4] + 0x18) != 0x18) - 1U & 0xfd) + 9;
            acStack_20c[3] = param_7;
            cStack_208 = (char)iStack_248;
            acStack_20c[1] = 0xc;
            acStack_20c[2] = 0;
            uStack_207 = 0;
            uStack_206 = (undefined1)_Size;
            uStack_205 = (undefined1)(_Size >> 8);
            _memcpy(auStack_204,(void *)(local_21c + iVar5),_Size);
            if (DAT_0065d3dc != 0) {
              FUN_00407c90(acStack_20c,0x20,0,L"Send: ");
            }
            if (local_22c != 0) {
              iVar6 = 3;
              do {
                cVar1 = HidD_SetFeature(local_22c,acStack_20c,0x208);
                if (cVar1 != '\0') break;
                iVar6 = iVar6 + -1;
                FUN_004051e0(100);
              } while (0 < iVar6);
              param_2 = local_224;
              if (iVar6 < 0) {
                DVar3 = GetLastError();
                pwVar8 = L"CDevG5KB::AccessData_Page err=%d";
                goto LAB_0049ca07;
              }
            }
            iStack_240 = iStack_240 + _Size;
            iStack_23c = iStack_23c + 1;
            iStack_248 = iStack_248 + 1;
            iVar5 = iVar5 + _Size;
            if (param_2 != (code *)0x0) {
              (*param_2)(param_4,param_6,iVar5);
            }
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData_Page send package %d ok, dataUnit=%d",iStack_248,
                            DStack_244);
            iVar7 = iVar7 + 1;
            uVar4 = uStack_228;
          } while (iVar7 < iStack_234);
        }
        uStack_214 = 0;
        uStack_210 = 0;
        iVar7 = FUN_004988f0();
        if (iVar7 != 0) {
          pwVar8 = L"CDevG5KB::AccessData_Page timeout, k=%d";
          DVar3 = DStack_244;
LAB_0049ca07:
          (*DAT_0065d3e0)(pwVar8,DVar3);
          break;
        }
        if ((uStack_214._3_1_ != '\0') && ((char)uStack_210 == cStack_208)) goto LAB_0049c9cf;
        (*DAT_0065d3e0)(L"CDevG5KB::AccessData_Page send this page, Buffer=%x %x %x %x %x",
                        uStack_214 & 0xff,uStack_214 >> 8 & 0xff,uStack_214 >> 0x10 & 0xff,
                        uStack_214._3_1_,uStack_210 & 0xff);
        iVar5 = iVar5 - iStack_240;
        iStack_248 = iStack_248 - iStack_23c;
        Sleep(0x19);
      } while( true );
    }
  }
LAB_0049ca13:
  __security_check_cookie(local_4 ^ (uint)&iStack_248);
  return;
LAB_0049c9cf:
  iVar7 = (**(code **)(*local_238 + 0x94))();
  if (iVar7 != 0) {
    (*DAT_0065d3e0)(L"CDevG5KB::AccessData_Page cancel by user");
    goto LAB_0049ca13;
  }
  DStack_244 = DStack_244 + 1;
  if (iStack_230 <= (int)DStack_244) goto LAB_0049ca13;
  goto LAB_0049c7bb;
}


//==== FUNC 004991e0  FUN_004991e0 ====

void __thiscall FUN_004991e0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [3];
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_3;
  if (*(int *)(param_1 + 0x23c) == 0) {
    local_21c = *(int *)(param_1 + 0xc);
    if ((local_21c == 0) || ((int)param_4 < 1)) {
      (*DAT_0065d3e0)(L"CDevG5KB::AccessData Param err, hDev=%x",local_21c);
    }
    else {
      local_218 = (int)(param_4 + ((int)param_4 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_4 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_4) {
        do {
          _Size = param_4 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_208 = (undefined1)local_218;
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[1] = 0x83;
          local_20c[2] = (undefined1)param_2;
          local_209 = 0;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData err=%d",DVar2);
            break;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),auStack_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_4);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x60))(param_2,param_3,param_4);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}


//==== FUNC 00499440  FUN_00499440 ====

void __thiscall FUN_00499440(int param_1,int param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [5];
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    DVar2 = *(DWORD *)(param_1 + 0xc);
    local_21c = DVar2;
    if ((DVar2 == 0) || ((int)param_3 < 1)) {
      pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499620:
      (*DAT_0065d3e0)(pwVar7,DVar2);
      (*DAT_0065d3e0)(L"GetMacro failed");
    }
    else {
      local_218 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_3 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_3) {
        do {
          _Size = param_3 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_20c[1] = 0x85;
          local_20c[2] = 0;
          local_20c[3] = 0;
          local_20c[4] = (undefined1)local_218;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            pwVar7 = L"CDevG5KB::AccessData err=%d";
            goto LAB_00499620;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),auStack_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_3);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x68))(param_2,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}


//==== FUNC 00499690  FUN_00499690 ====

void __thiscall FUN_00499690(int param_1,int param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [5];
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    DVar2 = *(DWORD *)(param_1 + 0xc);
    local_21c = DVar2;
    if ((DVar2 == 0) || ((int)param_3 < 1)) {
      pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499870:
      (*DAT_0065d3e0)(pwVar7,DVar2);
      (*DAT_0065d3e0)(L"GetLED failed");
    }
    else {
      local_218 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_3 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_3) {
        do {
          _Size = param_3 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_20c[1] = 0x84;
          local_20c[2] = 0;
          local_20c[3] = 0;
          local_20c[4] = (undefined1)local_218;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            pwVar7 = L"CDevG5KB::AccessData err=%d";
            goto LAB_00499870;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),auStack_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_3);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x70))(param_2,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}


//==== FUNC 004998f0  FUN_004998f0 ====

void __thiscall FUN_004998f0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [3];
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_3;
  if (*(int *)(param_1 + 0x23c) == 0) {
    DVar2 = *(DWORD *)(param_1 + 0xc);
    local_21c = DVar2;
    if ((DVar2 == 0) || ((int)param_4 < 1)) {
      pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499ad3:
      (*DAT_0065d3e0)(pwVar7,DVar2);
      (*DAT_0065d3e0)(L"GetGame failed");
    }
    else {
      local_218 = (int)(param_4 + ((int)param_4 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_4 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_4) {
        do {
          _Size = param_4 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_208 = (undefined1)local_218;
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[1] = 0x86;
          local_20c[2] = (undefined1)param_2;
          local_209 = 0;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            pwVar7 = L"CDevG5KB::AccessData err=%d";
            goto LAB_00499ad3;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),auStack_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_4);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x78))(param_2,param_3,param_4);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}


//==== FUNC 00499d30  FUN_00499d30 ====

void __thiscall FUN_00499d30(int param_1,int param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [5];
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  iVar4 = 0;
  local_210 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    DVar2 = *(DWORD *)(param_1 + 0xc);
    local_21c = DVar2;
    if ((DVar2 == 0) || ((int)param_3 < 1)) {
      pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499f10:
      (*DAT_0065d3e0)(pwVar7,DVar2);
      (*DAT_0065d3e0)(L"GetLedRgbTab failed");
    }
    else {
      local_218 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
      uVar3 = param_3 & 0x800001ff;
      bVar6 = uVar3 == 0;
      local_214 = 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_218 = local_218 + 1;
      }
      if (0 < (int)param_3) {
        do {
          _Size = param_3 - iVar4;
          if (0x1ff < (int)_Size) {
            _Size = 0x200;
          }
          FUN_004051e0(0x14);
          _memset(local_20c,0,0x208);
          local_207 = (undefined1)local_214;
          local_214 = local_214 + 1;
          local_20c[0] = ((*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
          local_20c[1] = 0x8a;
          local_20c[2] = 0;
          local_20c[3] = 0;
          local_20c[4] = (undefined1)local_218;
          local_206 = (undefined1)_Size;
          local_205 = (undefined1)(_Size >> 8);
          iVar5 = 3;
          do {
            cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
            if (cVar1 != '\0') break;
            iVar5 = iVar5 + -1;
            FUN_004051e0(0x46);
          } while (0 < iVar5);
          if (iVar5 < 0) {
            DVar2 = GetLastError();
            pwVar7 = L"CDevG5KB::AccessData err=%d";
            goto LAB_00499f10;
          }
          FUN_004051e0(0x14);
          cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
          if (cVar1 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
          }
          _memcpy((void *)(local_210 + iVar4),auStack_204,_Size);
          iVar4 = iVar4 + _Size;
        } while (iVar4 < (int)param_3);
      }
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x80))(param_2,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}


//==== FUNC 00499b00  FUN_00499b00 ====

void FUN_00499b00(int param_1,uint param_2)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  bool bVar6;
  wchar_t *pwVar7;
  DWORD local_21c;
  int local_218;
  int local_214;
  int local_210;
  char local_20c [5];
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_21c;
  local_210 = param_1;
  DVar2 = *(DWORD *)(unaff_EDI + 0xc);
  iVar4 = 0;
  local_21c = DVar2;
  if ((DVar2 == 0) || ((int)param_2 < 1)) {
    pwVar7 = L"CDevG5KB::AccessData Param err, hDev=%x";
LAB_00499cc0:
    (*DAT_0065d3e0)(pwVar7,DVar2);
    (*DAT_0065d3e0)(L"GetRealData failed");
  }
  else {
    local_218 = (int)(param_2 + ((int)param_2 >> 0x1f & 0x1ffU)) >> 9;
    uVar3 = param_2 & 0x800001ff;
    bVar6 = uVar3 == 0;
    local_214 = 0;
    if ((int)uVar3 < 0) {
      bVar6 = (uVar3 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_218 = local_218 + 1;
    }
    if (0 < (int)param_2) {
      do {
        _Size = param_2 - iVar4;
        if (0x1ff < (int)_Size) {
          _Size = 0x200;
        }
        FUN_004051e0(0x14);
        _memset(local_20c,0,0x208);
        local_207 = (undefined1)local_214;
        local_214 = local_214 + 1;
        local_20c[0] = ((*(int *)(*(int *)(unaff_EDI + 0x10) + 0x18) != 0x18) - 1U & 0xfd) + 9;
        local_20c[1] = 0x88;
        local_20c[2] = 0;
        local_20c[3] = 0;
        local_20c[4] = (undefined1)local_218;
        local_206 = (undefined1)_Size;
        local_205 = (undefined1)(_Size >> 8);
        iVar5 = 3;
        do {
          cVar1 = HidD_SetFeature(local_21c,local_20c,0x208);
          if (cVar1 != '\0') break;
          iVar5 = iVar5 + -1;
          FUN_004051e0(0x46);
        } while (0 < iVar5);
        if (iVar5 < 0) {
          DVar2 = GetLastError();
          pwVar7 = L"CDevG5KB::AccessData err=%d";
          goto LAB_00499cc0;
        }
        FUN_004051e0(0x14);
        cVar1 = HidD_GetFeature(local_21c,local_20c,0x208);
        if (cVar1 == '\0') {
          DVar2 = GetLastError();
          (*DAT_0065d3e0)(L"CDevG5KB::AccessData read err=%d",DVar2);
        }
        _memcpy((void *)(local_210 + iVar4),auStack_204,_Size);
        iVar4 = iVar4 + _Size;
      } while (iVar4 < (int)param_2);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_21c);
  return;
}


//==== FUNC 0049ec70  FUN_0049ec70 ====

void __thiscall FUN_0049ec70(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  DWORD DVar2;
  int iVar3;
  char cVar4;
  size_t _Size;
  int iVar5;
  wchar_t *pwVar6;
  char *local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte bStack_20a;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_428 = param_2;
  local_418 = param_3;
  if (param_2 != (char *)0x0) {
    local_41c = *(int *)(param_1 + 0xc);
    if (local_41c == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049eee5:
      (*DAT_0065d3e0)(L"GetPower failed");
    }
    else {
      local_424 = 0;
      local_420 = 0;
      do {
        iVar5 = local_420;
        _Size = 0x200;
        if ((int)(1U - local_420) < 0x200) {
          _Size = 1U - local_420;
        }
        FUN_004051e0(0x14);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_424;
        local_424 = local_424 + 1;
        local_414[7] = (char)(_Size >> 8);
        cVar4 = '\0';
        local_414[0] = '\t';
        local_414[2] = 9;
        local_414[3] = 1;
        local_414[4] = 1;
        local_414[6] = (char)_Size;
        iVar3 = 2;
        local_414[1] = '\0';
        do {
          cVar4 = cVar4 + local_414[iVar3];
          local_414[1] = local_414[1] + local_414[iVar3 + 1];
          iVar3 = iVar3 + 2;
        } while (iVar3 < 0x208);
        local_414[1] = local_414[1] + cVar4;
        iVar3 = 3;
        do {
          cVar4 = HidD_SetFeature(local_41c,local_414,0x208);
          if (cVar4 == '\0') {
            DVar2 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar2,9);
            if ((DVar2 == 0x48f) || (DVar2 == 6)) goto LAB_0049eee5;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar5 = local_420;
          }
          else {
            DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar2 != 0) || (*(char *)(param_1 + 0x29f) != '\t')) {
              FUN_004051e0(0x14);
              _memset(local_414 + 0x1fc,0,0x208);
              local_414[0x1fc] = 9;
              cVar4 = HidD_GetFeature(local_428,local_414 + 0x1fc,0x208);
              if (cVar4 == '\0') {
                DVar2 = GetLastError();
                bStack_20a = 9;
                pwVar6 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
              }
              else {
                if (local_414[2] == bStack_20a) {
                  _memcpy(local_428 + iVar5,auStack_204,_Size);
                  break;
                }
                DVar2 = (DWORD)(byte)local_414[2];
                pwVar6 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
              }
              (*DAT_0065d3e0)(pwVar6,DVar2,bStack_20a);
              goto LAB_0049eee5;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",9);
          }
          iVar3 = iVar3 + -1;
          Sleep(0x3c);
        } while (0 < iVar3);
        pcVar1 = local_428;
        if (iVar3 < 0) goto LAB_0049eee5;
        local_420 = iVar5 + _Size;
      } while (local_420 < 1);
      (*DAT_0065d3e0)(L"CDevG5MS::ReadPower  %d",*local_428);
      if (local_418 != 0) {
        *(bool *)local_418 = *pcVar1 == -1;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}


//==== FUNC 0049db30  FUN_0049db30 ====

void __thiscall FUN_0049db30(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  size_t _Size;
  undefined4 unaff_EBP;
  int iVar5;
  bool bVar6;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  char cStack_20a;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_418 = param_3;
  if (*(int *)(param_1 + 0x23c) == 0) {
    local_420 = *(int *)(param_1 + 0xc);
    if (local_420 == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
    }
    else {
      local_428 = (int)(param_4 + ((int)param_4 >> 0x1f & 0x1ffU)) >> 9;
      uVar4 = param_4 & 0x800001ff;
      bVar6 = uVar4 == 0;
      local_41c = 0;
      local_424 = 0;
      if ((int)uVar4 < 0) {
        bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_428 = local_428 + 1;
      }
      do {
        iVar5 = local_424;
        _Size = 0x200;
        if ((int)(param_4 - local_424) < 0x200) {
          _Size = param_4 - local_424;
        }
        if ((int)param_4 < 1) {
          local_428 = 1;
          _Size = 0;
        }
        FUN_004051e0(0x14);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_41c;
        local_41c = local_41c + 1;
        local_414[4] = (undefined1)local_428;
        local_414[3] = (undefined1)param_2;
        local_414[7] = (char)(_Size >> 8);
        cVar3 = '\0';
        local_414[0] = '\t';
        local_414[2] = 'A';
        local_414[6] = (char)_Size;
        iVar2 = 2;
        local_414[1] = '\0';
        do {
          cVar3 = cVar3 + local_414[iVar2];
          local_414[1] = local_414[1] + local_414[iVar2 + 1];
          iVar2 = iVar2 + 2;
        } while (iVar2 < 0x208);
        local_414[1] = local_414[1] + cVar3;
        iVar2 = 3;
        do {
          cVar3 = HidD_SetFeature(local_420,local_414,0x208);
          if (cVar3 == '\0') {
            DVar1 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x41);
            if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049dddd;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar5 = local_424;
          }
          else {
            DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != 'A')) {
              FUN_004051e0(0x14);
              _memset(local_414 + 0x1fc,0,0x208);
              local_414[0x1fc] = 9;
              cVar3 = HidD_GetFeature(unaff_EBP,local_414 + 0x1fc,0x208);
              if (cVar3 == '\0') {
                DVar1 = GetLastError();
                (*DAT_0065d3e0)(L"AccessData: GetFeature nErr=%d, nCmdID=%x",DVar1,0x41);
                goto LAB_0049dddd;
              }
              if (local_414[2] != cStack_20a) {
                (*DAT_0065d3e0)(L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x"
                                ,local_414[2],cStack_20a);
                goto LAB_0049dddd;
              }
              _memcpy((void *)(iVar5 + local_418),auStack_204,_Size);
              break;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x41);
          }
          iVar2 = iVar2 + -1;
          Sleep(0x3c);
        } while (0 < iVar2);
      } while ((-1 < iVar2) && (local_424 = iVar5 + _Size, local_424 < (int)param_4));
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x60))(param_2,param_3,param_4);
  }
LAB_0049dddd:
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}


//==== FUNC 0049de50  FUN_0049de50 ====

void __thiscall FUN_0049de50(int param_1,int param_2,uint param_3)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  size_t _Size;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte bStack_20a;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_418 = param_2;
  local_420 = *(int *)(param_1 + 0xc);
  if (local_420 == 0) {
    (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049e0b7:
    (*DAT_0065d3e0)(L"GetMacro failed");
  }
  else {
    local_428 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
    uVar4 = param_3 & 0x800001ff;
    bVar6 = uVar4 == 0;
    local_41c = 0;
    local_424 = 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_428 = local_428 + 1;
    }
    do {
      iVar5 = local_424;
      _Size = 0x200;
      if ((int)(param_3 - local_424) < 0x200) {
        _Size = param_3 - local_424;
      }
      if ((int)param_3 < 1) {
        local_428 = 1;
        _Size = 0;
      }
      FUN_004051e0(0x14);
      _memset(local_414,0,0x208);
      local_414[5] = (char)local_41c;
      local_41c = local_41c + 1;
      local_414[7] = (char)(_Size >> 8);
      local_414[4] = (undefined1)local_428;
      cVar3 = '\0';
      local_414[0] = '\t';
      local_414[2] = 0x43;
      local_414[3] = 0;
      local_414[6] = (char)_Size;
      iVar2 = 2;
      local_414[1] = '\0';
      do {
        cVar3 = cVar3 + local_414[iVar2];
        local_414[1] = local_414[1] + local_414[iVar2 + 1];
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x208);
      local_414[1] = local_414[1] + cVar3;
      iVar2 = 3;
      do {
        cVar3 = HidD_SetFeature(local_420,local_414,0x208);
        if (cVar3 == '\0') {
          DVar1 = GetLastError();
          (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x43);
          if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049e0b7;
          (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
          iVar5 = local_424;
        }
        else {
          DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
          if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != 'C')) {
            FUN_004051e0(0x14);
            _memset(local_414 + 0x1fc,0,0x208);
            local_414[0x1fc] = 9;
            cVar3 = HidD_GetFeature(unaff_EBX,local_414 + 0x1fc,0x208);
            if (cVar3 == '\0') {
              DVar1 = GetLastError();
              bStack_20a = 0x43;
              pwVar7 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
            }
            else {
              if (local_414[2] == bStack_20a) {
                _memcpy((void *)(iVar5 + local_418),auStack_204,_Size);
                break;
              }
              DVar1 = (DWORD)(byte)local_414[2];
              pwVar7 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
            }
            (*DAT_0065d3e0)(pwVar7,DVar1,bStack_20a);
            goto LAB_0049e0b7;
          }
          (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x43);
        }
        iVar2 = iVar2 + -1;
        Sleep(0x3c);
      } while (0 < iVar2);
      if (iVar2 < 0) goto LAB_0049e0b7;
      local_424 = iVar5 + _Size;
    } while (local_424 < (int)param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}


//==== FUNC 0049e140  FUN_0049e140 ====

void __thiscall FUN_0049e140(int param_1,int param_2,uint param_3)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  size_t _Size;
  undefined4 unaff_EBP;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte bStack_20a;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_418 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    local_420 = *(int *)(param_1 + 0xc);
    if (local_420 == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049e3c7:
      (*DAT_0065d3e0)(L"GetLED failed");
    }
    else {
      local_428 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
      uVar4 = param_3 & 0x800001ff;
      bVar6 = uVar4 == 0;
      local_41c = 0;
      local_424 = 0;
      if ((int)uVar4 < 0) {
        bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
      }
      if (!bVar6) {
        local_428 = local_428 + 1;
      }
      do {
        iVar5 = local_424;
        _Size = 0x200;
        if ((int)(param_3 - local_424) < 0x200) {
          _Size = param_3 - local_424;
        }
        if ((int)param_3 < 1) {
          local_428 = 1;
          _Size = 0;
        }
        FUN_004051e0(0x14);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_41c;
        local_41c = local_41c + 1;
        local_414[7] = (char)(_Size >> 8);
        local_414[4] = (undefined1)local_428;
        cVar3 = '\0';
        local_414[0] = '\t';
        local_414[2] = 0x44;
        local_414[3] = 0;
        local_414[6] = (char)_Size;
        local_414[1] = '\0';
        iVar2 = 2;
        do {
          cVar3 = cVar3 + local_414[iVar2];
          local_414[1] = local_414[1] + local_414[iVar2 + 1];
          iVar2 = iVar2 + 2;
        } while (iVar2 < 0x208);
        local_414[1] = local_414[1] + cVar3;
        iVar2 = 3;
        do {
          cVar3 = HidD_SetFeature(local_420,local_414,0x208);
          if (cVar3 == '\0') {
            DVar1 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x44);
            if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049e3c7;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar5 = local_424;
          }
          else {
            DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != 'D')) {
              FUN_004051e0(0x14);
              _memset(local_414 + 0x1fc,0,0x208);
              local_414[0x1fc] = 9;
              cVar3 = HidD_GetFeature(unaff_EBP,local_414 + 0x1fc,0x208);
              if (cVar3 == '\0') {
                DVar1 = GetLastError();
                bStack_20a = 0x44;
                pwVar7 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
              }
              else {
                if (local_414[2] == bStack_20a) {
                  _memcpy((void *)(iVar5 + local_418),auStack_204,_Size);
                  break;
                }
                DVar1 = (DWORD)(byte)local_414[2];
                pwVar7 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
              }
              (*DAT_0065d3e0)(pwVar7,DVar1,bStack_20a);
              goto LAB_0049e3c7;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x44);
          }
          iVar2 = iVar2 + -1;
          Sleep(0x3c);
        } while (0 < iVar2);
        if (iVar2 < 0) goto LAB_0049e3c7;
        local_424 = iVar5 + _Size;
      } while (local_424 < (int)param_3);
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x70))(param_2,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}


//==== FUNC 0049e460  FUN_0049e460 ====

void __thiscall FUN_0049e460(int param_1,undefined1 *param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  size_t _Size;
  undefined4 unaff_EBP;
  int iVar5;
  wchar_t *pwVar6;
  undefined1 auStack_428 [3];
  undefined1 local_425;
  int local_424;
  int local_420;
  int local_41c;
  undefined1 *local_418;
  char local_414 [522];
  byte bStack_20a;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_428;
  local_418 = param_2;
  if (*(int *)(param_1 + 0x23c) == 0) {
    local_420 = *(int *)(param_1 + 0xc);
    local_425 = 0;
    if (local_420 == 0) {
      (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049e6c2:
      (*DAT_0065d3e0)(L"GetOnBoard failed");
    }
    else {
      local_41c = 0;
      local_424 = 0;
      do {
        iVar5 = local_424;
        _Size = 0x200;
        if ((int)(1U - local_424) < 0x200) {
          _Size = 1U - local_424;
        }
        FUN_004051e0(0x32);
        _memset(local_414,0,0x208);
        local_414[5] = (char)local_41c;
        local_41c = local_41c + 1;
        local_414[7] = (char)(_Size >> 8);
        cVar4 = '\0';
        local_414[0] = '\t';
        local_414[2] = 0x4a;
        local_414[3] = 0;
        local_414[4] = 1;
        local_414[6] = (char)_Size;
        local_414[1] = '\0';
        iVar3 = 2;
        do {
          cVar4 = cVar4 + local_414[iVar3];
          local_414[1] = local_414[1] + local_414[iVar3 + 1];
          iVar3 = iVar3 + 2;
        } while (iVar3 < 0x208);
        local_414[1] = local_414[1] + cVar4;
        iVar3 = 3;
        do {
          cVar4 = HidD_SetFeature(local_420,local_414,0x208);
          if (cVar4 == '\0') {
            DVar1 = GetLastError();
            (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x4a);
            if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049e6c2;
            (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
            iVar5 = local_424;
          }
          else {
            DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
            if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != 'J')) {
              FUN_004051e0(0x32);
              _memset(local_414 + 0x1fc,0,0x208);
              local_414[0x1fc] = 9;
              cVar4 = HidD_GetFeature(unaff_EBP,local_414 + 0x1fc,0x208);
              if (cVar4 == '\0') {
                uVar2 = GetLastError();
                bStack_20a = 0x4a;
                pwVar6 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
              }
              else {
                if (local_414[2] == bStack_20a) {
                  _memcpy(&local_425 + iVar5,auStack_204,_Size);
                  break;
                }
                uVar2 = (uint)(byte)local_414[2];
                pwVar6 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
              }
              (*DAT_0065d3e0)(pwVar6,uVar2,bStack_20a);
              goto LAB_0049e6c2;
            }
            (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x4a);
          }
          iVar3 = iVar3 + -1;
          Sleep(0x3c);
        } while (0 < iVar3);
        if (iVar3 < 0) goto LAB_0049e6c2;
        local_424 = iVar5 + _Size;
      } while (local_424 < 1);
      *local_418 = local_425;
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x23c) + 0x88))(param_2);
  }
  __security_check_cookie(local_4 ^ (uint)auStack_428);
  return;
}


//==== FUNC 0049e730  FUN_0049e730 ====

void FUN_0049e730(int param_1,int param_2,uint param_3)

{
  DWORD DVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  size_t _Size;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  char local_414 [522];
  byte bStack_20a;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_428;
  local_418 = param_2;
  local_420 = *(int *)(param_1 + 0xc);
  if (local_420 == 0) {
    (*DAT_0065d3e0)(L"CDevG5MS::AccessData Param err, hDev=%x",0);
LAB_0049e9a0:
    (*DAT_0065d3e0)(L"GetRealData failed");
  }
  else {
    local_428 = (int)(param_3 + ((int)param_3 >> 0x1f & 0x1ffU)) >> 9;
    uVar4 = param_3 & 0x800001ff;
    bVar6 = uVar4 == 0;
    local_41c = 0;
    local_424 = 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffe00) == 0xffffffff;
    }
    if (!bVar6) {
      local_428 = local_428 + 1;
    }
    do {
      iVar5 = local_424;
      _Size = 0x200;
      if ((int)(param_3 - local_424) < 0x200) {
        _Size = param_3 - local_424;
      }
      if ((int)param_3 < 1) {
        local_428 = 1;
        _Size = 0;
      }
      FUN_004051e0(0x14);
      _memset(local_414,0,0x208);
      local_414[5] = (char)local_41c;
      local_41c = local_41c + 1;
      local_414[7] = (char)(_Size >> 8);
      local_414[4] = (undefined1)local_428;
      cVar3 = '\0';
      local_414[0] = '\t';
      local_414[2] = 0x88;
      local_414[3] = 0;
      local_414[6] = (char)_Size;
      iVar2 = 2;
      local_414[1] = '\0';
      do {
        cVar3 = cVar3 + local_414[iVar2];
        local_414[1] = local_414[1] + local_414[iVar2 + 1];
        iVar2 = iVar2 + 2;
      } while (iVar2 < 0x208);
      local_414[1] = local_414[1] + cVar3;
      iVar2 = 3;
      do {
        cVar3 = HidD_SetFeature(local_420,local_414,0x208);
        if (cVar3 == '\0') {
          DVar1 = GetLastError();
          (*DAT_0065d3e0)(L"AccessData: SetFeature nErr=%d, nCmdID=%x",DVar1,0x88);
          if ((DVar1 == 0x48f) || (DVar1 == 6)) goto LAB_0049e9a0;
          (*DAT_0065d3e0)(L"AccessData: retry SetFeature now");
          iVar5 = local_424;
        }
        else {
          DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x294),0x1e);
          if ((DVar1 != 0) || (*(char *)(param_1 + 0x29f) != -0x78)) {
            FUN_004051e0(0x14);
            _memset(local_414 + 0x1fc,0,0x208);
            local_414[0x1fc] = 9;
            cVar3 = HidD_GetFeature(unaff_EBX,local_414 + 0x1fc,0x208);
            if (cVar3 == '\0') {
              DVar1 = GetLastError();
              bStack_20a = 0x88;
              pwVar7 = L"AccessData: GetFeature nErr=%d, nCmdID=%x";
            }
            else {
              if (local_414[2] == bStack_20a) {
                _memcpy((void *)(iVar5 + local_418),auStack_204,_Size);
                break;
              }
              DVar1 = (DWORD)(byte)local_414[2];
              pwVar7 = L"AccessData: GetFeature Failed, cmd id unmatch, Buffer[2]=%x, bBuf[2]=%x";
            }
            (*DAT_0065d3e0)(pwVar7,DVar1,bStack_20a);
            goto LAB_0049e9a0;
          }
          (*DAT_0065d3e0)(L"AccessData CRC err for nCmdID=%x, retry now",0x88);
        }
        iVar2 = iVar2 + -1;
        Sleep(0x3c);
      } while (0 < iVar2);
      if (iVar2 < 0) goto LAB_0049e9a0;
      local_424 = iVar5 + _Size;
    } while (local_424 < (int)param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_428);
  return;
}


//==== FUNC 004952f0  FUN_004952f0 ====

undefined4 __fastcall
FUN_004952f0(undefined1 param_1,undefined1 *param_2,undefined4 param_3,size_t param_4)

{
  char cVar1;
  DWORD DVar2;
  void *unaff_EBX;
  int iVar3;
  
  *param_2 = 0;
  if (unaff_EBX == (void *)0x0) {
    return 0;
  }
  *param_2 = param_1;
  iVar3 = 3;
  do {
    cVar1 = HidD_GetFeature(param_3,param_2,param_4 + 1);
    if (cVar1 != '\0') {
      _memcpy(unaff_EBX,param_2 + 1,param_4);
      return 1;
    }
    iVar3 = iVar3 + -1;
    Sleep(200);
  } while (0 < iVar3);
  DVar2 = GetLastError();
  (*DAT_0065d3e0)(L"GetCommand Err=%d",DVar2);
  return 0;
}


//==== FUNC 0040ba40  FUN_0040ba40 ====

undefined4 FUN_0040ba40(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_c [12];
  
  iVar2 = FUN_00479590();
  if ((iVar2 != 0) && (*(int **)(iVar2 + 0x1c) != (int *)0x0)) {
    uVar3 = (**(code **)(**(int **)(iVar2 + 0x1c) + 0x14))();
    cVar1 = HidD_GetAttributes(uVar3,auStack_c);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(**(int **)(iVar2 + 0x1c) + 0x14))();
      (*DAT_0065d3e0)(L"clear_dev_by_path: name=%s, dev=0x%x, path=%s",iVar2 + 0x46,uVar3);
      if (iVar2 == DAT_00651534) {
        DAT_00651534 = 0;
      }
      (**(code **)(**(int **)(iVar2 + 0x1c) + 0x18))();
      Sleep(0x32);
      if (*(undefined4 **)(iVar2 + 0x1c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar2 + 0x1c))(1);
      }
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      FUN_00409080();
    }
    return 1;
  }
  return 0;
}


//==== FUNC 00416f00  FUN_00416f00 ====

void __fastcall FUN_00416f00(HDEVINFO param_1,PSP_DEVICE_INTERFACE_DATA param_2)

{
  WCHAR *lpFileName;
  char cVar1;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W DeviceInterfaceDetailData;
  BOOL BVar2;
  HANDLE hObject;
  int iVar3;
  uint uVar4;
  wchar_t *_DstBuf;
  HANDLE local_64;
  HANDLE local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [4];
  ushort uStack_54;
  ushort uStack_52;
  ushort uStack_4c;
  ushort uStack_4a;
  ushort uStack_48;
  ushort uStack_46;
  ushort uStack_44;
  uint local_8;
  
  local_8 = DAT_0064f674 ^ (uint)&local_64;
  local_60 = (HANDLE)0x0;
  SetupDiGetDeviceInterfaceDetailW
            (param_1,param_2,(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0,0,(PDWORD)&local_60,
             (PSP_DEVINFO_DATA)0x0);
  local_64 = local_60;
  DeviceInterfaceDetailData = _malloc((size_t)local_60);
  if (DeviceInterfaceDetailData != (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0) {
    DeviceInterfaceDetailData->cbSize = 6;
    BVar2 = SetupDiGetDeviceInterfaceDetailW
                      (param_1,param_2,DeviceInterfaceDetailData,(DWORD)local_64,(PDWORD)&local_60,
                       (PSP_DEVINFO_DATA)0x0);
    if (BVar2 == 0) {
      OutputDebugStringW(L"Error: SetupDiGetInterfaceDeviceDetail failed");
    }
    else {
      lpFileName = DeviceInterfaceDetailData->DevicePath;
      if (DAT_00669628 == 0) {
        hObject = CreateFileW(lpFileName,0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      }
      else {
        hObject = CreateFileW(lpFileName,0,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      }
      local_64 = hObject;
      if (hObject != (HANDLE)0xffffffff) {
        cVar1 = HidD_GetPreparsedData(hObject,&local_5c);
        if (cVar1 != '\0') {
          HidD_GetAttributes(hObject,auStack_58);
          iVar3 = HidP_GetCaps(local_64,&uStack_54);
          if (iVar3 == 0) {
            HidD_FreePreparsedData(local_5c);
          }
          else {
            uVar4 = FUN_00417100(&uStack_4c);
            _DstBuf = (wchar_t *)FUN_00416e10();
            hObject = local_64;
            if (_DstBuf != (wchar_t *)0x0) {
              if ((uStack_54 == 0) || (uStack_52 == 0)) {
                (*DAT_0065d3e0)(L"HidFind: find 0 id dev: %s",lpFileName);
                hObject = local_64;
              }
              else {
                __snwprintf_s(_DstBuf,0x104,0x103,L"%s",lpFileName);
                *(uint *)(_DstBuf + 0x104) = uVar4 & 0xffff;
                *(uint *)(_DstBuf + 0x106) = (uint)uStack_48;
                *(uint *)(_DstBuf + 0x108) = (uint)uStack_46;
                *(uint *)(_DstBuf + 0x10a) = (uint)uStack_44;
                *(uint *)(_DstBuf + 0x10c) = (uint)uStack_4a;
                *(uint *)(_DstBuf + 0x10e) = (uint)uStack_4c;
                *(uint *)(_DstBuf + 0x110) = (uint)uStack_54;
                *(uint *)(_DstBuf + 0x112) = (uint)uStack_52;
                hObject = local_64;
              }
            }
          }
        }
        CloseHandle(hObject);
      }
    }
    _free(DeviceInterfaceDetailData);
    __security_check_cookie(local_8 ^ (uint)&local_64);
    return;
  }
  OutputDebugStringW(L"Error: OpenDeviceInterface: malloc failed");
  __security_check_cookie(local_8 ^ (uint)&local_64);
  return;
}


//==== FUNC 0040c490  FUN_0040c490 ====

void FUN_0040c490(int param_1)

{
  char cVar1;
  HANDLE pvVar2;
  int iVar3;
  uint uVar4;
  WPARAM wParam;
  undefined4 uVar5;
  void *_Dst;
  HANDLE unaff_EBX;
  wchar_t *pwVar6;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  int local_4f4;
  ushort uStack_4f0;
  undefined1 auStack_4ec [4];
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  HANDLE pvStack_4dc;
  HANDLE pvStack_4d4;
  undefined4 uStack_4d0;
  undefined2 uStack_4bc;
  undefined2 uStack_4b4;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined1 auStack_230 [2];
  char cStack_22e;
  char cStack_22d;
  ushort uStack_22b;
  undefined1 uStack_229;
  wchar_t awStack_228 [258];
  uint uStack_24;
  void *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005d787b;
  local_14 = ExceptionList;
  local_1c = (void *)(DAT_0064f674 ^ (uint)&uStack_4fc);
  ExceptionList = &local_14;
  local_4f8 = *DAT_0065e860;
  local_4f4 = param_1;
  (*DAT_0065d3e0)(L"Watcher_Thread_Mouse start, hDev=%x",local_4f8,
                  DAT_0064f674 ^ (uint)&stack0xfffffaf8);
  _wcsncpy_s(awStack_228,0x104,(wchar_t *)(DAT_0065e860 + 1),0xffffffff);
  (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: szDevPath=%s",awStack_228);
  FUN_004930c0();
  ppuStack_4e0 = CDevG5MS::vftable;
  pvStack_4dc = (HANDLE)0x8805;
  uStack_238 = 0;
  pvStack_4d4 = (HANDLE)0x0;
  uStack_4d0 = 0;
  uStack_23c = 0x14;
  uStack_4b4 = 0;
  uStack_24c = 0;
  uStack_250 = 0;
  uStack_254 = 0;
  uStack_c = 0;
  pvVar2 = CreateFileW(awStack_228,0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0);
  if (pvVar2 == (HANDLE)0xffffffff) {
    pwVar6 = L"Watcher_Thread_Mouse: Open device failed";
  }
  else {
    uStack_4fc = uStack_4fc & 0xffffff;
    pvStack_4d4 = pvVar2;
    FUN_0049ef40((int)&uStack_4fc + 3);
    if (uStack_4fc._3_1_ == '\0') {
      do {
        auStack_230[0] = 0;
        stack0xfffffdd1 = 0;
        uStack_22b = 0;
        uStack_229 = 0;
        iVar3 = FUN_0049f1c0();
        if (iVar3 != 0) {
          pwVar6 = L"Watcher_Thread_Mouse: failed";
          goto LAB_0040c75d;
        }
        FUN_00407c90(auStack_230,8,0,L"Watcher_Thread_Mouse recv: ");
      } while (((auStack_230[1] != '\n') || (cStack_22e != '\x02')) || (cStack_22d != '\x01'));
      Sleep(200);
      (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: device connected, hDev=%x",local_4f8);
      param_1 = local_4f4;
    }
    Sleep(0x14);
    auStack_230[0] = 0;
    stack0xfffffdd1 = 0;
    uStack_22b = uStack_22b & 0xff00;
    iVar3 = FUN_0049ea20(&ppuStack_4e0,pvVar2);
    if (iVar3 != 0) {
      local_4f4 = 0;
      cVar1 = HidD_GetAttributes(pvVar2,auStack_4ec);
      uVar4 = uStack_4fc;
      if (cVar1 != '\0') {
        uVar4 = (uint)uStack_4f0;
      }
      wParam = FUN_0040cb40(param_1,uVar4,unaff_EBX,0,0x8805);
      (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: OnNewDongle return %x",wParam);
      if (wParam == 0) {
        CloseHandle(unaff_EBX);
      }
      else {
        _wcsncpy_s((wchar_t *)(*(int *)(wParam + 0x1c) + 0x2c),0x104,(wchar_t *)auStack_230,
                   0xffffffff);
        if (param_1 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(param_1 + 0x20);
        }
        (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: send WM_NEW_WIRELESS to hwnd=%x",uVar5);
        if (param_1 == 0) {
          PostMessageW((HWND)0x0,0x458,wParam,0);
        }
        else {
          PostMessageW(*(HWND *)(param_1 + 0x20),0x458,wParam,0);
        }
      }
      goto LAB_0040c766;
    }
    pwVar6 = L"Watcher_Thread_Mouse: GetPSD Err";
  }
LAB_0040c75d:
  (*DAT_0065d3e0)(pwVar6);
LAB_0040c766:
  _Dst = (void *)FUN_0040c220();
  if (_Dst != (void *)0x0) {
    (*DAT_0065d3e0)(L"Watcher_Thread_Mouse: clear szDevPath=%s",(int)_Dst + 4);
    _memset(_Dst,0,0x20c);
  }
  (*DAT_0065d3e0)(L"Watcher_Thread_Mouse eixt, hDev=%x",unaff_EBX);
  local_14 = (void *)0xffffffff;
  ppuStack_4e8 = CDevG5MS::vftable;
  FUN_0049cfa0();
  if (pvStack_4dc != (HANDLE)0x0) {
    CloseHandle(pvStack_4dc);
    pvStack_4dc = (HANDLE)0x0;
  }
  uStack_4bc = 0;
  ppuStack_4e8 = CHidDev::vftable;
  FUN_0046afa0();
  ExceptionList = local_1c;
  __security_check_cookie(uStack_24 ^ (uint)&stack0xfffffafc);
  return;
}


//==== FUNC 00493880  FUN_00493880 ====

undefined4 __fastcall FUN_00493880(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  ushort local_c [6];
  
  cVar1 = HidD_GetAttributes(param_1[3],local_c);
  if (cVar1 != '\0') {
    param_1[6] = (uint)local_c[0];
    (*DAT_0065d3e0)(L"FW Version=0x%x",(uint)local_c[0]);
  }
  if ((*(int *)(param_1[4] + 0x24) != 0) &&
     (*(char *)(*(int *)(param_1[4] + 0x24) + 0x2d3a) != '\0')) {
    Sleep(0x14);
    puVar3 = &stack0xffffffeb;
    iVar2 = (**(code **)(*param_1 + 0x20))(&stack0xffffffea);
    if (iVar2 != 0) {
      *(uint *)(param_1[4] + 0x304) = (uint)puVar3 >> 0x10 & 0xff;
      *(uint *)(param_1[4] + 0x308) = (uint)puVar3 >> 0x18;
    }
  }
  return 1;
}


//==== FUNC 00495200  FUN_00495200 ====

undefined4 __fastcall FUN_00495200(int param_1)

{
  char cVar1;
  ushort local_c [6];
  
  cVar1 = HidD_GetAttributes(*(undefined4 *)(param_1 + 0x290),local_c);
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x18) = (uint)local_c[0];
    (*DAT_0065d3e0)(L"FW Version=0x%x",(uint)local_c[0]);
    return 1;
  }
  (*DAT_0065d3e0)(L"GetVersionNumber failed!");
  return 1;
}


//==== FUNC 00497840  FUN_00497840 ====

void __fastcall FUN_00497840(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined1 auStack_28c [4];
  char cStack_288;
  byte bStack_287;
  byte bStack_286;
  byte bStack_285;
  ushort auStack_284 [2];
  undefined1 auStack_280 [400];
  wchar_t awStack_f0 [102];
  uint uStack_24;
  void *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de30b;
  local_14 = ExceptionList;
  local_1c = (void *)(DAT_0064f674 ^ (uint)auStack_28c);
  ExceptionList = &local_14;
  (*DAT_0065d3e0)(L"CDevComboFilm::SyncCfg",DAT_0064f674 ^ (uint)&stack0xfffffd68);
  param_1[0x9f] = 1;
  cVar1 = HidD_GetAttributes(param_1[3],auStack_284);
  if (cVar1 != '\0') {
    param_1[6] = (uint)auStack_284[0];
    (*DAT_0065d3e0)(L"FW Version=0x%x",(uint)auStack_284[0]);
  }
  if (*(int *)(param_1[4] + 0x14) != 0) goto LAB_00497b64;
  iVar3 = *(int *)(param_1[4] + 0x24);
  Sleep(0x1e);
  iVar5 = 0;
  do {
    _memset(auStack_280,0,400);
    iVar2 = (**(code **)(*param_1 + 0x70))(auStack_280,400);
    if (iVar2 == 0) {
      (*DAT_0065d3e0)(L"SyncCfg: GetLED failed");
      Sleep(300);
    }
    else {
      if (((cStack_288 == 'd') && ((bStack_286 & 0xf) != 0)) && ((bStack_286 & 0xf) < 5)) {
        iVar5 = (bStack_285 >> 4) - 1;
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        *(int *)(param_1[4] + 0x2e4) = iVar5;
        (*DAT_0065d3e0)(L"SyncCfg: nSensor=%d, nCurLevel=%d",bStack_287 & 0x1f,iVar5);
        iVar5 = FUN_00416aa0();
        iVar2 = 0;
        piVar4 = (int *)(iVar3 + 0x420);
        goto LAB_00497aa0;
      }
      (*DAT_0065d3e0)(L"SyncCfg: GetLED Err: read valid data, retry now");
      FUN_00407c90(auStack_280,400,10,0);
      Sleep(300);
      if ((1 < iVar5) && (param_1[2] != 0)) {
        FUN_004035b0(L"SyncCfg: GetLED Err");
        local_14 = (void *)0x0;
        FUN_00448e50(param_1[2]);
        local_14 = (void *)0xffffffff;
        piVar4 = (int *)(iVar3 + 0x14);
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 + -1 < 1) {
          (**(code **)(**(int **)(iVar3 + 8) + 4))((undefined4 *)(iVar3 + 8));
        }
        goto LAB_00497b64;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
LAB_004979e5:
  *(undefined4 *)(param_1[4] + 0x2fc) = 0;
  if (1 < *(int *)(iVar3 + 0x2680)) {
    Sleep(0x1e);
    iVar5 = (**(code **)(*param_1 + 0x88))(&stack0xfffffd6d);
    if (iVar5 == 0) {
      pwVar6 = L"SyncCfg: GetOnBoard failed";
    }
    else {
      (*DAT_0065d3e0)(L"SyncCfg: nCurOnBoard=%d",0);
      if (0 < *(int *)(iVar3 + 0x2680)) {
        *(undefined4 *)(param_1[4] + 0x2fc) = 0;
        goto LAB_00497b11;
      }
      pwVar6 = L"SyncCfg: Get Wrong OnBoard!!";
    }
    (*DAT_0065d3e0)(pwVar6);
  }
LAB_00497b11:
  if (*(char *)(iVar3 + 0x269d) != '\0') {
    Sleep(0x1e);
    iVar3 = (**(code **)(*param_1 + 0x20))(&stack0xfffffd6e,&stack0xfffffd6f);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1[4] + 0x304) = 0;
      *(undefined4 *)(param_1[4] + 0x308) = 0;
    }
  }
LAB_00497b64:
  ExceptionList = local_1c;
  __security_check_cookie(uStack_24 ^ (uint)&stack0xfffffd6c);
  return;
  while( true ) {
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 0x224;
    if (3 < iVar2) break;
LAB_00497aa0:
    if (iVar5 == *piVar4) {
      *(int *)(param_1[4] + 0x300) = iVar5;
      goto LAB_004979e5;
    }
  }
  (*DAT_0065d3e0)(L"SyncCfg: UnSupport Sensor 0x%04x",iVar5);
  __snwprintf_s(awStack_f0,100,99,L"SyncCfg: UnSupport Sensor 0x%04x",iVar5);
  FUN_00448f10(param_1[2]);
  goto LAB_00497b64;
}


//==== FUNC 00498b50  FUN_00498b50 ====

void __fastcall FUN_00498b50(int *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  HANDLE hObject;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  bool bVar8;
  int local_38;
  ushort *local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int *local_14;
  char acStack_10 [6];
  undefined2 uStack_a;
  char acStack_8 [4];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_38;
  local_34 = (ushort *)param_1[4];
  local_14 = param_1;
  if (local_34 == (ushort *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_38);
    return;
  }
  local_1c = (uint)*local_34;
  local_2c = (uint)local_34[1];
  local_24 = *(int *)(local_34 + 0xc);
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  local_30 = -1;
  local_38 = 0;
  piVar6 = &DAT_0065ea80;
  do {
    if ((local_1c == piVar6[2]) && (local_2c == piVar6[3])) {
      if (local_24 == 0x18) {
        bVar8 = *piVar6 == 0xff00;
LAB_00498c19:
        if (((!bVar8) || (piVar6[1] != 1)) || (piVar6[-1] != 0x208)) {
LAB_00498ded:
          if (((*piVar6 == 0xc) && (piVar6[1] == 1)) && (piVar6[-3] == 3)) {
            local_20 = 1;
          }
          else if (((*piVar6 == 0xff02) && (piVar6[1] == 2)) &&
                  ((piVar6[-3] == 0x14 && ((piVar6[-2] == 0x14 && (piVar6[-4] == 0x13)))))) {
            local_28 = 1;
          }
          goto LAB_00498e31;
        }
      }
      else {
        if ((local_24 != 0x1a) || (*piVar6 != 0xff02)) goto LAB_00498ded;
        if ((piVar6[1] != 2) || ((piVar6[-1] != 0x208 || (piVar6[-3] != 8)))) {
          bVar8 = true;
          goto LAB_00498c19;
        }
      }
      hObject = CreateFileW((LPCWSTR)(piVar6 + -0x86),0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,
                            0x40000000,(HANDLE)0x0);
      (*DAT_0065d3e0)(L"CDevG5KB::FindHIDDevice CreateFile %s",piVar6 + -0x86);
      puVar1 = local_34;
      if (hObject != (HANDLE)0xffffffff) {
        puVar7 = local_34 + 4;
        if ((((char)*puVar7 != '\0') || ((char)local_34[6] != '\0')) ||
           (*(char *)((int)local_34 + 0xd) != '\0')) {
          acStack_10[0] = '\0';
          acStack_10[1] = 0;
          acStack_10[2] = 0;
          acStack_10[3] = 0;
          acStack_10[4] = 0;
          acStack_10[5] = 0;
          iVar5 = FUN_00499fd0(hObject);
          param_1 = local_14;
          if (iVar5 != 0) {
            iVar5 = 0;
            while ((acStack_10 + iVar5)[(int)puVar7 - (int)acStack_10] == acStack_10[iVar5]) {
              iVar5 = iVar5 + 1;
              if (5 < iVar5) goto LAB_00498cca;
            }
            (*DAT_0065d3e0)(L"Psd unmatch: gVar.nPsd=%x,%x,%x,%x,%x,%x, nDevPsd=%x,%x,%x,%x,%x,%x",
                            (char)*puVar7,*(undefined1 *)((int)puVar1 + 9),(char)puVar1[5],
                            *(undefined1 *)((int)puVar1 + 0xb),(char)puVar1[6],
                            *(undefined1 *)((int)puVar1 + 0xd),acStack_10[0],acStack_10[1],
                            acStack_10[2],acStack_10[3],acStack_10[4],acStack_10[5]);
            CloseHandle(hObject);
            local_18 = 1;
            param_1 = local_14;
            goto LAB_00498e31;
          }
        }
LAB_00498cca:
        local_30 = local_38;
        goto LAB_00498cd2;
      }
    }
LAB_00498e31:
    hObject = (HANDLE)0x0;
    local_38 = local_38 + 1;
    piVar6 = piVar6 + 0x8b;
    if (0x66983f < (int)piVar6) {
LAB_00498cd2:
      (*DAT_0065d3e0)(L"CDevG5KB::FindHIDDevice for %s, hDev=%x, nFw=%d, id=%04x_%04x",
                      local_34 + 0x14,hObject,local_24,local_1c,local_2c);
      iVar3 = local_20;
      iVar2 = local_28;
      iVar5 = local_30;
      if ((hObject != (HANDLE)0x0) && (local_30 != -1)) {
        *(undefined4 *)(&DAT_0065ea90 + local_30 * 0x22c) = 1;
        (**(code **)(*param_1 + 0x18))();
        param_1[3] = (int)hObject;
        param_1[0x8d] = 1;
        param_1[10] = 0;
        param_1[9] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        _wcsncpy_s((wchar_t *)(param_1 + 0xb),0x104,&DAT_0065e868 + iVar5 * 0x116,0xffffffff);
        cVar4 = HidD_GetAttributes(param_1[3],acStack_10);
        if (cVar4 != '\0') {
          param_1[6] = (uint)CONCAT11(acStack_10[1],acStack_10[0]);
        }
        __security_check_cookie
                  (CONCAT22(uStack_a,CONCAT11(acStack_10[5],acStack_10[4])) ^ (uint)&stack0xffffffc0
                  );
        return;
      }
      (*DAT_0065d3e0)(L"CDevG5KB::FindHIDDevice bFindMedida=%x, bFindWireless=%x",local_20,local_28)
      ;
      if (((iVar3 != 0) && (iVar2 == 0)) && (local_18 == 0)) {
        __security_check_cookie(local_4 ^ (uint)&local_38);
        return;
      }
      __security_check_cookie(local_4 ^ (uint)&local_38);
      return;
    }
  } while( true );
}


//==== FUNC 00498eb0  FUN_00498eb0 ====

undefined4 __fastcall FUN_00498eb0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uStack_e;
  undefined1 uStack_d;
  ushort local_c [6];
  
  if (param_1[6] < 1) {
    cVar1 = HidD_GetAttributes(param_1[3],local_c);
    if (cVar1 == '\0') {
      (*DAT_0065d3e0)(L"GetVersionNumber failed!");
    }
    else {
      param_1[6] = (uint)local_c[0];
      (*DAT_0065d3e0)(L"FW Version=0x%x",(uint)local_c[0]);
    }
  }
  if ((*(int *)(param_1[4] + 0x24) != 0) &&
     (*(char *)(*(int *)(param_1[4] + 0x24) + 0x2d3a) != '\0')) {
    Sleep(0x14);
    puVar3 = &uStack_d;
    uStack_e = 0;
    uStack_d = 0;
    iVar2 = (**(code **)(*param_1 + 0x20))(&uStack_e);
    if (iVar2 != 0) {
      *(uint *)(param_1[4] + 0x304) = (uint)puVar3 >> 0x10 & 0xff;
      *(uint *)(param_1[4] + 0x308) = (uint)puVar3 >> 0x18;
    }
  }
  return 1;
}


//==== FUNC 0049d3b0  FUN_0049d3b0 ====

void __fastcall FUN_0049d3b0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_EBX;
  code *pcVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined1 auStack_27c [4];
  char cStack_278;
  byte bStack_277;
  byte bStack_276;
  byte bStack_275;
  ushort local_274 [2];
  undefined1 auStack_270 [2];
  byte bStack_26e;
  byte bStack_26c;
  wchar_t awStack_e0 [100];
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005de27b;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)auStack_27c;
  ExceptionList = &local_c;
  cVar1 = HidD_GetAttributes(param_1[3],local_274,DAT_0064f674 ^ (uint)&stack0xfffffd74);
  if (cVar1 == '\0') {
    (*DAT_0065d3e0)(L"SyncCfg: GetVersionNumber failed!");
  }
  else {
    param_1[6] = (uint)local_274[0];
    (*DAT_0065d3e0)(L"SyncCfg: FW Version=0x%x",(uint)local_274[0]);
  }
  pcVar7 = Sleep_exref;
  iVar8 = 0;
  *(undefined4 *)(param_1[4] + 0x2fc) = 0;
  iVar4 = *(int *)(param_1[4] + 0x24);
  if (1 < *(int *)(iVar4 + 0x2680)) {
    Sleep(0x1e);
    iVar2 = (**(code **)(*param_1 + 0x88))(&stack0xfffffd7d);
    if (iVar2 == 0) {
      pwVar9 = L"SyncCfg: GetOnBoard failed";
    }
    else {
      (*DAT_0065d3e0)(L"SyncCfg: nCurOnBoard=%d",0);
      if (0 < *(int *)(iVar4 + 0x2680)) {
        *(undefined4 *)(param_1[4] + 0x2fc) = 0;
        goto LAB_0049d4a8;
      }
      pwVar9 = L"SyncCfg: Get Wrong OnBoard!!";
    }
    (*DAT_0065d3e0)(pwVar9);
  }
LAB_0049d4a8:
  Sleep(0x1e);
  do {
    _memset(auStack_270,0,400);
    iVar2 = (**(code **)(*param_1 + 0x70))(auStack_270,400);
    if (iVar2 == 0) {
      (*DAT_0065d3e0)(L"SyncCfg: GetLED failed");
      Sleep(300);
    }
    else {
      if (((cStack_278 == 'd') && ((bStack_276 & 0xf) != 0)) && ((bStack_276 & 0xf) < 5)) {
        FUN_00407c90(&cStack_278,100,10,L"SyncCfg(load):");
        iVar8 = (bStack_275 >> 4) - 1;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        *(int *)(param_1[4] + 0x2e4) = iVar8;
        (*DAT_0065d3e0)(L"SyncCfg: nSensor=%d, nCurLevel=%d, SyncMask=0x%x",bStack_277 & 0x1f,iVar8,
                        *(undefined1 *)(iVar4 + 0x2b97));
        iVar8 = FUN_00416aa0();
        iVar2 = 0;
        piVar5 = (int *)(iVar4 + 0x420);
        goto LAB_0049d610;
      }
      (*DAT_0065d3e0)(L"SyncCfg: GetLED Err: read valid data, retry now");
      FUN_00407c90(auStack_270,400,10,0);
      Sleep(300);
      if ((1 < iVar8) && (param_1[2] != 0)) {
        FUN_004035b0(L"SyncCfg: GetLED Err");
        local_c = (void *)0x0;
        FUN_00448e50(param_1[2]);
        local_c = (void *)0xffffffff;
        piVar5 = (int *)(unaff_EBX + -4);
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1 || iVar4 + -1 < 0) {
          (**(code **)(**(int **)(unaff_EBX + -0x10) + 4))((undefined4 *)(unaff_EBX + -0x10));
        }
        goto LAB_0049d78f;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  goto LAB_0049d6fc;
  while( true ) {
    iVar2 = iVar2 + 1;
    piVar5 = piVar5 + 0x224;
    if (3 < iVar2) break;
LAB_0049d610:
    if (iVar8 == *piVar5) {
      *(int *)(param_1[4] + 0x300) = iVar8;
      if ((*(byte *)(iVar4 + 0x2b97) & 1) != 0) {
        switch(bStack_26e & 0xf) {
        case 1:
          uVar3 = 0x125;
          break;
        case 2:
          uVar3 = 0x250;
          break;
        case 3:
          uVar3 = 0x500;
          break;
        case 4:
          uVar3 = 0x1000;
          break;
        default:
          uVar3 = 0;
        }
        *(undefined4 *)(param_1[4] + 0x2f8) = uVar3;
        (*DAT_0065d3e0)(L"SyncCfg: nCurHZ=%x",uVar3);
      }
      if ((*(byte *)(iVar4 + 0x2b97) & 2) == 0) goto LAB_0049d6fc;
      iVar8 = param_1[4];
      iVar2 = FUN_00465bb0();
      if ((iVar2 == 0) || (*(char *)(iVar2 + 0x87c) == '\0')) goto LAB_0049d6fc;
      uVar6 = 0;
      goto LAB_0049d6e4;
    }
  }
  (*DAT_0065d3e0)(L"SyncCfg: UnSupport Sensor 0x%04x",iVar8);
  __snwprintf_s(awStack_e0,100,99,L"SyncCfg: UnSupport Sensor 0x%04x",iVar8);
  FUN_00448f10(param_1[2]);
  goto LAB_0049d78f;
  while (uVar6 = uVar6 + 1, pcVar7 = Sleep_exref, uVar6 < 8) {
LAB_0049d6e4:
    if (*(byte *)(iVar2 + 0x888 + uVar6) == (bStack_26c & 0xf)) {
      *(uint *)(iVar8 + 0x2f4) = uVar6;
      (*DAT_0065d3e0)(L"SyncCfg: nCurLOD=%x",uVar6);
      pcVar7 = Sleep_exref;
      break;
    }
  }
LAB_0049d6fc:
  if (*(char *)(iVar4 + 0x269d) != '\0') {
    (*pcVar7)(0x1e);
    iVar4 = (**(code **)(*param_1 + 0x28))();
    if (iVar4 == 0) {
      *(undefined4 *)(param_1[4] + 0x304) = 100;
      *(undefined4 *)(param_1[4] + 0x308) = 0;
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x20))(&stack0xfffffd7e,&stack0xfffffd7f);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1[4] + 0x304) = 0;
        *(undefined4 *)(param_1[4] + 0x308) = 0;
      }
    }
  }
LAB_0049d78f:
  ExceptionList = pvStack_14;
  __security_check_cookie(uStack_18 ^ (uint)&stack0xfffffd7c);
  return;
}


//==== FUNC 00416e40  FUN_00416e40 ====

void FUN_00416e40(void)

{
  HDEVINFO DeviceInfoSet;
  int iVar1;
  DWORD MemberIndex;
  GUID GStack_3c;
  _SP_DEVICE_INTERFACE_DATA _Stack_2c;
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)&GStack_3c;
  HidD_GetHidGuid(&GStack_3c.Data2);
  DeviceInfoSet = SetupDiGetClassDevsW(&GStack_3c,(PCWSTR)0x0,(HWND)0x0,0x12);
  if (DeviceInfoSet != (HDEVINFO)0xffffffff) {
    MemberIndex = 0;
    _Stack_2c.cbSize = 0x1c;
    iVar1 = SetupDiEnumDeviceInterfaces(DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&GStack_3c,0,&_Stack_2c)
    ;
    while (iVar1 != 0) {
      iVar1 = FUN_00416f00();
      if (iVar1 != 0) {
        SetupDiDestroyDeviceInfoList(DeviceInfoSet);
        __security_check_cookie(uStack_10 ^ (uint)&stack0xffffffc0);
        return;
      }
      MemberIndex = MemberIndex + 1;
      iVar1 = SetupDiEnumDeviceInterfaces
                        (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&GStack_3c,MemberIndex,&_Stack_2c);
    }
    SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  }
  __security_check_cookie(uStack_10 ^ (uint)&stack0xffffffc0);
  return;
}


//==== FUNC 00418460  FUN_00418460 ====

void __thiscall FUN_00418460(CWnd *param_1,uint param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  HWND pHVar3;
  byte *pbVar4;
  int iVar5;
  char *_Dest;
  char *pcVar6;
  int iVar7;
  LPSTR pCVar8;
  byte *pbVar9;
  CWnd *pCVar10;
  LPCWSTR unaff_EDI;
  bool bVar11;
  CWnd *local_ce4;
  undefined1 local_ce0;
  undefined4 local_cdf;
  undefined4 local_cdb;
  undefined4 local_cd7;
  undefined2 local_cd3;
  undefined1 local_cd1;
  byte local_cd0 [64];
  char local_c90 [64];
  byte local_c50 [64];
  char local_c10 [1024];
  CHAR local_810;
  undefined1 local_80f [1023];
  char local_410 [1028];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)&local_ce4;
  local_810 = '\0';
  local_ce4 = param_1;
  _memset(local_80f,0,0x3ff);
  iVar5 = 0;
  if (param_1 != (CWnd *)0xfffff950) {
    iVar5 = *(int *)(param_1 + 0x6d0);
  }
  if (param_3 == iVar5) {
    pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
    CWnd::FromHandle(pHVar3);
    local_ce4 = (CWnd *)&stack0xfffff304;
    DAT_0066fa08 = 0;
    ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_0066fefc + -0x10));
    FUN_0045e4a0();
    FUN_0045a560();
  }
  else {
    iVar5 = 0;
    if (param_1 != (CWnd *)0xffffff80) {
      iVar5 = *(int *)(param_1 + 0xa0);
    }
    if (param_3 == iVar5) {
      FUN_00418dd0();
    }
    else {
      iVar5 = 0;
      if (param_1 != (CWnd *)0xfffffdf4) {
        iVar5 = *(int *)(param_1 + 0x22c);
      }
      if (param_3 == iVar5) {
        FUN_00418a20();
      }
      else {
        iVar5 = 0;
        if (param_1 != (CWnd *)0xfffffc68) {
          iVar5 = *(int *)(param_1 + 0x3b8);
        }
        if (param_3 == iVar5) {
          local_ce0 = 0;
          local_cdf = 0;
          local_cdb = 0;
          local_cd7 = 0;
          local_cd3 = 0;
          local_cd1 = 0;
          _sprintf(local_410,"http://%s/modifypsd.php");
          _strncpy_s(local_c90,0x40,(char *)(param_1 + 0x94c),0xffffffff);
          _strncpy_s((char *)local_cd0,0x40,(char *)(param_1 + 0xa18),0xffffffff);
          _strncpy_s((char *)local_c50,0x40,(char *)(param_1 + 0xae4),0xffffffff);
          pbVar4 = local_cd0;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (bVar1 != 0);
          if ((uint)((int)pbVar4 - (int)(local_cd0 + 1)) < 6) {
            *(undefined4 *)(param_1 + 0xb84) = 5;
            InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
            __security_check_cookie(local_c ^ (uint)&local_ce4);
            return;
          }
          pbVar9 = local_c50;
          pbVar4 = local_cd0;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_00418650:
              iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00418655;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_00418650;
            pbVar4 = pbVar4 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00418655:
          if (iVar5 != 0) {
            *(undefined4 *)(param_1 + 0xb84) = 4;
            InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
            __security_check_cookie(local_c ^ (uint)&local_ce4);
            return;
          }
          _sprintf(local_c10,"{");
          pcVar6 = local_c10;
          do {
            _Dest = pcVar6;
            pcVar6 = _Dest + 1;
          } while (*_Dest != '\0');
          _sprintf(_Dest,"\"%s\":\"%s\"");
          pcVar6 = local_c90;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_004a17d0();
          FUN_00478c80();
          pcVar6 = local_c10;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          iVar5 = _sprintf(pcVar6 + (int)(local_c10 + -(int)(local_c10 + 1)),",");
          _sprintf(pcVar6 + (int)(local_c10 + (iVar5 - (int)(local_c10 + 1))),"\"%s\":\"%s\"");
          pcVar6 = local_c10;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          iVar5 = _sprintf(pcVar6 + (int)(local_c10 + -(int)(local_c10 + 1)),",");
          _sprintf(pcVar6 + (int)(local_c10 + (iVar5 - (int)(local_c10 + 1))),"\"%s\":\"%s\"");
          pbVar4 = local_cd0;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (bVar1 != 0);
          FUN_004a17d0();
          FUN_00478c80();
          pcVar6 = local_c10;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          iVar5 = _sprintf(pcVar6 + (int)(local_c10 + -(int)(local_c10 + 1)),",");
          iVar5 = iVar5 - (int)(local_c10 + 1);
          iVar7 = _sprintf(pcVar6 + (int)(local_c10 + iVar5),"\"%s\":\"%s\"");
          _sprintf(pcVar6 + (int)(local_c10 + iVar7 + iVar5),"}");
          (*DAT_0065d3e0)(L"Start modify psd ------");
          param_1 = local_ce4;
          *(undefined4 *)(local_ce4 + 0xb84) = 7;
          iVar5 = FUN_004a0b90();
          if (iVar5 != 0) {
            if (local_810 == '\0') {
              (*DAT_0065d3e4)();
            }
            else {
              pCVar8 = StrStrIA(&local_810,"error");
              if (pCVar8 == (LPSTR)0x0) {
                pCVar8 = StrStrIA(&local_810,"modify success");
                if (pCVar8 != (LPSTR)0x0) {
                  (*DAT_0065d3e0)();
                  *(undefined4 *)(param_1 + 0xb84) = 0;
                  _strncpy_s(&DAT_0066fa1b,0x40,(char *)local_cd0,0xffffffff);
                  FUN_0047b070();
                  FUN_00448e50();
                  InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
                  FID_conflict_SetWindowTextW((HWND)&DAT_0060b0b0,unaff_EDI);
                  FID_conflict_SetWindowTextW((HWND)&DAT_0060b0b0,unaff_EDI);
                  FID_conflict_SetWindowTextW((HWND)&DAT_0060b0b0,unaff_EDI);
                }
              }
              else {
                (*DAT_0065d3e4)();
                *(undefined4 *)(param_1 + 0xb84) = 8;
              }
            }
          }
          if (*(int *)(param_1 + 0xb84) != 0) {
            InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
          }
        }
        else {
          iVar5 = 0;
          if (param_1 != (CWnd *)0xfffffadc) {
            iVar5 = *(int *)(param_1 + 0x544);
          }
          if (param_3 == iVar5) {
            FUN_00418f40();
          }
          else {
            pCVar10 = param_1 + 0xbc0;
            local_ce4 = (CWnd *)0xa;
            do {
              if (pCVar10 == (CWnd *)0x20) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)pCVar10;
              }
              if ((uint)(param_3 == iVar5) != *(uint *)(pCVar10 + 0x88)) {
                *(uint *)(pCVar10 + 0x88) = (uint)(param_3 == iVar5);
                InvalidateRect(*(HWND *)pCVar10,(RECT *)0x0,1);
              }
              pCVar10 = pCVar10 + 0x18c;
              local_ce4 = local_ce4 + -1;
            } while (local_ce4 != (CWnd *)0x0);
            local_ce4 = (CWnd *)0x0;
          }
        }
      }
    }
  }
  CWnd::OnCommand(param_1,param_2,param_3);
  __security_check_cookie(local_c ^ (uint)&local_ce4);
  return;
}


//==== FUNC 004382e0  FUN_004382e0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004382e0(void)

{
  char cVar1;
  char *pcVar2;
  char *_Dest;
  char *pcVar3;
  int iVar4;
  int iVar5;
  LPSTR pCVar6;
  char *unaff_EBX;
  char *unaff_EDI;
  char local_100c [1024];
  CHAR local_c0c;
  undefined1 local_c0b [1023];
  undefined1 auStack_80c [1024];
  char local_40c [1028];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4382ea;
  pcVar3 = local_100c;
  local_8 = DAT_0064f674 ^ (uint)local_100c;
  if ((unaff_EBX != (char *)0x0) && (unaff_EDI != (char *)0x0)) {
    pcVar2 = unaff_EDI;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (0x1f < (uint)((int)pcVar2 - (int)(unaff_EDI + 1))) {
      local_c0c = '\0';
      _memset(local_c0b,0,0x3ff);
      _sprintf(local_40c,"http://%s/logon.php","120.79.152.79");
      _sprintf(local_100c,"{");
      pcVar2 = local_100c;
      do {
        _Dest = pcVar2;
        pcVar2 = _Dest + 1;
      } while (*_Dest != '\0');
      _sprintf(_Dest,"\"%s\":\"%s\"","username");
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar4 = _sprintf(pcVar3 + (int)(local_100c + -(int)(local_100c + 1)),",");
      iVar4 = iVar4 - (int)(local_100c + 1);
      iVar5 = _sprintf(pcVar3 + (int)(local_100c + iVar4),"\"%s\":\"%s\"",&DAT_0060f010);
      _sprintf(pcVar3 + (int)(local_100c + iVar5 + iVar4),"}");
      (*DAT_0065d3e0)(L"Start logon ------");
      FUN_004a1980(local_100c,0x400);
      iVar4 = FUN_004a0b90(auStack_80c,&local_c0c,0x400);
      if (iVar4 != 0) {
        if (local_c0c == '\0') {
          (*DAT_0065d3e0)(L"server respond is null");
          __security_check_cookie(local_8 ^ (uint)local_100c);
          return;
        }
        pCVar6 = StrStrIA(&local_c0c,"logon success");
        if (pCVar6 != (LPSTR)0x0) {
          (*DAT_0065d3e0)(L"Logon success");
          _strncpy_s(&DAT_0066fa0c,0xf,unaff_EBX,0xffffffff);
          _strncpy_s(&DAT_0066fa1b,0x40,unaff_EDI,0xffffffff);
          DAT_0066fa08 = 1;
          FUN_0047b070();
          __security_check_cookie(local_8 ^ (uint)local_100c);
          return;
        }
        StrStrIA(&local_c0c,"error");
      }
      __security_check_cookie(local_8 ^ (uint)local_100c);
      return;
    }
    (*DAT_0065d3e0)(L"user_logon: psd is not md5");
  }
  __security_check_cookie(local_8 ^ (uint)local_100c);
  return;
}


//==== FUNC 004578b0  FUN_004578b0 ====

void __fastcall FUN_004578b0(CWnd *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  HWND hWnd;
  BOOL BVar4;
  
  (*DAT_0065d3e0)(L"OnExit");
  *(undefined4 *)(param_1 + 0xad0) = 1;
  if (*(int *)(param_1 + 0xad4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xad4) + 0x2b8) = 0;
  }
  Sleep(0x32);
  FUN_0047a140();
  FUN_0047ae80();
  DAT_0066fa08 = 0;
  FUN_0047b070();
  hWnd = FindWindowW((LPCWSTR)0x0,L"OemDrvMsgTopWindow");
  if (hWnd != (HWND)0x0) {
    SendMessageW(hWnd,0x10,0,0);
  }
  if (*(undefined4 **)(param_1 + 0xad4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xad4))(1);
    *(undefined4 *)(param_1 + 0xad4) = 0;
  }
  piVar3 = DAT_00651548;
  if (((((DAT_0066f9a8 == 0) && (*(int *)(param_1 + 0x43c) != 0)) &&
       (BVar4 = IsWindow(*(HWND *)(*(int *)(param_1 + 0x43c) + 0x20)), piVar3 = DAT_00651548,
       BVar4 != 0)) &&
      ((*(int *)(*(int *)(param_1 + 0x43c) + 0xa4) != 0 &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x43c) + 0xc0), iVar1 != 0)))) &&
     (*(int *)(iVar1 + 0x1c) != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x1c) + 0x48))(0xffffffff);
    piVar3 = DAT_00651548;
  }
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3;
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) &&
       (BVar4 = IsWindow(*(HWND *)(*(int *)(iVar1 + 0x20) + 0x20)), BVar4 != 0)) {
      piVar2 = *(int **)(iVar1 + 0x20);
      FUN_00471db0();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x60))();
        (**(code **)(*piVar2 + 4))(1);
      }
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
  }
  CWnd::ShowWindow(param_1,0);
  PostMessageW(*(HWND *)(param_1 + 0x20),0x10,0,0);
  return;
}


//==== FUNC 005bba6e  __write ====

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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00671240)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_00671260)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_00671260)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_005bbb40();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter(0,0,0,0,0);
  }
  return -1;
}


//==== FUNC 005c673a  __chsize_nolock ====

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
  if (uVar12 == 0xffffffffffffffff) goto LAB_005c67c2;
  lVar13 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar4 = (int)((ulonglong)lVar13 >> 0x20);
  if (lVar13 == -1) goto LAB_005c67c2;
  uVar8 = in_stack_00000008 - (uint)lVar13;
  uVar5 = (uint)(in_stack_00000008 < (uint)lVar13);
  iVar1 = (int)_Size - iVar4;
  iVar9 = iVar1 - uVar5;
  if ((iVar9 < 0) ||
     ((iVar9 == 0 || SBORROW4((int)_Size,iVar4) != SBORROW4(iVar1,uVar5) && (uVar8 == 0)))) {
    if ((iVar9 < 1) && (iVar9 < 0)) {
      lVar13 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar13 == -1) goto LAB_005c67c2;
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
        goto LAB_005c68c0;
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
      goto LAB_005c67c2;
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
      goto LAB_005c6814;
    }
    puVar6 = ___doserrno();
    if (*puVar6 == 5) {
      piVar3 = __errno();
      *piVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_005c6814:
    __setmode_nolock(_FileHandle,iVar4);
    DVar14 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar14,_Buf);
LAB_005c68c0:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_005c67c2;
  }
  lVar13 = __lseeki64_nolock(_FileHandle,uVar12 >> 0x20,unaff_EDI);
  if (lVar13 != -1) {
    return 0;
  }
LAB_005c67c2:
  piVar3 = __errno();
  return *piVar3;
}


//==== FUNC 00471db0  FUN_00471db0 ====

void FUN_00471db0(void)

{
  int unaff_ESI;
  wchar_t local_414 [260];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)local_414;
  if (*(int *)(unaff_ESI + 0xc0) != 0) {
    if (&stack0x00000000 != (undefined1 *)0x414) {
      __snwprintf_s(local_414,0x104,0x103,L"%s%s\\",&DAT_0065cfa8,*(int *)(unaff_ESI + 0xc0) + 0x46)
      ;
    }
    __snwprintf_s(local_20c,0x104,0x103,L"%sprofile.dct",local_414);
    FUN_0047abf0();
  }
  __security_check_cookie(local_4 ^ (uint)local_414);
  return;
}


//==== FUNC 0047a0f0  FUN_0047a0f0 ====

undefined4 FUN_0047a0f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_2 + 0x10);
  do {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      iVar3 = FUN_0047a070();
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 != 0) {
        FUN_0047a0f0(param_1,iVar2);
      }
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}


//==== FUNC 00425180  FUN_00425180 ====

void __fastcall FUN_00425180(undefined4 param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  wchar_t *local_378;
  int local_374;
  CFile local_370 [16];
  CFileDialog local_360 [808];
  wchar_t local_38 [20];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de14c;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_378;
  ExceptionList = &local_c;
  pvVar5 = (void *)FUN_00426ad0(DAT_0064f674 ^ (uint)&stack0xfffffc78);
  if (pvVar5 != (void *)0x0) {
    __snwprintf_s(local_38,0x14,0x13,L"%s.bcf",(int)pvVar5 + 8);
    FUN_004b9e3f(0,L".bcf",local_38,2,L"bcf(*.bcf)|*.bcf|",param_1,0,1);
    local_4 = 0;
    iVar6 = CFileDialog::DoModal(local_360);
    if (iVar6 == 1) {
      CFileDialog::GetPathName(local_360);
      local_4._0_1_ = 1;
      CFile::CFile(local_370);
      local_4._0_1_ = 2;
      iVar6 = CFile::Open(local_370,local_378,0x1002,(CFileException *)0x0);
      if (iVar6 == 0) {
        FUN_004035b0(L"Create profile failed.");
        local_4._0_1_ = 3;
        FUN_00448e50(param_1);
        local_4._0_1_ = 2;
        piVar1 = (int *)(local_374 + -4);
        LOCK();
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1 || iVar6 + -1 < 0) {
          (**(code **)(**(int **)(local_374 + -0x10) + 4))((undefined4 *)(local_374 + -0x10));
        }
      }
      else {
        (*DAT_0065d3e0)(L"Start export: %s, size=%d",(int)pvVar5 + 8,0x33fc);
        CFile::Write(local_370,pvVar5,0x33fc);
        puVar7 = (undefined4 *)FUN_004ad0e9(0x18);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = CMyList::vftable;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[1] = 0x11;
        }
        FUN_004253f0(puVar7);
        for (puVar4 = (undefined4 *)puVar7[4]; puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)puVar4[1]) {
          pvVar5 = (void *)*puVar4;
          if (pvVar5 != (void *)0x0) {
            uVar3 = *(int *)((int)pvVar5 + 0x58) * 0xc + 0x68;
            (*DAT_0065d3e0)(L"write macro: %s, id=%x, size=%d",(int)pvVar5 + 0x14,
                            *(undefined4 *)((int)pvVar5 + 4),uVar3);
            CFile::Write(local_370,pvVar5,uVar3);
          }
        }
        CFile::Close(local_370);
        FUN_0044e280();
        (**(code **)*puVar7)(1);
      }
      local_4._0_1_ = 1;
      FUN_004b90d8();
      local_4 = (uint)local_4._1_3_ << 8;
      pwVar2 = local_378 + -2;
      LOCK();
      iVar6 = *(int *)pwVar2;
      *(int *)pwVar2 = *(int *)pwVar2 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(**(int **)(local_378 + -8) + 4))(local_378 + -8);
      }
    }
    local_4 = 0xffffffff;
    CFileDialog::~CFileDialog(local_360);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_378);
  return;
}


//==== FUNC 0042c420  FUN_0042c420 ====

void __fastcall FUN_0042c420(undefined4 param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  wchar_t *local_378;
  int local_374;
  CFile local_370 [16];
  CFileDialog local_360 [808];
  wchar_t local_38 [20];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005de14c;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_378;
  ExceptionList = &local_c;
  pvVar5 = (void *)FUN_0042cd90(DAT_0064f674 ^ (uint)&stack0xfffffc78);
  if (pvVar5 != (void *)0x0) {
    __snwprintf_s(local_38,0x14,0x13,L"%s.bcf",(int)pvVar5 + 8);
    FUN_004b9e3f(0,L".bcf",local_38,2,L"bcf(*.bcf)|*.bcf|",param_1,0,1);
    local_4 = 0;
    iVar6 = CFileDialog::DoModal(local_360);
    if (iVar6 == 1) {
      CFileDialog::GetPathName(local_360);
      local_4._0_1_ = 1;
      CFile::CFile(local_370);
      local_4._0_1_ = 2;
      iVar6 = CFile::Open(local_370,local_378,0x1002,(CFileException *)0x0);
      if (iVar6 == 0) {
        FUN_004035b0(L"Create profile failed.");
        local_4._0_1_ = 3;
        FUN_00448e50(param_1);
        local_4._0_1_ = 2;
        piVar1 = (int *)(local_374 + -4);
        LOCK();
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1 || iVar6 + -1 < 0) {
          (**(code **)(**(int **)(local_374 + -0x10) + 4))((undefined4 *)(local_374 + -0x10));
        }
      }
      else {
        (*DAT_0065d3e0)(L"Start export: %s, size=%d",(int)pvVar5 + 8,0x33fc);
        CFile::Write(local_370,pvVar5,0x33fc);
        puVar7 = (undefined4 *)FUN_004ad0e9(0x18);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = CMyList::vftable;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[1] = 0x11;
        }
        FUN_004253f0(puVar7);
        for (puVar4 = (undefined4 *)puVar7[4]; puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)puVar4[1]) {
          pvVar5 = (void *)*puVar4;
          if (pvVar5 != (void *)0x0) {
            uVar3 = *(int *)((int)pvVar5 + 0x58) * 0xc + 0x68;
            (*DAT_0065d3e0)(L"write macro: %s, id=%x, size=%d",(int)pvVar5 + 0x14,
                            *(undefined4 *)((int)pvVar5 + 4),uVar3);
            CFile::Write(local_370,pvVar5,uVar3);
          }
        }
        CFile::Close(local_370);
        FUN_0044e280();
        (**(code **)*puVar7)(1);
      }
      local_4._0_1_ = 1;
      FUN_004b90d8();
      local_4 = (uint)local_4._1_3_ << 8;
      pwVar2 = local_378 + -2;
      LOCK();
      iVar6 = *(int *)pwVar2;
      *(int *)pwVar2 = *(int *)pwVar2 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(**(int **)(local_378 + -8) + 4))(local_378 + -8);
      }
    }
    local_4 = 0xffffffff;
    CFileDialog::~CFileDialog(local_360);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_378);
  return;
}


//==== FUNC 004e3b30  FUN_004e3b30 ====

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004e3b30(wchar_t *param_1)

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
  local_8 = 0x4e3b3c;
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
    FUN_004b90d8();
  }
  return uVar1;
}


//==== FUNC 0043fab0  FUN_0043fab0 ====

void __thiscall FUN_0043fab0(CWnd *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if ((DAT_0066a21c != (int *)0x0) && (DAT_0066a214 == 0)) {
    (**(code **)(*DAT_0066a21c + 0x60))();
    if (DAT_0066a21c != (int *)0x0) {
      (**(code **)(*DAT_0066a21c + 4))(1);
    }
    DAT_0066a21c = (int *)0x0;
  }
  if (*(HWND *)(param_1 + 0x1a70) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x1a70));
    *(undefined4 *)(param_1 + 0x1a70) = 0;
    InvalidateRect(*(HWND *)(param_1 + 0x17b8),(RECT *)0x0,1);
  }
  if (param_1 == (CWnd *)0xffffff8c) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x94);
  }
  if (param_3 == iVar1) {
    FUN_0043d540(1);
  }
  else {
    if (param_1 == (CWnd *)0xfffff7d0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x850);
    }
    if (param_3 == iVar1) {
      if (DAT_00658b34 == '\0') {
        iVar1 = FUN_0043e7a0();
        if (iVar1 != 0) {
          FUN_0043b5c0();
          FUN_0043d460(1);
        }
      }
      else {
        FUN_0043f3e0();
      }
    }
    else {
      if ((param_1 != (CWnd *)0xfffff014) && (*(int *)(param_1 + 0x100c) != 0)) {
        if (param_1 == (CWnd *)0xfffff014) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x100c);
        }
        if (param_3 == iVar1) {
          FUN_0043f320(0);
          goto LAB_0043fcfe;
        }
      }
      if (param_1 == (CWnd *)0xfffff644) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x9dc);
      }
      if (param_3 == iVar1) {
        FUN_0043e500();
      }
      else {
        if (param_1 == (CWnd *)0xfffffe00) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x220);
        }
        if (param_3 == iVar1) {
          FUN_0043e3d0();
        }
        else {
          if (param_1 == (CWnd *)0xfffffc74) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(param_1 + 0x3ac);
          }
          if (param_3 == iVar1) {
            FUN_00440050();
          }
          else {
            if (param_1 == (CWnd *)0xfffffae8) {
              iVar1 = 0;
            }
            else {
              iVar1 = *(int *)(param_1 + 0x538);
            }
            if (param_3 == iVar1) {
              FUN_0043fe50();
            }
            else {
              if (param_1 == (CWnd *)0xfffff4b8) {
                iVar1 = 0;
              }
              else {
                iVar1 = *(int *)(param_1 + 0xb68);
              }
              if (param_3 == iVar1) {
                FUN_0043e650();
              }
              else {
                if ((param_1 != (CWnd *)0xfffff1a0) && (*(int *)(param_1 + 0xe80) != 0)) {
                  if (param_1 == (CWnd *)0xfffff1a0) {
                    iVar1 = 0;
                  }
                  else {
                    iVar1 = *(int *)(param_1 + 0xe80);
                  }
                  if (param_3 == iVar1) {
                    FUN_0043fd20();
                    goto LAB_0043fcfe;
                  }
                }
                if ((param_1 != (CWnd *)0xffffecfc) && (*(int *)(param_1 + 0x1324) != 0)) {
                  if (param_1 == (CWnd *)0xffffecfc) {
                    iVar1 = 0;
                  }
                  else {
                    iVar1 = *(int *)(param_1 + 0x1324);
                  }
                  if (param_3 == iVar1) {
                    iVar1 = FUN_0047f5b0();
                    if ((iVar1 != 0) && (iVar1 = FUN_0043e7a0(), iVar1 != 0)) {
                      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x80000000;
                    }
                    goto LAB_0043fcfe;
                  }
                }
                if ((param_1 != (CWnd *)0xffffee88) && (*(int *)(param_1 + 0x1198) != 0)) {
                  if (param_1 == (CWnd *)0xffffee88) {
                    iVar1 = 0;
                  }
                  else {
                    iVar1 = *(int *)(param_1 + 0x1198);
                  }
                  if ((param_3 == iVar1) && (iVar1 = FUN_0043e7a0(), iVar1 != 0)) {
                    FUN_0043d540(2);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0043fcfe:
  CWnd::OnCommand(param_1,param_2,param_3);
  return;
}


//==== FUNC 0046e3a0  FUN_0046e3a0 ====

void __thiscall FUN_0046e3a0(CWnd *param_1,uint param_2,int param_3)

{
  int iVar1;
  _TREEITEM *p_Var2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  CWnd *local_4e4;
  undefined4 local_4e0;
  undefined1 *local_4dc;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de806;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&local_4e4;
  ExceptionList = &local_14;
  iVar1 = 0;
  if (param_1 != (CWnd *)0xffffdd10) {
    iVar1 = *(int *)(param_1 + 0x2310);
  }
  local_4e4 = param_1;
  if (param_3 == iVar1) {
    if (*(int *)(param_1 + 0x2398) == 0) {
      if (*(int *)(param_1 + 0x54a0) != 0) {
        FUN_0044d1a0();
      }
      FUN_0046e350();
    }
    else {
      FUN_0046e350();
      iVar1 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0x604) + 0x2d10)) {
        iVar3 = 0;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x549c) + 0x88 + iVar3) = 0;
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x28;
        } while (iVar1 < *(int *)(*(int *)(param_1 + 0x604) + 0x2d10));
      }
      InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x549c) + 0x20),(RECT *)0x0,1);
    }
  }
  else {
    iVar1 = 0;
    if (param_1 != (CWnd *)0xffffdb84) {
      iVar1 = *(int *)(param_1 + 0x249c);
    }
    if (param_3 == iVar1) {
      iVar1 = FUN_0046bd90();
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x5568);
        if (iVar1 == 0) goto LAB_0046e999;
        FUN_0045e220();
        FUN_0046c4c0();
        if (*(int *)(param_1 + 0x2524) == 0) {
          iVar3 = 0;
          if (0 < *(int *)(*(int *)(param_1 + 0x604) + 0x2d10)) {
            iVar4 = 0;
            puVar5 = (undefined4 *)(iVar1 + 0x274);
            do {
              if (*(int *)(*(int *)(param_1 + 0x549c) + 0x90 + iVar4) != 0) {
                *puVar5 = *(undefined4 *)(param_1 + 0x267c);
              }
              iVar3 = iVar3 + 1;
              puVar5 = puVar5 + 1;
              iVar4 = iVar4 + 0x28;
            } while (iVar3 < *(int *)(*(int *)(param_1 + 0x604) + 0x2d10));
          }
        }
        else {
          __time64((__time64_t *)0x0);
          FUN_005ad576();
          iVar3 = 0;
          if (0 < *(int *)(*(int *)(param_1 + 0x604) + 0x2d10)) {
            local_4e4 = (CWnd *)0x0;
            puVar5 = (undefined4 *)(iVar1 + 0x274);
            do {
              if (*(int *)(local_4e4 + *(int *)(param_1 + 0x549c) + 0x90) != 0) {
                iVar1 = _rand();
                *puVar5 = *(undefined4 *)(&DAT_00650f6c + (iVar1 % 6) * 4);
              }
              local_4e4 = local_4e4 + 0x28;
              iVar3 = iVar3 + 1;
              puVar5 = puVar5 + 1;
            } while (iVar3 < *(int *)(*(int *)(param_1 + 0x604) + 0x2d10));
          }
        }
      }
    }
    else {
      if (param_1 == (CWnd *)0xfffff228) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0xdf8);
      }
      if (param_3 == iVar1) {
        if ((uint)(*(int *)(param_1 + 0xe80) == 0) != *(uint *)(param_1 + 0xe80)) {
          *(uint *)(param_1 + 0xe80) = (uint)(*(int *)(param_1 + 0xe80) == 0);
          InvalidateRect(*(HWND *)(param_1 + 0xdf8),(RECT *)0x0,1);
        }
        if (*(int *)(param_1 + 0xe80) != *(int *)(param_1 + 0x100c)) {
          *(int *)(param_1 + 0x100c) = *(int *)(param_1 + 0xe80);
          InvalidateRect(*(HWND *)(param_1 + 0xf84),(RECT *)0x0,1);
        }
        if (*(int *)(param_1 + 0xe80) != *(int *)(param_1 + 0x1198)) {
          *(int *)(param_1 + 0x1198) = *(int *)(param_1 + 0xe80);
          InvalidateRect(*(HWND *)(param_1 + 0x1110),(RECT *)0x0,1);
        }
        FUN_0046ee20();
      }
      else {
        if (param_1 == (CWnd *)0xfffff09c) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + 0xf84);
        }
        if (param_3 == iVar1) {
          FUN_0045e220();
          FUN_0046ee20();
        }
        else {
          if (param_1 == (CWnd *)0xffffef10) {
            iVar1 = 0;
          }
          else {
            iVar1 = *(int *)(param_1 + 0x1110);
          }
          if (param_3 == iVar1) {
            FUN_0045e220();
            FUN_0046ee20();
          }
          else {
            iVar1 = 0;
            if (param_1 != (CWnd *)0xfffff9e4) {
              iVar1 = *(int *)(param_1 + 0x63c);
            }
            if (param_3 == iVar1) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                         &local_4e4);
              local_4dc = &stack0xfffffb04;
              local_c = 0;
              FUN_00404ee0(&DAT_0066fbb4);
              iVar1 = FUN_004490f0(param_1);
              if ((iVar1 != 0) && (0 < *(int *)(local_4e4 + -0xc))) {
                FUN_00405270();
                FUN_0046b0c0();
                iVar1 = FUN_0046b070();
                local_4e0 = *(undefined4 *)(iVar1 + 4);
                local_4dc = DAT_00658b30;
                for (puVar5 = *(undefined4 **)(param_1 + 0x450);
                    (puVar5 != (undefined4 *)0x0 && (*(int *)*puVar5 != -0x10000));
                    puVar5 = (undefined4 *)puVar5[1]) {
                }
                p_Var2 = CTreeCtrl::InsertItem
                                   ((CTreeCtrl *)(param_1 + 0x33c),1,(wchar_t *)(iVar1 + 8),0,0,0,0,
                                    0,(_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
                if (p_Var2 != (_TREEITEM *)0x0) {
                  puVar5 = _malloc(0x24);
                  if (puVar5 == (undefined4 *)0x0) goto LAB_0046e891;
                  puVar5[4] = local_4e0;
                  *puVar5 = p_Var2;
                  puVar5[5] = 0;
                  puVar5[1] = 0;
                  puVar5[3] = 0;
                  puVar5[7] = local_4dc;
                  puVar5[6] = 1;
                  puVar5[8] = 0;
                  FUN_0044e0a0();
                  InvalidateRect(*(HWND *)(param_1 + 0x35c),(RECT *)0x0,1);
                }
                FUN_00480070();
              }
            }
            else {
              iVar1 = 0;
              if (param_1 != (CWnd *)0xfffff3b4) {
                iVar1 = *(int *)(param_1 + 0xc6c);
              }
              if (param_3 != iVar1) {
                iVar1 = 0;
                if (param_1 != (CWnd *)0xfffff858) {
                  iVar1 = *(int *)(param_1 + 0x7c8);
                }
                if (param_3 == iVar1) {
                  if (1 < *(uint *)(param_1 + 0x5558)) {
                    local_4dc = &stack0xfffffb08;
                    FUN_00404ee0();
                    iVar1 = FUN_004493c0();
                    if (iVar1 != 0) {
                      local_4e0 = 0;
                      iVar1 = FUN_0046c620();
                      if (iVar1 != 0) {
                        FUN_0047f5f0();
                        param_1 = local_4e4;
                        FUN_0046b140();
                        iVar1 = 0;
                        for (puVar5 = *(undefined4 **)(param_1 + 0x5560);
                            puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)puVar5[1]) {
                          if (iVar1 == 0) {
                            *(undefined4 *)(param_1 + 0x5568) = *puVar5;
                            goto LAB_0046e98a;
                          }
                          iVar1 = iVar1 + 1;
                        }
                        *(undefined4 *)(param_1 + 0x5568) = 0;
                      }
                    }
                  }
                }
                else {
                  iVar1 = 0;
                  if (param_1 != (CWnd *)0xfffff6cc) {
                    iVar1 = *(int *)(param_1 + 0x954);
                  }
                  if (param_3 == iVar1) {
                    FUN_0046eb60();
                  }
                  else {
                    iVar1 = 0;
                    if (param_1 != (CWnd *)0xfffff540) {
                      iVar1 = *(int *)(param_1 + 0xae0);
                    }
                    if (param_3 == iVar1) {
                      FUN_0046e9c0();
                    }
                  }
                }
                goto LAB_0046e98a;
              }
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                         &local_4e4);
              local_4dc = &stack0xfffffb04;
              local_c = 1;
              FUN_00404ee0(&DAT_0066fbb4);
              iVar1 = FUN_004490f0(param_1);
              if ((iVar1 != 0) && (0 < *(int *)(local_4e4 + -0xc))) {
                local_4e0 = 0;
                iVar1 = FUN_0046c620();
                if (iVar1 != 0) {
                  FUN_00405270();
                  __snwprintf_s((wchar_t *)(iVar1 + 8),0x14,0x13,L"%s");
                  FUN_0047f670();
                }
              }
            }
LAB_0046e891:
            local_c = 0xffffffff;
            FUN_0042d560();
          }
        }
      }
    }
  }
LAB_0046e98a:
  CWnd::OnCommand(param_1,param_2,param_3);
LAB_0046e999:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_4e4);
  return;
}


//==== FUNC 004a8ac0  FUN_004a8ac0 ====

void __fastcall FUN_004a8ac0(int param_1)

{
  int *piVar1;
  int iVar2;
  CSimpleStringT<wchar_t,0> *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005dd228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004ac280(DAT_0064f674 ^ (uint)&stack0xffffffe0);
  *(undefined1 *)(param_1 + 0x1d20) = 0;
  FUN_004ac610();
  FUN_004ac770(param_1 + 0x19f0,param_1 + 0x1d00);
  this = (CSimpleStringT<wchar_t,0> *)FUN_004ac110();
  local_4 = 0;
  if (1 < *(int *)(*(int *)this + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
  }
  FUN_0044e280();
  FUN_004abd50(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x130) = 0;
  InvalidateRect(*(HWND *)(param_1 + 0xa8),(RECT *)0x0,1);
  FUN_004a3030();
  FUN_0044d780();
  local_4 = 0xffffffff;
  piVar1 = (int *)(param_1 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(param_1 + -0x10) + 4))((undefined4 *)(param_1 + -0x10));
  }
  ExceptionList = local_c;
  return;
}


//==== FUNC 004a8d20  FUN_004a8d20 ====

void __thiscall FUN_004a8d20(CWnd *param_1,uint param_2,int param_3)

{
  CWnd *pCVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  CSimpleStringT<wchar_t,0> *this;
  undefined4 uVar6;
  LPCWSTR lpFileName;
  BOOL BVar7;
  uint uVar8;
  undefined1 auStack_f4c [4];
  CWnd *local_f48;
  CWnd *local_f44;
  CWnd *local_f40;
  undefined1 *local_f3c;
  undefined4 local_b98;
  int local_b84;
  int aiStack_b80 [490];
  wchar_t *pwStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 local_380;
  wchar_t awStack_374 [20];
  undefined4 uStack_34c;
  CFileDialog local_348 [812];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de23e;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)auStack_f4c;
  ExceptionList = &local_14;
  if (param_1 == (CWnd *)0xfffffc84) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x39c);
  }
  local_f48 = param_1;
  if (param_3 == iVar4) {
    *(undefined4 *)(param_1 + 300) = 0;
    piVar5 = (int *)FUN_004ad163();
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990();
    }
    iVar4 = (**(code **)(*piVar5 + 0xc))();
    local_f48 = (CWnd *)(iVar4 + 0x10);
    local_c = 0;
    FUN_004a8bd0();
    local_c._0_1_ = 1;
    if (*(int *)(local_f44 + -0xc) != 0) {
      FUN_004a4890();
      local_c = CONCAT31(local_c._1_3_,2);
      FID_conflict_operator_();
      FID_conflict_operator_();
      aiStack_b80[0x1e6] = *(int *)(param_1 + 0x1cfc);
      uStack_3d4 = *(undefined4 *)(*(int *)(aiStack_b80[0x1e6] + 0x24) + 0x347c);
      uStack_3c8 = 0x5a;
      iVar4 = FUN_004b79eb();
      if (iVar4 == 1) {
        FUN_0044e280();
        InvalidateRect(*(HWND *)(param_1 + 0xa8),(RECT *)0x0,1);
        awStack_374[1] = L'\0';
        awStack_374[2] = L'\0';
        awStack_374[3] = L'\0';
        awStack_374[4] = L'\0';
        awStack_374[5] = L'\0';
        awStack_374[6] = L'\0';
        awStack_374[7] = L'\0';
        awStack_374[8] = L'\0';
        awStack_374[9] = L'\0';
        awStack_374[10] = L'\0';
        awStack_374[0xb] = L'\0';
        awStack_374[0xc] = L'\0';
        awStack_374[0xd] = L'\0';
        awStack_374[0xe] = L'\0';
        awStack_374[0xf] = L'\0';
        awStack_374[0x10] = L'\0';
        awStack_374[0x11] = L'\0';
        awStack_374[0x12] = L'\0';
        awStack_374[0x13] = 0;
        *(undefined4 *)(param_1 + 0x134) = uStack_3c0;
        awStack_374[0] = L'\0';
        uStack_34c = uStack_3c0;
        if (1 < *(int *)(pwStack_3d8 + -2)) {
          ATL::CSimpleStringT<wchar_t,0>::Fork
                    ((CSimpleStringT<wchar_t,0> *)&pwStack_3d8,*(int *)(pwStack_3d8 + -6));
        }
        _wcsncpy_s(awStack_374,0x14,pwStack_3d8,0xffffffff);
        FUN_004ac080();
        FUN_004ac610();
        FUN_004ac770(param_1 + 0x19f0);
        FUN_0047fa10();
        this = (CSimpleStringT<wchar_t,0> *)FUN_004ac110();
        local_c._0_1_ = 3;
        if (1 < *(int *)(*(int *)this + -4)) {
          ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
        }
        FUN_004a8830();
        local_c = CONCAT31(local_c._1_3_,2);
        pCVar1 = local_f40 + -4;
        LOCK();
        iVar4 = *(int *)pCVar1;
        *(int *)pCVar1 = *(int *)pCVar1 + -1;
        UNLOCK();
        if (iVar4 == 1 || iVar4 + -1 < 0) {
          (**(code **)(**(int **)(local_f40 + -0x10) + 4))();
        }
        InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
        CWnd::ShowWindow(param_1 + 0x1798,5);
      }
      local_c._0_1_ = 1;
      FUN_004a4a50();
    }
    local_c = (uint)local_c._1_3_ << 8;
    pCVar1 = local_f44 + -4;
    LOCK();
    iVar4 = *(int *)pCVar1;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(local_f44 + -0x10) + 4))();
    }
    local_c = 0xffffffff;
    pCVar1 = local_f48 + -4;
    LOCK();
    iVar4 = *(int *)pCVar1;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(local_f48 + -0x10) + 4))();
    }
  }
  else {
    if (param_1 == (CWnd *)0xfffffaf8) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x528);
    }
    if (param_3 == iVar4) {
      *(uint *)(param_1 + 300) = (uint)(*(int *)(param_1 + 300) == 0);
      InvalidateRect(*(HWND *)(param_1 + 0x18c),(RECT *)0x0,1);
    }
    else {
      if (param_1 == (CWnd *)0xfffff024) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0xffc);
      }
      if (param_3 == iVar4) {
        *(undefined4 *)(param_1 + 300) = 0;
        FUN_004b9e3f(1,&DAT_00625414,&DAT_0060b0b0,0x1001,L"Image Files|*.png;*.jpg;*bmp||",0,0);
        local_c = 4;
        iVar4 = CFileDialog::DoModal(local_348);
        if (iVar4 != 1) {
          local_c = 0xffffffff;
          CFileDialog::~CFileDialog(local_348);
          goto LAB_004a96bc;
        }
        CFileDialog::GetPathName(local_348);
        local_c = CONCAT31(local_c._1_3_,5);
        if (1 < *(int *)(local_f44 + -4)) {
          ATL::CSimpleStringT<wchar_t,0>::Fork
                    ((CSimpleStringT<wchar_t,0> *)&local_f44,*(int *)(local_f44 + -0xc));
        }
        FUN_004aaf90();
        FUN_0042d560();
        local_c = 0xffffffff;
        CFileDialog::~CFileDialog(local_348);
        param_1 = local_f48;
      }
      else {
        if (param_1 == (CWnd *)0xfffff96c) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x6b4);
        }
        if (param_3 == iVar4) {
          iVar4 = FUN_004ab200();
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x1cd4) = 1;
          }
          InvalidateRect(*(HWND *)(param_1 + 0x18c),(RECT *)0x0,1);
          if ((*(int *)(param_1 + 0x1cd4) != 0) && (iVar4 = FUN_004a88a0(&local_f40), iVar4 != 0)) {
            FUN_004ac110();
            local_c = 6;
            FUN_00405270();
            FUN_004ab900();
            local_c = 0xffffffff;
            FUN_0042d560();
          }
          *(undefined4 *)(param_1 + 0x1cd4) = 0;
        }
        else {
          if (param_1 == (CWnd *)0xfffff7e0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x840);
          }
          if (param_3 == iVar4) {
            FUN_0045e220();
          }
          else {
            if (param_1 == (CWnd *)0xfffff654) {
              iVar4 = 0;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x9cc);
            }
            if (param_3 == iVar4) {
              FUN_004aaf90();
              FUN_004ab1b0();
              param_1 = local_f48;
            }
            else {
              if (param_1 == (CWnd *)0xffffed0c) {
                iVar4 = 0;
              }
              else {
                iVar4 = *(int *)(param_1 + 0x1314);
              }
              if (param_3 == iVar4) {
                if (*(int *)(param_1 + 300) == 0) {
                  if (*(int *)(param_1 + 0xfc) <
                      *(int *)(*(int *)(*(int *)(param_1 + 0x1cfc) + 0x24) + 0x347c)) {
                    FUN_004a96f0(param_1);
                  }
                  else {
                    FUN_00448e50();
                  }
                }
                else {
LAB_004a9287:
                  FUN_00448e50();
                }
              }
              else {
                if (param_1 == (CWnd *)0xffffeb80) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = *(int *)(param_1 + 0x14a0);
                }
                if (param_3 == iVar4) {
                  if (*(int *)(param_1 + 300) != 0) goto LAB_004a9287;
                  uVar2 = *(uint *)(param_1 + 0x130);
                  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0xfc))) {
                    local_f40 = param_1 + 0xf4;
                    uVar8 = (*(int *)(param_1 + 0xfc) + -1 <= (int)uVar2) - 1 & uVar2;
                    uVar3 = 0;
                    for (iVar4 = *(int *)(param_1 + 0x104); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4))
                    {
                      if (uVar3 == uVar2) {
                        FUN_0044e1e0();
                        break;
                      }
                      uVar3 = uVar3 + 1;
                    }
                    *(uint *)(local_f48 + 0x130) = uVar8;
                    *(uint *)(local_f48 + 0x378) = uVar8;
                    FUN_004a9a40();
                    pCVar1 = local_f48;
                    if ((-1 < (int)uVar8) &&
                       (-1 < (int)((*(int *)(local_f48 + 0x368) + *(int *)(local_f48 + 0x354)) *
                                  uVar8))) {
                      FUN_004715f0();
                    }
                    InvalidateRect(*(HWND *)(pCVar1 + 0xa8),(RECT *)0x0,1);
                    InvalidateRect(*(HWND *)(pCVar1 + 0x18c),(RECT *)0x0,1);
                    param_1 = local_f48;
                  }
                }
                else {
                  if (param_1 == (CWnd *)0xffffee98) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = *(int *)(param_1 + 0x1188);
                  }
                  if (param_3 == iVar4) {
                    iVar4 = FUN_004a88a0(&local_f40);
                    if (iVar4 != 0) {
                      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_1 + 0x134);
                    }
                    param_1[0x1d20] = local_f40._0_1_;
                    FUN_004ac610();
                    iVar4 = *(int *)(*(int *)(param_1 + 0x1cfc) + 0x1c);
                    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x234) == 2)) {
                      FUN_00448e50();
                      goto LAB_004a96bc;
                    }
                    if (0 < *(int *)(param_1 + 0xfc)) {
                      if (*(int *)(*(int *)(*(int *)(param_1 + 0x1cfc) + 0x24) + 0x347c) <
                          *(int *)(param_1 + 0xfc)) {
                        uVar6 = FUN_00405270();
                        __snwprintf_s((wchar_t *)local_348,0x104,0x103,L"%s %d",uVar6);
                        FUN_00448f10(param_1);
                        goto LAB_004a96bc;
                      }
                      FUN_004a1c50();
                      local_c = 7;
                      piVar5 = *(int **)(param_1 + 0x104);
                      local_b98 = *(undefined4 *)(param_1 + 0x1cfc);
                      local_b84 = 0;
                      do {
                        if (piVar5 == (int *)0x0) break;
                        aiStack_b80[local_b84] = *piVar5;
                        piVar5 = (int *)piVar5[1];
                        local_b84 = local_b84 + 1;
                      } while (local_b84 < 0x200);
                      local_380 = *(undefined4 *)(param_1 + 0x134);
                      FUN_004b79eb();
                      local_c = 0xffffffff;
                      FUN_004a1d00();
                    }
                  }
                  else {
                    if (param_1 == (CWnd *)0xffffe9f4) {
                      iVar4 = 0;
                    }
                    else {
                      iVar4 = *(int *)(param_1 + 0x162c);
                    }
                    if (param_3 == iVar4) {
                      FUN_004ab900();
                    }
                    else {
                      if (param_1 == (CWnd *)0xffffe868) {
                        iVar4 = 0;
                      }
                      else {
                        iVar4 = *(int *)(param_1 + 0x17b8);
                      }
                      if ((param_3 == iVar4) && (iVar4 = FUN_004a88a0(&local_f40), iVar4 != 0)) {
                        local_f3c = &stack0xfffff0a0;
                        FUN_00404ee0(&DAT_0066fc4c);
                        iVar4 = FUN_004493c0(param_1);
                        if (iVar4 != 0) {
                          local_f44 = param_1 + 0x1d00;
                          FUN_004ac110();
                          local_c = 8;
                          lpFileName = (LPCWSTR)FUN_00405270();
                          BVar7 = DeleteFileW(lpFileName);
                          local_c = 0xffffffff;
                          FUN_0042d560();
                          if (BVar7 == 0) {
                            GetLastError();
                          }
                          if (-1 < (int)local_f40) {
                            pCVar1 = (CWnd *)0x0;
                            for (iVar4 = *(int *)(param_1 + 0x1d18); iVar4 != 0;
                                iVar4 = *(int *)(iVar4 + 4)) {
                              if (pCVar1 == local_f40) {
                                FUN_0044e1e0();
                                param_1 = local_f48;
                                break;
                              }
                              pCVar1 = pCVar1 + 1;
                            }
                          }
                          FUN_004ac770(param_1 + 0x19f0);
                          FUN_004ac610();
                          if (*(int *)(param_1 + 0x1d10) < 1) {
                            FUN_004aaf70();
                            param_1 = local_f48;
                            FUN_004a3030();
                            InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)(param_1 + 0x1cd8),1);
                          }
                          else {
                            FUN_0047fa10();
                            param_1[0x1d20] = (CWnd)0x0;
                            iVar4 = FUN_004a6bc0();
                            if (iVar4 != 0) {
                              FUN_004ac110();
                              local_c = 9;
                              FUN_00405270();
                              FUN_004a8830();
                              local_c = 0xffffffff;
                              FUN_0042d560();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  CWnd::OnCommand(param_1,param_2,param_3);
LAB_004a96bc:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_f4c);
  return;
}


//==== FUNC 004948e0  FUN_004948e0 ====

void __thiscall
FUN_004948e0(int param_1,undefined1 param_2,uint param_3,int param_4,uint param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  uint uVar5;
  uint _Size;
  wchar_t *pwVar6;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined1 uStack_8;
  undefined2 local_7;
  undefined1 local_5;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_34;
  local_1c = param_4;
  local_30 = param_1;
  if ((param_1 == 0) || (param_4 == 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  local_28 = param_7;
  local_20 = 5;
LAB_00494920:
  do {
    bStack_15 = 0;
    local_18 = param_2;
    _Size = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    local_7 = 0;
    local_5 = 0;
    bStack_17 = (byte)param_3;
    bStack_16 = 1;
    uStack_14 = 0;
    local_5 = FUN_004945f0();
    iVar1 = FUN_004947b0(&local_18,1000);
    if (iVar1 == 0) {
      DVar4 = GetLastError();
      (*DAT_0065d3e0)(L"!! SendCMD_3632: send err=0x%x, cmd=0x%x",DVar4,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_34);
      return;
    }
    local_24 = 0x14;
    local_2c = 0;
    uVar5 = 0;
    local_34 = 0;
    do {
      while( true ) {
        while( true ) {
          iVar1 = local_30;
          local_18 = 0;
          bStack_17 = 0;
          bStack_16 = 0;
          bStack_15 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_c = 0;
          uStack_8 = 0;
          local_7 = 0;
          local_5 = 0;
          iVar2 = FUN_00494640(1000);
          if (iVar2 == 0) break;
          if (iVar2 == -2) {
            local_28 = local_28 + -1;
            if (local_28 < 1) {
              if (param_6 != 0) {
                (*DAT_0065d3e0)(L"!! SendCMD_3632: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d"
                                ,iVar1,param_3,uVar5,local_34,_Size);
              }
              __security_check_cookie(local_4 ^ (uint)&local_34);
              return;
            }
            goto LAB_00494920;
          }
          if (iVar2 == -3) {
            (*DAT_0065d3e0)(L"!! SendCMD_3632: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d"
                            ,iVar1,param_3,uVar5,local_34,_Size);
            __security_check_cookie(local_4 ^ (uint)&local_34);
            return;
          }
        }
        local_34 = (uint)bStack_15;
        uVar3 = bStack_17 & 0x7f;
        uVar5 = bStack_16 & 0x7f;
        if ((param_3 & 0xff) == uVar3) break;
        local_24 = local_24 + -1;
        if (local_24 < 1) {
          pwVar6 = 
          L"SendCMD_3632: cmd unmatch for cmd=0x%x, nRetCmd=0x%x, package_index=%d, reread it";
          param_5 = local_34;
          goto LAB_00494a01;
        }
      }
      if ((char)bStack_17 < '\0') {
        (*DAT_0065d3e0)(L"SendCMD_3632: CRC check err for cmd=0x%x, redo it",param_3);
        goto LAB_00494920;
      }
      uVar3 = uStack_14 & 0xf;
      _Size = param_5;
      if (((int)uVar3 <= (int)param_5) && (_Size = uVar3, 0xe < uVar3)) {
        _Size = 0xe;
      }
      uVar3 = local_2c + _Size;
      if ((int)uVar3 <= (int)param_5) {
        _memcpy((void *)(local_1c + local_2c),(void *)((int)&uStack_14 + 1),_Size);
      }
      local_2c = uVar3;
    } while (uVar5 != local_34 + 1);
    if ((int)param_5 <= (int)uVar3) {
      __security_check_cookie(local_4 ^ (uint)&local_34);
      return;
    }
    local_20 = local_20 + -1;
    if (local_20 < 1) {
      pwVar6 = L"SendCMD_3632: read length unmatch, cmd=0x%x, recvBytes=%d, nSize=%d";
LAB_00494a01:
      (*DAT_0065d3e0)(pwVar6,param_3,uVar3,param_5);
      __security_check_cookie(local_4 ^ (uint)&local_34);
      return;
    }
  } while( true );
}


//==== FUNC 00493920  FUN_00493920 ====

void __thiscall
FUN_00493920(int param_1,wchar_t *param_2,char param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  char cVar1;
  wchar_t *pwVar2;
  DWORD DVar3;
  wchar_t *pwVar4;
  int iVar5;
  char cVar6;
  wchar_t *pwVar7;
  undefined1 auStack_34 [2];
  char local_32;
  char local_31;
  int local_30;
  int local_2c;
  int local_28;
  size_t local_24;
  int local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_34;
  if ((*(int *)(param_1 + 0xc) == 0) || (param_5 < 1)) {
    (*DAT_0065d3e0)(L"CDev3632::AccessData param err, m_hDev=%x, nBytesToWrite=%d",
                    *(int *)(param_1 + 0xc),param_5);
    __security_check_cookie(local_4 ^ (uint)auStack_34);
    return;
  }
  local_28 = param_5 / 0xe;
  local_2c = 0;
  if (param_5 % 0xe != 0) {
    local_28 = local_28 + 1;
  }
  iVar5 = 0;
  if (param_5 < 1) {
LAB_00493c21:
    __security_check_cookie(local_4 ^ (uint)auStack_34);
    return;
  }
  while( true ) {
    local_24 = 0xe;
    if (param_5 - local_2c < 0xe) {
      local_24 = param_5 - local_2c;
    }
    local_20 = 0;
    while( true ) {
      FUN_004051e0(param_7);
      if (*(int *)(param_1 + 0xc) == 0) goto LAB_00493b3a;
      local_18 = ((uint)param_2 & 0xff) << 8;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_18 = CONCAT13((char)iVar5,(undefined3)local_18);
      local_30 = iVar5 + 1;
      local_18 = CONCAT31(local_18._1_3_,0x13);
      local_18._0_3_ = CONCAT12((undefined1)local_28,(undefined2)local_18);
      local_18 = CONCAT13((char)iVar5,(undefined3)local_18);
      local_14 = (uint)(byte)(param_3 << 4 | (byte)local_24);
      if (param_4 != 0) {
        _memcpy((void *)((int)&local_14 + 1),(void *)(local_2c + param_4),local_24);
      }
      iVar5 = 0;
      cVar6 = '\0';
      local_32 = '\0';
      local_31 = '\0';
      cVar1 = '\0';
      do {
        local_32 = local_32 + *(char *)((int)&local_18 + iVar5 + 2);
        cVar6 = cVar6 + *(char *)((int)&local_18 + iVar5);
        cVar1 = cVar1 + *(char *)((int)&local_18 + iVar5 + 1);
        local_31 = local_31 + *(char *)((int)&local_18 + iVar5 + 3);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0x14);
      local_8 = CONCAT13(cVar1 + local_32 + local_31 + cVar6,(undefined3)local_8);
      if (*(int *)(param_1 + 0x238) == 0) {
        (*DAT_0065d3e0)(L"CDev3632::AccessData Online=0, cmd=0x%x, package=%d, return",param_2,
                        local_30 + -1);
        goto LAB_00493b3a;
      }
      FUN_00470c90();
      *(undefined4 *)(param_1 + 0x24c) = 0;
      *(undefined4 *)(param_1 + 0x250) = 0;
      *(undefined4 *)(param_1 + 0x254) = 0;
      if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
        ResetEvent(*(HANDLE *)(param_1 + 600));
      }
      (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
      iVar5 = FUN_004947b0(&local_18,500);
      if (iVar5 == 0) {
        DVar3 = GetLastError();
        (*DAT_0065d3e0)(L"!! CDev3632::AccessData: send package %d err=0x%x",local_30 + -1,DVar3);
        goto LAB_00493b3a;
      }
      if (((char)param_2 < '\0') || (param_2 == (wchar_t *)0x6)) goto LAB_00493ba0;
      iStack_1c = -1;
      pwVar2 = (wchar_t *)
               FUN_00493490(param_2,(-(uint)(*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x24) +
                                                      0x2d8d) != '\0') & 5000) + 2000,&local_18,
                            &iStack_1c);
      if (*(int *)(param_1 + 0x284) != 0) {
        (*DAT_0065d3e0)(L"CDev3632::AccessData: abort by user, cmd=0x%x",param_2);
        goto LAB_00493c21;
      }
      pwVar4 = param_2;
      if (pwVar2 == (wchar_t *)0x0) break;
      if (pwVar2 == (wchar_t *)0xfffffffe) {
        if (*(int *)(param_1 + 0x238) == 0) {
          (*DAT_0065d3e0)(L"CDev3632::AccessData Online=0, cmd=0x%x, package=%d, no more retry, return"
                          ,param_2,local_30 + -1);
          goto LAB_00493b3a;
        }
      }
      else if (pwVar2 != (wchar_t *)0xfffffffd) {
        pwVar7 = L"!! CDev3632::AccessData: read err, cmd=0x%x, nRet=%d, package=%d";
        iVar5 = local_30 + -1;
        goto LAB_00493b2f;
      }
      if ((param_6 == 0) || (4 < local_20)) {
        pwVar4 = L"timeout";
        if (pwVar2 != (wchar_t *)0xfffffffe) {
          pwVar4 = L"crc";
        }
        pwVar7 = L"!! CDev3632::AccessData: %s err, cmd=0x%x, package=%d";
        pwVar2 = param_2;
        iVar5 = local_30 + -1;
        goto LAB_00493b2f;
      }
      local_20 = local_20 + 1;
      iVar5 = local_30 + -1;
    }
    if (iStack_1c != local_30 + -1) break;
LAB_00493ba0:
    local_2c = local_2c + local_24;
    iVar5 = local_30;
    if (param_5 <= local_2c) {
      __security_check_cookie(local_4 ^ (uint)auStack_34);
      return;
    }
  }
  pwVar2 = (wchar_t *)(local_30 + -1);
  pwVar7 = L"!! CDev3632::AccessData: package index err, cmd=0x%x, send=0x%x, in=0x%x";
  iVar5 = iStack_1c;
LAB_00493b2f:
  (*DAT_0065d3e0)(pwVar7,pwVar4,pwVar2,iVar5);
LAB_00493b3a:
  __security_check_cookie(local_4 ^ (uint)auStack_34);
  return;
}


//==== FUNC 00497b90  FUN_00497b90 ====

void FUN_00497b90(int param_1,wchar_t *param_2,char param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  wchar_t *pwVar4;
  DWORD DVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  wchar_t *pwVar10;
  char cStack_34;
  char cStack_33;
  byte bStack_32;
  byte bStack_31;
  int iStack_30;
  size_t sStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&cStack_34;
  local_1c = param_4;
  if ((*(int *)(param_1 + 0xc) == 0) || (param_5 < 1)) {
    (*DAT_0065d3e0)(L"CDevComboFilm::SendData param err, m_hDev=%x, nBytesToWrite=%d",
                    *(int *)(param_1 + 0xc),param_5);
    __security_check_cookie(local_4 ^ (uint)&cStack_34);
    return;
  }
  FUN_00470c90();
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(param_1 + 600));
  }
  (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
  iStack_24 = param_5 / 0xe;
  iStack_30 = 0;
  iStack_28 = 0;
  if (param_5 % 0xe != 0) {
    iStack_24 = iStack_24 + 1;
  }
  if (0 < param_5) {
    bStack_32 = param_3 << 4;
    do {
      sStack_2c = 0xe;
      if (param_5 - iStack_28 < 0xe) {
        sStack_2c = param_5 - iStack_28;
      }
      bStack_31 = bStack_32 | (byte)sStack_2c;
      iStack_20 = 0;
      while( true ) {
        iVar9 = iStack_28;
        bVar1 = bStack_31;
        FUN_004051e0(param_7);
        uStack_10 = 0;
        uStack_c = 0;
        uStack_8 = 0;
        uStack_18 = ((uint)param_2 & 0xff) << 8;
        uVar2 = (undefined1)iStack_30;
        uStack_18 = CONCAT13(uVar2,(undefined3)uStack_18);
        iStack_30 = iStack_30 + 1;
        uStack_18 = CONCAT31(uStack_18._1_3_,0x15);
        uStack_18._0_3_ = CONCAT12((undefined1)iStack_24,(undefined2)uStack_18);
        uStack_18 = CONCAT13(uVar2,(undefined3)uStack_18);
        uStack_14 = (uint)bVar1;
        if (local_1c != 0) {
          _memcpy((void *)((int)&uStack_14 + 1),(void *)(local_1c + iVar9),sStack_2c);
        }
        iVar7 = 0;
        cVar8 = '\0';
        cStack_33 = '\0';
        cStack_34 = '\0';
        cVar3 = '\0';
        do {
          cStack_33 = cStack_33 + *(char *)((int)&uStack_18 + iVar7 + 2);
          cVar8 = cVar8 + *(char *)((int)&uStack_18 + iVar7);
          cVar3 = cVar3 + *(char *)((int)&uStack_18 + iVar7 + 1);
          cStack_34 = cStack_34 + *(char *)((int)&uStack_18 + iVar7 + 3);
          iVar7 = iVar7 + 4;
        } while (iVar7 < 0x14);
        uStack_8 = CONCAT13(cVar3 + cStack_33 + cStack_34 + cVar8,(undefined3)uStack_8);
        iVar7 = FUN_004947b0(&uStack_18,500);
        if (iVar7 == 0) {
          DVar5 = GetLastError();
          (*DAT_0065d3e0)(L"!! CDevComboFilm::SendData: send package %d err=0x%x",iStack_30 + -1,
                          DVar5);
          goto LAB_00497def;
        }
        if (((char)param_2 < '\0') ||
           (pwVar4 = (wchar_t *)FUN_00497640(param_2), iVar9 = iStack_28, pwVar4 == (wchar_t *)0x0))
        break;
        if ((pwVar4 != (wchar_t *)0xfffffffe) && (pwVar4 != (wchar_t *)0xfffffffd)) {
          pwVar10 = L"!! CDevComboFilm::SendData: read err, cmd=0x%x, nRet=%d, package=%d";
          pwVar6 = param_2;
LAB_00497de6:
          (*DAT_0065d3e0)(pwVar10,pwVar6,pwVar4,iStack_30 + -1);
LAB_00497def:
          __security_check_cookie(local_4 ^ (uint)&cStack_34);
          return;
        }
        if ((param_6 == 0) || (4 < iStack_20)) {
          pwVar6 = L"timeout";
          if (pwVar4 != (wchar_t *)0xfffffffe) {
            pwVar6 = L"crc";
          }
          pwVar10 = L"!! CDevComboFilm::SendData: %s err, cmd=0x%x, package=%d";
          pwVar4 = param_2;
          goto LAB_00497de6;
        }
        iStack_20 = iStack_20 + 1;
        iStack_30 = iStack_30 + -1;
      }
      iStack_28 = iVar9 + sStack_2c;
    } while (iStack_28 < param_5);
  }
  __security_check_cookie(local_4 ^ (uint)&cStack_34);
  return;
}


//==== FUNC 00497e50  FUN_00497e50 ====

void __thiscall FUN_00497e50(int param_1,undefined4 param_2,char param_3,int param_4,size_t param_5)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  uint _Size;
  uint uVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [3];
  byte bStack_2d;
  int local_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  byte bStack_16;
  byte bStack_15;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined1 uStack_8;
  undefined2 uStack_7;
  undefined1 uStack_5;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_30;
  local_1c = param_4;
  local_2c = param_1;
  if ((*(int *)(param_1 + 0xc) == 0) || (param_4 == 0)) {
    __security_check_cookie(local_4 ^ (uint)auStack_30);
    return;
  }
  FUN_00470c90();
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(param_1 + 600));
  }
  (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
  bStack_2d = param_3 << 4;
  iStack_24 = 0;
LAB_00497ed0:
  do {
    uVar3 = 0;
    bStack_15 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_7 = 0;
    uStack_5 = 0;
    uStack_18 = 0x15;
    uStack_17 = (undefined1)param_2;
    bStack_16 = 1;
    uStack_14 = (uint)bStack_2d;
    uStack_5 = FUN_004945f0();
    iVar1 = FUN_004947b0(&uStack_18,500);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      (*DAT_0065d3e0)(L"!! ReadData: send err=0x%x, cmd=0x%x",DVar2,param_2);
LAB_00498014:
      __security_check_cookie(local_4 ^ (uint)auStack_30);
      return;
    }
    _Size = 0;
    iStack_20 = 0;
    uStack_28 = 0;
LAB_00497f40:
    do {
      uStack_18 = 0;
      uStack_17 = 0;
      bStack_16 = 0;
      bStack_15 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      uStack_7 = 0;
      uStack_5 = 0;
      iVar1 = FUN_00497640(param_2);
      if (iVar1 != 0) {
        if (iVar1 == -2) {
          if (iStack_24 < 2) {
            iStack_24 = iStack_24 + 1;
            goto LAB_00497ed0;
          }
          uVar6 = *(undefined4 *)(local_2c + 0xc);
          pwVar5 = L"!! ReadData: timeout, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d";
        }
        else {
          if (iVar1 != -4) goto LAB_00497f40;
          uVar6 = *(undefined4 *)(local_2c + 0xc);
          pwVar5 = L"!! ReadData: read err, hDev=%x, cmd=0x%x, nPackages=%d, inx=%d, nCopys=%d";
        }
        (*DAT_0065d3e0)(pwVar5,uVar6,param_2,uVar3,uStack_28,_Size);
        goto LAB_00498014;
      }
      uStack_28 = (uint)bStack_15;
      uVar4 = uStack_14 & 0xf;
      uVar3 = bStack_16 & 0x7f;
      _Size = param_5;
      if (((int)uVar4 <= (int)param_5) && (_Size = uVar4, 0xe < uVar4)) {
        _Size = 0xe;
      }
      iVar1 = _Size + iStack_20;
      if (iVar1 <= (int)param_5) {
        _memcpy((void *)(local_1c + iStack_20),(void *)((int)&uStack_14 + 1),_Size);
      }
      iStack_20 = iVar1;
    } while (uVar3 != uStack_28 + 1);
    if ((int)param_5 <= iVar1) {
      __security_check_cookie(local_4 ^ (uint)auStack_30);
      return;
    }
  } while( true );
}


//==== FUNC 00493cb0  FUN_00493cb0 ====

void FUN_00493cb0(int param_1,int param_2,char param_3,int param_4,size_t param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint _Size;
  DWORD DVar4;
  byte bVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [3];
  byte bStack_f5;
  int iStack_f4;
  int iStack_f0;
  int local_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  byte bStack_de;
  byte bStack_dd;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined2 uStack_cf;
  undefined1 uStack_cd;
  byte abStack_cc [200];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)auStack_f8;
  local_ec = param_4;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x238) != 0) {
      FUN_00470c90();
      *(undefined4 *)(param_1 + 0x24c) = 0;
      *(undefined4 *)(param_1 + 0x250) = 0;
      *(undefined4 *)(param_1 + 0x254) = 0;
      if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
        ResetEvent(*(HANDLE *)(param_1 + 600));
      }
      (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
      bStack_f5 = param_3 << 4;
      iStack_f0 = 0;
LAB_00493d51:
      do {
        uStack_dc = (uint)bStack_f5;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cf = 0;
        uStack_cd = 0;
        uStack_e0 = 0x13;
        uStack_df = (undefined1)param_2;
        bStack_de = 1;
        bStack_dd = 0;
        uStack_cd = FUN_004945f0();
        iVar1 = FUN_004947b0(&uStack_e0,500);
        if (iVar1 == 0) goto LAB_00493f6c;
        if (param_2 == 6) goto LAB_00493f19;
        iStack_e8 = 0;
        _memset(abStack_cc,0xff,200);
        iVar1 = 0;
        iStack_f4 = 0;
LAB_00493de3:
        do {
          uStack_e0 = 0;
          uStack_df = 0;
          bStack_de = 0;
          bStack_dd = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cf = 0;
          uStack_cd = 0;
          uStack_e4 = 0xffffffff;
          iVar2 = FUN_00493490(param_2,(-(uint)(*(char *)(*(int *)(*(int *)(param_1 + 0x10) + 0x24)
                                                         + 0x2d8d) != '\0') & 3000) + 2000,
                               &uStack_e0,&uStack_e4);
          if (*(int *)(param_1 + 0x284) != 0) {
            (*DAT_0065d3e0)(L"CDev3632::SendCMD: abort by user, cmd=0x%x",param_2);
            goto LAB_00493f19;
          }
          if (iVar2 != 0) {
            if (iVar2 == -2) {
              if (*(int *)(param_1 + 0x238) == 0) {
                (*DAT_0065d3e0)(L"CDev3632::SendCMD Online=0, cmd=0x%x, inx=%d, no more retry, return"
                                ,param_2,bStack_dd);
                goto LAB_00493f19;
              }
              if (iStack_f0 < 5) {
                iStack_f0 = iStack_f0 + 1;
                goto LAB_00493d51;
              }
              uVar7 = *(undefined4 *)(param_1 + 0xc);
              pwVar6 = L"!!CDev3632::SendCMD: timeout, hDev=%x, cmd=0x%x, inx=%d";
            }
            else {
              if (iVar2 != -4) goto LAB_00493de3;
              uVar7 = *(undefined4 *)(param_1 + 0xc);
              pwVar6 = L"!!CDev3632::SendCMD: read err, hDev=%x, cmd=0x%x, inx=%d";
            }
            (*DAT_0065d3e0)(pwVar6,uVar7,param_2,bStack_dd);
            goto LAB_00493f19;
          }
          if (local_ec == 0) goto LAB_00493f19;
          iVar2 = 0;
          if (0 < iVar1) {
            do {
              if (abStack_cc[iVar2] == bStack_dd) {
                (*DAT_0065d3e0)(L"CDrv3632::SendCMD ignore index(%d) for cmd(0x%x)",bStack_dd,
                                param_2);
                goto LAB_00493de3;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < iVar1);
          }
          iStack_f4 = iStack_f4 + 0xe;
          abStack_cc[iVar1] = bStack_dd;
          uVar3 = uStack_dc & 0xf;
          iVar1 = iVar1 + 1;
          bVar5 = bStack_de & 0x7f;
          _Size = param_5;
          if (((int)uVar3 <= (int)param_5) && (_Size = uVar3, 0xe < uVar3)) {
            _Size = 0xe;
          }
          iVar2 = _Size + iStack_e8;
          if (iVar2 <= (int)param_5) {
            _memcpy((void *)(local_ec + iStack_e8),(void *)((int)&uStack_dc + 1),_Size);
            iStack_e8 = iVar2;
          }
        } while ((uint)bStack_dd != bVar5 - 1);
        if (iStack_f4 == (uint)bVar5 * 0xe) goto LAB_00493f19;
        Sleep(100);
      } while( true );
    }
    (*DAT_0065d3e0)(L"CDev3632::SendCMD Online=0, cmd=0x%x, return",param_2);
  }
LAB_00493f19:
  __security_check_cookie(local_4 ^ (uint)auStack_f8);
  return;
LAB_00493f6c:
  DVar4 = GetLastError();
  (*DAT_0065d3e0)(L"!!CDev3632::SendCMD: send err=0x%x, cmd=0x%x",DVar4,param_2);
  goto LAB_00493f19;
}


//==== FUNC 005b0ae1  __amsg_exit ====

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  pcVar1 = (code *)__decode_pointer(PTR___exit_0064f7f0);
  (*pcVar1)(0xff);
  return;
}


//==== FUNC 005b3b1f  __FF_MSGBANNER ====

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
    if (DAT_0064f648 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}


//==== FUNC 005b4d41  __mtinitlocknum ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  int local_20;
  
  iVar2 = 1;
  local_20 = 1;
  if (DAT_00657744 == 0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_0064f960 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      iVar2 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar2 == 0) {
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
      FUN_005b4dfb();
      iVar2 = local_20;
    }
  }
  return iVar2;
}


//==== FUNC 005abb50  _malloc ====

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _malloc(size_t _Size)

{
  LPVOID pvVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_00657744 == (HANDLE)0x0) {
        __FF_MSGBANNER();
        __NMSG_WRITE(0x1e);
        ___crtExitProcess(0xff);
      }
      if (DAT_0067123c == 1) {
        dwBytes = _Size;
        if (_Size == 0) {
          dwBytes = 1;
        }
LAB_005abbbf:
        pvVar1 = HeapAlloc(DAT_00657744,0,dwBytes);
      }
      else if ((DAT_0067123c != 3) || (pvVar1 = (LPVOID)_V6_HeapAlloc(_Size), pvVar1 == (LPVOID)0x0)
              ) {
        sVar4 = _Size;
        if (_Size == 0) {
          sVar4 = 1;
        }
        dwBytes = sVar4 + 0xf & 0xfffffff0;
        goto LAB_005abbbf;
      }
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (DAT_00657bd4 == 0) {
        piVar3 = __errno();
        *piVar3 = 0xc;
        break;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  return (void *)0x0;
}


//==== FUNC 005ab0c1  fast_error_exit ====

/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_006571b8 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}


//==== FUNC 005bcb2c  _abort ====

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
  
  if (((byte)DAT_00650450 & 1) != 0) {
    __NMSG_WRITE(10);
  }
  p_Var2 = ___get_sigabrt();
  if (p_Var2 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_00650450 & 2) != 0) {
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


//==== FUNC 005af14e  __purecall ====

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2008 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__decode_pointer(DAT_00657c2c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  __NMSG_WRITE(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}


//==== FUNC 0042c6d0  FUN_0042c6d0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0042c6d0(CWnd *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  HWND pHVar2;
  int iVar3;
  int *piVar4;
  _TREEITEM *p_Var5;
  undefined4 *puVar6;
  CWnd *pCVar7;
  int iVar8;
  CWnd *pCVar9;
  CWnd *local_3444;
  int iStack_3440;
  CWnd *pCStack_343c;
  undefined1 *apuStack_3438 [2];
  tagRECT atStack_3430 [833];
  uint local_1c;
  CWnd *pCStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de766;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&local_3444;
  ExceptionList = &local_14;
  iVar8 = 0;
  local_3444 = param_1;
  pCStack_18 = param_1;
  if ((DAT_0066a21c != (int *)0x0) && (DAT_0066a214 == 0)) {
    (**(code **)(*DAT_0066a21c + 0x60))();
    if (DAT_0066a21c != (int *)0x0) {
      (**(code **)(*DAT_0066a21c + 4))();
    }
    DAT_0066a21c = (int *)0x0;
  }
  if ((short)(param_2 >> 0x10) == 0x300) {
    pHVar2 = GetFocus();
    CWnd::FromHandle(pHVar2);
  }
  pCVar9 = param_1;
  if ((param_1 != (CWnd *)0xfffff644) && (*(int *)(param_1 + 0x9dc) != 0)) {
    if (param_1 == (CWnd *)0xfffff644) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x9dc);
    }
    if (param_3 == iVar3) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
      CWnd::FromHandle(pHVar2);
      FUN_00474ff0();
      goto LAB_0042cbe6;
    }
  }
  if (param_1 == (CWnd *)0xffffff8c) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x94);
  }
  if (param_3 == iVar3) {
    piVar4 = (int *)FUN_004ad163();
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990();
    }
    iStack_3440 = (**(code **)(*piVar4 + 0xc))();
    iStack_3440 = iStack_3440 + 0x10;
    uStack_c = 0;
    apuStack_3438[0] = &stack0xffffcba4;
    ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_0066fbb4 + -0x10));
    iVar3 = FUN_004490f0(param_1);
    iVar8 = iStack_3440;
    if ((iVar3 != 0) && (0 < *(int *)(iStack_3440 + -0xc))) {
      pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
      pCStack_343c = CWnd::FromHandle(pHVar2);
      if (1 < *(int *)(iVar8 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&iStack_3440,*(int *)(iVar8 + -0xc));
      }
      FUN_0047a8d0();
      iVar8 = FUN_0047a990();
      pCVar9 = local_3444;
      pCStack_343c = *(CWnd **)(iVar8 + 4);
      uVar1 = *(undefined4 *)(local_3444 + 0x32dc);
      apuStack_3438[0] = *(undefined1 **)(local_3444 + 0x32d8);
      for (puVar6 = *(undefined4 **)(local_3444 + 0x3124);
          (puVar6 != (undefined4 *)0x0 && (*(int *)*puVar6 != -0x10000));
          puVar6 = (undefined4 *)puVar6[1]) {
      }
      p_Var5 = CTreeCtrl::InsertItem
                         ((CTreeCtrl *)(local_3444 + 0x3010),1,(wchar_t *)(iVar8 + 8),0,0,0,0,0,
                          (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
      if (p_Var5 != (_TREEITEM *)0x0) {
        puVar6 = _malloc(0x24);
        param_1 = local_3444;
        if (puVar6 == (undefined4 *)0x0) goto LAB_0042c945;
        puVar6[4] = pCStack_343c;
        *puVar6 = p_Var5;
        puVar6[5] = 0;
        puVar6[1] = apuStack_3438[0];
        puVar6[3] = 0;
        puVar6[7] = uVar1;
        puVar6[6] = 1;
        puVar6[8] = 0;
        FUN_0044e0a0();
        InvalidateRect(*(HWND *)(pCVar9 + 0x3030),(RECT *)0x0,1);
      }
      FUN_00480070();
      param_1 = local_3444;
    }
LAB_0042c945:
    piVar4 = (int *)(iStack_3440 + -4);
    LOCK();
    iVar8 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
  }
  else {
    if (param_1 == (CWnd *)0xfffff95c) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x6c4);
    }
    if (param_3 != iVar3) {
      if (param_1 == (CWnd *)0xfffffe00) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x220);
      }
      if (param_3 == iVar3) {
        pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
        pCVar7 = CWnd::FromHandle(pHVar2);
        if (1 < *(int *)(pCVar7 + 0xb0)) {
          apuStack_3438[0] = &stack0xffffcba8;
          FUN_00404ee0();
          iVar8 = FUN_004493c0();
          if (iVar8 != 0) {
            pCStack_343c = (CWnd *)0x0;
            iVar8 = FUN_0042cd90();
            pCVar9 = local_3444;
            if (iVar8 != 0) {
              FUN_0047f5f0();
              FUN_0047aa00();
              iVar8 = FUN_0047aa30();
              pCVar9 = local_3444;
              if (iVar8 != 0) {
                FUN_0042cd50();
              }
            }
          }
        }
      }
      else {
        if (param_1 == (CWnd *)0xfffffc74) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x3ac);
        }
        if (param_3 == iVar3) {
          FUN_0042be50();
        }
        else {
          if (param_1 == (CWnd *)0xfffffae8) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x538);
          }
          if (param_3 == iVar3) {
            FUN_0042c420();
          }
          else {
            if ((param_1 != (CWnd *)0xfffff260) && (*(int *)(param_1 + 0xdc0) != 0)) {
              if (param_1 == (CWnd *)0xfffff260) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(param_1 + 0xdc0);
              }
              if (param_3 == iVar3) {
                FUN_0042ccb0();
                goto LAB_0042cbe6;
              }
            }
            if ((param_1 != (CWnd *)0xfffff4b8) && (*(int *)(param_1 + 0xb68) != 0)) {
              if (param_1 == (CWnd *)0xfffff4b8) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(param_1 + 0xb68);
              }
              if (param_3 == iVar3) {
                FUN_0045e220();
                iVar8 = FUN_0042cd90();
                pCVar9 = local_3444;
                if (iVar8 != 0) {
                  *(bool *)(iVar8 + 0x2890) = param_1[0xbf0] == (CWnd)0x0;
                  FUN_004752c0();
                  pCVar9 = local_3444;
                }
                goto LAB_0042cbe6;
              }
            }
            pCVar7 = param_1 + 0xf34;
            do {
              if (((pCVar7 != (CWnd *)0x0) && (*(int *)(pCVar7 + 0x20) != 0)) &&
                 (param_3 == *(int *)(pCVar7 + 0x20))) {
                GetWindowRect(*(HWND *)(param_1 + iVar8 * 0x18c + 0xf54),atStack_3430);
                FUN_0042b140(0);
                FUN_0042c690(atStack_3430[0].left,atStack_3430[0].top);
                FUN_0042b140(apuStack_3438);
                break;
              }
              iVar8 = iVar8 + 1;
              pCVar7 = pCVar7 + 0x18c;
            } while (iVar8 < 0x15);
          }
        }
      }
      goto LAB_0042cbe6;
    }
    piVar4 = (int *)FUN_004ad163();
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990();
    }
    iStack_3440 = (**(code **)(*piVar4 + 0xc))();
    iStack_3440 = iStack_3440 + 0x10;
    uStack_c = 1;
    apuStack_3438[0] = &stack0xffffcba4;
    ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_0066fbb4 + -0x10));
    iVar8 = FUN_004490f0(param_1);
    if ((iVar8 != 0) && (0 < *(int *)(iStack_3440 + -0xc))) {
      pCStack_343c = (CWnd *)0x0;
      iVar8 = FUN_0042cd90();
      param_1 = local_3444;
      if (iVar8 != 0) {
        FUN_00405270();
        __snwprintf_s((wchar_t *)(iVar8 + 8),0x14,0x13,L"%s");
        FUN_0047f670();
        param_1 = local_3444;
      }
    }
    piVar4 = (int *)(iStack_3440 + -4);
    LOCK();
    iVar8 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
  }
  uStack_c = 0xffffffff;
  pCVar9 = param_1;
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)(iStack_3440 + -0x10) + 4))();
  }
LAB_0042cbe6:
  CWnd::OnCommand(pCVar9,param_2,param_3);
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_3444);
  return;
}


//==== FUNC 0046c690  FUN_0046c690 ====

void FUN_0046c690(LPVOID param_1)

{
  CWnd *this;
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  HWND pHVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  HANDLE pvVar14;
  uint uVar15;
  int unaff_EBX;
  uint uVar16;
  code *pcVar17;
  int *piVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iStack_ec;
  undefined1 *puVar22;
  LPVOID pvVar23;
  DWORD DVar24;
  DWORD DVar25;
  undefined4 uVar26;
  int iVar27;
  LONG LVar28;
  LPVOID pvVar29;
  int iVar30;
  undefined4 **ppuVar31;
  int iVar32;
  LONG *pLVar33;
  LONG LStack_88;
  tagRECT tStack_84;
  undefined1 auStack_74 [8];
  int iStack_6c;
  int iStack_68;
  int iStack_58;
  int iStack_54;
  undefined4 *puStack_50;
  void *pvStack_4c;
  int iStack_48;
  int iStack_44;
  tagRECT atStack_40 [2];
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_005df313;
  local_14 = ExceptionList;
  uVar3 = DAT_0064f674 ^ (uint)&stack0xffffff68;
  ExceptionList = &local_14;
  pHVar4 = GetParent(*(HWND *)((int)param_1 + 0x20));
  tStack_84.top = (LONG)CWnd::FromHandle(pHVar4);
  *(undefined4 *)((int)param_1 + 0x608) = *(undefined4 *)(tStack_84.top + 0xc0);
  *(int *)((int)param_1 + 0x604) = *(int *)(*(int *)(tStack_84.top + 0xc0) + 0x24) + 0x18;
  FUN_0046b1b0();
  piVar5 = (int *)FUN_004ad163();
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403990();
  }
  tStack_84.left = (**(code **)(*piVar5 + 0xc))();
  tStack_84.left = tStack_84.left + 0x10;
  iStack_c = 0;
  FUN_004031f0();
  puVar6 = (undefined4 *)FUN_004ad0e9();
  iStack_c._0_1_ = 1;
  auStack_74._4_4_ = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    if (1 < *(int *)(tStack_84.left + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&tStack_84,*(int *)(tStack_84.left + -0xc));
    }
    *puVar6 = Gdiplus::Bitmap::vftable;
    LStack_88 = 0;
    uVar7 = GdipCreateBitmapFromFile();
    puVar6[2] = uVar7;
    puVar6[1] = LStack_88;
  }
  iStack_c = (uint)iStack_c._1_3_ << 8;
  pLVar33 = &LStack_88;
  *(undefined4 **)((int)param_1 + 0x618) = puVar6;
  LStack_88 = 0;
  iVar8 = GdipGetImageWidth();
  if (iVar8 != 0) {
    puVar6[2] = iVar8;
  }
  if ((unaff_EBX == 0) && (*(undefined4 **)((int)param_1 + 0x618) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x618))();
    FUN_004ad123();
    *(undefined4 *)((int)param_1 + 0x618) = 0;
  }
  iVar8 = FUN_00438960();
  pcVar17 = SetRect_exref;
  if (iVar8 != 0) {
    CopyRect(atStack_40,(RECT *)&DAT_0065831c);
    pcVar17 = SetRect_exref;
    SetRect((LPRECT)(auStack_74 + 4),atStack_40[0].left + DAT_00658b28,atStack_40[0].top,
            atStack_40[0].right,atStack_40[0].bottom);
    uVar7 = FUN_004092e0();
    *(undefined4 *)((int)param_1 + 0x54e8) = uVar7;
  }
  if (DAT_00658178 != 0) {
    (*pcVar17)();
    uVar7 = FUN_0041f150();
    *(undefined4 *)((int)param_1 + 0x54e8) = uVar7;
  }
  iVar32 = 0x1e;
  iVar8 = 0;
  ppuVar31 = &puStack_50;
  (*pcVar17)();
  FUN_00480300();
  uVar7 = DAT_00658134;
  *(undefined4 *)((int)param_1 + 0xe4) = DAT_00658108;
  *(undefined4 *)((int)param_1 + 0xe0) = uVar7;
  InvalidateRect(*(HWND *)((int)param_1 + 0x94),(RECT *)0x0,1);
  uVar15 = DAT_0065812c;
  if (DAT_0065812c == 0) {
    uVar15 = DAT_00658140;
  }
  uVar9 = DAT_00658130 & 0xff;
  uVar1 = DAT_00658130 >> 8;
  uVar10 = DAT_00658130 >> 0x10;
  uVar16 = ((uVar15 & 0xff | 0xffffff00) << 8 | uVar15 >> 8 & 0xff) << 8 | uVar15 >> 0x10 & 0xff;
  *(uint *)((int)param_1 + 0xd0) = uVar16;
  *(uint *)((int)param_1 + 0xd4) = ((uVar9 | 0xffffff00) << 8 | uVar1 & 0xff) << 8 | uVar10 & 0xff;
  InvalidateRect(*(HWND *)((int)param_1 + 0x94),(RECT *)0x0,0);
  uVar2 = (ushort)DAT_00658b3b;
  *(int *)((int)param_1 + 0xdc) = (int)(short)uVar2;
  SendMessageW(*(HWND *)((int)param_1 + 0x94),0x111b,(int)(short)uVar2,0);
  *(undefined4 *)((int)param_1 + 0xe8) = 0;
  *(undefined4 *)((int)param_1 + 0x1b8) = 0;
  *(undefined ***)((int)param_1 + 0x1ac) = &PTR_vftable_00651518;
  FUN_0047fe90();
  *(undefined4 *)((int)param_1 + 0x1a4) = 0;
  *(undefined4 *)((int)param_1 + 0x1c4) = 2;
  tStack_84.bottom = (*(int *)((int)param_1 + 0x5578) - *(int *)((int)param_1 + 0x5570)) + -10;
  tStack_84.top = iStack_58 + 100;
  tStack_84.left = 0;
  tStack_84.right = (LONG)DAT_00658b2c;
  puStack_50 = (undefined4 *)tStack_84.top;
  iStack_48 = tStack_84.bottom;
  FUN_00480300();
  uVar7 = DAT_00658134;
  *(undefined4 *)((int)param_1 + 0x3ac) = DAT_00658108;
  *(undefined4 *)((int)param_1 + 0x3a8) = uVar7;
  InvalidateRect(*(HWND *)((int)param_1 + 0x35c),(RECT *)0x0,1);
  uVar1 = DAT_00658130 >> 0x10;
  uVar10 = DAT_00658130 & 0xff;
  uVar15 = DAT_00658130 >> 8;
  *(uint *)((int)param_1 + 0x398) = uVar16;
  *(uint *)((int)param_1 + 0x39c) = ((uVar10 | 0xffffff00) << 8 | uVar15 & 0xff) << 8 | uVar1 & 0xff
  ;
  InvalidateRect(*(HWND *)((int)param_1 + 0x35c),(RECT *)0x0,0);
  uVar2 = (ushort)DAT_00658b3b;
  *(int *)((int)param_1 + 0x3a4) = (int)(short)uVar2;
  SendMessageW(*(HWND *)((int)param_1 + 0x35c),0x111b,(int)(short)uVar2,0);
  *(undefined ***)((int)param_1 + 0x474) = &PTR_vftable_00651518;
  *(undefined4 *)((int)param_1 + 0x3b0) = 0;
  *(undefined4 *)((int)param_1 + 0x480) = 0;
  FUN_0047fe90();
  *(undefined4 *)((int)param_1 + 0x48c) = 2;
  FUN_0046c080();
  FUN_0046c350();
  FUN_0046c500();
  SetRect(&tStack_84,tStack_84.right + -0x1a,(int)(tStack_84.top + -0x18),tStack_84.right + -8,
          tStack_84.top + -6);
  FUN_00438960();
  FUN_004674f0();
  SetRect(&tStack_84,tStack_84.left + -0x1a,tStack_84.top,tStack_84.left + -8,tStack_84.bottom);
  FUN_00438960();
  FUN_004674f0();
  SetRect(&tStack_84,tStack_84.left + -0x1a,tStack_84.top,tStack_84.left + -8,tStack_84.bottom);
  FUN_00438960();
  FUN_004674f0();
  SetRect(&tStack_84,tStack_84.left + -0x1a,tStack_84.top,tStack_84.left + -8,tStack_84.bottom);
  FUN_00438960();
  FUN_004674f0();
  SetRect(&tStack_84,tStack_84.left + -0x1a,tStack_84.top,tStack_84.left + -8,tStack_84.bottom);
  FUN_00438960();
  FUN_004674f0();
  FUN_0045e170();
  FUN_0045e170();
  FUN_0045e170();
  FUN_0045e170();
  FUN_0045e170();
  SetRect(&tStack_84,0x136,0x1ea,0x212,0x1f6);
  iStack_48 = tStack_84.bottom;
  iStack_54 = tStack_84.left;
  pvStack_4c = (void *)tStack_84.right;
  puStack_50 = (undefined4 *)tStack_84.top;
  iVar11 = FUN_0044a4a0();
  if (iVar11 != 0) {
    FUN_0044a500();
  }
  FUN_0044a0c0();
  SetRect((LPRECT)auStack_74,tStack_84.right + 10,tStack_84.top + -1,tStack_84.right + 0x3c,
          tStack_84.bottom + 2);
  iStack_48 = iStack_68;
  iVar11 = iStack_68 - auStack_74._4_4_;
  puStack_50 = (undefined4 *)auStack_74._4_4_;
  pvStack_4c = (void *)iStack_6c;
  iVar30 = 0;
  iStack_54 = auStack_74._0_4_;
  atStack_40[0].left = auStack_74._4_4_;
  piVar5 = &iStack_54;
  iStack_44 = auStack_74._0_4_;
  pvVar29 = param_1;
  (**(code **)(*(int *)((int)param_1 + 0x2164) + 0x13c))();
  FUN_0045e2e0();
  uVar26 = DAT_00658114;
  uVar7 = DAT_0065810c;
  *(undefined4 *)((int)param_1 + 0x2200) = DAT_00658110;
  *(undefined4 *)((int)param_1 + 0x2204) = uVar7;
  *(undefined4 *)((int)param_1 + 0x2208) = uVar26;
  *(undefined4 *)((int)param_1 + 0x2224) = 0;
  if (DAT_0065151c != 0) {
    *(undefined ***)((int)param_1 + 0x22c4) = &PTR_vftable_00651518;
  }
  *(undefined4 *)((int)param_1 + 0x22cc) = DAT_0065828c;
  uVar7 = DAT_00658108;
  *(undefined4 *)((int)param_1 + 0x2204) = DAT_00658108;
  *(undefined4 *)((int)param_1 + 0x2200) = uVar7;
  *(undefined4 *)((int)param_1 + 0x2208) = uVar7;
  CGdiObject::DeleteObject((CGdiObject *)((int)param_1 + 0x22bc));
  *(undefined ***)((int)param_1 + 0x22c4) = &PTR_vftable_00651520;
  FUN_0044a070();
  FUN_0046bc70();
  SetRect((LPRECT)&stack0xffffff68,0x136,(int)param_1 + 0x128e,0x14e,(int)param_1 + 0x12a6);
  DVar24 = 0x68;
  (**(code **)(*(int *)((int)param_1 + 0x2608) + 0x13c))();
  CWnd::MoveWindow((CWnd *)((int)param_1 + 0x2608),(int)pLVar33,uVar3,iVar11 - (int)pLVar33,
                   (iStack_6c - auStack_74._0_4_) - uVar3,1);
  *(undefined4 *)((int)param_1 + 0x267c) = 0xff;
  InvalidateRect(*(HWND *)((int)param_1 + 0x2628),(RECT *)0x0,1);
  *(undefined4 *)((int)param_1 + 0x2694) = 0x969696;
  *(undefined4 *)((int)param_1 + 0x2690) = 0x969696;
  *(undefined4 *)((int)param_1 + 0x2698) = 0;
  *(undefined4 *)((int)param_1 + 0x2684) = 0;
  CWnd::ShowWindow((CWnd *)((int)param_1 + 0x2608),5);
  SetRect((LPRECT)&stack0xffffff70,iVar11 + 0xf,uVar3 + 5,iVar11 + 0x1c,uVar3 + 0x12);
  FUN_004674f0();
  SetRect((LPRECT)&stack0xffffff60,
          (*(int *)((int)param_1 + 0x5574) - *(int *)((int)param_1 + 0x556c)) + -0x25d,0x1ea,
          (*(int *)((int)param_1 + 0x5574) - *(int *)((int)param_1 + 0x556c)) + -0x8c,0x26c);
  this = (CWnd *)((int)param_1 + 0x26b4);
  FUN_00407170();
  pcVar17 = *(code **)(*(int *)this + 0x54);
  iVar11 = 0;
  puVar22 = &stack0xffffff60;
  uVar7 = 0x50000000;
  iStack_ec = 0;
  *(undefined4 *)((int)param_1 + 0x5490) = 1;
  pvVar23 = param_1;
  (*pcVar17)();
  CWnd::MoveWindow(this,iVar30,(int)ppuVar31,iVar8 - iVar30,iVar32 - (int)ppuVar31,1);
  FUN_00406020();
  CWnd::ShowWindow(this,5);
  iVar8 = *(int *)(DVar24 + 0x16e8);
  if (iVar8 == 0) {
    iVar8 = *(int *)(DVar24 + 0x16e4);
  }
  pcVar17 = SetRect_exref;
  if (iVar8 != 0) {
    iVar32 = *(int *)(*(int *)((int)param_1 + 0x604) + 0x2d14);
    LVar28 = *(LONG *)(*(int *)((int)param_1 + 0x604) + 0x2d18);
    puVar21 = &stack0xffffff30;
    uVar26 = 0;
    iVar30 = GdipGetImageHeight();
    if (iVar30 != 0) {
      *(int *)(puVar22 + 8) = iVar30;
    }
    puVar20 = &stack0xffffff2c;
    iVar30 = *(int *)(puVar22 + 4);
    DVar25 = 0;
    iVar27 = iVar11;
    iVar12 = GdipGetImageWidth();
    pcVar17 = SetRect_exref;
    if (iVar12 != 0) {
      iRam00000008 = iVar12;
    }
    SetRect((LPRECT)&stack0xffffff34,iVar32,iVar11,iVar8 + iVar32,DVar25 + iVar11);
    *(int *)((int)param_1 + 0x54a4) = iVar27;
    *(LONG *)((int)param_1 + 0x54a8) = LVar28;
    *(int **)((int)param_1 + 0x54ac) = piVar5;
    *(LPVOID *)((int)param_1 + 0x54b0) = pvVar29;
    iVar32 = FUN_00473bd0(DVar24,param_1,*(undefined4 *)((int)param_1 + 0x54e8),0,iVar27,LVar28);
    *(int *)((int)param_1 + 0x549c) = iVar32;
    *(undefined4 *)(iVar32 + 0x1788) = 2;
    iVar32 = *(int *)(*(int *)((int)param_1 + 0x604) + 0x2e94);
    iVar11 = *(int *)((int)param_1 + 0x549c);
    iVar12 = 0;
    if (0 < *(int *)(iVar11 + 0x1764)) {
      piVar18 = (int *)(iVar11 + 0x8c);
      do {
        *piVar18 = (-(uint)(iVar32 != 1) & 0xffffffab) + 0xff;
        iVar12 = iVar12 + 1;
        piVar18 = piVar18 + 10;
      } while (iVar12 < *(int *)(iVar11 + 0x1764));
    }
    *(undefined4 *)(*(int *)((int)param_1 + 0x549c) + 0x176c) = 1;
    *(undefined4 *)(*(int *)((int)param_1 + 0x549c) + 0x17b0) = 1;
    *(undefined4 *)(*(int *)((int)param_1 + 0x549c) + 0x84) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x604) + 0x2d08);
    *(undefined4 *)(*(int *)((int)param_1 + 0x549c) + 0x1790) =
         *(undefined4 *)(*(int *)((int)param_1 + 0x604) + 0x2e94);
    iVar32 = *(int *)(*(int *)((int)param_1 + 0x604) + 0x2e84);
    uVar3 = 0;
    if (0 < iVar32) {
      *(int *)(*(int *)((int)param_1 + 0x549c) + 0x1778) = iVar32;
    }
    if ((DAT_00658af8 != 0) &&
       (*(undefined4 *)(*(int *)((int)param_1 + 0x549c) + 0x1790) = 0,
       0 < *(int *)(*(int *)((int)param_1 + 0x604) + 0x2d10))) {
      iStack_ec = 0;
      do {
        uVar13 = FUN_00427f70();
        iVar32 = *(int *)((int)param_1 + 0x549c);
        if (uVar3 < 0x90) {
          *(undefined4 *)(iVar32 + 0xac + iStack_ec) = uVar13;
          InvalidateRect(*(HWND *)(iVar32 + 0x20),(RECT *)0x0,1);
        }
        iStack_ec = iStack_ec + 0x28;
        uVar3 = uVar3 + 1;
        pcVar17 = SetRect_exref;
      } while ((int)uVar3 < *(int *)(*(int *)((int)param_1 + 0x604) + 0x2d10));
    }
    iVar32 = ((int)piVar5 + (-0x2c - iVar27)) / 2 + iVar27;
    iVar11 = (int)pvVar29 + 0x32;
    if ((*(int *)((int)param_1 + 0x5578) - *(int *)((int)param_1 + 0x5570)) + -0xd2 < iVar11) {
      iVar11 = (*(int *)((int)param_1 + 0x5578) - *(int *)((int)param_1 + 0x5570)) + -0xd2;
    }
    iVar12 = iVar11 + 0x11;
    iVar19 = iVar32 + 0x2c;
    (*pcVar17)(&stack0xffffff44,iVar32,iVar11);
    FUN_004674f0(param_1,L"sw_nr.png",L"sw_nr.png",(int)param_1 + 0x22f0,1,0,uVar26,iVar27,LVar28,
                 piVar5);
    (*pcVar17)(&stack0xffffff20,pvVar23,iVar8 + -0x19,(int)pvVar23 + 0xd,iVar8 + -0xc);
    FUN_004674f0(param_1,L"check_nr.png",L"check_nr.png",(int)param_1 + 0xdd8,1,0,puVar21,0,
                 iStack_ec,uVar7);
    (*pcVar17)(&stack0xffffff0c,iStack_ec + 0x50,0,iStack_ec + 0x5d,uVar7);
    FUN_004674f0(param_1,L"check_nr.png",L"check_nr.png",(int)param_1 + 0xf64,1,0,iVar19,iVar12,
                 iVar30,puVar20);
    (*pcVar17)(&stack0xfffffef8,iVar30 + 0x50,iVar12,iVar30 + 0x5d,puVar20);
    FUN_004674f0(param_1,L"check_nr.png",L"check_nr.png",(int)param_1 + 0x10f0);
  }
  (*pcVar17)();
  pvVar14 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,1000,(LPCWSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x54f4) = pvVar14;
  pvVar14 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,FUN_0046f040,param_1,0,
                         (LPDWORD)&stack0xffffff2c);
  if (pvVar14 != (HANDLE)0x0) {
    CloseHandle(pvVar14);
  }
  pvVar14 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,(LPTHREAD_START_ROUTINE)&LAB_0046f4e0,
                         param_1,0,(LPDWORD)&stack0xffffff2c);
  if (pvVar14 != (HANDLE)0x0) {
    CloseHandle(pvVar14);
  }
  FUN_0046fe50();
  auStack_74._0_4_ = -1;
  piVar5 = (int *)(iStack_ec + -4);
  LOCK();
  iVar8 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar8 == 1 || iVar8 + -1 < 0) {
    (**(code **)(**(int **)(iStack_ec + -0x10) + 4))();
  }
  ExceptionList = (void *)tStack_84.right;
  return;
}


//==== FUNC 004936e0  FUN_004936e0 ====

undefined4 __fastcall FUN_004936e0(LPVOID param_1)

{
  HANDLE pvVar1;
  LPVOID local_4;
  
  local_4 = param_1;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x298) = pvVar1;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x29c) = pvVar1;
  local_4 = (LPVOID)0x0;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,FUN_00493260,param_1,0,(LPDWORD)&local_4);
  if (pvVar1 != (HANDLE)0x0) {
    CloseHandle(pvVar1);
  }
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)((int)param_1 + 0x288) = pvVar1;
  return 1;
}


//==== FUNC 00476cc0  FUN_00476cc0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00476cc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_3810 [13308];
  wchar_t local_414 [260];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)local_3810;
  if ((*(int *)(param_1 + 0xc0) != 0) && (local_20c != (wchar_t *)0x0)) {
    __snwprintf_s(local_20c,0x104,0x103,L"%s%s\\",&DAT_0065cfa8,*(int *)(param_1 + 0xc0) + 0x46);
  }
  __snwprintf_s(local_414,0x104,0x103,L"%sprofile.dct",local_20c);
  iVar1 = FUN_0047aa60(local_414);
  if (iVar1 < 1) {
    if (1 < *(int *)(DAT_0066fc78 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&DAT_0066fc78,*(int *)(DAT_0066fc78 + -0xc));
    }
    __snwprintf_s(local_414,0x104,0x103,L"%s1",DAT_0066fc78);
    FUN_0047a8d0();
    uVar2 = FUN_0047a990(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
  }
  __security_check_cookie(local_4 ^ (uint)local_3810);
  return;
}


//==== FUNC 005c2d9d  __tsopen_nolock ====

/* Library Function - Single Match
    __tsopen_nolock
   
   Library: Visual Studio 2008 Release */

int __tsopen_nolock(undefined4 *param_1,LPCWSTR param_2,uint param_3,int param_4,byte param_5)

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
        goto LAB_005c2e6a;
      }
    }
    else if (uVar4 != 2) goto LAB_005c2e26;
    local_c = 0xc0000000;
  }
LAB_005c2e6a:
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
    if (param_4 != 0x80) goto LAB_005c2e26;
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
      if (uVar4 == 0x200) goto LAB_005c2f6f;
      if (uVar4 != 0x300) goto LAB_005c2e26;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_005c2f6f:
        local_18 = 5;
        goto LAB_005c2f1e;
      }
      if (uVar4 != 0x700) {
LAB_005c2e26:
        puVar5 = ___doserrno();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        piVar6 = __errno();
        *piVar6 = 0x16;
        __invalid_parameter(0,0,0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_005c2f1e:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_006571c0 & param_5))) {
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
    goto LAB_005c3037;
  }
  *param_1 = 1;
  local_20 = CreateFileW(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileW(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_005c3043;
    }
    pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    goto LAB_005c3037;
  }
LAB_005c3043:
  DVar7 = GetFileType(local_20);
  if (DVar7 == 0) {
    pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    CloseHandle(local_20);
    if (DVar7 == 0) {
      piVar6 = __errno();
      *piVar6 = 0xd;
    }
    goto LAB_005c3037;
  }
  if (DVar7 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar7 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40) = bVar11;
  pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_005c33b8;
    if ((param_3 & 2) == 0) goto LAB_005c317e;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      puVar5 = ___doserrno();
      bVar11 = local_5;
      if (*puVar5 == 0x83) goto LAB_005c317e;
    }
    else {
      local_28 = 0;
      iVar12 = __read_nolock(*in_EAX,&local_28,1);
      if ((((iVar12 != 0) || ((short)local_28 != 0x1a)) ||
          (iVar12 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar12 != -1
          )) && (lVar8 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar8 != -1))
      goto LAB_005c317e;
    }
LAB_005c3130:
    __close_nolock(*in_EAX);
    goto LAB_005c3037;
  }
LAB_005c317e:
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
      if ((param_3 & 0x301) == 0x301) goto LAB_005c31ed;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_005c31ed:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_005c33b8;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar14 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar14 == 0) goto LAB_005c3252;
            lVar14 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar14 & (uint)((ulonglong)lVar14 >> 0x20);
            goto LAB_005c331e;
          }
LAB_005c3249:
          if (local_18 != 5) goto LAB_005c33b8;
        }
LAB_005c3252:
        iVar12 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_005c33b8;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar9 = __write(*in_EAX,(void *)((int)&local_1c + iVar12),local_18 - iVar12);
          if (iVar9 == -1) goto LAB_005c3130;
          iVar12 = iVar12 + iVar9;
        } while (iVar12 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_005c3249;
              lVar14 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar14 != 0) {
                lVar14 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar14 == -1) goto LAB_005c3130;
                goto LAB_005c32a3;
              }
            }
            goto LAB_005c3252;
          }
          goto LAB_005c33b8;
        }
LAB_005c32a3:
        iVar12 = __read_nolock(*in_EAX,&local_1c,3);
        if (iVar12 == -1) goto LAB_005c3130;
        if (iVar12 == 2) {
LAB_005c332c:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            piVar6 = __errno();
            *piVar6 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar8 = __lseek_nolock(*in_EAX,2,0);
            if (lVar8 == -1) goto LAB_005c3130;
            local_6 = 2;
            goto LAB_005c33b8;
          }
        }
        else if (iVar12 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_005c33b8;
          }
          goto LAB_005c332c;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_005c331e:
        if (uVar4 == 0xffffffff) goto LAB_005c3130;
      }
    }
  }
LAB_005c33b8:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar10 = CreateFileW(param_2,uVar4 & 0x7fffffff,local_14,&local_38,3,local_10,(HANDLE)0x0);
    if (pvVar10 == (HANDLE)0xffffffff) {
      DVar7 = GetLastError();
      __dosmaperr(DVar7);
      pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_005c3037:
      piVar6 = __errno();
      return *piVar6;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x40 + (&DAT_00671260)[(int)*in_EAX >> 5]) = pvVar10;
  }
  return 0;
}


//==== FUNC 005c386c  __tsopen_nolock ====

/* Library Function - Single Match
    __tsopen_nolock
   
   Library: Visual Studio 2008 Release */

int __tsopen_nolock(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

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
  _SECURITY_ATTRIBUTES local_34;
  uint local_24;
  HANDLE local_20;
  uint local_1c;
  DWORD local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar13 = (param_3 & 0x80) == 0;
  local_24 = 0;
  local_6 = 0;
  local_34.nLength = 0xc;
  local_34.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar13) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_34.bInheritHandle = (BOOL)bVar13;
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
        goto LAB_005c3939;
      }
    }
    else if (uVar4 != 2) goto LAB_005c38f5;
    local_c = 0xc0000000;
  }
LAB_005c3939:
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
    if (param_4 != 0x80) goto LAB_005c38f5;
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
      if (uVar4 == 0x200) goto LAB_005c3a3e;
      if (uVar4 != 0x300) goto LAB_005c38f5;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_005c3a3e:
        local_18 = 5;
        goto LAB_005c39ed;
      }
      if (uVar4 != 0x700) {
LAB_005c38f5:
        puVar5 = ___doserrno();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        piVar6 = __errno();
        *piVar6 = 0x16;
        __invalid_parameter(0,0,0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_005c39ed:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_006571c0 & param_5))) {
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
    goto LAB_005c3b06;
  }
  *param_1 = 1;
  local_20 = CreateFileA(param_2,local_c,local_14,&local_34,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileA(param_2,local_c,local_14,&local_34,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_005c3b12;
    }
    pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    goto LAB_005c3b06;
  }
LAB_005c3b12:
  DVar7 = GetFileType(local_20);
  if (DVar7 == 0) {
    pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    CloseHandle(local_20);
    if (DVar7 == 0) {
      piVar6 = __errno();
      *piVar6 = 0xd;
    }
    goto LAB_005c3b06;
  }
  if (DVar7 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar7 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40) = bVar11;
  pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_005c3e86;
    if ((param_3 & 2) == 0) goto LAB_005c3c4c;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      puVar5 = ___doserrno();
      bVar11 = local_5;
      if (*puVar5 == 0x83) goto LAB_005c3c4c;
    }
    else {
      local_8 = '\0';
      iVar12 = __read_nolock(*in_EAX,&local_8,1);
      if ((((iVar12 != 0) || (local_8 != '\x1a')) ||
          (iVar12 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar12 != -1
          )) && (lVar8 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar8 != -1))
      goto LAB_005c3c4c;
    }
LAB_005c3bff:
    __close_nolock(*in_EAX);
    goto LAB_005c3b06;
  }
LAB_005c3c4c:
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
      if ((param_3 & 0x301) == 0x301) goto LAB_005c3cbb;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_005c3cbb:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_005c3e86;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar14 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar14 == 0) goto LAB_005c3d20;
            lVar14 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar14 & (uint)((ulonglong)lVar14 >> 0x20);
            goto LAB_005c3dec;
          }
LAB_005c3d17:
          if (local_18 != 5) goto LAB_005c3e86;
        }
LAB_005c3d20:
        iVar12 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_005c3e86;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar9 = __write(*in_EAX,(void *)((int)&local_1c + iVar12),local_18 - iVar12);
          if (iVar9 == -1) goto LAB_005c3bff;
          iVar12 = iVar12 + iVar9;
        } while (iVar12 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_005c3d17;
              lVar14 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar14 != 0) {
                lVar14 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar14 == -1) goto LAB_005c3bff;
                goto LAB_005c3d71;
              }
            }
            goto LAB_005c3d20;
          }
          goto LAB_005c3e86;
        }
LAB_005c3d71:
        iVar12 = __read_nolock(*in_EAX,&local_1c,3);
        if (iVar12 == -1) goto LAB_005c3bff;
        if (iVar12 == 2) {
LAB_005c3dfa:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            piVar6 = __errno();
            *piVar6 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar8 = __lseek_nolock(*in_EAX,2,0);
            if (lVar8 == -1) goto LAB_005c3bff;
            local_6 = 2;
            goto LAB_005c3e86;
          }
        }
        else if (iVar12 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_005c3e86;
          }
          goto LAB_005c3dfa;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_005c3dec:
        if (uVar4 == 0xffffffff) goto LAB_005c3bff;
      }
    }
  }
LAB_005c3e86:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar10 = CreateFileA(param_2,uVar4 & 0x7fffffff,local_14,&local_34,3,local_10,(HANDLE)0x0);
    if (pvVar10 == (HANDLE)0xffffffff) {
      DVar7 = GetLastError();
      __dosmaperr(DVar7);
      pbVar1 = (byte *)((&DAT_00671260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_005c3b06:
      piVar6 = __errno();
      return *piVar6;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x40 + (&DAT_00671260)[(int)*in_EAX >> 5]) = pvVar10;
  }
  return 0;
}


//==== FUNC 005bb23e  __read ====

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
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_00671240)) {
    iVar3 = (_FileHandle & 0x1fU) * 0x40;
    if ((*(byte *)((&DAT_00671260)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      if (_MaxCharCount < 0x80000000) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_00671260)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __read_nolock(_FileHandle,_DstBuf,_MaxCharCount);
        }
        FUN_005bb331();
        return local_20;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
      piVar2 = __errno();
      *piVar2 = 0x16;
      goto LAB_005bb28d;
    }
  }
  puVar1 = ___doserrno();
  *puVar1 = 0;
  piVar2 = __errno();
  *piVar2 = 9;
LAB_005bb28d:
  __invalid_parameter(0,0,0,0,0);
  return -1;
}


//==== FUNC 00457ca0  FUN_00457ca0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00457ca0(CDialog *param_1)

{
  LPCWSTR pWVar1;
  WPARAM *pWVar2;
  CDialog *pCVar3;
  LPCWSTR lpString;
  HMENU pHVar4;
  CMenu *pCVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  HANDLE pvVar9;
  DWORD DVar10;
  AFX_MODULE_STATE *pAVar11;
  HICON pHVar12;
  BOOL BVar13;
  LPCWSTR pWVar14;
  uint uVar15;
  HFONT pHVar16;
  short *psVar17;
  UINT UVar18;
  WPARAM wParam;
  wchar_t *pszFaceName;
  undefined1 auStack_43c [4];
  LPCWSTR pWStack_438;
  CDialog *local_434;
  wchar_t local_430 [260];
  wchar_t awStack_228 [262];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005df2c6;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)auStack_43c;
  lpString = (LPCWSTR)(DAT_0064f674 ^ (uint)&stack0xfffffbb8);
  ExceptionList = &local_14;
  local_434 = param_1;
  CDialog::OnInitDialog(param_1);
  pHVar4 = GetSystemMenu(*(HWND *)(param_1 + 0x20),0);
  pCVar5 = CMenu::FromHandle(pHVar4);
  if (pCVar5 != (CMenu *)0x0) {
    piVar6 = (int *)FUN_004ad163();
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990(0x80004005);
    }
    iVar7 = (**(code **)(*piVar6 + 0xc))();
    uStack_c = 0;
    pWStack_438 = (LPCWSTR)(iVar7 + 0x10);
    iVar8 = FUN_004ae33a(0x65);
    pWVar14 = (LPCWSTR)(iVar7 + 0x10);
    if (iVar8 != 0) {
      FUN_00403470(iVar8,0x65);
      pWVar14 = pWStack_438;
    }
    if (*(int *)(pWVar14 + -6) != 0) {
      AppendMenuW(*(HMENU *)(pCVar5 + 4),0x800,0,(LPCWSTR)0x0);
      AppendMenuW(*(HMENU *)(pCVar5 + 4),0,0x10,pWVar14);
    }
    uStack_c = 0xffffffff;
    pWVar1 = pWVar14 + -2;
    LOCK();
    iVar7 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)(pWVar14 + -8) + 4))(pWVar14 + -8);
    }
  }
  __snwprintf_s(local_430,0x104,0x103,L"%s%s",&DAT_0065d1b0,L"appico.ico");
  pvVar9 = LoadImageW((HINSTANCE)0x0,local_430,1,0,0,0x50);
  *(HANDLE *)(param_1 + 0x12e0) = pvVar9;
  if (pvVar9 == (HANDLE)0x0) {
    DVar10 = GetLastError();
    (*DAT_0065d3e0)(L"Load Icon err=%x",DVar10);
    AfxGetModuleState();
    pAVar11 = AfxGetModuleState();
    pHVar12 = LoadIconW(*(HINSTANCE *)(pAVar11 + 0xc),(LPCWSTR)0x80);
    *(HICON *)(param_1 + 0x12e0) = pHVar12;
  }
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,1,*(LPARAM *)(param_1 + 0x12e0));
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,0,*(LPARAM *)(param_1 + 0x12e0));
  FUN_00444fd0();
  pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)(param_1 + 0xab4) = pvVar9;
  DAT_0066cfc0 = param_1;
  if (DAT_00658b3a != '\0') {
    piVar6 = (int *)FUN_004ad163();
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403990(0x80004005);
    }
    iVar7 = (**(code **)(*piVar6 + 0xc))();
    pWStack_438 = (LPCWSTR)(iVar7 + 0x10);
    uStack_c = 1;
    FUN_004031f0(&pWStack_438,L"%sskins\\wait.gif",&DAT_0065d1b0);
    pWVar14 = pWStack_438;
    BVar13 = PathFileExistsW(pWStack_438);
    if (BVar13 == 0) {
      FID_conflict_MessageBoxW((HWND)L"wait.gif not found",(LPCWSTR)0x0,(LPCWSTR)0x0,(UINT)lpString)
      ;
    }
    pWVar1 = pWVar14 + -8;
    uStack_c = 0xffffffff;
    pWVar14 = pWVar14 + -2;
    LOCK();
    iVar7 = *(int *)pWVar14;
    *(int *)pWVar14 = *(int *)pWVar14 + -1;
    UNLOCK();
    if (iVar7 == 1 || iVar7 + -1 < 0) {
      (**(code **)(**(int **)pWVar1 + 4))(pWVar1);
    }
  }
  iVar7 = GetSystemMetrics(0x10);
  pWVar14 = (LPCWSTR)GetSystemMetrics(0x11);
  pWStack_438 = pWVar14;
  FID_conflict_SetWindowTextW((HWND)&DAT_0065817c,lpString);
  (*DAT_0065d3e0)(L"xScreen=%d, yScreen=%d, hWnd=0x%x",iVar7,pWVar14,*(undefined4 *)(param_1 + 0x20)
                 );
  pszFaceName = L"MS Shell Dlg";
  if (DAT_006582d0 != 0) {
    (*DAT_0065d3e0)(L"Use font: %s, fontSize=%d,%d,%d,%d - %d,%d,%d,%d",&DAT_006582d0,DAT_0065830c,
                    DAT_0065830d,DAT_0065830e,DAT_0065830f,DAT_00658310,DAT_00658311,DAT_00658312,
                    DAT_00658313);
    iVar8 = FUN_00457be0();
    pszFaceName = &DAT_006582d0;
    if (iVar8 == 0) {
      (*DAT_0065d3e0)(L"Font %s not exist!!!",&DAT_006582d0);
    }
  }
  DAT_00658b1c = 0;
  if (iVar7 < 0xdac) {
    if (0xaef < iVar7) {
      _DAT_00650f90 = _DAT_00625d94;
      DAT_00658b1c = 2;
      uVar15 = (uint)DAT_00658314;
      if (DAT_00658314 == 0) {
        uVar15 = 0x1e;
      }
      pHVar16 = CreateFontW(uVar15,0,0,0,800,0,0,0,1,0,0,0,0x20,pszFaceName);
      CMenu::Attach((CMenu *)&PTR_vftable_00651510,(HMENU__ *)pHVar16);
      uVar15 = (uint)DAT_00658315;
      if (DAT_00658315 == 0) {
        uVar15 = 0x18;
      }
      pHVar16 = CreateFontW(uVar15,0,0,0,600,0,0,0,1,0,0,0,0x20,pszFaceName);
      CMenu::Attach((CMenu *)&PTR_vftable_00651518,(HMENU__ *)pHVar16);
      uVar15 = (uint)DAT_00658316;
      if (DAT_00658316 == 0) {
        uVar15 = 0x16;
      }
      pHVar16 = CreateFontW(uVar15,0,0,0,500,0,0,0,1,0,0,0,0x20,pszFaceName);
      CMenu::Attach((CMenu *)&PTR_vftable_00651520,(HMENU__ *)pHVar16);
      uVar15 = (uint)DAT_00658317;
      if (DAT_00658317 == 0) {
        uVar15 = 0x18;
      }
      goto LAB_00458375;
    }
    if (iVar7 < 0x9c4) {
      uVar15 = (uint)DAT_0065830c;
      if (DAT_0065830c == 0) {
        uVar15 = 0x16;
      }
      pHVar16 = CreateFontW(uVar15,0,0,0,800,0,0,0,1,0,0,0,0x20,pszFaceName);
      CMenu::Attach((CMenu *)&PTR_vftable_00651510,(HMENU__ *)pHVar16);
      uVar15 = (uint)DAT_0065830d;
      if (DAT_0065830d == 0) {
        uVar15 = 0x10;
      }
      pHVar16 = CreateFontW(uVar15,0,0,0,600,0,0,0,1,0,0,0,0x20,pszFaceName);
      CMenu::Attach((CMenu *)&PTR_vftable_00651518,(HMENU__ *)pHVar16);
      uVar15 = (uint)DAT_0065830e;
      if (DAT_0065830e == 0) {
        uVar15 = 0xe;
      }
      pHVar16 = CreateFontW(uVar15,0,0,0,500,0,0,0,1,0,0,0,0x20,pszFaceName);
      CMenu::Attach((CMenu *)&PTR_vftable_00651520,(HMENU__ *)pHVar16);
      uVar15 = (uint)DAT_0065830f;
      if (DAT_0065830f == 0) {
        uVar15 = 0xf;
      }
      goto LAB_00458375;
    }
  }
  else if (0x4af < (int)pWStack_438) {
    _DAT_00650f90 = _DAT_00625c24;
    DAT_00658b1c = 3;
    uVar15 = (uint)DAT_00658318;
    if (DAT_00658318 == 0) {
      uVar15 = 0x22;
    }
    pHVar16 = CreateFontW(uVar15,0,0,0,800,0,0,0,1,0,0,0,0x20,pszFaceName);
    CMenu::Attach((CMenu *)&PTR_vftable_00651510,(HMENU__ *)pHVar16);
    uVar15 = (uint)DAT_00658319;
    if (DAT_00658319 == 0) {
      uVar15 = 0x1c;
    }
    pHVar16 = CreateFontW(uVar15,0,0,0,600,0,0,0,1,0,0,0,0x20,pszFaceName);
    CMenu::Attach((CMenu *)&PTR_vftable_00651518,(HMENU__ *)pHVar16);
    uVar15 = (uint)DAT_0065831a;
    if (DAT_0065831a == 0) {
      uVar15 = 0x1a;
    }
    pHVar16 = CreateFontW(uVar15,0,0,0,500,0,0,0,1,0,0,0,0x20,pszFaceName);
    CMenu::Attach((CMenu *)&PTR_vftable_00651520,(HMENU__ *)pHVar16);
    uVar15 = (uint)DAT_0065831b;
    if (DAT_0065831b == 0) {
      uVar15 = 0x1c;
    }
    goto LAB_00458375;
  }
  _DAT_00650f90 = _DAT_00625d90;
  DAT_00658b1c = 1;
  uVar15 = (uint)DAT_00658310;
  if (DAT_00658310 == 0) {
    uVar15 = 0x1c;
  }
  pHVar16 = CreateFontW(uVar15,0,0,0,800,0,0,0,1,0,0,0,0x20,pszFaceName);
  CMenu::Attach((CMenu *)&PTR_vftable_00651510,(HMENU__ *)pHVar16);
  uVar15 = (uint)DAT_00658311;
  if (DAT_00658311 == 0) {
    uVar15 = 0x16;
  }
  pHVar16 = CreateFontW(uVar15,0,0,0,600,0,0,0,1,0,0,0,0x20,pszFaceName);
  CMenu::Attach((CMenu *)&PTR_vftable_00651518,(HMENU__ *)pHVar16);
  uVar15 = (uint)DAT_00658312;
  if (DAT_00658312 == 0) {
    uVar15 = 0x12;
  }
  pHVar16 = CreateFontW(uVar15,0,0,0,500,0,0,0,1,0,0,0,0x20,pszFaceName);
  CMenu::Attach((CMenu *)&PTR_vftable_00651520,(HMENU__ *)pHVar16);
  uVar15 = (uint)DAT_00658313;
  if (DAT_00658313 == 0) {
    uVar15 = 0x16;
  }
LAB_00458375:
  pHVar16 = CreateFontW(uVar15,0,0,0,600,0,0,0,1,0,0,0,0x20,pszFaceName);
  CMenu::Attach((CMenu *)&PTR_vftable_00651528,(HMENU__ *)pHVar16);
  pCVar3 = local_434;
  _DAT_0066cfbc = *(undefined4 *)(local_434 + 0x20);
  FUN_0047ad80();
  FUN_0047af60();
  iVar7 = 0;
  psVar17 = &DAT_00658c04;
  do {
    if (psVar17[-0x28] != 0) {
      iVar7 = iVar7 + 1;
    }
    if (*psVar17 != 0) {
      iVar7 = iVar7 + 1;
    }
    if (psVar17[0x28] != 0) {
      iVar7 = iVar7 + 1;
    }
    if (psVar17[0x50] != 0) {
      iVar7 = iVar7 + 1;
    }
    if (psVar17[0x78] != 0) {
      iVar7 = iVar7 + 1;
    }
    if (psVar17[0xa0] != 0) {
      iVar7 = iVar7 + 1;
    }
    psVar17 = psVar17 + 0xf0;
  } while ((int)psVar17 < 0x658fc4);
  __snwprintf_s(awStack_228,0x104,0x103,L"%slang.ini",&DAT_0065cfa8);
  UVar18 = GetPrivateProfileIntW(L"OPT",L"LangIndex",0,awStack_228);
  if (iVar7 <= (int)UVar18) {
    UVar18 = 0;
  }
  FUN_0045b0e0(UVar18,0);
  pWStack_438 = (LPCWSTR)0x0;
  FUN_0040bb00(pCVar3,DAT_0065d3dc);
  pWVar14 = pWStack_438;
  (*DAT_0065d3e0)(L"OnInitDialog: nDevNum=%d, Suwnd=%d, hwnd=%x",pWStack_438,DAT_00658b04,
                  *(undefined4 *)(pCVar3 + 0x20));
  if (DAT_00651540 == 0) {
    FID_conflict_MessageBoxW
              ((HWND)L"Dev/kb folder not exist",(LPCWSTR)0x0,(LPCWSTR)0x0,(UINT)lpString);
  }
  if ((int)pWVar14 < 1) {
    if (DAT_00658b04 != 0) {
      iVar7 = 0;
      for (pWVar2 = DAT_00651548; pWVar2 != (WPARAM *)0x0; pWVar2 = (WPARAM *)pWVar2[1]) {
        if (iVar7 == 0) {
          DAT_00651534 = *pWVar2;
          goto LAB_00458510;
        }
        iVar7 = iVar7 + 1;
      }
      DAT_00651534 = 0;
    }
  }
  else {
    iVar7 = 0;
    for (pWVar2 = DAT_00651548;
        (pWVar2 != (WPARAM *)0x0 && (DAT_00651534 = *pWVar2, DAT_00651534 != 0));
        pWVar2 = (WPARAM *)pWVar2[1]) {
      if (*(int *)(DAT_00651534 + 0x1c) != 0) {
        if (iVar7 == 0) goto LAB_00458510;
        iVar7 = iVar7 + 1;
      }
    }
    DAT_00651534 = 0;
  }
LAB_00458510:
  FUN_00479fd0();
  if (DAT_0066f9a4 == 0) {
    FUN_00479830();
  }
  FUN_00459160(pCVar3);
  for (pWVar2 = DAT_00651548; pWVar2 != (WPARAM *)0x0; pWVar2 = (WPARAM *)pWVar2[1]) {
    if (((*pWVar2 != 0) && (piVar6 = *(int **)(*pWVar2 + 0x1c), piVar6 != (int *)0x0)) &&
       ((iVar7 = (**(code **)(*piVar6 + 0x14))(), iVar7 != 0 || (DAT_00658b04 != 0)))) {
      FUN_00459c50(L"OnInitDialog");
    }
    pCVar3 = local_434;
  }
  if ((int)pWVar14 < 1) {
    FUN_0045a560(6);
  }
  else {
    iVar7 = 0;
    for (pWVar2 = DAT_00651548; (pWVar2 != (WPARAM *)0x0 && (wParam = *pWVar2, wParam != 0));
        pWVar2 = (WPARAM *)pWVar2[1]) {
      if (*(int *)(wParam + 0x1c) != 0) {
        if (iVar7 == 0) goto LAB_004585a0;
        iVar7 = iVar7 + 1;
      }
    }
    wParam = 0;
LAB_004585a0:
    PostMessageW(*(HWND *)(pCVar3 + 0x20),0x5a6,wParam,0);
  }
  pCVar3 = local_434;
  FUN_00404f60(*(undefined4 *)(local_434 + 0x20),local_434);
  FUN_0045a840();
  FUN_0045aee0();
  if ((DAT_006581e0 != 0) && (DAT_0066fa5c != 0)) {
    __beginthread((_StartAddress *)&LAB_00457a80,0,pCVar3);
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_43c);
  return;
}


//==== FUNC 00479ea0  FUN_00479ea0 ====

undefined4 FUN_00479ea0(undefined4 param_1)

{
  void *_Memory;
  int iVar1;
  undefined4 *puVar2;
  int local_4;
  
  local_4 = 0;
  _Memory = (void *)FUN_00479d00(&local_4);
  iVar1 = DAT_0066f9a4;
  while( true ) {
    if (local_4 != 0) {
      DAT_0066f9a4 = iVar1;
      return 1;
    }
    DAT_0066f9a4 = iVar1;
    if (_Memory == (void *)0x0) break;
    if (*(int *)((int)_Memory + 8) != -0xff00) {
      iVar1 = FUN_004799c0(*(undefined4 *)(iVar1 + 0x10),*(int *)((int)_Memory + 8));
    }
    if (((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x10), iVar1 != 0)) &&
       (puVar2 = _malloc(0xc), puVar2 != (undefined4 *)0x0)) {
      *puVar2 = _Memory;
      puVar2[1] = 0;
      if (*(int *)(iVar1 + 8) == 0) {
        puVar2[2] = 0;
        *(undefined4 **)(iVar1 + 0x10) = puVar2;
      }
      else {
        puVar2[2] = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 **)(*(int *)(iVar1 + 0x14) + 4) = puVar2;
      }
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      *(undefined4 **)(iVar1 + 0x14) = puVar2;
    }
    if (*(int *)((int)_Memory + 0xc) == 1) {
      puVar2 = (undefined4 *)FUN_004ad0e9(0x18);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = CMyList::vftable;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[1] = 0x11;
      }
      *(undefined4 **)((int)_Memory + 0x10) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        _free(_Memory);
      }
      else {
        puVar2[3] = FUN_004797c0;
        puVar2[1] = 0x10;
        FUN_00479ea0(param_1);
      }
    }
    local_4 = 0;
    _Memory = (void *)FUN_00479d00(&local_4);
    iVar1 = DAT_0066f9a4;
  }
  return 0;
}


//==== FUNC 00498730  FUN_00498730 ====

void FUN_00498730(int param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD DStack_64;
  _OVERLAPPED _Stack_60;
  HANDLE pvStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  char cStack_43;
  char cStack_42;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&DStack_64;
  if (param_1 == 0) {
    __security_check_cookie(local_4 ^ (uint)&DStack_64);
    return;
  }
  (*DAT_0065d3e0)(L"ServiceThread_G5 Start...");
  _Stack_60.Internal = 0;
  _Stack_60.InternalHigh = 0;
  _Stack_60.u.s.Offset = 0;
  _Stack_60.u.s.OffsetHigh = 0;
  _Stack_60.hEvent = *(HANDLE *)(param_1 + 0x28c);
  uStack_48 = *(undefined4 *)(param_1 + 0x290);
  pvStack_4c = _Stack_60.hEvent;
LAB_004987a7:
  do {
    while( true ) {
      while (hFile = *(HANDLE *)(param_1 + 0xc), hFile == (HANDLE)0x0) {
        Sleep(200);
      }
      _memset(&uStack_44,0,0x40);
      BVar1 = ReadFile(hFile,&uStack_44,8,&DStack_64,&_Stack_60);
      if (BVar1 == 0) break;
LAB_004987e4:
      if (DAT_0065d3dc != 0) {
        FUN_00407c90(&uStack_44,8,0,L"Read(Wired): ");
      }
      if ((cStack_43 == '\n') && (cStack_42 == '\x06')) {
        FUN_00492e70(&uStack_44,8);
      }
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      DVar2 = WaitForMultipleObjects(2,&pvStack_4c,0,0xffffffff);
      if (DVar2 == 0) goto LAB_004987e4;
      if (DVar2 == 1) {
        (*DAT_0065d3e0)(L"ServiceThread_G5: hObject[1] is signal");
        BVar1 = CancelIo(*(HANDLE *)(param_1 + 0xc));
        if (BVar1 != 0) {
          GetOverlappedResult(*(HANDLE *)(param_1 + 0xc),&_Stack_60,&DStack_64,1);
        }
LAB_004988bc:
        (*DAT_0065d3e0)(L"ServiceThread_G5 Exit");
        __security_check_cookie(local_4 ^ (uint)&DStack_64);
        return;
      }
      if (DVar2 == 0xffffffff) {
        (*DAT_0065d3e0)(L"WaitForMultipleObjects Err=%d",0x3e5);
      }
      goto LAB_004987a7;
    }
    (*DAT_0065d3e0)(L"ServiceThread_G5 Err=%d",DVar2);
    if ((DVar2 == 0x48f) || (DVar2 == 6)) goto LAB_004988bc;
  } while( true );
}


//==== FUNC 0040c8d0  FUN_0040c8d0 ====

void FUN_0040c8d0(LPVOID param_1)

{
  LPVOID lpParameter;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  LPCWSTR lpFileName;
  uint uVar6;
  undefined8 uVar7;
  code *lpStartAddress;
  DWORD DStack_4;
  
  lpParameter = param_1;
  (*DAT_0065d3e0)(L"FindOurDevice_Wireless ----");
  lpFileName = &DAT_0065e868;
  do {
    iVar2 = *(int *)(lpFileName + 0x110);
    if ((iVar2 == 0) && (*(int *)(lpFileName + 0x112) == 0)) {
      return;
    }
    uVar1 = FUN_0040c820();
    uVar6 = uVar1 & 0xffff;
    if (uVar1 != 0) {
      (*DAT_0065d3e0)(L"IsOurWireless nTy=%x, nID=%x, nVal=%x, id=%04x_%04x",
                      (int)uVar1 >> 0x10 & 0xff,uVar6,uVar1,iVar2,
                      *(undefined4 *)(lpFileName + 0x112));
      DStack_4 = 0;
      if (uVar6 == 0x5588) {
        iVar2 = FUN_004796f0();
        if (iVar2 != 0) {
          return;
        }
        if (DAT_0066fa8c == (HANDLE)0x0) {
          DAT_0066fa8c = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        }
        puVar3 = (undefined4 *)FUN_00479660();
        if ((puVar3 != (undefined4 *)0x0) &&
           (pvVar4 = CreateFileW(lpFileName,0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,
                                 (HANDLE)0x0), pvVar4 != (HANDLE)0xffffffff)) {
          param_1 = (LPVOID)((uint)param_1 & 0xffff0000);
          FUN_004948e0(0x15,7,&param_1,2,0,5);
          CloseHandle(pvVar4);
          (*DAT_0065d3e0)(L"Combo: bOnline[2]=%x, %x",(uint)param_1 & 0xff,(uint)param_1 >> 8 & 0xff
                         );
          _wcsncpy_s((wchar_t *)(puVar3 + 3),0x104,lpFileName,0xffffffff);
          uVar5 = FUN_00402ef0();
          *puVar3 = uVar5;
          if ((char)param_1 != '\0') {
            FUN_0040cd40(puVar3,1);
          }
          if (param_1._1_1_ != '\0') {
            FUN_0040cd40(puVar3,0);
          }
          pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,FUN_00497410,puVar3,0,&DStack_4);
          if (pvVar4 != (HANDLE)0x0) {
            CloseHandle(pvVar4);
          }
        }
      }
      else {
        iVar2 = FUN_00479590();
        if (iVar2 == 0) {
          iVar2 = FUN_0040c220();
          if (iVar2 == 0) {
            pvVar4 = CreateFileW(lpFileName,0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,
                                 (HANDLE)0x0);
            if (pvVar4 == (HANDLE)0xffffffff) {
              (*DAT_0065d3e0)(L"IsOurWireless open dev failed");
            }
            else {
              uVar7 = FUN_0040c1f0();
              puVar3 = (undefined4 *)uVar7;
              DAT_0065e860 = puVar3;
              *puVar3 = (int)((ulonglong)uVar7 >> 0x20);
              _wcsncpy_s((wchar_t *)(puVar3 + 1),0x104,lpFileName,0xffffffff);
              if (uVar6 == 0x3632) {
                lpStartAddress = (code *)&LAB_0040c270;
LAB_0040cb04:
                pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,lpStartAddress,lpParameter,0
                                      ,&DStack_4);
                if (pvVar4 != (HANDLE)0x0) {
                  CloseHandle(pvVar4);
                }
              }
              else if (uVar6 == 0x8805) {
                lpStartAddress = FUN_0040c490;
                goto LAB_0040cb04;
              }
              Sleep(100);
            }
          }
          else {
            (*DAT_0065d3e0)(L"IsOurWireless dev has monitor");
          }
        }
        else {
          (*DAT_0065d3e0)(L"IsOurWireless dev has init");
        }
      }
    }
    lpFileName = lpFileName + 0x116;
    if (0x669627 < (int)lpFileName) {
      return;
    }
  } while( true );
}


//==== FUNC 00456b40  FUN_00456b40 ====

void FUN_00456b40(void)

{
  int iVar1;
  wchar_t local_414 [260];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)local_414;
  __snwprintf_s(local_20c,0x104,0x103,L"%sskins/mak.skn",&DAT_0065d1b0);
  iVar1 = FUN_00456a00(local_20c);
  if (iVar1 != 0) {
    iVar1 = __wcsnicmp(local_414,&DAT_0065817c,0x32);
    if (iVar1 == 0) {
      __security_check_cookie(local_4 ^ (uint)local_414);
      return;
    }
    (*DAT_0065d3e0)(L"IfMatch: szText=%s, tc_title=%s",local_414,&DAT_0065817c);
    (*DAT_0065d3e0)(L"IfMatch return 0");
  }
  __security_check_cookie(local_4 ^ (uint)local_414);
  return;
}


//==== FUNC 00425da0  FUN_00425da0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00425da0(CWnd *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  uint uVar4;
  int iVar5;
  _TREEITEM *p_Var6;
  undefined4 *puVar7;
  undefined1 auStack_3434 [4];
  CWnd *local_3430;
  undefined4 uStack_342c;
  int iStack_3428;
  undefined1 *puStack_3424;
  uint local_1c;
  CWnd *pCStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005deae6;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)auStack_3434;
  ExceptionList = &local_14;
  local_3430 = param_1;
  pCStack_18 = param_1;
  if ((DAT_0066a21c != (int *)0x0) && (DAT_0066a214 == 0)) {
    (**(code **)(*DAT_0066a21c + 0x60))();
    if (DAT_0066a21c != (int *)0x0) {
      (**(code **)(*DAT_0066a21c + 4))();
    }
    DAT_0066a21c = (int *)0x0;
  }
  if ((short)(param_2 >> 0x10) == 0x300) {
    pHVar2 = GetFocus();
    pCVar3 = CWnd::FromHandle(pHVar2);
    if (((pCVar3 == param_1 + 0x20f0) &&
        (uVar4 = CWnd::GetDlgCtrlID(param_1 + 0x20f0), (param_2 & 0xffff) == uVar4)) ||
       ((pCVar3 == param_1 + 0x2484 &&
        (uVar4 = CWnd::GetDlgCtrlID(param_1 + 0x2484), (param_2 & 0xffff) == uVar4)))) {
      FUN_00425ac0();
    }
  }
  iVar5 = 0;
  if (param_1 != (CWnd *)0xffffe6cc) {
    iVar5 = *(int *)(param_1 + 0x1954);
  }
  if (param_3 == iVar5) {
    pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
    CWnd::FromHandle(pHVar2);
    pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
    CWnd::FromHandle(pHVar2);
    FUN_00474ff0();
    goto LAB_00426440;
  }
  iVar5 = 0;
  if (param_1 != (CWnd *)0xfffff1a0) {
    iVar5 = *(int *)(param_1 + 0xe80);
  }
  if (param_3 == iVar5) {
    FUN_00425ac0();
    goto LAB_00426440;
  }
  iVar5 = 0;
  if (param_1 != (CWnd *)0xffffff8c) {
    iVar5 = *(int *)(param_1 + 0x94);
  }
  if (param_3 == iVar5) {
    FUN_00425520();
    goto LAB_00426440;
  }
  iVar5 = 0;
  if (param_1 != (CWnd *)0xfffffe00) {
    iVar5 = *(int *)(param_1 + 0x220);
  }
  if (param_3 == iVar5) {
    FUN_00425520();
    goto LAB_00426440;
  }
  iVar5 = 0;
  if (param_1 != (CWnd *)0xfffffc74) {
    iVar5 = *(int *)(param_1 + 0x3ac);
  }
  if (param_3 == iVar5) {
    FUN_00425520();
    goto LAB_00426440;
  }
  iVar5 = 0;
  if (param_1 != (CWnd *)0xfffffae8) {
    iVar5 = *(int *)(param_1 + 0x538);
  }
  if (param_3 == iVar5) {
    FUN_00425520();
    goto LAB_00426440;
  }
  iVar5 = 0;
  if (param_1 != (CWnd *)0xfffff95c) {
    iVar5 = *(int *)(param_1 + 0x6c4);
  }
  if (param_3 == iVar5) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&iStack_3428);
    puStack_3424 = &stack0xffffcbb4;
    uStack_c = 0;
    FUN_00404ee0(&DAT_0066fbb4);
    iVar5 = FUN_004490f0(param_1);
    if ((iVar5 != 0) && (0 < *(int *)(iStack_3428 + -0xc))) {
      uStack_342c = FUN_00402ed0();
      FUN_00405270();
      FUN_0047a8d0();
      iVar5 = FUN_0047a990();
      pCVar3 = local_3430;
      uStack_342c = *(undefined4 *)(iVar5 + 4);
      uVar1 = *(undefined4 *)(local_3430 + 0x2d14);
      puStack_3424 = *(undefined1 **)(local_3430 + 0x3000);
      for (puVar7 = *(undefined4 **)(local_3430 + 0x2e3c);
          (puVar7 != (undefined4 *)0x0 && (*(int *)*puVar7 != -0x10000));
          puVar7 = (undefined4 *)puVar7[1]) {
      }
      p_Var6 = CTreeCtrl::InsertItem
                         ((CTreeCtrl *)(local_3430 + 0x2d28),1,(wchar_t *)(iVar5 + 8),0,0,0,0,0,
                          (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
      if (p_Var6 != (_TREEITEM *)0x0) {
        puVar7 = _malloc(0x24);
        param_1 = local_3430;
        if (puVar7 == (undefined4 *)0x0) goto LAB_00426165;
        puVar7[4] = uStack_342c;
        *puVar7 = p_Var6;
        puVar7[5] = 0;
        puVar7[1] = puStack_3424;
        puVar7[3] = 0;
        puVar7[7] = uVar1;
        puVar7[6] = 1;
        puVar7[8] = 0;
        FUN_0044e0a0();
        InvalidateRect(*(HWND *)(pCVar3 + 0x2d48),(RECT *)0x0,1);
      }
      FUN_00480070();
      param_1 = local_3430;
    }
  }
  else {
    iVar5 = 0;
    if (param_1 != (CWnd *)0xfffff32c) {
      iVar5 = *(int *)(param_1 + 0xcf4);
    }
    if (param_3 != iVar5) {
      iVar5 = 0;
      if (param_1 != (CWnd *)0xfffff7d0) {
        iVar5 = *(int *)(param_1 + 0x850);
      }
      if (param_3 == iVar5) {
        iVar5 = FUN_00402ed0();
        if (1 < *(int *)(iVar5 + 0xb0)) {
          puStack_3424 = &stack0xffffcbb8;
          FUN_00404ee0();
          iVar5 = FUN_004493c0();
          if (iVar5 != 0) {
            uStack_342c = 0;
            iVar5 = FUN_00426ad0();
            param_1 = local_3430;
            if (iVar5 != 0) {
              FUN_0047f5f0();
              FUN_0047aa00();
              iVar5 = FUN_0047aa30();
              param_1 = local_3430;
              if (iVar5 != 0) {
                FUN_00426a90();
              }
            }
          }
        }
      }
      else {
        iVar5 = 0;
        if (param_1 != (CWnd *)0xfffff644) {
          iVar5 = *(int *)(param_1 + 0x9dc);
        }
        if (param_3 == iVar5) {
          FUN_00424ba0();
        }
        else {
          iVar5 = 0;
          if (param_1 != (CWnd *)0xfffff4b8) {
            iVar5 = *(int *)(param_1 + 0xb68);
          }
          if (param_3 == iVar5) {
            FUN_00425180();
          }
          else {
            if (param_1 == (CWnd *)0xffffdab0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(param_1 + 0x2570);
            }
            if (param_3 != iVar5) {
              if (param_1 == (CWnd *)0xffffd924) {
                iVar5 = 0;
              }
              else {
                iVar5 = *(int *)(param_1 + 0x26fc);
              }
              if (param_3 != iVar5) {
                if (param_1 == (CWnd *)0xffffd798) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = *(int *)(param_1 + 0x2888);
                }
                if (param_3 != iVar5) {
                  if (param_1 == (CWnd *)0xffffd60c) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = *(int *)(param_1 + 0x2a14);
                  }
                  if (param_3 != iVar5) {
                    iVar5 = 0;
                    if (param_1 != (CWnd *)0xffffe540) {
                      iVar5 = *(int *)(param_1 + 0x1ae0);
                    }
                    if (param_3 == iVar5) {
                      FUN_00402ed0();
                      FUN_00402ed0();
                      FUN_0045a560();
                      param_1 = local_3430;
                    }
                    else {
                      if (param_1 == (CWnd *)0xffffe3b4) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = *(int *)(param_1 + 0x1c6c);
                      }
                      if (param_3 == iVar5) {
                        FUN_0045e220();
                        FUN_0045e220();
                        FUN_0045e220();
                        FUN_00425ac0();
                      }
                      else {
                        if (param_1 == (CWnd *)0xffffe228) {
                          iVar5 = 0;
                        }
                        else {
                          iVar5 = *(int *)(param_1 + 0x1df8);
                        }
                        if (param_3 == iVar5) {
                          FUN_0045e220();
                          FUN_0045e220();
                          FUN_0045e220();
                          FUN_00425ac0();
                        }
                        else {
                          if (param_1 == (CWnd *)0xffffe09c) {
                            iVar5 = 0;
                          }
                          else {
                            iVar5 = *(int *)(param_1 + 0x1f84);
                          }
                          if (param_3 == iVar5) {
                            FUN_0045e220();
                            FUN_0045e220();
                            FUN_0045e220();
                            FUN_00425ac0();
                          }
                          else {
                            if ((param_1 != (CWnd *)0xffffd480) && (*(int *)(param_1 + 0x2ba0) != 0)
                               ) {
                              iVar5 = 0;
                              if (param_1 != (CWnd *)0xffffd480) {
                                iVar5 = *(int *)(param_1 + 0x2ba0);
                              }
                              if (param_3 == iVar5) {
                                FUN_00426480();
                                goto LAB_00426440;
                              }
                            }
                            pCVar3 = param_1 + 0xfec;
                            iVar5 = 0;
                            do {
                              if (((pCVar3 != (CWnd *)0x0) && (*(int *)(pCVar3 + 0x20) != 0)) &&
                                 (param_3 == *(int *)(pCVar3 + 0x20))) {
                                if (-1 < iVar5) {
                                  FUN_00425740();
                                  param_1 = local_3430;
                                }
                                break;
                              }
                              iVar5 = iVar5 + 1;
                              pCVar3 = pCVar3 + 0x18c;
                            } while (iVar5 < 6);
                          }
                        }
                      }
                    }
                    goto LAB_00426440;
                  }
                }
              }
            }
            FUN_0045e220();
            FUN_00425ac0();
          }
        }
      }
      goto LAB_00426440;
    }
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&iStack_3428);
    puStack_3424 = &stack0xffffcbb4;
    uStack_c = 1;
    FUN_00404ee0(&DAT_0066fbb4);
    iVar5 = FUN_004490f0(param_1);
    if ((iVar5 != 0) && (0 < *(int *)(iStack_3428 + -0xc))) {
      uStack_342c = 0;
      iVar5 = FUN_00426ad0();
      param_1 = local_3430;
      if (iVar5 != 0) {
        FUN_00405270();
        __snwprintf_s((wchar_t *)(iVar5 + 8),0x14,0x13,L"%s");
        FUN_0047f670();
        param_1 = local_3430;
      }
    }
  }
LAB_00426165:
  uStack_c = 0xffffffff;
  FUN_0042d560();
LAB_00426440:
  CWnd::OnCommand(param_1,param_2,param_3);
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_3434);
  return;
}


//==== FUNC 0049cf10  FUN_0049cf10 ====

undefined4 __thiscall FUN_0049cf10(LPVOID param_1,DWORD param_2)

{
  HANDLE pvVar1;
  
  if (*(int *)((int)param_1 + 0x28c) == 0) {
    *(DWORD *)((int)param_1 + 0x2a8) = param_2;
    *(undefined4 *)((int)param_1 + 0x298) = 0;
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x28c) = pvVar1;
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x290) = pvVar1;
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x294) = pvVar1;
    param_2 = 0;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,FUN_0049cc00,param_1,0,&param_2);
    if (pvVar1 != (HANDLE)0x0) {
      CloseHandle(pvVar1);
    }
  }
  return 1;
}


//==== FUNC 004a70f0  FUN_004a70f0 ====

void __fastcall FUN_004a70f0(CDialog *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  wchar_t *_Str1;
  uint uVar3;
  BOOL BVar4;
  DWORD DVar5;
  CSimpleStringT<wchar_t,0> *this;
  int iVar6;
  int iStack_21c;
  wchar_t local_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005dd30b;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&iStack_21c;
  uVar3 = DAT_0064f674 ^ (uint)&stack0xfffffdd4;
  ExceptionList = &local_c;
  CDialog::OnInitDialog(param_1);
  if ((*(int *)(param_1 + 0x1cfc) != 0) && (local_218 != (wchar_t *)0x0)) {
    __snwprintf_s(local_218,0x104,0x103,L"%s%s\\",&DAT_0065cfa8,*(int *)(param_1 + 0x1cfc) + 0x46,
                  uVar3);
  }
  BVar4 = PathFileExistsW(local_218);
  if ((BVar4 == 0) && (BVar4 = CreateDirectoryW(local_218,(LPSECURITY_ATTRIBUTES)0x0), BVar4 == 0))
  {
    DVar5 = GetLastError();
    (*DAT_0065d3e0)(L"CScreenDlg:  CreateDirectory err=%d",DVar5);
  }
  *(undefined4 *)(param_1 + 0x1d04) = *(undefined4 *)(param_1 + 0x1cfc);
  FUN_004ac430();
  if (*(int *)(param_1 + 0x1d10) < 1) {
    FUN_004ac280();
  }
  FUN_004a7a30(param_1);
  puVar2 = *(undefined4 **)(param_1 + 0x1d18);
  iVar6 = 0;
  do {
    if (puVar2 == (undefined4 *)0x0) {
LAB_004a728e:
      ExceptionList = local_c;
      __security_check_cookie(local_10 ^ (uint)&iStack_21c);
      return;
    }
    if (iVar6 == (char)param_1[0x1d20]) {
      if ((puVar2 != (undefined4 *)0x0) && (_Str1 = (wchar_t *)*puVar2, _Str1 != (wchar_t *)0x0)) {
        this = (CSimpleStringT<wchar_t,0> *)FUN_004ac110();
        uStack_4 = 0;
        if (1 < *(int *)(*(int *)this + -4)) {
          ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
        }
        FUN_004a8830(*(undefined4 *)this);
        uStack_4 = 0xffffffff;
        piVar1 = (int *)(iStack_21c + -4);
        LOCK();
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1 || iVar6 + -1 < 0) {
          (**(code **)(**(int **)(iStack_21c + -0x10) + 4))((undefined4 *)(iStack_21c + -0x10));
        }
        iVar6 = __wcsnicmp(_Str1,L"screen.gif",0x14);
        CWnd::ShowWindow((CWnd *)(param_1 + 0x1798),-(uint)(iVar6 != 0) & 5);
      }
      goto LAB_004a728e;
    }
    puVar2 = (undefined4 *)puVar2[1];
    iVar6 = iVar6 + 1;
  } while( true );
}


//==== FUNC 0049d020  FUN_0049d020 ====

void __fastcall FUN_0049d020(int *param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined1 uVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  int iVar6;
  int *piVar7;
  wchar_t *pwVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  char *pcVar12;
  int iVar13;
  HANDLE local_34;
  int *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  char local_c;
  uint local_b;
  undefined1 local_7;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_34;
  puVar1 = (ushort *)param_1[4];
  local_30 = param_1;
  if (puVar1 == (ushort *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_34);
    return;
  }
  local_18 = (uint)*puVar1;
  local_10 = (uint)puVar1[1];
  local_1c = 0;
  param_1[5] = 0;
  local_20 = -1;
  local_34 = (HANDLE)0x0;
  local_2c = 0;
  local_24 = &DAT_0065ea8c;
  do {
    puVar11 = local_24;
    local_28 = 0;
    if ((local_18 == local_24[-1]) && (local_10 == *local_24)) {
      local_28 = 1;
      if ((local_24[-3] == 0xff02) && (local_24[-2] == 2)) {
        if ((local_24[-4] == 0x208) && (local_24[-6] == 8)) {
          pvVar4 = CreateFileW((LPCWSTR)(local_24 + -0x89),0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,
                               0x40000000,(HANDLE)0x0);
          local_34 = pvVar4;
          if (pvVar4 == (HANDLE)0xffffffff) {
            DVar5 = GetLastError();
            (*DAT_0065d3e0)(L"CreateFile err=%d",DVar5);
            local_34 = (HANDLE)0x0;
          }
          else {
            Sleep(0x14);
            iVar9 = param_1[4];
            pcVar12 = (char *)(iVar9 + 8);
            if ((*pcVar12 == '\0') && (*(char *)(iVar9 + 0xd) == '\0')) {
LAB_0049d2aa:
              local_20 = local_2c;
              goto LAB_0049d2b4;
            }
            local_c = '\0';
            local_b = 0;
            local_7 = 0;
            iVar6 = FUN_0049ea20(param_1,pvVar4);
            uVar3 = local_7;
            if (iVar6 == 0) {
              (*DAT_0065d3e0)(L"GetPassword failed");
            }
            else {
              iVar6 = 0;
              while ((&local_c + iVar6)[(int)pcVar12 - (int)&local_c] == (&local_c)[iVar6]) {
                iVar6 = iVar6 + 1;
                if (5 < iVar6) goto LAB_0049d2aa;
              }
              uVar2 = local_b >> 0x18;
              uVar10 = local_b >> 0x10 & 0xff;
              (*DAT_0065d3e0)(L"Psd unmatch: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x",*pcVar12,
                              *(undefined1 *)(iVar9 + 9),*(undefined1 *)(iVar9 + 10),
                              *(undefined1 *)(iVar9 + 0xb),*(undefined1 *)(iVar9 + 0xc),
                              *(undefined1 *)(iVar9 + 0xd),local_c,local_b & 0xff,
                              local_b >> 8 & 0xff,uVar10,uVar2,local_7);
              iVar9 = local_30[4];
              piVar7 = (int *)(iVar9 + 0xe);
              if (*piVar7 != 0) {
                iVar6 = 0;
                iStack_14 = (int)piVar7 - (int)&local_c;
                while ((&local_c + iVar6)[iStack_14] == (&local_c)[iVar6]) {
                  iVar6 = iVar6 + 1;
                  param_1 = local_30;
                  if (5 < iVar6) goto LAB_0049d2aa;
                }
                (*DAT_0065d3e0)(L"Psd unmatch 2: cfg=%x,%x,%x,%x,%x,%x, dev=%x,%x,%x,%x,%x,%x",
                                *(undefined1 *)piVar7,*(undefined1 *)(iVar9 + 0xf),
                                *(undefined1 *)(iVar9 + 0x10),*(undefined1 *)(iVar9 + 0x11),
                                *(undefined1 *)(iVar9 + 0x12),*(undefined1 *)(iVar9 + 0x13),local_c,
                                local_b & 0xff,local_b >> 8 & 0xff,uVar10,uVar2,uVar3);
              }
              CloseHandle(local_34);
              local_34 = (HANDLE)0x0;
              puVar11 = local_24;
              param_1 = local_30;
            }
          }
        }
      }
      else if ((local_24[-3] == 0xc) && (local_24[-2] == 1)) {
        local_1c = 1;
      }
    }
    local_2c = local_2c + 1;
    local_24 = puVar11 + 0x8b;
    if (0x66984b < (int)local_24) {
LAB_0049d2b4:
      iVar6 = local_20;
      iVar9 = local_28;
      pvVar4 = local_34;
      if ((local_34 == (HANDLE)0x0) || (local_20 == -1)) {
        __security_check_cookie(local_4 ^ (uint)&local_34);
        return;
      }
      pwVar8 = L"Wired";
      if (local_28 != 1) {
        pwVar8 = L"Wireless";
      }
      iVar13 = local_20 * 0x22c;
      (*DAT_0065d3e0)(L"CDevG5MS::FindHIDDevice for %s, hDev=%x (%s), id=%04x_%04x",
                      param_1[4] + 0x28,local_34,pwVar8,(&DAT_0065ea88)[local_20 * 0x8b],
                      (&DAT_0065ea8c)[local_20 * 0x8b]);
      *(undefined4 *)(&DAT_0065ea90 + iVar13) = 1;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[6] = 0;
      param_1[3] = (int)pvVar4;
      param_1[0x8d] = iVar9;
      _wcsncpy_s((wchar_t *)(param_1 + 0xb),0x104,&DAT_0065e868 + iVar6 * 0x116,0xffffffff);
      iVar9 = (**(code **)(*param_1 + 0x24))();
      if (iVar9 == 1) {
        __security_check_cookie(local_4 ^ (uint)&local_34);
        return;
      }
      (**(code **)(*param_1 + 0x18))();
      __security_check_cookie(local_4 ^ (uint)&local_34);
      return;
    }
  } while( true );
}


//==== FUNC 00495380  FUN_00495380 ====

void __thiscall FUN_00495380(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 unaff_EDI;
  char local_414;
  undefined4 local_413;
  undefined1 uStack_40f;
  undefined1 uStack_40e;
  undefined1 uStack_40d;
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_414;
  uStack_40f = 0;
  uStack_40e = 0;
  uStack_40d = 0;
  local_414 = '\x05';
  local_413 = 0x81;
  _memset(local_40b,0,0x407);
  iVar1 = FUN_00495260(unaff_EDI,&local_414);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"GetPassword: Send Err");
  }
  else {
    Sleep(*(DWORD *)(param_1 + 0x2a0));
    _memset(local_40b,0,0x407);
    iVar1 = FUN_004952f0(unaff_EDI,7);
    if (iVar1 == 0) {
      (*DAT_0065d3e0)(L"GetPassword: GET Err");
    }
    else if (local_414 == '\x01') {
      *param_2 = local_413;
      *(ushort *)(param_2 + 1) = CONCAT11(uStack_40e,uStack_40f);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_414);
  return;
}


//==== FUNC 00495480  FUN_00495480 ====

void __fastcall FUN_00495480(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_824 [4];
  undefined1 local_820;
  undefined1 local_81f;
  undefined1 local_81e [5];
  undefined4 local_819 [256];
  undefined1 local_417 [1035];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)auStack_824;
  local_820 = 3;
  _memset(local_81e,0,0x405);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  local_81f = 0xb6;
  puVar3 = local_819;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)param_2;
  _memset(local_417,0,0x407);
  FUN_00495260(uVar1,&local_820);
  __security_check_cookie(local_c ^ (uint)auStack_824);
  return;
}


//==== FUNC 004956d0  FUN_004956d0 ====

void __fastcall FUN_004956d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_824 [4];
  undefined1 local_820;
  undefined1 local_81f;
  undefined1 local_81e;
  undefined1 local_81d;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined4 local_819 [256];
  undefined1 local_417 [1035];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)auStack_824;
  local_820 = 4;
  local_81f = 0xd4;
  local_81e = 0;
  local_81d = 0x40;
  local_81c = 0;
  local_81b = 0;
  local_81a = 0;
  _memset(local_819,0,0x400);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  puVar3 = local_819;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  _memset(local_417,0,0x407);
  FUN_00495260(uVar1,&local_820);
  __security_check_cookie(local_c ^ (uint)auStack_824);
  return;
}


//==== FUNC 00495a60  FUN_00495a60 ====

void __fastcall FUN_00495a60(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_824 [4];
  undefined1 local_820;
  undefined1 local_81f;
  undefined1 local_81e;
  undefined1 local_81d;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined4 local_819 [256];
  undefined1 local_417 [1035];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)auStack_824;
  local_820 = 5;
  local_81e = 0;
  local_81d = 0x40;
  local_81c = 0;
  local_81b = 0;
  local_81a = 0;
  _memset(local_819,0,0x400);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  local_81f = param_3;
  puVar3 = local_819;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  _memset(local_417,0,0x407);
  FUN_00495260(uVar1,&local_820);
  __security_check_cookie(local_c ^ (uint)auStack_824);
  return;
}


//==== FUNC 00495790  FUN_00495790 ====

void __thiscall FUN_00495790(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_819;
  undefined1 local_818;
  undefined1 local_817;
  undefined1 local_813 [6];
  undefined4 local_80d [256];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_81c;
  uVar1 = *(undefined4 *)(param_2 + 0x294);
  local_81c = 0x84;
  local_81b = 0xd4;
  local_81a = 0;
  local_819 = 0;
  local_818 = 0;
  local_817 = 0;
  _memset(local_813,0,0x407);
  iVar2 = FUN_00495260(uVar1,&local_81c);
  if (iVar2 != 0) {
    Sleep(*(DWORD *)(param_2 + 0x2a0));
    uVar1 = *(undefined4 *)(param_2 + 0x290);
    _memset(local_40b,0,0x407);
    iVar2 = FUN_004952f0(uVar1,0x407);
    if (iVar2 != 0) {
      puVar3 = local_80d;
      for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_1 = *puVar3;
        puVar3 = puVar3 + 1;
        param_1 = param_1 + 1;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_81c);
  return;
}


//==== FUNC 00495520  FUN_00495520 ====

void __thiscall FUN_00495520(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_819;
  undefined1 local_818;
  undefined1 local_817;
  char local_814;
  undefined1 local_813 [6];
  undefined4 local_80d [256];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_81c;
  uVar1 = *(undefined4 *)(param_2 + 0x294);
  local_81c = 0x83;
  local_81a = 0;
  local_819 = 0;
  local_818 = 0;
  local_817 = 0;
  local_81b = 0xb6;
  _memset(local_813,0,0x407);
  iVar2 = FUN_00495260(uVar1,&local_81c);
  if (iVar2 != 0) {
    Sleep(*(DWORD *)(param_2 + 0x2a0));
    uVar1 = *(undefined4 *)(param_2 + 0x290);
    _memset(local_40b,0,0x407);
    iVar2 = FUN_004952f0(uVar1,0x407);
    if ((iVar2 != 0) && (local_814 == -0x7d)) {
      puVar3 = local_80d;
      for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_1 = *puVar3;
        puVar3 = puVar3 + 1;
        param_1 = param_1 + 1;
      }
      *(undefined2 *)param_1 = *(undefined2 *)puVar3;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_81c);
  return;
}


//==== FUNC 00495610  FUN_00495610 ====

void __thiscall FUN_00495610(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  void *unaff_EDI;
  undefined1 local_814;
  undefined1 local_813;
  undefined1 local_812;
  undefined1 local_811;
  undefined1 local_810;
  undefined1 local_80f;
  undefined1 local_80e;
  undefined1 local_80d [1026];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_814;
  local_814 = 9;
  local_812 = 0;
  local_811 = 0x40;
  local_810 = 0;
  local_80f = 0;
  local_80e = 0;
  _memset(local_80d,0,0x400);
  local_813 = param_2;
  _memcpy(local_80d,unaff_EDI,0x400);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  _memset(local_40b,0,0x407);
  FUN_00495260(uVar1,&local_814);
  __security_check_cookie(local_4 ^ (uint)&local_814);
  return;
}


//==== FUNC 00495880  FUN_00495880 ====

void __thiscall FUN_00495880(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  undefined1 local_814;
  undefined1 local_813;
  undefined1 local_812;
  undefined1 local_811;
  undefined1 local_810;
  undefined1 local_80f;
  undefined1 local_80e;
  undefined1 local_80d [1026];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_814;
  if ((int)param_3 < 0x401) {
    local_814 = 8;
    local_813 = 0xb8;
    local_812 = 0;
    local_811 = 0x40;
    local_810 = 0;
    local_80f = 0;
    local_80e = 0;
    _memset(local_80d,0,0x400);
    _memcpy(local_80d,param_2,param_3);
    uVar1 = *(undefined4 *)(param_1 + 0x290);
    _memset(local_40b,0,0x407);
    FUN_00495260(uVar1,&local_814);
  }
  __security_check_cookie(local_4 ^ (uint)&local_814);
  return;
}


//==== FUNC 00495950  FUN_00495950 ====

void __thiscall FUN_00495950(int param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_819;
  undefined1 local_818;
  undefined1 local_817;
  char local_814;
  undefined1 local_813 [6];
  undefined1 local_80d [1026];
  undefined1 local_40b [1031];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_81c;
  if ((int)param_3 < 0x401) {
    uVar1 = *(undefined4 *)(param_1 + 0x294);
    local_81c = 0x88;
    local_81b = 0xb8;
    local_81a = 0;
    local_819 = 0;
    local_818 = 0;
    local_817 = 0;
    _memset(local_813,0,0x407);
    iVar2 = FUN_00495260(uVar1,&local_81c);
    if (iVar2 != 0) {
      Sleep(*(DWORD *)(param_1 + 0x2a0));
      uVar1 = *(undefined4 *)(param_1 + 0x290);
      _memset(local_40b,0,0x407);
      iVar2 = FUN_004952f0(uVar1,0x407);
      if ((iVar2 != 0) && (local_814 == -0x78)) {
        _memcpy(param_2,local_80d,param_3);
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_81c);
  return;
}


//==== FUNC 0049ef00  FUN_0049ef00 ====

undefined4 FUN_0049ef00(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_0049d7d0(in_EAX,*(undefined4 *)(in_EAX + 0xc),1,6,0,0,0x14);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"Reset failed");
    return 0;
  }
  return 1;
}


//==== FUNC 0049f300  FUN_0049f300 ====

undefined4 __thiscall FUN_0049f300(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,8,0,param_3,7);
    if (iVar1 != 0) {
      return 1;
    }
    (*DAT_0065d3e0)(L"SetRealData failed");
  }
  return 0;
}


//==== FUNC 0049e6e0  FUN_0049e6e0 ====

undefined4 __thiscall FUN_0049e6e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049e6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x54))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,0xb,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetScreenParam failed");
    return 0;
  }
  return 1;
}


//==== FUNC 0049e9e0  FUN_0049e9e0 ====

undefined4 __thiscall FUN_0049e9e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,0xf,0,param_3,7);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SendSelfData failed");
    return 0;
  }
  return 1;
}


//==== FUNC 0049daf0  FUN_0049daf0 ====

uint __thiscall FUN_0049daf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049db04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x5c))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,1,param_2,param_4,0x14);
  return (uint)(iVar2 != 0);
}


//==== FUNC 0049de00  FUN_0049de00 ====

undefined4 __thiscall FUN_0049de00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049de14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 100))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,3,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetMacro failed");
    return 0;
  }
  return 1;
}


//==== FUNC 0049e0f0  FUN_0049e0f0 ====

undefined4 __thiscall FUN_0049e0f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049e104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x6c))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,4,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetLED failed");
    return 0;
  }
  return 1;
}


//==== FUNC 0049e400  FUN_0049e400 ====

undefined4 __thiscall FUN_0049e400(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0049e417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x84))();
    return uVar1;
  }
  iVar2 = FUN_0049d7d0(param_1,*(undefined4 *)(param_1 + 0xc),1,10,0,1,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetOnBoard failed, nOnBoard=%d",param_2);
    return 0;
  }
  return 1;
}


//==== FUNC 0049ca80  FUN_0049ca80 ====

void __thiscall
FUN_0049ca80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  byte bStack_c;
  undefined4 uStack_b;
  undefined2 uStack_7;
  undefined1 uStack_5;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&bStack_c;
  (*DAT_0065d3e0)(L"SetGIFParam: nGifIndex=%d, nFrameNum=%d, nGifDelay=%d",param_2,param_3,param_4);
  FUN_00470c90();
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  if (*(HANDLE *)(param_1 + 600) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(param_1 + 600));
  }
  (**(code **)(*(int *)(param_1 + 0x25c) + 0x14))();
  bStack_c = param_5 << 6 | (byte)param_2;
  uStack_7 = 0;
  uStack_5 = 0;
  uStack_b = CONCAT13((char)((uint)param_4 >> 8),CONCAT12((char)param_4,(short)param_3));
  iVar1 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0xd,0,5,0x14);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetGIFParam failed");
    __security_check_cookie(local_4 ^ (uint)&bStack_c);
    return;
  }
  iVar1 = FUN_004988f0();
  if (iVar1 != 0) {
    (*DAT_0065d3e0)(L"SetGIFParam: timeout");
    __security_check_cookie(local_4 ^ (uint)&bStack_c);
    return;
  }
  FUN_00407c90(&bStack_c,8,0,L"SetGIFParam WaitData: ");
  if (uStack_b._2_1_ == '\0') {
    (*DAT_0065d3e0)(L"SetGIFParam: respond unmatch");
    __security_check_cookie(local_4 ^ (uint)&bStack_c);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&bStack_c);
  return;
}


//==== FUNC 00499f30  FUN_00499f30 ====

undefined4 __fastcall FUN_00499f30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x34))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0x11,0,1,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"ResetDevice failed");
    return 0;
  }
  return 1;
}


//==== FUNC 0049a350  FUN_0049a350 ====

bool __thiscall FUN_0049a350(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return false;
  }
  iVar1 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,8,0,param_3,7);
  return iVar1 != 0;
}


//==== FUNC 0049a380  FUN_0049a380 ====

bool __thiscall FUN_0049a380(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return false;
  }
  iVar1 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0xe,0,param_3,7);
  return iVar1 != 0;
}


//==== FUNC 00499f80  FUN_00499f80 ====

undefined4 __thiscall FUN_00499f80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x54))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0xb,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetScreenParam failed");
    return 0;
  }
  return 1;
}


//==== FUNC 0049a3b0  FUN_0049a3b0 ====

bool __thiscall FUN_0049a3b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return false;
  }
  iVar1 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,0xf,0,param_3,7);
  return iVar1 != 0;
}


//==== FUNC 004991a0  FUN_004991a0 ====

uint __thiscall FUN_004991a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004991b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x5c))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,3,param_2,param_4,0x14);
  return (uint)(iVar2 != 0);
}


//==== FUNC 004993f0  FUN_004993f0 ====

undefined4 __thiscall FUN_004993f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 100))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,5,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetMacro failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00499640  FUN_00499640 ====

undefined4 __thiscall FUN_00499640(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x6c))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,4,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetLED failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00499890  FUN_00499890 ====

undefined4 __thiscall
FUN_00499890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004998a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x74))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,6,param_2,param_4,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetGame failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00499ce0  FUN_00499ce0 ====

undefined4 __thiscall FUN_00499ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00499cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x7c))();
    return uVar1;
  }
  iVar2 = FUN_00498f60(param_1,*(undefined4 *)(param_1 + 0xc),1,10,0,param_3,0x14);
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"SetLedRgbTab failed");
    return 0;
  }
  return 1;
}


//==== FUNC 0049ca60  FUN_0049ca60 ====

void __thiscall FUN_0049ca60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0049c6e0(*(undefined4 *)(param_1 + 0xc),param_4,param_2,param_3,param_4);
  return;
}


//==== FUNC 0049a3e0  FUN_0049a3e0 ====

undefined4 __thiscall FUN_0049a3e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0;
  }
  uVar1 = FUN_00499b00(param_2,param_3);
  return uVar1;
}


//==== FUNC 0049f340  FUN_0049f340 ====

undefined4 __thiscall FUN_0049f340(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0;
  }
  uVar1 = FUN_0049e730(param_1,param_2,param_3);
  return uVar1;
}


//==== FUNC 0040bb00  FUN_0040bb00 ====

void FUN_0040bb00(int param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  code *pcVar3;
  int *_Memory;
  uint *puVar4;
  HANDLE hObject;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_238 [4];
  int *piStack_234;
  int local_230;
  int iStack_22c;
  int iStack_228;
  int *piStack_224;
  ushort *puStack_220;
  int *local_21c;
  WCHAR aWStack_218 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005d7ad6;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)auStack_238;
  ExceptionList = &local_c;
  local_230 = param_1;
  (*DAT_0065d3e0)(L"COemDrvDlg::FindOurDevice",DAT_0064f674 ^ (uint)&stack0xfffffdb8);
  _memset(&DAT_0065e868,0,0xadc0);
  FUN_00416e40();
  if (param_2 != 0) {
    iVar8 = 0;
    puVar9 = &DAT_0065ea78;
    do {
      if (puVar9[4] != 0) {
        (*DAT_0065d3e0)(L"Dev[%02d]: id=%04x_%04x, UP%xU%xF%dI%dO%dR%d",iVar8,puVar9[4],puVar9[5],
                        puVar9[2],puVar9[3],puVar9[1],puVar9[-1],*puVar9,puVar9[-2]);
      }
      puVar9 = puVar9 + 0x8b;
      iVar8 = iVar8 + 1;
    } while ((int)puVar9 < 0x669838);
  }
  puStack_220 = (ushort *)0x0;
  iStack_22c = 0;
  iStack_228 = 0;
  piStack_224 = DAT_00651548;
  if ((DAT_00651548 != (int *)0x0) && (*DAT_00651548 != 0)) {
    do {
      puVar1 = (ushort *)*piStack_224;
      if ((*puVar1 == 0) && ((puVar1[1] == 0 && (DAT_00658b04 == 0)))) {
        (*DAT_0065d3e0)(L"FindOurDevice: %s is single wireless, continue",puVar1 + 0x23);
      }
      else {
        puVar4 = &DAT_0065ea8c;
        do {
          if (((uint)*puVar1 == puVar4[-1]) && ((uint)puVar1[1] != *puVar4)) {
            if ((*(int **)(puVar1 + 0xe) == (int *)0x0) ||
               ((iVar8 = (**(code **)(**(int **)(puVar1 + 0xe) + 0x14))(), iVar8 == 0 ||
                (*(LPCWSTR)(*(int *)(puVar1 + 0xe) + 0x2c) == L'\0')))) goto LAB_0040bd97;
            hObject = CreateFileW((LPCWSTR)(*(int *)(puVar1 + 0xe) + 0x2c),0x120089,3,
                                  (LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
            if (hObject != (HANDLE)0xffffffff) {
              CloseHandle(hObject);
              goto LAB_0040bd97;
            }
            break;
          }
          puVar4 = puVar4 + 0x8b;
        } while ((int)puVar4 < 0x66984c);
        if (*(int *)(puVar1 + 0xe) != 0) {
          (*DAT_0065d3e0)(L"Device OUT: %s, %s",puVar1 + 0x23,*(int *)(puVar1 + 0xe) + 0x2c);
          if (puVar1 == DAT_00651534) {
            DAT_00651534 = (ushort *)0x0;
          }
          if (*(undefined4 **)(puVar1 + 0xe) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(puVar1 + 0xe))(1);
          }
          puVar1[0xe] = 0;
          puVar1[0xf] = 0;
        }
        iVar8 = *(int *)(local_230 + 0xac0);
        if ((iVar8 != 0) && (puVar9 = *(undefined4 **)(iVar8 + 100), puVar9 != (undefined4 *)0x0)) {
LAB_0040bc94:
          puVar2 = (ushort *)*puVar9;
          if ((puVar2 == (ushort *)0x0) || (puVar2 != puVar1)) goto LAB_0040bc9e;
          if (*(CWnd **)(puVar2 + 0x10) != (CWnd *)0x0) {
            CWnd::ShowWindow(*(CWnd **)(puVar2 + 0x10),0);
          }
          piVar5 = *(int **)(iVar8 + 100);
          while (_Memory = piVar5, _Memory != (int *)0x0) {
            piStack_234 = (int *)_Memory[1];
            piVar5 = piStack_234;
            if ((ushort *)*_Memory == puVar2) {
              if (_Memory[2] != 0) {
                *(int **)(_Memory[2] + 4) = piStack_234;
              }
              if (_Memory[1] != 0) {
                *(int *)(_Memory[1] + 8) = _Memory[2];
              }
              if (*(int **)(iVar8 + 0x68) == _Memory) {
                *(int *)(iVar8 + 0x68) = _Memory[2];
              }
              if (*(int **)(iVar8 + 100) == _Memory) {
                *(int *)(iVar8 + 100) = _Memory[1];
              }
              if (*(code **)(iVar8 + 0x60) != (code *)0x0) {
                (**(code **)(iVar8 + 0x60))(*_Memory);
              }
              if ((*(int *)(iVar8 + 0x58) == 0x10) && ((void *)*_Memory != (void *)0x0)) {
                _free((void *)*_Memory);
              }
              _free(_Memory);
              *(int *)(iVar8 + 0x5c) = *(int *)(iVar8 + 0x5c) + -1;
              piVar5 = piStack_234;
            }
          }
          if (*(int *)(iVar8 + 0x88) == 0) {
            *(undefined4 *)(iVar8 + 0x88) = 0xffffffff;
          }
        }
LAB_0040bd97:
        if ((*(int *)(puVar1 + 0xe) == 0) || (*(int *)(*(int *)(puVar1 + 0xe) + 0x234) != 1)) {
          iVar8 = *(int *)(puVar1 + 0xc);
          if ((iVar8 == 0x18) || (iVar8 == 0x1a)) {
            piVar5 = (int *)FUN_004ad0e9(0x2a0);
            uStack_4 = 0;
            piStack_234 = piVar5;
            if (piVar5 == (int *)0x0) {
LAB_0040bf2b:
              piVar5 = (int *)0x0;
            }
            else {
              FUN_004930c0();
              *piVar5 = (int)CDevG5KB::vftable;
              piVar5[1] = 0x916;
              piVar5[0xa7] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 0xb) = 0;
              piVar5[0x8f] = 0;
              piVar5[0xa4] = 0;
              piVar5[0xa3] = 0;
            }
          }
          else if (iVar8 == 0x19) {
            piVar5 = (int *)FUN_004ad0e9(0x2ac);
            uStack_4 = 1;
            piStack_234 = piVar5;
            if (piVar5 == (int *)0x0) goto LAB_0040bf2b;
            FUN_004930c0();
            *piVar5 = (int)CDevG5MS::vftable;
            piVar5[1] = 0x8805;
            piVar5[0xaa] = 0;
            piVar5[3] = 0;
            piVar5[4] = 0;
            piVar5[0xa9] = 0x14;
            *(undefined2 *)(piVar5 + 0xb) = 0;
            piVar5[0xa5] = 0;
            piVar5[0xa4] = 0;
            piVar5[0xa3] = 0;
          }
          else if (iVar8 == 0x16) {
            piStack_234 = (int *)FUN_004ad0e9(0x2b0);
            uStack_4 = 2;
            if (piStack_234 == (int *)0x0) {
LAB_0040be76:
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = (int *)FUN_00494dc0();
            }
          }
          else {
            if ((((iVar8 != 0x1c) || (*puVar1 != 0)) || (puVar1[1] != 0)) || (DAT_00658b04 == 0))
            goto LAB_0040c084;
            piStack_234 = (int *)FUN_004ad0e9(0x28c);
            uStack_4 = 3;
            if (piStack_234 == (int *)0x0) goto LAB_0040be76;
            piVar5 = (int *)FUN_004976c0(piStack_234);
          }
          uStack_4 = 0xffffffff;
          if (piVar5 != (int *)0x0) {
            pcVar3 = *(code **)(*piVar5 + 4);
            piVar5[2] = local_230;
            piVar5[4] = (int)puVar1;
            iVar8 = (*pcVar3)();
            if (iVar8 == -2) {
              (**(code **)*piVar5)(1);
              iStack_228 = 1;
            }
            else {
              if (1 < iVar8) {
                (**(code **)*piVar5)(1);
                goto LAB_0040c137;
              }
              if ((iVar8 == 1) || (DAT_00658b04 != 0)) {
                if (((iVar8 < 1) && (((uint)puVar1[1] + (uint)*puVar1 == 0 && (puVar1[2] != 0)))) &&
                   (*(int *)(puVar1 + 0xc) == 0x18)) {
                  (**(code **)*piVar5)(1);
                  if (*(undefined4 **)(puVar1 + 0xe) != (undefined4 *)0x0) {
                    (**(code **)**(undefined4 **)(puVar1 + 0xe))(1);
                  }
                  piStack_234 = (int *)FUN_004ad0e9(0x2a4);
                  uStack_4 = 4;
                  if (piStack_234 == (int *)0x0) {
                    piVar5 = (int *)0x0;
                  }
                  else {
                    piVar5 = (int *)FUN_00493590(piStack_234);
                  }
                  uStack_4 = 0xffffffff;
                  piVar5[4] = (int)puVar1;
                  *(int **)(puVar1 + 0xe) = piVar5;
                }
                iStack_22c = iStack_22c + 1;
                puStack_220 = puVar1;
                if ((iVar8 == 1) && (*(int *)(puVar1 + 0xe) != 0)) {
                  (*DAT_0065d3e0)(L"Free wireless object: %s",puVar1 + 0x23);
                  if (*(undefined4 **)(puVar1 + 0xe) != (undefined4 *)0x0) {
                    (**(code **)**(undefined4 **)(puVar1 + 0xe))(1);
                  }
                  puVar1[0xe] = 0;
                  puVar1[0xf] = 0;
                }
                (*DAT_0065d3e0)(L"Find wired: vid=%04x, pid=%04x, name=%s, dev=%s",*puVar1,puVar1[1]
                                ,puVar1 + 0x23,piVar5 + 0xb);
                *(int **)(puVar1 + 0xe) = piVar5;
                iVar8 = *piVar5;
                uVar6 = FUN_00402ef0();
                (**(code **)(iVar8 + 0xc))(uVar6);
                puVar1[0x186] = 0;
                puVar1[0x187] = 0;
                if (DAT_00651534 == (ushort *)0x0) {
                  DAT_00651534 = puVar1;
                }
              }
              else {
                (**(code **)*piVar5)(1);
              }
            }
          }
        }
        else {
          (*DAT_0065d3e0)(L"FindOurDevice: %s is wire and still active, continue",puVar1 + 0x23);
        }
      }
LAB_0040c084:
      iVar7 = iStack_228;
      iVar8 = iStack_22c;
      piStack_224 = (int *)piStack_224[1];
    } while ((piStack_224 != (int *)0x0) && (*piStack_224 != 0));
    (*DAT_0065d3e0)(L"bRunAsAdmin=%x, nDevNum=%d",iStack_228,iStack_22c);
    if ((iVar7 != 0) && (iVar8 < 1)) {
      iVar7 = FUN_00468230();
      (*DAT_0065d3e0)(L"Exit and run as admin, bAsAdmin=%x",iVar7);
      if ((iVar7 == 0) && (iVar7 = FUN_00467920(), 4 < iVar7)) {
        if (DAT_006701cc != (HANDLE)0x0) {
          CloseHandle(DAT_006701cc);
          DAT_006701cc = (HANDLE)0x0;
        }
        GetModuleFileNameW((HMODULE)0x0,aWStack_218,0x104);
        FUN_004681c0(aWStack_218);
        PostMessageW(*(HWND *)(local_230 + 0x20),0x10,0,0);
        goto LAB_0040c137;
      }
    }
    FUN_0040c8d0(local_230);
    FUN_0040cf90();
    if (local_21c != (int *)0x0) {
      *local_21c = iVar8;
    }
  }
LAB_0040c137:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_238);
  return;
LAB_0040bc9e:
  puVar9 = (undefined4 *)puVar9[1];
  if (puVar9 == (undefined4 *)0x0) goto LAB_0040bd97;
  goto LAB_0040bc94;
}


//==== FUNC 00438090  FUN_00438090 ====

void __thiscall FUN_00438090(CWnd *param_1,uint param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  HWND hWnd;
  char *pcVar4;
  undefined1 auStack_a0c [4];
  undefined1 local_a08 [2328];
  undefined1 local_f0;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  char local_e0 [64];
  CHAR local_a0 [132];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dc26b;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)auStack_a0c;
  ExceptionList = &local_14;
  if (param_1 == (CWnd *)0xffffff7c) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xa4);
  }
  if (param_3 == iVar3) {
    (**(code **)(*(int *)param_1 + 0x15c))(DAT_0064f674 ^ (uint)&stack0xfffff5e8);
  }
  else {
    if (param_1 == (CWnd *)0xfffffc64) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x3bc);
    }
    if (param_3 == iVar3) {
      FUN_00468480(local_a08);
      local_c = 0;
      FUN_004b79eb();
      local_c = 0xffffffff;
      FUN_00468630();
    }
    else {
      if (param_1 == (CWnd *)0xfffffad8) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x548);
      }
      if (param_3 == iVar3) {
        if ((uint)(*(int *)(param_1 + 0x5d0) == 0) != *(uint *)(param_1 + 0x5d0)) {
          *(uint *)(param_1 + 0x5d0) = (uint)(*(int *)(param_1 + 0x5d0) == 0);
          InvalidateRect(*(HWND *)(param_1 + 0x548),(RECT *)0x0,1);
        }
      }
      else {
        if (param_1 == (CWnd *)0xfffffdf0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x230);
        }
        if (param_3 == iVar3) {
          if (param_1 == (CWnd *)0xfffff94c) {
            hWnd = (HWND)0x0;
          }
          else {
            hWnd = *(HWND *)(param_1 + 0x6d4);
          }
          GetWindowTextA(hWnd,local_a0,0x80);
          _strncpy_s(local_e0,0x40,(char *)(param_1 + 0x770),0xffffffff);
          local_ef = 0;
          local_eb = 0;
          local_e7 = 0;
          local_e3 = 0;
          local_e1 = 0;
          pcVar4 = local_e0;
          local_f0 = 0;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_004a17d0(local_e0,(int)pcVar4 - (int)(local_e0 + 1));
          FUN_00478c80(local_e0,0x40,&local_f0);
          iVar3 = FUN_004382e0();
          *(int *)(param_1 + 0x7e8) = iVar3;
          if (iVar3 == 0) {
            DAT_0066fa5c = (uint)(*(int *)(param_1 + 0x5d0) != 0);
            pcVar2 = *(code **)(*(int *)param_1 + 0x158);
            *(undefined4 *)(param_1 + 0x7ec) = 0;
            (*pcVar2)();
          }
          else {
            InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
          }
        }
      }
    }
  }
  CWnd::OnCommand(param_1,param_2,param_3);
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_a0c);
  return;
}


//==== FUNC 00457a00  FUN_00457a00 ====

undefined4 __fastcall FUN_00457a00(CWnd *param_1)

{
  long lVar1;
  
  lVar1 = CWnd::Default(param_1);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_004578b0();
  return 1;
}


//==== FUNC 0045b250  FUN_0045b250 ====

void __thiscall FUN_0045b250(CWnd *param_1,uint param_2,int param_3)

{
  BOOL BVar1;
  int iVar2;
  undefined1 local_810 [2036];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dd6fb;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)local_810;
  ExceptionList = &local_14;
  iVar2 = 0;
  if (param_1 != (CWnd *)0xfffffa30) {
    iVar2 = *(int *)(param_1 + 0x5f0);
  }
  if (param_3 == iVar2) {
    if ((DAT_0066a21c != (int *)0x0) && (DAT_0066a214 == 0)) {
      (**(code **)(*DAT_0066a21c + 0x60))();
      if (DAT_0066a21c != (int *)0x0) {
        (**(code **)(*DAT_0066a21c + 4))(1);
      }
      DAT_0066a21c = (int *)0x0;
    }
    iVar2 = 0;
    if (DAT_0066f9cc == 0) {
      CWnd::ShowWindow(param_1,0);
      FUN_004578b0();
    }
    else {
LAB_0045b314:
      CWnd::ShowWindow(param_1,iVar2);
    }
  }
  else {
    iVar2 = 0;
    if (param_1 != (CWnd *)0xfffffbbc) {
      iVar2 = *(int *)(param_1 + 0x464);
    }
    if (param_3 == iVar2) {
      FUN_00445350(DAT_0064f674 ^ (uint)&stack0xfffff7e8);
      iVar2 = 6;
      goto LAB_0045b314;
    }
    if ((param_1 != (CWnd *)0xfffff8a4) && (*(int *)(param_1 + 0x77c) != 0)) {
      iVar2 = 0;
      if (param_1 != (CWnd *)0xfffff8a4) {
        iVar2 = *(int *)(param_1 + 0x77c);
      }
      if (param_3 == iVar2) {
        if ((*(int *)(param_1 + 0x438) != 0) &&
           (BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_1 + 0x438) + 0x20)), BVar1 != 0))
        goto LAB_0045b3f9;
        if (DAT_0066fa08 == 0) {
          FUN_00437450(local_810);
          local_c = 0;
          iVar2 = FUN_004b79eb();
          if (iVar2 == 1) {
            FUN_00457af0(1,0);
          }
          local_c = 0xffffffff;
          FUN_00437570();
        }
        else {
          FUN_0045a560(9);
        }
        goto LAB_0045b3ed;
      }
    }
    if ((param_1 != (CWnd *)0xfffff718) && (*(int *)(param_1 + 0x908) != 0)) {
      iVar2 = 0;
      if (param_1 != (CWnd *)0xfffff718) {
        iVar2 = *(int *)(param_1 + 0x908);
      }
      if (param_3 == iVar2) {
        ShellExecuteW((HWND)0x0,L"open",DAT_0066fad8,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
      }
    }
  }
LAB_0045b3ed:
  CWnd::OnCommand(param_1,param_2,param_3);
LAB_0045b3f9:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)local_810);
  return;
}


//==== FUNC 00463910  FUN_00463910 ====

void __thiscall FUN_00463910(int param_1,int param_2,int param_3)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  LPCWSTR lpFileName;
  undefined1 auStack_44c [4];
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  uint local_430;
  int local_42c;
  WCHAR local_218 [262];
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)auStack_44c;
  pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  pHVar1 = GetParent(*(HWND *)(pCVar2 + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  pHVar1 = GetParent(*(HWND *)(pCVar2 + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  local_448 = 0;
  local_444 = 0;
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  local_434 = 0;
  if ((param_3 != 4) && (param_3 != 5)) {
    if (param_2 == 1) {
      if (param_3 == 1) {
        (**(code **)(**(int **)(pCVar2 + 0x43c) + 0x170))(1);
        goto LAB_00463ad8;
      }
      if (param_3 == 2) {
        if (0 < *(int *)(*(int *)(param_1 + 0x7038) + -0xc)) {
          iVar3 = FUN_004c16aa(*(int *)(param_1 + 0x7038),&local_448);
          if (((iVar3 == 0) || (local_42c != 0)) || (0xfffff < local_430)) {
            CWnd::ShowWindow(pCVar2,0);
            FUN_00405270();
            FUN_00464a30();
            ShellExecuteW((HWND)0x0,L"open",*(LPCWSTR *)(param_1 + 0x7038),(LPCWSTR)0x0,local_218,1)
            ;
            FUN_004578b0();
          }
          else {
            (*DAT_0065d3e0)(L"Drv file size wrong= %d",local_430,0);
            FUN_00448e50(param_1);
          }
        }
        goto LAB_00463ad8;
      }
    }
    else {
      if (param_2 != 2) goto LAB_00463ad8;
      if (param_3 == 1) {
        (**(code **)(**(int **)(pCVar2 + 0x43c) + 0x170))(2);
        goto LAB_00463ad8;
      }
      if (param_3 == 2) {
        if (*(int *)(*(int *)(param_1 + 0x703c) + -0xc) < 1) goto LAB_00463ad8;
        iVar3 = FUN_004c16aa(*(int *)(param_1 + 0x703c),&local_448);
        if (((iVar3 == 0) || (local_42c != 0)) || (0x18fff < local_430)) {
          FUN_00405270();
          FUN_00464a30();
          ShellExecuteW((HWND)0x0,L"open",*(LPCWSTR *)(param_1 + 0x703c),(LPCWSTR)0x0,local_218,1);
          CWnd::ShowWindow(pCVar2,0);
          FUN_004578b0();
          goto LAB_00463ad8;
        }
        (*DAT_0065d3e0)(L"Fw file size wrong=%d",local_430,0);
        lpFileName = (LPCWSTR)FUN_00405270();
        DeleteFileW(lpFileName);
        goto LAB_00463acd;
      }
    }
    if (param_3 != 3) goto LAB_00463ad8;
  }
LAB_00463acd:
  FUN_00448e50(param_1);
LAB_00463ad8:
  __security_check_cookie(local_c ^ (uint)auStack_44c);
  return;
}


//==== FUNC 004849f0  FUN_004849f0 ====

void __thiscall FUN_004849f0(CWnd *param_1,uint param_2,int param_3)

{
  HWND pHVar1;
  int iVar2;
  CWnd *this;
  
  iVar2 = 0;
  if (param_1 != (CWnd *)0xfffffe00) {
    iVar2 = *(int *)(param_1 + 0x220);
  }
  if (param_3 == iVar2) {
    pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
    CWnd::FromHandle(pHVar1);
    FUN_004578b0();
    CWnd::OnCommand(param_1,param_2,param_3);
    return;
  }
  iVar2 = 0;
  if (param_1 != (CWnd *)0xffffff8c) {
    iVar2 = *(int *)(param_1 + 0x94);
  }
  if (param_3 == iVar2) {
    pHVar1 = GetParent(*(HWND *)(param_1 + 0x20));
    this = CWnd::FromHandle(pHVar1);
    CWnd::ShowWindow(this,6);
  }
  CWnd::OnCommand(param_1,param_2,param_3);
  return;
}


//==== FUNC 005b58fb  __flsbuf ====

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_EDI;
  uint uVar5;
  longlong lVar6;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar5 = _File_00->_flag;
  if ((uVar5 & 0x82) == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_005b5921:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar5 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_005b5921;
  }
  if ((uVar5 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar5 & 0x10) == 0) {
      _File_00->_flag = uVar5 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar5 & 0xfffffffe;
  }
  uVar5 = _File_00->_flag;
  _File_00->_flag = uVar5 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar5 & 0x10c) == 0) &&
     (((iVar3 = FUN_005b81e0(), _File_00 != (FILE *)(iVar3 + 0x20) &&
       (iVar3 = FUN_005b81e0(), _File_00 != (FILE *)(iVar3 + 0x40))) ||
      (iVar3 = __isatty((int)_File), iVar3 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108U) == 0) {
    uVar5 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar5 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar5 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar4 = &DAT_0064f908;
      }
      else {
        puVar4 = (undefined *)(((uint)_File & 0x1f) * 0x40 + (&DAT_00671260)[(int)_File >> 5]);
      }
      if (((puVar4[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_005b5a49;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar5);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar5) {
    return _Ch & 0xff;
  }
LAB_005b5a49:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}


//==== FUNC 005b1dfe  __flush ====

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


//==== FUNC 005adf72  __fwrite_nolock ====

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
            goto LAB_005ae0bf;
          }
          _Size_00 = uVar5;
          if (uVar3 <= uVar5) {
            _Size_00 = uVar3;
          }
          _memcpy(_File->_ptr,_DstBuf,_Size_00);
          _File->_cnt = _File->_cnt - _Size_00;
          _File->_ptr = _File->_ptr + _Size_00;
          uVar5 = uVar5 - _Size_00;
LAB_005ae07b:
          local_8 = (char *)((int)_DstBuf + _Size_00);
          _DstBuf = local_8;
        }
        if (local_c <= uVar5) {
          if ((uVar4 != 0) && (iVar2 = __flush(_File), iVar2 != 0)) goto LAB_005ae0bf;
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
            if (uVar4 <= uVar3) goto LAB_005ae07b;
          }
          _File->_flag = _File->_flag | 0x20;
LAB_005ae0bf:
          return (uVar6 - uVar5) / _Size;
        }
        iVar2 = __flsbuf((int)*(char *)_DstBuf,_File);
        if (iVar2 == -1) goto LAB_005ae0bf;
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
    __invalid_parameter(0,0,0,0,0);
  }
  return 0;
}


//==== FUNC 005c46c2  __flswbuf ====

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
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint _MaxCharCount;
  longlong lVar6;
  uint local_8;
  
  _FileHandle = __fileno(_File);
  uVar1 = _File->_flag;
  if ((uVar1 & 0x82) == 0) {
    piVar3 = __errno();
    *piVar3 = 9;
LAB_005c46e8:
    _File->_flag = _File->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar1 & 0x40) != 0) {
    piVar3 = __errno();
    *piVar3 = 0x22;
    goto LAB_005c46e8;
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
     (((iVar4 = FUN_005b81e0(), _File != (FILE *)(iVar4 + 0x20) &&
       (iVar4 = FUN_005b81e0(), _File != (FILE *)(iVar4 + 0x40))) ||
      (iVar4 = __isatty(_FileHandle), iVar4 == 0)))) {
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
        puVar5 = &DAT_0064f908;
      }
      else {
        puVar5 = (undefined *)((_FileHandle & 0x1f) * 0x40 + (&DAT_00671260)[(int)_FileHandle >> 5])
        ;
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_005c481f;
    }
    else {
      local_8 = __write(_FileHandle,_Buf,_MaxCharCount);
    }
    *(short *)_File->_base = (short)_Ch;
  }
  if (local_8 == _MaxCharCount) {
    return _Ch & 0xffff;
  }
LAB_005c481f:
  _File->_flag = _File->_flag | 0x20;
  return 0xffff;
}


//==== FUNC 0047a140  FUN_0047a140 ====

void FUN_0047a140(void)

{
  HANDLE hObject;
  int iVar1;
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)local_20c;
  __snwprintf_s(local_20c,0x104,0x103,L"%s%s",&DAT_0065cfa8,L"mac.dct");
  hObject = CreateFileW(local_20c,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    (*DAT_0065d3e0)(L"save_macro_to_file err=%d");
    GetLastError();
    __security_check_cookie(local_4 ^ (uint)local_20c);
    return;
  }
  if ((DAT_0066f9a4 != 0) && (*(int *)(DAT_0066f9a4 + 0x10) != 0)) {
    iVar1 = FUN_0047a0f0(hObject,*(int *)(DAT_0066f9a4 + 0x10));
    if (iVar1 == 0) {
      (*DAT_0065d3e0)(L"save_node_list failed");
    }
  }
  CloseHandle(hObject);
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}


//==== FUNC 004e7dc0  FUN_004e7dc0 ====

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_004e7dc0(int param_1,int param_2)

{
  bool bVar1;
  HGLOBAL hMem;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4e7dcc;
  uVar3 = 0;
  if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x80) != 0)) &&
     (*(int *)(param_1 + 0x20) == 0)) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)local_14);
    local_8 = 0;
    if (param_2 == 0) {
      FID_conflict_operator_(param_1 + 0x8c);
    }
    else {
      FUN_00403910(param_2);
    }
    if ((*(int *)(param_1 + 0x18) == 0) &&
       (bVar1 = ATL::operator==((CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)
                                local_14,(CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>
                                          *)(param_1 + 0x8c)), bVar1)) {
      uVar3 = 1;
    }
    else {
      hMem = (HGLOBAL)FUN_004e3be2(*(undefined4 *)(param_1 + 0x80),0);
      if (hMem != (HGLOBAL)0x0) {
        iVar2 = FUN_004e3b30(local_14[0]);
        GlobalFree(hMem);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x18) = 0;
          FUN_004039b0();
          return 1;
        }
      }
    }
    FUN_004039b0();
    return uVar3;
  }
  return 0;
}


//==== FUNC 00458640  FUN_00458640 ====

void FUN_00458640(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x43c);
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0xc0) != 0)) &&
      (*(int *)(*(int *)(iVar1 + 0xc0) + 0x24) != 0)) && (*(int *)(iVar1 + 0xa4) != 0)) {
    FUN_00404ee0(&DAT_0066fc50);
    iVar1 = FUN_004493c0();
    if (iVar1 != 0) {
      (*DAT_0065d3e0)(L"pVar->nDefLedIndex=%d");
      FUN_0047a8a0();
      FUN_0047acf0();
      (**(code **)(**(int **)(unaff_ESI + 0x43c) + 0x174))();
      if ((*(int *)(*(int *)(*(int *)(unaff_ESI + 0x43c) + 0xc0) + 0x14) == 1) &&
         (*(int *)(*(int *)(unaff_ESI + 0x43c) + 0x1704) != 0)) {
        FUN_004a8ac0();
      }
      if (DAT_00658b3a != '\0') {
        FUN_00404f00();
        FUN_0046aeb0(0,*(undefined4 *)(DAT_0066cfc0 + 0xab4));
        return;
      }
      FUN_00404f30();
      FUN_00448e50();
    }
  }
  return;
}


//==== FUNC 0040cd40  FUN_0040cd40 ====

void FUN_0040cd40(int param_1,byte param_2)

{
  uint uType;
  HANDLE hObject;
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_20;
  int local_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005d77fb;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&local_20;
  uType = DAT_0064f674 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  uVar5 = (uint)param_2;
  local_1c = param_1;
  (*DAT_0065d3e0)(L"OnNewCombo: nDevTy=%x",uVar5);
  if (uVar5 == 1) {
    iVar2 = *(int *)(param_1 + 4);
  }
  else {
    if (uVar5 != 0) goto LAB_0040cf68;
    iVar2 = *(int *)(param_1 + 8);
  }
  if (iVar2 == 0) {
    hObject = CreateFileW((LPCWSTR)(param_1 + 0xc),0x12019f,3,(LPSECURITY_ATTRIBUTES)0x0,3,
                          0x40000000,(HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) {
      DVar1 = GetLastError();
      (*DAT_0065d3e0)(L"OnNewCombo: open err=%x",DVar1);
    }
    else {
      uStack_17 = 0;
      uStack_16 = 0;
      uStack_15 = 0;
      uStack_14 = 0;
      uStack_13 = 0;
      uStack_18 = 0;
      iVar2 = FUN_004948e0(0x15,(-(uVar5 != 1) & 0x10U) + 5,&uStack_18,6,0,5);
      if (iVar2 == 0) {
        (*DAT_0065d3e0)(L"OnNewCombo: GetPSD failed");
      }
      else {
        iVar2 = FUN_00479480(0,0);
        if ((iVar2 != 0) && (uVar5 == *(uint *)(iVar2 + 0x14))) {
          iVar3 = FUN_004ad0e9(0x28c);
          uStack_18 = (undefined1)iVar3;
          uStack_17 = (undefined1)((uint)iVar3 >> 8);
          uStack_16 = (undefined1)((uint)iVar3 >> 0x10);
          uStack_15 = (undefined1)((uint)iVar3 >> 0x18);
          uStack_4 = 0;
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_004976c0(iVar3);
          }
          uStack_4 = 0xffffffff;
          *(int *)(iVar2 + 0x1c) = iVar3;
          *(int *)(iVar3 + 0x10) = iVar2;
          if (uVar5 == 1) {
            *(int *)(local_1c + 4) = iVar2;
          }
          else if ((uVar5 == 0) && (*(int *)(local_1c + 8) = iVar2, *(int *)(iVar2 + 0x18) != 0x1c))
          {
            FID_conflict_MessageBoxW((HWND)&DAT_0060d264,(LPCWSTR)0x0,(LPCWSTR)0x0,uType);
          }
          *(HANDLE *)(*(int *)(iVar2 + 0x1c) + 0xc) = hObject;
          *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x234) = 2;
          if (DAT_00651534 == 0) {
            DAT_00651534 = iVar2;
          }
          *(int *)(*(int *)(iVar2 + 0x1c) + 8) = local_20;
          if (local_20 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(local_20 + 0x20);
          }
          (**(code **)(**(int **)(iVar2 + 0x1c) + 0xc))(uVar4);
          SetTimer(*(HWND *)(local_20 + 0x20),0x611,1000,(TIMERPROC)0x0);
          (*DAT_0065d3e0)(L"OnNewCombo: init ok, pDEV=%x(%s)",iVar2,iVar2 + 0x28);
          goto LAB_0040cf68;
        }
        (*DAT_0065d3e0)(L"OnNewCombo: can\'t find dev, devPsd=%x %x %x %x %x %x",uStack_18,uStack_17
                        ,uStack_16,uStack_15,uStack_14,uStack_13,uStack_12);
      }
      CloseHandle(hObject);
    }
  }
LAB_0040cf68:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_20);
  return;
}


//==== FUNC 00494480  FUN_00494480 ====

void __fastcall FUN_00494480(uint param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1 & 0xffffff;
  iVar1 = FUN_004948e0(0x13,7,(int)&uStack_4 + 3,1,1,5);
  if (iVar1 != 1) {
    *(undefined4 *)(param_1 + 0x238) = 0xffffffff;
    return;
  }
  *(uint *)(param_1 + 0x238) = uStack_4 >> 0x18;
  return;
}


//==== FUNC 00494ba0  FUN_00494ba0 ====

undefined4 __thiscall
FUN_00494ba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_00493920(0x88,param_4,param_2,param_3,0,10);
    if (iVar1 == 0) {
      (*DAT_0065d3e0)(L"SetRealData failed");
      return 0;
    }
  }
  return 1;
}


//==== FUNC 00494bf0  FUN_00494bf0 ====

bool __thiscall FUN_00494bf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return false;
  }
  bVar1 = *(byte *)(*(int *)(*(int *)(param_1 + 0x10) + 0x24) + 0x2f97);
  bVar2 = 0x8e;
  if (bVar1 != 0) {
    bVar2 = bVar1 | 0x80;
  }
  iVar3 = FUN_00493920(bVar2,param_4,param_2,param_3,0,10);
  return iVar3 != 0;
}


//==== FUNC 00494330  FUN_00494330 ====

undefined4 FUN_00494330(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493920(0xb,0,param_1,param_2,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"CDev3632::SetScreenParam failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00494370  FUN_00494370 ====

undefined4 FUN_00494370(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493920(0xf,0,param_1,param_2,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"CDev3632::SendSelfData failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00493fd0  FUN_00493fd0 ====

bool FUN_00493fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDev3632::SetMatrix layer=%d",param_1);
  iVar1 = FUN_00493920(1,param_1,param_2,param_3,1,0xf);
  return iVar1 != 0;
}


//==== FUNC 00494040  FUN_00494040 ====

int __thiscall FUN_00494040(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(param_1 + ((int)param_1 >> 0x1f & 0x1ffU)) >> 9;
  param_1 = param_1 & 0x800001ff;
  if ((int)param_1 < 0) {
    param_1 = (param_1 - 1 | 0xfffffe00) + 1;
  }
  if (param_1 != 0) {
    iVar3 = iVar3 + 1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if ((param_1 == 0) || (uVar1 = param_1, iVar4 != iVar3 + -1)) {
        uVar1 = 0x200;
      }
      iVar2 = FUN_00493920(3,iVar4,param_3,uVar1,6,0xf);
      if (iVar2 != 1) {
        return iVar2;
      }
      Sleep(100);
      (*DAT_0065d3e0)(L"WriteMacroData %d",iVar4);
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 0x200;
    } while (iVar4 < iVar3);
  }
  return 1;
}


//==== FUNC 00494140  FUN_00494140 ====

undefined4 FUN_00494140(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDev3632::SetLED");
  iVar1 = FUN_00493920(4,0,param_1,param_2,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetLED failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00494270  FUN_00494270 ====

undefined4 FUN_00494270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00493920(2,param_1,param_2,param_3,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetGame failed");
    return 0;
  }
  return 1;
}


//==== FUNC 004942d0  FUN_004942d0 ====

undefined4 FUN_004942d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493920(9,0,param_1,param_2,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetLedRgbTab failed");
    return 0;
  }
  return 1;
}


//==== FUNC 004941c0  FUN_004941c0 ====

undefined4 FUN_004941c0(void)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDev3632::SetOnBoard");
  iVar1 = FUN_00493920(10,0,&stack0x00000004,1,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetOnBoard failed");
    return 0;
  }
  return 1;
}


//==== FUNC 004984e0  FUN_004984e0 ====

undefined4 __thiscall
FUN_004984e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 1;
  }
  uVar1 = FUN_00497b90(param_1,0x88,param_4,param_2,param_3,0,10);
  return uVar1;
}


//==== FUNC 00498510  FUN_00498510 ====

undefined4 __thiscall
FUN_00498510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 1;
  }
  uVar1 = FUN_00497b90(param_1,0x8e,param_4,param_2,param_3,0,10);
  return uVar1;
}


//==== FUNC 004980b0  FUN_004980b0 ====

bool __thiscall FUN_004980b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDevComboFilm::SetMatrix layer=%d",param_2);
  iVar1 = FUN_00497b90(param_1,(-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 1,
                       param_2,param_3,param_4,1,0xf);
  return iVar1 != 0;
}


//==== FUNC 00498140  FUN_00498140 ====

int __thiscall FUN_00498140(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x14);
  iVar4 = (int)(param_1 + ((int)param_1 >> 0x1f & 0x1ffU)) >> 9;
  param_1 = param_1 & 0x800001ff;
  if ((int)param_1 < 0) {
    param_1 = (param_1 - 1 | 0xfffffe00) + 1;
  }
  if (param_1 != 0) {
    iVar4 = iVar4 + 1;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      if ((param_1 == 0) || (uVar2 = param_1, iVar5 != iVar4 + -1)) {
        uVar2 = 0x200;
      }
      iVar3 = FUN_00497b90(param_2,(-(iVar1 != 1) & 0x10U) + 3,iVar5,param_3,uVar2,6,0xf);
      if (iVar3 != 1) {
        return iVar3;
      }
      Sleep(100);
      (*DAT_0065d3e0)(L"WriteMacroData %d",iVar5);
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 0x200;
    } while (iVar5 < iVar4);
  }
  return 1;
}


//==== FUNC 00498260  FUN_00498260 ====

undefined4 __thiscall FUN_00498260(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDevComboFilm::SetLED");
  iVar1 = FUN_00497b90(param_1,(-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 4,0,
                       param_2,param_3,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetLED failed");
    return 0;
  }
  return 1;
}


//==== FUNC 004983d0  FUN_004983d0 ====

undefined4 __thiscall
FUN_004983d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00497b90(param_1,2,param_2,param_3,param_4,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetGame failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00498430  FUN_00498430 ====

undefined4 __thiscall FUN_00498430(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00497b90(param_1,9,0,param_2,param_3,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetLedRgbTab failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00498300  FUN_00498300 ====

undefined4 __fastcall FUN_00498300(int param_1)

{
  int iVar1;
  
  (*DAT_0065d3e0)(L"CDevComboFilm::SetOnBoard");
  iVar1 = FUN_00497b90(param_1,(-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 10,0,
                       &stack0x00000004,1,1,0xf);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"SetOnBoard failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00498490  FUN_00498490 ====

uint __fastcall FUN_00498490(uint param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = param_1 & 0xffff0000;
  iVar1 = FUN_00497e50(7,0,&local_4,2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) {
    local_4._0_1_ = local_4._1_1_;
  }
  *(uint *)(param_1 + 0x238) = (uint)(byte)local_4;
  return (uint)(byte)local_4;
}


//==== FUNC 00498100  FUN_00498100 ====

void __thiscall FUN_00498100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_0065d3e0)(L"CDevComboFilm::GetMatrix layer=%d",param_2);
  FUN_00497e50((-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 0x41,param_2,param_3,
               param_4);
  return;
}


//==== FUNC 00498230  FUN_00498230 ====

void __thiscall FUN_00498230(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00497e50((-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 0x43,0,param_2,param_3)
  ;
  return;
}


//==== FUNC 004982c0  FUN_004982c0 ====

void __thiscall FUN_004982c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_0065d3e0)(L"CDevComboFilm::GetLED");
  FUN_00497e50((-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 0x44,0,param_2,param_3)
  ;
  return;
}


//==== FUNC 00498410  FUN_00498410 ====

void FUN_00498410(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00497e50(0x42,param_1,param_2,param_3);
  return;
}


//==== FUNC 00498470  FUN_00498470 ====

void FUN_00498470(undefined4 param_1,undefined4 param_2)

{
  FUN_00497e50(0x49,0,param_1,param_2);
  return;
}


//==== FUNC 00498360  FUN_00498360 ====

undefined4 __thiscall FUN_00498360(uint param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  (*DAT_0065d3e0)(L"CDevComboFilm::GetOnBoard");
  uStack_4 = uStack_4 & 0xffffff;
  iVar1 = FUN_00497e50((-(*(int *)(*(int *)(param_1 + 0x10) + 0x14) != 1) & 0x10U) + 0x4a,0,
                       (int)&uStack_4 + 3,1);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"GetOnBoard failed");
    return 0;
  }
  *param_2 = uStack_4._3_1_;
  return 1;
}


//==== FUNC 004943b0  FUN_004943b0 ====

undefined4 __thiscall FUN_004943b0(uint param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint local_4;
  
  local_4 = param_1 & 0xffff0000;
  iVar2 = FUN_00493cb0(param_1,0x4a,0,&local_4,2);
  uVar1 = local_4;
  if (iVar2 == 0) {
    (*DAT_0065d3e0)(L"CDev3632::ReadPower failed");
    return 0;
  }
  (*DAT_0065d3e0)(L"CDev3632::ReadPower  %d, %d",local_4 & 0xff,local_4 >> 8 & 0xff);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = (undefined1)local_4;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar3 = (uVar1 & 0xf000) != 0;
    if ((bVar3) && ((uVar1 & 0xf00) != 0)) {
      bVar3 = false;
    }
    *param_3 = bVar3;
  }
  return 1;
}


//==== FUNC 00494440  FUN_00494440 ====

undefined4 __thiscall FUN_00494440(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00493cb0(param_1,6,param_2,0,0);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"ResetDevice failed");
    return 0;
  }
  return 1;
}


//==== FUNC 00494010  FUN_00494010 ====

void __thiscall
FUN_00494010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (*DAT_0065d3e0)(L"CDev3632::GetMatrix layer=%d",param_2);
  FUN_00493cb0(param_1,0x41,param_2,param_3,param_4);
  return;
}


//==== FUNC 00494120  FUN_00494120 ====

void __thiscall FUN_00494120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00493cb0(param_1,0x43,0,param_2,param_3);
  return;
}


//==== FUNC 00494190  FUN_00494190 ====

void __thiscall FUN_00494190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*DAT_0065d3e0)(L"CDev3632::GetLED");
  FUN_00493cb0(param_1,0x44,0,param_2,param_3);
  return;
}


//==== FUNC 004942b0  FUN_004942b0 ====

void __thiscall
FUN_004942b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00493cb0(param_1,0x42,param_2,param_3,param_4);
  return;
}


//==== FUNC 00494310  FUN_00494310 ====

void __thiscall FUN_00494310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00493cb0(param_1,0x49,0,param_2,param_3);
  return;
}


//==== FUNC 00494210  FUN_00494210 ====

undefined4 __thiscall FUN_00494210(uint param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  (*DAT_0065d3e0)(L"CDev3632::GetOnBoard");
  uStack_4 = uStack_4 & 0xffffff;
  iVar1 = FUN_00493cb0(param_1,0x4a,0,(int)&uStack_4 + 3,1);
  if (iVar1 == 0) {
    (*DAT_0065d3e0)(L"GetOnBoard failed");
    return 0;
  }
  *param_2 = uStack_4._3_1_;
  return 1;
}


//==== FUNC 005b4e04  __lock ====

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2008 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_0064f960)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_0064f960)[_File * 2]);
  return;
}


//==== FUNC 005b45dc  __getptd ====

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


//==== FUNC 005b7723  ___updatetmbcinfo ====

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
  if (((p_Var1->_ownlocale & DAT_0064ffa4) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_0064fea8) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_0064fa80)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_0064fea8;
      lpAddend = (pthreadmbcinfo)PTR_DAT_0064fea8;
      InterlockedIncrement((LONG *)PTR_DAT_0064fea8);
    }
    FUN_005b77be();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}


//==== FUNC 005b7e8f  ___updatetlocinfo ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2008 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_0064ffa4) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_005b7ef9();
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


//==== FUNC 005ab0ea  ___tmainCRTStartup ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2008 Release */

int ___tmainCRTStartup(void)

{
  int iVar1;
  undefined4 uVar2;
  _STARTUPINFOW local_6c;
  int local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x5ab0f6;
  local_8 = 0;
  GetStartupInfoW(&local_6c);
  local_8 = 0xfffffffe;
  if ((((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
       (*(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4)
                 ) == 0x10b)) &&
     (0xe < *(uint *)(IMAGE_DOS_HEADER_00400000.e_program +
                     IMAGE_DOS_HEADER_00400000.e_lfanew + 0x34))) {
    local_20 = (uint)(*(int *)(&UNK_00400080.field_0x68 + IMAGE_DOS_HEADER_00400000.e_lfanew) != 0);
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
  DAT_00671374 = GetCommandLineW();
  DAT_006571b4 = ___crtGetEnvironmentStringsW();
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
  uVar2 = __wwincmdln();
  if (((byte)local_6c.dwFlags & 1) == 0) {
    local_6c.wShowWindow = 10;
  }
  local_24 = FUN_005c9ddf(0x400000,0,uVar2,local_6c.wShowWindow);
  if (local_20 != 0) {
    __cexit();
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  _exit(local_24);
}


//==== FUNC 005c9061  copy_environ ====

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


//==== FUNC 005b8649  __getstream ====

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
  int iVar5;
  FILE *pFVar6;
  FILE *_File;
  
  pFVar6 = (FILE *)0x0;
  __lock(1);
  iVar5 = 0;
  do {
    _File = pFVar6;
    if (DAT_00671220 <= iVar5) {
LAB_005b8747:
      if (_File != (FILE *)0x0) {
        _File->_flag = _File->_flag & 0x8000;
        _File->_cnt = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_005b8778();
      return _File;
    }
    piVar1 = (int *)(DAT_00670200 + iVar5 * 4);
    if (*piVar1 == 0) {
      iVar5 = iVar5 * 4;
      pvVar4 = __malloc_crt(0x38);
      *(void **)(iVar5 + DAT_00670200) = pvVar4;
      if (*(int *)(DAT_00670200 + iVar5) != 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_00670200 + iVar5) + 0x20,4000);
        if (iVar3 == 0) {
          _free(*(void **)(iVar5 + DAT_00670200));
          *(undefined4 *)(iVar5 + DAT_00670200) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_00670200) + 0x20));
          _File = *(FILE **)(iVar5 + DAT_00670200);
          _File->_flag = 0;
        }
      }
      goto LAB_005b8747;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && ((uVar2 & 0x8000) == 0)) {
      if ((iVar5 - 3U < 0x11) && (iVar3 = __mtinitlocknum(iVar5 + 0x10), iVar3 == 0))
      goto LAB_005b8747;
      __lock_file2(iVar5,*(void **)(DAT_00670200 + iVar5 * 4));
      _File = *(FILE **)(DAT_00670200 + iVar5 * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_005b8747;
      __unlock_file2(iVar5,_File);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


//==== FUNC 005b1714  __alloc_osfhnd ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2008 Release */

int __cdecl __alloc_osfhnd(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_20;
  
  local_20 = -1;
  iVar4 = 0;
  bVar1 = false;
  iVar2 = __mtinitlocknum(0xb);
  if (iVar2 == 0) {
    local_20 = -1;
  }
  else {
    __lock(0xb);
    for (; iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar3 = (undefined4 *)(&DAT_00671260)[iVar4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = __calloc_crt(0x20,0x40);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_00671260)[iVar4] = puVar3;
          DAT_00671240 = DAT_00671240 + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_00671260)[iVar4] + 0x800); puVar3 = puVar3 + 0x10) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar4 << 5;
          *(undefined1 *)((&DAT_00671260)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_00671260)[iVar4] + 0x800); puVar3 = puVar3 + 0x10) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                bVar1 = true;
              }
              else {
                puVar3[2] = puVar3[2] + 1;
              }
            }
            FUN_005b17e7();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
              *puVar3 = 0xffffffff;
              local_20 = ((int)puVar3 - (&DAT_00671260)[iVar4] >> 6) + iVar4 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_005b18a5();
  }
  return local_20;
}


//==== FUNC 005b723f  __malloc_crt ====

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
    if (DAT_00657bcc == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_00657bcc < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


//==== FUNC 004ad0e9  FUN_004ad0e9 ====

void * FUN_004ad0e9(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (PTR_thunk_FUN_004ae1dd_0064b000 != (undefined *)0x0)) {
    pvVar1 = (void *)(*(code *)PTR_thunk_FUN_004ae1dd_0064b000)(param_1);
    return pvVar1;
  }
  return pvVar1;
}


//==== FUNC 00588443  InitDialogInfo ====

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


//==== FUNC 005883d7  AllocPSP ====

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
    FUN_004ae1dd();
  }
  _memset(_Dst,0,param_1);
  **(size_t **)(this + 0x74) = param_1;
  return;
}


//==== FUNC 004e59c0  Allocate ====

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


//==== FUNC 005ae952  _realloc ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  int local_24;
  void *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_0067123c == 3) {
    do {
      local_20 = (void *)0x0;
      if (0xffffffe0 < _NewSize) goto LAB_005aeb2b;
      __lock(4);
      local_24 = ___sbh_find_block(_Memory);
      if (local_24 != 0) {
        if (_NewSize <= DAT_0067122c) {
          iVar2 = ___sbh_resize_block(local_24,_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = (void *)___sbh_alloc_block(_NewSize);
            if (local_20 != (void *)0x0) {
              uVar3 = *(int *)((int)_Memory + -4) - 1;
              if (_NewSize <= uVar3) {
                uVar3 = _NewSize;
              }
              _memcpy(local_20,_Memory,uVar3);
              local_24 = ___sbh_find_block(_Memory);
              ___sbh_free_block(local_24,_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (void *)0x0) {
          if (_NewSize == 0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_00657744,0,_NewSize);
          if (local_20 != (LPVOID)0x0) {
            uVar3 = *(int *)((int)_Memory + -4) - 1;
            if (_NewSize <= uVar3) {
              uVar3 = _NewSize;
            }
            _memcpy(local_20,_Memory,uVar3);
            ___sbh_free_block(local_24,_Memory);
          }
        }
      }
      FUN_005aea96();
      if (local_24 == 0) {
        if (_NewSize == 0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_00657744,0,_Memory,_NewSize);
      }
      if (local_20 != (void *)0x0) {
        return local_20;
      }
      if (DAT_00657bd4 == 0) {
        piVar4 = __errno();
        if (local_24 != 0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_005aeb58;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
    if (local_24 != 0) goto LAB_005aeb37;
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) goto LAB_005aeb2b;
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_00657744,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_00657bd4 == 0) {
        piVar4 = __errno();
LAB_005aeb58:
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
LAB_005aeb2b:
  __callnewh(_NewSize);
  piVar4 = __errno();
LAB_005aeb37:
  *piVar4 = 0xc;
  return (void *)0x0;
}


//==== FUNC 005ae2ac  exception ====

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


//==== FUNC 00402740  FUN_00402740 ====

void FUN_00402740(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_8;
  undefined4 *local_4;
  
  piVar3 = DAT_006514e8;
  iVar8 = 0;
  if (DAT_006514e8 != (int *)0x0) {
    while (iVar8 != param_1) {
      piVar3 = (int *)piVar3[1];
      iVar8 = iVar8 + 1;
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    puVar2 = (undefined4 *)*piVar3;
    if (puVar2 != (undefined4 *)0x0) {
      iVar7 = 0;
      local_4 = (undefined4 *)0x0;
      iVar8 = 0x7fffffff;
      local_8 = -1;
      piVar3 = DAT_006514e8;
      if (DAT_006514e8 != (int *)0x0) {
        do {
          puVar5 = (undefined4 *)*piVar3;
          if (((puVar5 != (undefined4 *)0x0) && (puVar5 != puVar2)) &&
             (uVar6 = (int)(puVar5[1] - puVar2[1]) >> 0x1f,
             iVar4 = (puVar5[1] - puVar2[1] ^ uVar6) - uVar6, iVar4 < iVar8)) {
            iVar8 = iVar4;
            local_8 = iVar7;
            local_4 = puVar5;
          }
          piVar1 = piVar3 + 1;
          iVar7 = iVar7 + 1;
          piVar3 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
        if (local_8 != -1) {
          if (((uint)puVar2[1] < (uint)local_4[1]) && (param_1 != local_8 + -1)) {
            puVar5 = _malloc(0x14);
            if (puVar5 == (undefined4 *)0x0) {
              return;
            }
            *puVar5 = *puVar2;
            puVar5[1] = puVar2[1];
            puVar5[2] = puVar2[2];
            puVar5[3] = puVar2[3];
            puVar5[4] = puVar2[4];
            FUN_0044e170(puVar5);
          }
          else {
            if ((uint)puVar2[1] <= (uint)local_4[1]) {
              return;
            }
            if (param_1 == local_8 + 1) {
              return;
            }
            puVar5 = _malloc(0x14);
            if (puVar5 == (undefined4 *)0x0) {
              return;
            }
            *puVar5 = *puVar2;
            puVar5[1] = puVar2[1];
            puVar5[2] = puVar2[2];
            puVar5[3] = puVar2[3];
            puVar5[4] = puVar2[4];
            FUN_0044e100();
          }
          FUN_0044e250(puVar2);
        }
      }
    }
  }
  return;
}


//==== FUNC 0044e100  FUN_0044e100 ====

undefined4 __fastcall FUN_0044e100(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_EBX;
  
  iVar1 = *(int *)(in_EAX + 0x10);
  iVar2 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar2 == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(in_EAX + 0x14) != iVar1) {
    puVar4 = _malloc(0xc);
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    puVar4[2] = iVar1;
    puVar4[1] = *(undefined4 *)(iVar1 + 4);
    *puVar4 = unaff_EBX;
    *(undefined4 **)(iVar1 + 4) = puVar4;
    if (puVar4[1] != 0) {
      *(undefined4 **)(puVar4[1] + 8) = puVar4;
    }
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
    return 1;
  }
  uVar3 = FUN_0044e0a0(unaff_EBX);
  return uVar3;
}


//==== FUNC 0044e0a0  FUN_0044e0a0 ====

undefined4 FUN_0044e0a0(undefined4 param_1)

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


//==== FUNC 0044e170  FUN_0044e170 ====

undefined4 __thiscall FUN_0044e170(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar1 = DAT_006514e8;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (iVar2 == param_1) break;
    puVar1 = (undefined4 *)puVar1[1];
    iVar2 = iVar2 + 1;
  }
  puVar3 = _malloc(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar3 = param_2;
  if (puVar1[2] == 0) {
    DAT_006514e8 = puVar3;
    puVar3[2] = 0;
  }
  else {
    *(undefined4 **)(puVar1[2] + 4) = puVar3;
    puVar3[2] = puVar1[2];
  }
  puVar3[1] = puVar1;
  puVar1[2] = puVar3;
  DAT_006514e0 = DAT_006514e0 + 1;
  return 1;
}


//==== FUNC 00402a50  FUN_00402a50 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined4 * __fastcall FUN_00402a50(int param_1)

{
  size_t _Size;
  undefined2 *puVar1;
  byte *pbVar2;
  undefined4 *_Dst;
  undefined2 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_2f14;
  int local_2f10;
  int local_2f04;
  int *local_2efc;
  int *local_2ef8;
  ushort local_2ef0;
  undefined2 local_2eee;
  int local_2eec [2999];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005d75fb;
  local_c = ExceptionList;
  uStack_10 = 0x402a68;
  ExceptionList = &local_c;
  iVar10 = 0;
  if (*(int *)(param_1 + 0x264) != 0) {
    _Size = DAT_006514e0 * 0x18 + 0x68;
    _Dst = _malloc(_Size);
    if (_Dst != (undefined4 *)0x0) {
      _memset(_Dst,0,_Size);
      puVar8 = *(undefined4 **)(param_1 + 0x264);
      puVar11 = _Dst;
      for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      local_2f10 = 0;
      local_2ef0 = 0;
      _memset(&local_2eee,0,0x2ede);
      local_2f04 = 0;
      local_2ef8 = (int *)0x0;
      local_2efc = (int *)0x0;
      local_4 = 0;
      if (DAT_006514e8 != (undefined4 *)0x0) {
        puVar3 = &local_2eee;
        puVar8 = DAT_006514e8;
        do {
          puVar1 = (undefined2 *)*puVar8;
          if (puVar1 != (undefined2 *)0x0) {
            puVar3[-1] = *puVar1;
            *puVar3 = 1;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 2);
            *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar1 + 8);
            iVar10 = iVar10 + 1;
            puVar3 = puVar3 + 6;
            if (999 < iVar10) break;
          }
          puVar8 = (undefined4 *)puVar8[1];
        } while (puVar8 != (undefined4 *)0x0);
      }
      if (DAT_006514e8 != (undefined4 *)0x0) {
        puVar3 = (undefined2 *)((int)local_2eec + iVar10 * 0xc + -2);
        puVar8 = DAT_006514e8;
        do {
          piVar5 = (int *)*puVar8;
          if (piVar5 != (int *)0x0) {
            if (999 < iVar10) break;
            if (*piVar5 < 0xf5) {
              puVar3[-1] = (short)*piVar5;
              *puVar3 = 0;
              *(int *)(puVar3 + 1) = piVar5[2];
              iVar10 = iVar10 + 1;
              puVar3 = puVar3 + 6;
            }
          }
          puVar8 = (undefined4 *)puVar8[1];
        } while (puVar8 != (undefined4 *)0x0);
      }
      local_2f14 = iVar10;
      if (0 < iVar10) {
        do {
          iVar6 = 0xffff;
          iVar7 = 0;
          piVar5 = local_2eec;
          iVar12 = -1;
          do {
            if (((*(ushort *)(piVar5 + -1) & 0x8000) == 0) &&
               (uVar9 = local_2f10 - *piVar5 >> 0x1f, iVar4 = (local_2f10 - *piVar5 ^ uVar9) - uVar9
               , iVar4 <= iVar6)) {
              iVar6 = iVar4;
              iVar12 = iVar7;
            }
            iVar7 = iVar7 + 1;
            piVar5 = piVar5 + 3;
          } while (iVar7 < iVar10);
          if (iVar12 != -1) {
            piVar5 = _malloc(0xc);
            if (piVar5 != (int *)0x0) {
              *piVar5 = (int)(&local_2ef0 + iVar12 * 6);
              piVar5[1] = 0;
              if (local_2f04 == 0) {
                piVar5[2] = 0;
                local_2efc = piVar5;
              }
              else {
                piVar5[2] = (int)local_2ef8;
                local_2ef8[1] = (int)piVar5;
              }
              local_2f04 = local_2f04 + 1;
              local_2ef8 = piVar5;
            }
            local_2f10 = local_2eec[iVar12 * 3];
            (&local_2ef0)[iVar12 * 6] = (&local_2ef0)[iVar12 * 6] | 0x8000;
          }
          local_2f14 = local_2f14 + -1;
        } while (local_2f14 != 0);
      }
      iVar6 = 0;
      iVar10 = 0;
      if (local_2efc != (int *)0x0) {
        puVar8 = _Dst + 0x19;
        do {
          pbVar2 = (byte *)*local_2efc;
          if (pbVar2 != (byte *)0x0) {
            *(ushort *)(puVar8 + -2) = (ushort)*pbVar2;
            *(undefined2 *)((int)puVar8 + -6) = *(undefined2 *)(pbVar2 + 2);
            *puVar8 = *(undefined4 *)(pbVar2 + 8);
            if (0 < iVar6) {
              puVar8[-4] = *(int *)(pbVar2 + 4) - iVar10;
            }
            iVar10 = *(int *)(pbVar2 + 4);
            iVar6 = iVar6 + 1;
            puVar8 = puVar8 + 3;
          }
          local_2efc = (int *)local_2efc[1];
        } while (local_2efc != (int *)0x0);
      }
      FUN_0044e280();
      (_Dst + iVar6 * 3 + 0x17)[1] = 0;
      *(undefined2 *)(_Dst + iVar6 * 3 + 0x17) = 0;
      _Dst[0x16] = iVar6;
      if (0 < iVar6) {
        local_4 = 0xffffffff;
        FUN_0044e020();
        ExceptionList = local_c;
        return _Dst;
      }
      _free(_Dst);
      local_4 = 0xffffffff;
      FUN_0044e020();
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//==== FUNC 004074f0  FUN_004074f0 ====

undefined4 FUN_004074f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  if (3 < unaff_EBX) {
    return 0;
  }
  puVar1 = _malloc(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = param_2;
  *(wchar_t *)(puVar1 + 1) = L'\0';
  if (unaff_EDI != 0) {
    __snwprintf_s((wchar_t *)(puVar1 + 1),0x14,0x13,L"%s");
  }
  uVar2 = FUN_0044e0a0(puVar1);
  return uVar2;
}


//==== FUNC 005becde  __crtLCMapStringA_stat ====

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
  LPSTR pCVar7;
  int *in_ECX;
  char *pcVar8;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0064f674 ^ (uint)&stack0xfffffffc;
  if (DAT_00657d0c == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_00657d0c = 2;
      }
    }
    else {
      DAT_00657d0c = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_005bed4f;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_005bed4f:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_00657d0c == 2) || (DAT_00657d0c == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    iVar3 = ___ansicp(param_1);
    if (iVar3 == -1) goto LAB_005bf071;
    if (iVar3 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,iVar3,param_3,&param_4,0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_005bf071;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pCVar7 = (LPSTR)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_005bf04e;
          pCVar7 = &stack0xffffffe4;
        }
        else {
          pCVar7 = _malloc(local_c + 8);
          if (pCVar7 != (LPSTR)0x0) {
            pCVar7[0] = -0x23;
            pCVar7[1] = -0x23;
            pCVar7[2] = '\0';
            pCVar7[3] = '\0';
            pCVar7 = pCVar7 + 8;
          }
        }
        if (pCVar7 != (LPSTR)0x0) {
          _memset(pCVar7,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pCVar7,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(iVar3,param_7,pCVar7,&local_c,param_5,param_6);
          }
          __freea(pCVar7);
        }
      }
    }
LAB_005bf04e:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_005bf071;
  }
  if (DAT_00657d0c != 1) goto LAB_005bf071;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_005bf071;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_005bedf7:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_005bedf7;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_005bf071;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_005bef07;
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
          pCVar7 = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            pCVar7 = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,pCVar7,(int)pcVar5,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_005bef07:
  __freea(local_10);
LAB_005bf071:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


//==== FUNC 005c26e2  __crtGetStringTypeA_stat ====

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
  
  local_8 = DAT_0064f674 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_00657d68 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_00657d68 = 2;
      }
      goto LAB_005c273d;
    }
    DAT_00657d68 = 1;
  }
  else {
LAB_005c273d:
    if ((DAT_00657d68 == 2) || (DAT_00657d68 == 0)) {
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
           (_Memory = (void *)___convertcp(param_5,puVar5,param_2,&param_3,0,0),
           param_2 = (ulong)_Memory, _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_005c288a;
    }
    if (DAT_00657d68 != 1) goto LAB_005c288a;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_005c288a;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_005c27cd:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_005c27cd;
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
LAB_005c288a:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


//==== FUNC 005c5024  ___convertcp ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2008 Release */

void ___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

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
  
  local_8 = DAT_0064f674 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_005c51c6;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_005c51c6;
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
LAB_005c5106:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_005c5106;
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
LAB_005c51c6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00409f10  FUN_00409f10 ====

void __fastcall FUN_00409f10(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uType;
  HWND pHVar4;
  CWnd *pCVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  ushort *puVar13;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  int iVar14;
  int yTop;
  int iVar15;
  int iStack_89c;
  LONG LStack_898;
  int iStack_894;
  int iStack_890;
  int iStack_88c;
  int local_888;
  int local_884;
  int local_880;
  int iStack_87c;
  undefined4 *puStack_878;
  uint auStack_874 [520];
  wchar_t awStack_54 [10];
  uint uStack_40;
  void *pvStack_38;
  undefined4 uStack_30;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_005dccf9;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&iStack_89c;
  uType = DAT_0064f674 ^ (uint)&stack0xfffff758;
  ExceptionList = &local_14;
  local_884 = param_1;
  pHVar4 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar5 = CWnd::FromHandle(pHVar4);
  pHVar4 = GetParent(*(HWND *)(pCVar5 + 0x20));
  pCVar5 = CWnd::FromHandle(pHVar4);
  iVar12 = *(int *)(pCVar5 + 0xc0);
  *(int *)(param_1 + 0x5594) = iVar12;
  local_888 = *(int *)(iVar12 + 0x24) + 0x18;
  *(int *)(param_1 + 0x5590) = local_888;
  local_880 = FUN_00465bb0();
  if (local_880 == 0) {
    FID_conflict_MessageBoxW
              ((HWND)L"CKeyMSDlg::LoadSkins pSensorCfg=0",(LPCWSTR)0x0,(LPCWSTR)0x0,uType);
  }
  piVar6 = (int *)FUN_004ad163();
  if (piVar6 != (int *)0x0) {
    iStack_87c = (**(code **)(*piVar6 + 0xc))();
    iStack_87c = iStack_87c + 0x10;
    iStack_c = 0;
    FUN_004031f0();
    puVar7 = (undefined4 *)FUN_004ad0e9();
    iStack_c._0_1_ = 1;
    puStack_878 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      if (1 < *(int *)(iStack_87c + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&iStack_87c,*(int *)(iStack_87c + -0xc));
      }
      *puVar7 = Gdiplus::Bitmap::vftable;
      iStack_88c = 0;
      uVar8 = GdipCreateBitmapFromFile();
      puVar7[2] = uVar8;
      puVar7[1] = iStack_88c;
    }
    iStack_c = (uint)iStack_c._1_3_ << 8;
    *(undefined4 **)(param_1 + 0x557c) = puVar7;
    iVar12 = puVar7[1];
    iStack_88c = 0;
    iVar9 = GdipGetImageWidth();
    if (iVar9 != 0) {
      puVar7[2] = iVar9;
    }
    if ((iStack_894 == 0) && (*(undefined4 **)(param_1 + 0x557c) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)(param_1 + 0x557c))();
      FUN_004ad123();
      *(undefined4 *)(param_1 + 0x557c) = 0;
    }
    SetRect((LPRECT)&stack0xfffff75c,
            (*(int *)(param_1 + 0x55b0) - *(int *)(param_1 + 0x55a8)) + -0x1db,0x15,
            (*(int *)(param_1 + 0x55b0) - *(int *)(param_1 + 0x55a8)) + -10,0x97);
    pCVar5 = (CWnd *)(param_1 + 0x74);
    FUN_00407170(unaff_ESI);
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x54);
    iVar15 = 0;
    yTop = 0x68;
    *(undefined4 *)(param_1 + 0x2e50) = 1;
    iVar9 = param_1;
    (*pcVar1)(0,0,0x50000000,&stack0xfffff75c);
    CWnd::MoveWindow(pCVar5,iVar9,yTop,iVar15 - iVar9,iVar12 - yTop,1);
    FUN_00406020();
    if ((*(char *)(uType + 0x267d) == '\0') || (*(char *)(uType + 0x268a) == '\0')) {
      iVar10 = 0;
    }
    else {
      iVar10 = 5;
    }
    CWnd::ShowWindow(pCVar5,iVar10);
    SetRect((LPRECT)&stack0xfffff740,0x78,0x13,0xbe,0x28);
    FUN_004674f0(param_1,L"combo4_nr.png",L"combo4_nr.png",param_1 + 0x2e5c,0,0,iVar9,yTop,iVar15,
                 iVar12);
    iVar10 = 1;
    if (0 < *(int *)(unaff_ESI + 4)) {
      do {
        __snwprintf_s(awStack_54,10,9,L"%d",iVar10);
        piVar6 = _malloc(0x2c);
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar10;
          *(wchar_t *)(piVar6 + 1) = L'\0';
          __snwprintf_s((wchar_t *)(piVar6 + 1),0x14,0x13,L"%s",awStack_54);
          FUN_0044e0a0(piVar6);
        }
        bVar2 = iVar10 < *(int *)(unaff_ESI + 4);
        iVar10 = iVar10 + 1;
      } while (bVar2);
    }
    *(undefined4 *)(param_1 + 0x3058) = 0x14;
    *(undefined ***)(param_1 + 0x2fbc) = &PTR_vftable_00651520;
    iVar10 = *(int *)(unaff_ESI + 0x50);
    SetRect((LPRECT)&stack0xfffff740,0x50,0x3d,0x89,0x54);
    *(int *)(param_1 + 0x5580) = iVar9;
    *(int *)(param_1 + 0x5584) = iVar12 + 9;
    *(int *)(param_1 + 0x558c) = iVar12 + 0xd;
    iVar14 = 0;
    pCVar5 = (CWnd *)(param_1 + 0x306c);
    do {
      FUN_0040b3a0(iVar9,yTop,iVar15,iVar12);
      (**(code **)(*(int *)pCVar5 + 0x13c))(0x68,unaff_EDI);
      CWnd::MoveWindow(pCVar5,iVar9,yTop,iVar15 - iVar9,iVar12 - yTop,1);
      *(int *)(pCVar5 + 0xa0) = iVar14;
      FUN_0040ad50();
      CWnd::ShowWindow(pCVar5,0);
      SetRect((LPRECT)&stack0xfffff740,iVar15 + iVar10,yTop,iVar10 + 0x39 + iVar15,iVar12);
      iVar14 = iVar14 + 1;
      pCVar5 = pCVar5 + 0xe8;
    } while (iVar14 < 8);
    *(int *)(unaff_EDI + 0x5588) = iVar15;
    iStack_89c = *(int *)(unaff_ESI + 0x58);
    iVar10 = 0x1a4;
    if (0x1a3 < iStack_89c) {
      iVar10 = iStack_89c + 0x1e;
    }
    SetRect((LPRECT)&stack0xfffff740,0x50,0x74,iVar10 + 0x50,0x80);
    uVar3 = DAT_00658158;
    iVar10 = *(int *)(unaff_EDI + 0x557c);
    LStack_898 = DAT_0065815c;
    uVar8 = *(undefined4 *)(unaff_EDI + 0x55a4);
    uVar11 = 0;
    *(undefined4 *)(unaff_EDI + 0x3800) = 0x801;
    *(int *)(unaff_EDI + 0x465c) = iVar10;
    iStack_894 = iVar9;
    iStack_890 = yTop;
    iStack_88c = iVar15;
    local_888 = iVar12;
    local_884 = iVar9;
    local_880 = yTop;
    iStack_87c = iVar15;
    puStack_878 = (undefined4 *)iVar12;
    if (iVar10 != 0) {
      uVar11 = 0;
      iVar12 = GdipGetImageWidth(*(undefined4 *)(iVar10 + 4),&stack0xfffff750);
      if (iVar12 != 0) {
        *(int *)(iVar10 + 8) = iVar12;
      }
    }
    *(undefined4 *)(unaff_EDI + 0x4630) = uVar11;
    iVar12 = Create(0,&DAT_0060b0b0,0x50000000,&local_884,unaff_EDI,0x68,0);
    if (iVar12 != 0) {
      *(undefined4 *)(unaff_EDI + 0x4660) = uVar8;
      *(int *)(unaff_EDI + 0x4664) = iStack_894;
      *(int *)(unaff_EDI + 0x4668) = iStack_890;
      *(int *)(unaff_EDI + 0x466c) = iStack_88c;
      *(int *)(unaff_EDI + 0x4670) = local_888;
      iVar12 = ((local_888 - iStack_890) + -3) / 2;
      SetRect((LPRECT)(unaff_EDI + 0x4648),0,iVar12,iStack_88c - iStack_894,iVar12 + 3);
      *(undefined4 *)(unaff_EDI + 0x4640) = uVar3;
      *(LONG *)(unaff_EDI + 0x4644) = LStack_898;
      *(undefined4 *)(unaff_EDI + 0x4658) = 0;
    }
    iVar12 = 0;
    if (0 < iStack_89c) {
      puVar13 = (ushort *)(unaff_ESI + 0x5c);
      do {
        auStack_874[iVar12] = (uint)*puVar13;
        iVar12 = iVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar12 < iStack_89c);
    }
    FUN_0044a150();
    uStack_30 = 0xffffffff;
    piVar6 = (int *)(unaff_EBX + -4);
    LOCK();
    iVar12 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar12 + -1 < 1) {
      (**(code **)(**(int **)(unaff_EBX + -0x10) + 4))((undefined4 *)(unaff_EBX + -0x10));
    }
    ExceptionList = pvStack_38;
    __security_check_cookie(uStack_40 ^ (uint)&stack0xfffff740);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403990();
}


//==== FUNC 00438620  FUN_00438620 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00438620(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (in_EAX == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1 = _malloc(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *in_EAX;
      in_EAX = in_EAX + 1;
      puVar3 = puVar3 + 1;
    }
    iVar2 = FUN_0044e0a0(puVar1);
    if (iVar2 != 0) {
      _DAT_0065150c = _DAT_0065150c + 1;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}


//==== FUNC 00479660  FUN_00479660 ====

void FUN_00479660(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_218;
  undefined1 local_214 [528];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_218;
  local_218 = 0;
  _memset(local_214,0,0x210);
  puVar1 = _malloc(0x214);
  if (puVar1 == (undefined4 *)0x0) {
    __security_check_cookie(local_4 ^ (uint)&local_218);
    return;
  }
  puVar3 = &local_218;
  puVar4 = puVar1;
  for (iVar2 = 0x85; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_0044e0a0(puVar1);
  __security_check_cookie(local_4 ^ (uint)&local_218);
  return;
}


//==== FUNC 00492e00  FUN_00492e00 ====

undefined4 __fastcall FUN_00492e00(int param_1)

{
  size_t in_EAX;
  void *pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = _malloc(in_EAX);
  *(void **)(param_1 + 4) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(size_t *)(param_1 + 8) = in_EAX;
  *(HANDLE *)(param_1 + 0x18) = pvVar2;
  FUN_00470c90();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(HANDLE *)(param_1 + 0x18) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x18));
  }
  (**(code **)(*(int *)(param_1 + 0x1c) + 0x14))();
  return 1;
}


//==== FUNC 0040fbe0  FUN_0040fbe0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040fbe0(LPCWSTR param_1,int param_2)

{
  int iVar1;
  char cVar2;
  void *_Dst;
  UINT UVar3;
  int iVar4;
  uint uVar5;
  size_t _Size;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined2 *puVar10;
  short *psVar11;
  ushort *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  LPCWSTR pWVar18;
  uint uVar19;
  int *piVar20;
  LPCWSTR local_1d4c;
  uint local_1d48;
  void *local_1d44;
  int local_1d40;
  int local_1d3c;
  uint local_1d38 [3];
  undefined4 local_1d2c;
  undefined4 local_1d28;
  undefined4 local_1d24;
  undefined4 local_1d20;
  undefined4 local_1d1c;
  int local_1d18;
  int local_1d14 [12];
  undefined2 uStack_1ce3;
  undefined4 local_1ce4;
  undefined4 local_1ce0;
  undefined4 local_1cdc;
  undefined4 local_1cd8;
  undefined4 local_1cd4;
  undefined1 local_1cd0;
  undefined2 uStack_1ccf;
  undefined1 uStack_1ccd;
  undefined4 local_1ccc;
  undefined4 local_1cc8;
  undefined4 local_1cc4;
  undefined4 local_1cc0;
  uint local_1cbc [18];
  wchar_t local_1c74 [260];
  uint local_1a6c [5];
  int local_1a58;
  int local_1a54;
  int local_1a50;
  int local_1a4c;
  int local_1a48;
  WCHAR local_124c [1040];
  wchar_t local_a2c [1300];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_1d4c;
  local_1cc4 = local_1cc4 & 0xffffff00;
  local_1d4c = param_1;
  local_1d18 = param_2;
  _memset((void *)((int)&local_1cc4 + 1),0,0x27);
  if (*(int *)(param_2 + 0x24) == 0) {
    _Dst = _malloc(0x3484);
    *(void **)(param_2 + 0x24) = _Dst;
    if (_Dst == (void *)0x0) {
      __security_check_cookie(local_4 ^ (uint)&local_1d4c);
      return;
    }
    _memset(_Dst,0,0x3484);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  iVar13 = iVar1 + 0x18;
  GetPrivateProfileStringW(L"OPT",L"UID",(LPCWSTR)0x0,(LPWSTR)(param_2 + 0xb2),0xf,param_1);
  UVar3 = GetPrivateProfileIntW(L"OPT",L"FwVerNeedToUpdate",0,param_1);
  *(UINT *)(param_2 + 0x2d8) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ForceUpdate",0,param_1);
  *(UINT *)(param_2 + 0x2dc) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"MacroBufferSize",0x1000,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 4) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"Sensor",0,param_1);
  *(UINT *)(iVar1 + 0x41c) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowLED",1,param_1);
  *(char *)(iVar1 + 0x2697) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowDpiColor",1,param_1);
  *(char *)(iVar1 + 0x2695) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowEffect",0,param_1);
  *(char *)(iVar1 + 0x2694) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowPower",0,param_1);
  *(char *)(iVar1 + 0x269d) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowPowerText",0,param_1);
  *(char *)(iVar1 + 0x269e) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"DR",0x500,param_1);
  *(UINT *)(iVar1 + 0x26b4) = UVar3;
  GetPrivateProfileStringW(L"OPT",L"RATE",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
  if (((WCHAR)local_1a6c[0] == L'\0') || (iVar4 = FUN_004658b0(local_1a6c,4), iVar4 < 1)) {
    *(undefined4 *)(iVar1 + 0x26b8) = 0x125;
    *(undefined4 *)(iVar1 + 0x26bc) = 0x250;
    *(undefined4 *)(iVar1 + 0x26c0) = 0x500;
    *(undefined4 *)(iVar1 + 0x26c4) = 0x1000;
  }
  GetPrivateProfileStringW(L"OPT",L"RGBIndex",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
  if (((WCHAR)local_1a6c[0] == L'\0') || (iVar4 = FUN_00465980(local_1a6c,3), iVar4 < 1)) {
    *(undefined1 *)(iVar1 + 0x2674) = 0;
    *(undefined1 *)(iVar1 + 0x2675) = 1;
    *(undefined1 *)(iVar1 + 0x2676) = 2;
  }
  GetPrivateProfileStringW(L"OPT",L"DPIRGBIndex",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
  if (((WCHAR)local_1a6c[0] == L'\0') || (iVar4 = FUN_00465980(local_1a6c,3), iVar4 < 1)) {
    *(undefined1 *)(iVar1 + 0x2678) = 0;
    *(undefined1 *)(iVar1 + 0x2679) = 1;
    *(undefined1 *)(iVar1 + 0x267a) = 2;
  }
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowSleep",1,param_1);
  *(char *)(iVar1 + 0x26d8) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"SleepTime",5,param_1);
  *(char *)(iVar1 + 0x26d9) = (char)UVar3;
  GetPrivateProfileStringW(L"OPT",L"SleepUI",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
  if ((WCHAR)local_1a6c[0] == L'\0') {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_004658b0(local_1a6c,0x10);
  }
  *(char *)(iVar1 + 0x26da) = cVar2;
  if (cVar2 == '\0') {
    local_1d38[0] = 1;
    local_1d38[1] = 2;
    local_1d38[2] = 3;
    local_1d2c = 4;
    local_1d28 = 5;
    local_1d24 = 10;
    local_1d20 = 0xf;
    local_1d1c = 0x14;
    *(undefined1 *)(iVar1 + 0x26da) = 8;
    iVar4 = 0;
    puVar8 = (uint *)(iVar1 + 0x26dc);
    do {
      uVar5 = local_1d38[iVar4];
      *puVar8 = uVar5;
      *(char *)(iVar4 + 0x2704 + iVar13) = (char)uVar5;
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(iVar1 + 0x26da));
  }
  else {
    GetPrivateProfileStringW(L"OPT",L"SleepHW",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
    if ((WCHAR)local_1a6c[0] == L'\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00465980(local_1a6c,0x10);
    }
    if (uVar5 != *(byte *)(iVar1 + 0x26da)) {
      MessageBoxW((HWND)0x0,L"SleepUI!=SleepHW",L"Warning",0);
    }
  }
  UVar3 = GetPrivateProfileIntW(L"OPT",L"Debounce",0,param_1);
  *(UINT *)(iVar1 + 0x272c) = UVar3;
  if (0 < (int)UVar3) {
    GetPrivateProfileStringW(L"OPT",L"DebounceUI",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
    if ((WCHAR)local_1a6c[0] != L'\0') {
      FUN_00465980(local_1a6c,0xc);
    }
    GetPrivateProfileStringW(L"OPT",L"DebounceHW",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,param_1);
    if ((WCHAR)local_1a6c[0] != L'\0') {
      FUN_00465980(local_1a6c,0xc);
    }
  }
  pWVar18 = local_1d4c;
  FUN_00465b00(0x14,L"ptKeyMarkDlg");
  FUN_00465b00(0x50,L"ptKey");
  UVar3 = GetPrivateProfileIntW(L"OPT",L"LedMask",0,pWVar18);
  *(UINT *)(iVar1 + 0x268c) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowModeSW",1,pWVar18);
  *(char *)(iVar1 + 0x269b) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowRGBSw",1,pWVar18);
  *(char *)(iVar1 + 0x2699) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"Enhance",-1,pWVar18);
  *(UINT *)(iVar1 + 0x267c) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowSys",1,pWVar18);
  *(char *)(iVar1 + 0x26a0) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"OnBoardNum",1,pWVar18);
  *(UINT *)(iVar1 + 0x2680) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowColorAddDec",1,pWVar18);
  *(char *)(iVar1 + 0x269f) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ApplyDpiForClick",1,pWVar18);
  *(char *)(iVar1 + 0x26a1) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ChangeDpiColor",1,pWVar18);
  *(char *)(iVar1 + 0x26a2) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowSleep",0,pWVar18);
  *(char *)(iVar1 + 0x26d8) = (char)UVar3;
  GetPrivateProfileStringW(L"OPT",L"SteadyLEDPos",(LPCWSTR)0x0,(LPWSTR)local_1a6c,0x410,pWVar18);
  if ((WCHAR)local_1a6c[0] != L'\0') {
    FUN_00465980(local_1a6c,8);
    pWVar18 = local_1d4c;
  }
  UVar3 = GetPrivateProfileIntW(L"OPT",L"SendTimeOnOpenKB",0,pWVar18);
  *(char *)(iVar1 + 0x2b95) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"KeyMask",0,pWVar18);
  *(UINT *)(iVar1 + 0x2684) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"CmdReset",0,pWVar18);
  *(char *)(iVar1 + 0x2b96) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"SyncMask",0,pWVar18);
  *(char *)(iVar1 + 0x2b97) = (char)UVar3;
  GetPrivateProfileStringW(L"OPT",L"ShowSideKeySw",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
  if ((local_124c[0] != L'\0') && (iVar4 = FUN_004658b0(local_124c,2), 0 < iVar4)) {
    *(uint *)(iVar1 + 0x26a4) = local_1a6c[1] << 0x10 | local_1a6c[0];
  }
  pWVar18 = local_1d4c;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"ShowMusic",0,local_1d4c);
  *(char *)(iVar1 + 0x2b94) = (char)UVar3;
  UVar3 = GetPrivateProfileIntW(L"OPT",L"LightBarNum",1,pWVar18);
  *(UINT *)(iVar1 + 0x2b3c) = UVar3;
  GetPrivateProfileStringW(L"OPT",L"LightBarLedNum",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
  if (local_124c[0] != L'\0') {
    FUN_00465980(local_124c,4);
  }
  local_1d44 = (void *)(iVar1 + 0x2b44);
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    __snwprintf_s(local_1c74,0x1e,0x1d,L"LightBarLedPos%d",iVar4);
    GetPrivateProfileStringW(L"OPT",local_1c74,(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    if (local_124c[0] != L'\0') {
      _Size = FUN_00465980(local_124c,0x28);
      if (0 < (int)_Size) {
        _memcpy(local_1d44,&local_1cc4,_Size);
      }
    }
    local_1d44 = (void *)((int)local_1d44 + 0x14);
  } while (iVar4 < 4);
  UVar3 = GetPrivateProfileIntW(L"OPT",L"EffectNum",0,local_1d4c);
  *(UINT *)(iVar1 + 0x26a8) = UVar3;
  *(undefined1 *)(iVar1 + 0x277c) = 1;
  *(undefined1 *)(iVar1 + 0x277e) = 0;
  *(undefined1 *)(iVar1 + 0x277d) = 5;
  *(undefined1 *)(iVar1 + 0x277f) = 1;
  *(undefined1 *)(iVar1 + 0x2780) = 0;
  *(undefined1 *)(iVar1 + 0x2781) = 1;
  *(undefined1 *)(iVar1 + 0x2782) = 0;
  *(undefined1 *)(iVar1 + 0x2783) = 0;
  local_1d14[5] = 0xffff00;
  local_1d14[6] = 0xffff;
  local_1d14[7] = 0xff00ff;
  local_1d48 = 0xff00ff;
  local_1cd8 = 0xffff;
  local_1cd4 = 0xffff00;
  local_1cc8 = 0xff00ff;
  local_1d2c = 0xffff00;
  local_1d28 = 0xffff;
  local_1d14[1] = 0xff00ff;
  local_1d14[9] = 0;
  local_1d14[10] = 0;
  local_1d14[0xb] = 0;
  local_1d14[2] = 0xff;
  local_1d14[3] = 0xff00;
  local_1d14[4] = 0xff0000;
  local_1d14[8] = 0xffffff;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x2784);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x27a4) = 1;
  *(undefined1 *)(iVar1 + 0x27a6) = 1;
  *(undefined1 *)(iVar1 + 0x27a5) = 1;
  *(undefined1 *)(iVar1 + 0x27a7) = 0;
  *(undefined1 *)(iVar1 + 0x27a8) = 1;
  *(undefined1 *)(iVar1 + 0x27a9) = 0;
  *(undefined1 *)(iVar1 + 0x27aa) = 0;
  *(undefined1 *)(iVar1 + 0x27ab) = 1;
  puVar8 = &local_1d48;
  puVar7 = (uint *)(iVar1 + 0x27ac);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1d38[0] = 0xff;
  local_1ce4 = 0xff;
  local_1d38[1] = 0xff00;
  local_1d38[2] = 0xff0000;
  local_1d24 = 0xfa00fa;
  local_1d20 = 0xffffff;
  local_1d1c = 0;
  *(undefined1 *)(iVar1 + 0x27cc) = 1;
  *(undefined1 *)(iVar1 + 0x27ce) = 2;
  *(undefined1 *)(iVar1 + 0x27cd) = 3;
  *(undefined1 *)(iVar1 + 0x27cf) = 1;
  *(undefined1 *)(iVar1 + 0x27d0) = 0;
  *(undefined1 *)(iVar1 + 0x27d1) = 0;
  *(undefined1 *)(iVar1 + 0x27d2) = 0;
  *(undefined1 *)(iVar1 + 0x27d3) = 7;
  puVar8 = local_1d38;
  puVar7 = (uint *)(iVar1 + 0x27d4);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1ce0 = 0xff00;
  local_1cdc = 0xff0000;
  local_1cd0 = 0xff;
  uStack_1ccf = 0xffff;
  uStack_1ccd = 0;
  local_1ccc = 0x80fa;
  local_1d14[0] = 0xff00;
  *(undefined1 *)(iVar1 + 0x27f4) = 1;
  *(undefined1 *)(iVar1 + 0x27f6) = 3;
  *(undefined1 *)(iVar1 + 0x27f5) = 0;
  *(undefined1 *)(iVar1 + 0x27f7) = 1;
  *(undefined1 *)(iVar1 + 0x27f8) = 0;
  *(undefined1 *)(iVar1 + 0x27f9) = 0;
  *(undefined1 *)(iVar1 + 0x27fa) = 0;
  *(undefined1 *)(iVar1 + 0x27fb) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x27fc);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x281c) = 1;
  *(undefined1 *)(iVar1 + 0x281e) = 4;
  *(undefined1 *)(iVar1 + 0x281d) = 2;
  *(undefined1 *)(iVar1 + 0x281f) = 1;
  *(undefined1 *)(iVar1 + 0x2820) = 0;
  *(undefined1 *)(iVar1 + 0x2821) = 0;
  *(undefined1 *)(iVar1 + 0x2822) = 0;
  *(undefined1 *)(iVar1 + 0x2823) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x2824);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x2844) = 1;
  *(undefined1 *)(iVar1 + 0x2846) = 5;
  *(undefined1 *)(iVar1 + 0x2845) = 0;
  *(undefined1 *)(iVar1 + 0x2847) = 0;
  *(undefined1 *)(iVar1 + 0x2848) = 0;
  *(undefined1 *)(iVar1 + 0x2849) = 0;
  *(undefined1 *)(iVar1 + 0x284a) = 0;
  *(undefined1 *)(iVar1 + 0x284b) = 8;
  puVar14 = &stack0xffffe31c;
  puVar17 = (undefined4 *)(iVar1 + 0x284c);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)(iVar1 + 0x286c) = 1;
  *(undefined1 *)(iVar1 + 0x286e) = 6;
  *(undefined1 *)(iVar1 + 0x286d) = 4;
  *(undefined1 *)(iVar1 + 0x286f) = 0;
  *(undefined1 *)(iVar1 + 0x2870) = 0;
  *(undefined1 *)(iVar1 + 0x2871) = 0;
  *(undefined1 *)(iVar1 + 0x2872) = 0;
  *(undefined1 *)(iVar1 + 0x2873) = 2;
  piVar16 = local_1d14;
  piVar20 = (int *)(iVar1 + 0x2874);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x2894) = 1;
  *(undefined1 *)(iVar1 + 0x2896) = 7;
  *(undefined1 *)(iVar1 + 0x2895) = 0;
  *(undefined1 *)(iVar1 + 0x2897) = 1;
  *(undefined1 *)(iVar1 + 0x2898) = 0;
  *(undefined1 *)(iVar1 + 0x2899) = 0;
  *(undefined1 *)(iVar1 + 0x289a) = 0;
  *(undefined1 *)(iVar1 + 0x289b) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x289c);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x28bc) = 1;
  *(undefined1 *)(iVar1 + 0x28be) = 8;
  *(undefined1 *)(iVar1 + 0x28bd) = 9;
  *(undefined1 *)(iVar1 + 0x28bf) = 1;
  *(undefined1 *)(iVar1 + 0x28c0) = 0;
  *(undefined1 *)(iVar1 + 0x28c1) = 0;
  *(undefined1 *)(iVar1 + 0x28c2) = 0;
  *(undefined1 *)(iVar1 + 0x28c3) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x28c4);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  *(undefined1 *)(iVar1 + 0x28e4) = 1;
  *(undefined1 *)(iVar1 + 0x28e6) = 0;
  *(undefined1 *)(iVar1 + 0x28e5) = 0;
  *(undefined1 *)(iVar1 + 0x28e7) = 0;
  *(undefined1 *)(iVar1 + 0x28e8) = 0;
  *(undefined1 *)(iVar1 + 0x28e9) = 0;
  *(undefined1 *)(iVar1 + 0x28ea) = 0;
  *(undefined1 *)(iVar1 + 0x28eb) = 0;
  piVar16 = local_1d14 + 2;
  piVar20 = (int *)(iVar1 + 0x28ec);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar20 = *piVar16;
    piVar16 = piVar16 + 1;
    piVar20 = piVar20 + 1;
  }
  local_1d48 = 0;
  puVar15 = (undefined1 *)(iVar1 + 0x277d);
  do {
    local_1d48 = local_1d48 + 1;
    __snwprintf_s(local_1c74,0x1e,0x1d,L"LedOpt%d",local_1d48);
    GetPrivateProfileStringW(L"OPT",local_1c74,(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    if (local_124c[0] != L'\0') {
      iVar4 = 10;
      iVar6 = FUN_00465980(local_124c,0x28);
      if (0 < iVar6) {
        *puVar15 = local_1cc4._1_1_;
        puVar15[1] = (undefined1)local_1cc4;
        puVar15[3] = local_1cc4._3_1_;
        puVar15[2] = local_1cc4._2_1_;
        puVar15[5] = local_1cc0._1_1_;
        puVar15[-1] = 1;
        puVar15[4] = (undefined1)local_1cc0;
        cVar2 = local_1cc0._2_1_;
        if (local_1cc0._2_1_ == -0x80) {
          cVar2 = '\0';
        }
        puVar15[6] = cVar2;
        if (7 < iVar6) {
          puVar7 = local_1cbc;
          puVar8 = (uint *)(puVar15 + 7);
          do {
            *puVar8 = (uint)CONCAT21((short)*puVar7,*(undefined1 *)((int)puVar7 + -1));
            puVar8 = puVar8 + 1;
            puVar7 = (uint *)((int)puVar7 + 3);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    pWVar18 = local_1d4c;
    puVar15 = puVar15 + 0x28;
  } while ((int)local_1d48 < 0x18);
  UVar3 = GetPrivateProfileIntW(L"KEY",L"MDNUM",3,local_1d4c);
  *(int *)(iVar1 + 0x26cc) = (int)UVar3 / 3;
  UVar3 = GetPrivateProfileIntW(L"KEY",L"KEYH",10,pWVar18);
  *(UINT *)(iVar1 + 0x418) = UVar3;
  UVar3 = GetPrivateProfileIntW(L"KEY",L"KM",0,pWVar18);
  *(int *)(iVar1 + 0x26c8) = (int)UVar3 / 2;
  local_1d48 = 0;
  puVar8 = (uint *)(iVar1 + 700);
  do {
    local_1d48 = local_1d48 + 1;
    __snwprintf_s(local_1c74,0x14,0x13,L"Mark%d",local_1d48);
    GetPrivateProfileStringW(L"KEY",local_1c74,(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    if ((local_124c[0] == L'\0') || (iVar4 = FUN_00465980(local_124c,0x28), iVar4 < 1)) break;
    uVar5 = local_1cc4 >> 8 & 0xff;
    puVar8[-1] = local_1cc4 & 0xff;
    puVar8[2] = (local_1cc4 >> 0x18) + uVar5;
    *puVar8 = uVar5;
    puVar8[1] = (local_1cc4 >> 0x10 & 0xff) + (local_1cc4 & 0xff);
    puVar8 = puVar8 + 4;
  } while ((int)local_1d48 < 0x15);
  local_1d40 = 0;
  local_1d44 = (void *)0x0;
  do {
    local_1d40 = local_1d40 + 1;
    uVar5 = 0;
    do {
      local_1d48 = uVar5 + 1;
      __snwprintf_s(local_1c74,0x14,0x13,L"K%d_%d",local_1d48,local_1d40);
      GetPrivateProfileStringW(L"KEY",local_1c74,(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
      if ((local_124c[0] != L'\0') && (iVar4 = FUN_004658b0(local_124c,4), 0 < iVar4)) {
        puVar8 = (uint *)(((int)local_1d44 + uVar5) * 0x10 + iVar13);
        *(undefined1 *)(puVar8 + 3) = (undefined1)local_1d2c;
        *puVar8 = local_1d38[1] & 0xff | local_1d38[0] << 0x18;
        cVar2 = (char)local_1d38[1];
        if ((char)local_1d38[0] == '\b') {
          if (cVar2 == -0x5a) {
            puVar8[2] = local_1d38[2];
          }
          else if (cVar2 == -0x5c) {
            puVar8[2] = local_1d38[2];
          }
        }
        else if ((char)local_1d38[0] == '\x02') {
          *(char *)((int)puVar8 + 5) = cVar2;
          *puVar8 = 0x2000000;
          *(char *)((int)puVar8 + 6) = (char)(local_1d38[1] >> 8);
          if ((local_1d38[2] & 1) != 0) {
            *(byte *)(puVar8 + 1) = (byte)puVar8[1] | 1;
          }
          if ((local_1d38[2] & 2) != 0) {
            *(byte *)(puVar8 + 1) = (byte)puVar8[1] | 2;
          }
          if ((local_1d38[2] & 4) != 0) {
            *(byte *)(puVar8 + 1) = (byte)puVar8[1] | 4;
          }
          if ((local_1d38[2] & 8) != 0) {
            *(byte *)(puVar8 + 1) = (byte)puVar8[1] | 8;
          }
        }
        else if (((char)local_1d38[0] == '\f') || ((char)local_1d38[0] == '\x05')) {
          *puVar8 = local_1d38[0] << 0x18;
          puVar8[1] = local_1d38[2];
        }
        else if ((char)local_1d38[0] == '\t') {
          *puVar8 = local_1d38[1] & 0xff | 0x9000000;
          puVar8[2] = local_1d38[2];
        }
      }
      uVar5 = local_1d48;
    } while ((int)local_1d48 < 0x15);
    local_1d44 = (void *)((int)local_1d44 + 0x15);
  } while ((int)local_1d44 < 0x2a);
  local_1d40 = 0;
  do {
    iVar4 = local_1d40;
    local_1d14[0] = local_1d40 + 1;
    __snwprintf_s(local_1c74,0x1e,0x1d,L"SENSOR_%d",local_1d14[0]);
    pWVar18 = local_1d4c;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"Sensor",0,local_1d4c);
    iVar4 = iVar4 * 0x890 + iVar13;
    *(UINT *)(iVar4 + 0x408) = UVar3;
    local_1d3c = iVar4;
    if (UVar3 == 0) break;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"DM",6,pWVar18);
    *(UINT *)(iVar4 + 0x40c) = UVar3;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"DpiUILevels",UVar3,pWVar18);
    *(UINT *)(iVar4 + 0x410) = UVar3;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"DEFLEVEL",0,pWVar18);
    *(UINT *)(iVar4 + 0x414) = UVar3;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"DPIH",0x10,pWVar18);
    *(UINT *)(iVar4 + 0x458) = UVar3;
    UVar3 = GetPrivateProfileIntW(local_1c74,L"ShowLOD",0,pWVar18);
    *(UINT *)(iVar4 + 0xc84) = UVar3;
    if (0 < (int)UVar3) {
      GetPrivateProfileStringW(local_1c74,L"LodUI",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
      if (local_124c[0] != L'\0') {
        FUN_00465980(local_124c,8);
        pWVar18 = local_1d4c;
      }
      GetPrivateProfileStringW(local_1c74,L"LodHW",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
      if (local_124c[0] != L'\0') {
        FUN_00465980(local_124c,8);
        pWVar18 = local_1d4c;
      }
    }
    *(undefined4 *)(iVar4 + 0x45c) = *(undefined4 *)(iVar4 + 0x408);
    local_1cc4 = 0;
    _memset(&local_1cc0,0,0x4c);
    GetPrivateProfileStringW(local_1c74,L"DPIRANGEALIAS",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
    if (local_124c[0] == L'\0') {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004658b0(local_124c,0x208);
      pWVar18 = local_1d4c;
    }
    local_1d48 = iVar6 / 2;
    iVar6 = 0;
    if (0 < (int)local_1d48) {
      puVar8 = local_1a6c;
      do {
        (&local_1cc4)[iVar6 * 2] = *puVar8;
        local_1cbc[iVar6 * 2 + -1] = puVar8[1];
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 2;
      } while (iVar6 < (int)local_1d48);
    }
    _memset(local_1a6c,0,0x50);
    GetPrivateProfileStringW(local_1c74,L"DPIRANGE",(LPCWSTR)0x0,local_124c,0x410,pWVar18);
    if (local_124c[0] == L'\0') {
LAB_00410f09:
      GetPrivateProfileStringW(local_1c74,L"DPISET",(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
      if (local_124c[0] == L'\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_004658b0(local_124c,0x208);
      }
      local_1d48 = (uint)(0 < iVar6);
      if (iVar6 < 1) {
        FUN_004139b0();
        if (*(int *)(iVar4 + 0x460) < 1) {
          __snwprintf_s(local_a2c,0x104,0x103,L"Unassigned %x value for dev: %s",
                        *(undefined4 *)(iVar4 + 0x408),local_1d18 + 0x46);
          MessageBoxW((HWND)0x0,local_a2c,L"Warning",0);
        }
      }
      else {
        iVar9 = 0;
        *(int *)(iVar4 + 0x460) = iVar6;
        if (0 < iVar6) {
          puVar10 = (undefined2 *)(iVar4 + 0x464);
          do {
            *puVar10 = (short)local_1a6c[iVar9];
            iVar9 = iVar9 + 1;
            puVar10 = puVar10 + 1;
          } while (iVar9 < iVar6);
        }
      }
      GetPrivateProfileStringW(local_1c74,L"DPIHW",(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
      if ((local_124c[0] == L'\0') || (iVar6 = FUN_004658b0(local_124c,0x208), iVar6 < 1)) {
        if ((local_1d48 != 0) && (iVar6 = 0, 0 < *(int *)(iVar4 + 0x460))) {
          psVar11 = (short *)(iVar4 + 0x874);
          do {
            *psVar11 = (short)iVar6 + 1;
            iVar6 = iVar6 + 1;
            psVar11 = psVar11 + 1;
          } while (iVar6 < *(int *)(iVar4 + 0x460));
        }
      }
      else {
        puVar12 = (ushort *)(iVar4 + 0x874);
        _memset(puVar12,0,0x410);
        iVar9 = 0;
        if (0 < iVar6) {
          do {
            *puVar12 = (ushort)(byte)local_1a6c[iVar9];
            iVar9 = iVar9 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar9 < iVar6);
        }
        if (*(int *)(iVar4 + 0x460) != iVar6) {
          MessageBoxW((HWND)0x0,L"DPISET Num != DPIHW Num",L"Warning",0);
        }
      }
    }
    else {
      local_1d44 = (void *)FUN_004658b0(local_124c,0x14);
      if ((int)local_1d44 < 1) goto LAB_00410f09;
      if ((int)local_1d44 < 5) {
        MessageBoxW((HWND)0x0,L"Wrong DPIRANGE",L"Warning",0);
      }
      iVar6 = 0;
      puVar10 = (undefined2 *)(iVar4 + 0x464);
      uVar5 = local_1a6c[0];
      uVar19 = local_1a6c[3];
      do {
        iVar4 = 0;
        if (0 < (int)local_1d48) {
          do {
            if ((&local_1cc4)[iVar4 * 2] == uVar5) {
              if (local_1cbc[iVar4 * 2 + -1] != 0xffffffff) {
                *puVar10 = (short)local_1cbc[iVar4 * 2 + -1];
                goto LAB_00410e21;
              }
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)local_1d48);
        }
        *puVar10 = (short)uVar5;
LAB_00410e21:
        uVar5 = uVar5 + local_1a6c[2];
        puVar10[0x208] = (short)uVar19;
        iVar6 = iVar6 + 1;
        uVar19 = uVar19 + local_1a6c[4];
        puVar10 = puVar10 + 1;
      } while ((iVar6 < 0x208) && ((int)uVar5 <= (int)local_1a6c[1]));
      if (5 < (int)local_1d44) {
        if (local_1a4c != 0) {
          uVar19 = local_1a4c;
        }
        if (local_1a48 == 0) {
          local_1a48 = local_1a6c[4];
        }
        puVar10 = (undefined2 *)(local_1d3c + 0x464 + iVar6 * 2);
        iVar4 = local_1a58;
        do {
          if (0x207 < iVar6) break;
          iVar9 = 0;
          if (0 < (int)local_1d48) {
            do {
              if ((&local_1cc4)[iVar9 * 2] == iVar4) {
                if (local_1cbc[iVar9 * 2 + -1] != 0xffffffff) {
                  *puVar10 = (short)local_1cbc[iVar9 * 2 + -1];
                  goto LAB_00410ec7;
                }
                break;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)local_1d48);
          }
          *puVar10 = (short)iVar4;
LAB_00410ec7:
          iVar4 = iVar4 + local_1a50;
          puVar10[0x208] = (short)uVar19;
          uVar19 = uVar19 + local_1a48;
          iVar6 = iVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar4 <= local_1a54);
      }
      *(int *)(local_1d3c + 0x460) = iVar6;
      iVar4 = local_1d3c;
    }
    GetPrivateProfileStringW(local_1c74,L"DPI",(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    iVar6 = 0;
    if (local_124c[0] != L'\0') {
      iVar6 = FUN_004658b0(local_124c,8);
    }
    local_1d44 = (void *)iVar6;
    if ((iVar6 == *(int *)(iVar4 + 0x40c)) && (iVar9 = 0, 0 < iVar6)) {
      do {
        iVar6 = 0;
        if (0 < *(int *)(iVar4 + 0x460)) {
          puVar12 = (ushort *)(iVar4 + 0x464);
          do {
            if ((uint)*puVar12 == local_1d38[iVar9]) {
              *(uint *)(iVar1 + 0x430 + (local_1d40 * 0x224 + iVar9) * 4) = local_1d38[iVar9];
              goto LAB_004111a9;
            }
            iVar6 = iVar6 + 1;
            puVar12 = puVar12 + 1;
          } while (iVar6 < *(int *)(iVar4 + 0x460));
        }
        __snwprintf_s(local_a2c,0x104,0x103,L"Wrong default dpi value %d for sensor %04x",
                      local_1d38[iVar9],*(undefined4 *)(iVar4 + 0x45c));
        MessageBoxW((HWND)0x0,local_a2c,L"Warning",0);
LAB_004111a9:
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)local_1d44);
    }
    local_1ce0 = 0;
    local_1cdc = 0;
    local_1cd8 = 0;
    local_1cd4 = 0;
    local_1cd0 = 0;
    uStack_1ccf = 0;
    uStack_1ccd = 0;
    local_1ce4 = 0;
    GetPrivateProfileStringW(local_1c74,L"DC",(LPCWSTR)0x0,local_124c,0x410,local_1d4c);
    if ((local_124c[0] == L'\0') || (iVar6 = FUN_00465980(local_124c,0x18), iVar6 < 1)) {
      piVar16 = local_1d14 + 2;
      piVar20 = (int *)(iVar4 + 0x438);
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar20 = *piVar16;
        piVar16 = piVar16 + 1;
        piVar20 = piVar20 + 1;
      }
    }
    else {
      iVar6 = iVar6 / 3;
      if (0 < iVar6) {
        puVar10 = &uStack_1ce3;
        puVar8 = (uint *)(iVar4 + 0x438);
        do {
          *puVar8 = (uint)CONCAT21(*puVar10,*(undefined1 *)((int)puVar10 + -1));
          puVar8 = puVar8 + 1;
          puVar10 = (undefined2 *)((int)puVar10 + 3);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    local_1d40 = local_1d14[0];
  } while (local_1d14[0] < 4);
  *(undefined4 *)(local_1d18 + 0x300) = *(undefined4 *)(iVar1 + 0x41c);
  __security_check_cookie(local_4 ^ (uint)&local_1d4c);
  return;
}


//==== FUNC 004112f0  FUN_004112f0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004112f0(wchar_t *param_1,int param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  UINT UVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  code *pcVar6;
  undefined4 *puVar7;
  ushort local_1358;
  ushort local_1356;
  ushort local_1354;
  ushort local_1352;
  undefined1 auStack_1348 [4];
  int local_1344;
  UINT local_1340;
  WCHAR local_1312 [69];
  wchar_t local_1288 [260];
  undefined2 local_1080;
  short asStack_105c [10];
  UINT local_1048;
  WCHAR local_1044 [1040];
  wchar_t local_824 [1040];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_1358;
  local_1358 = 0;
  _memset(&local_1356,0,0x312);
  pcVar6 = GetPrivateProfileStringW_exref;
  GetPrivateProfileStringW(L"OPT",L"Name",(LPCWSTR)0x0,local_1312,0x36,param_1);
  if ((DAT_00658350 == 0) || (iVar1 = __wcsnicmp(local_1312,&DAT_00658350,0x1e), iVar1 == 0)) {
    local_1344 = param_2;
    if ((param_1 != (wchar_t *)0x0) && (local_1288 != (wchar_t *)0x0)) {
      _wcsncpy_s(local_1288,0x104,param_1,0xffffffff);
      pwVar2 = _wcsrchr(local_1288,L'\\');
      if (pwVar2 == (wchar_t *)0x0) {
        local_1080 = 0;
      }
      else {
        *pwVar2 = L'\0';
      }
    }
    UVar3 = GetPrivateProfileIntW(L"OPT",L"VID",0,param_1);
    local_1358 = (ushort)UVar3;
    UVar3 = GetPrivateProfileIntW(L"OPT",L"PID",0,param_1);
    local_1356 = (ushort)UVar3;
    UVar3 = GetPrivateProfileIntW(L"OPT",L"VID_Wireless",0,param_1);
    local_1354 = (ushort)UVar3;
    UVar3 = GetPrivateProfileIntW(L"OPT",L"PID_Wireless",0,param_1);
    local_1352 = (ushort)UVar3;
    local_1340 = GetPrivateProfileIntW(L"OPT",L"Fw",0,param_1);
    GetPrivateProfileStringW(L"OPT",L"Psd",(LPCWSTR)0x0,local_1044,0x410,param_1);
    if (local_1044[0] != L'\0') {
      FUN_00465980(local_1044,6);
      pcVar6 = GetPrivateProfileStringW_exref;
    }
    (*pcVar6)(&DAT_0060d6d4,L"Psd2",0,local_1044,0x410,param_1);
    if (asStack_105c[0] != 0) {
      FUN_00465980(asStack_105c,6);
      pcVar6 = GetPrivateProfileStringW_exref;
    }
    (*pcVar6)(&DAT_0060d6d4,L"ShortName",0,auStack_1348,0xf,param_1);
    if (((local_1358 == 0) || (local_1356 == 0)) && ((uint)local_1352 + (uint)local_1354 == 0)) {
      __snwprintf_s(local_824,0x104,0x103,L"Unassigned VID or PID for ini: %s",param_1);
      MessageBoxW((HWND)0x0,local_824,L"Warning",0);
    }
    if (((local_1354 == 0) || (local_1352 == 0)) && ((uint)local_1356 + (uint)local_1358 == 0)) {
      __snwprintf_s(local_824,0x104,0x103,L"Unassigned VID or PID for ini: %s",param_1);
      MessageBoxW((HWND)0x0,local_824,L"Warning",0);
    }
    local_1048 = GetPrivateProfileIntW(L"OPT",L"ShowScreen",0,param_1);
    puVar4 = _malloc(0x314);
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = &local_1358;
      puVar7 = puVar4;
      for (iVar1 = 0xc5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *(undefined4 *)puVar5;
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 1;
      }
      iVar1 = FUN_0044e0a0(puVar4);
      if ((iVar1 != 0) && (param_2 == 0)) {
        FUN_0040fbe0();
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_1358);
  return;
}


//==== FUNC 00476de0  FUN_00476de0 ====

void FUN_00476de0(void)

{
  int in_EAX;
  void *pvVar1;
  size_t _Size;
  undefined4 *unaff_EDI;
  
  _Size = (((int)(in_EAX + (in_EAX >> 0x1f & 0x3ffU)) >> 10) + 1) * 0x400;
  *unaff_EDI = CAutoMem::vftable;
  pvVar1 = _malloc(_Size);
  unaff_EDI[1] = pvVar1;
  unaff_EDI[2] = _Size;
  unaff_EDI[3] = 0;
  return;
}


//==== FUNC 004a0650  FUN_004a0650 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004a0650(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  LPCSTR pCVar2;
  undefined2 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LPSTR pCVar11;
  LPSTR pCVar12;
  int unaff_ESI;
  char *unaff_EDI;
  CHAR *pCVar13;
  char *pcVar14;
  undefined4 uStack_151ec;
  char *pcStack_151e8;
  int iStack_151e4;
  undefined4 *puStack_151e0;
  undefined4 uStack_151cc;
  undefined4 uStack_151c8;
  char *pcStack_151c4;
  undefined4 uStack_151c0;
  undefined4 uStack_151b8;
  char acStack_15030 [32];
  char acStack_15010 [20424];
  undefined1 auStack_10048 [31];
  undefined1 auStack_10029 [5];
  CHAR aCStack_10024 [65528];
  uint uStack_2c;
  
  uVar4 = DAT_0064f674 ^ (uint)&uStack_151cc;
  uStack_151c0 = param_3;
  if (param_1 != 0) {
    pcStack_151c4 = acStack_15010;
    uStack_151b8 = 0;
    if (param_2 != (char *)0x0) {
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (0x5000 < (uint)((int)pcVar5 - (int)(param_2 + 1))) {
        puStack_151e0 = (undefined4 *)0x4a06bb;
        pcStack_151c4 = _malloc(((int)pcVar5 - (int)(param_2 + 1)) + 0x400);
        if (pcStack_151c4 == (char *)0x0) goto LAB_004a06eb;
      }
    }
    pcVar5 = pcStack_151c4;
    puStack_151e0 = (undefined4 *)0x202;
    iStack_151e4 = 0x4a06d8;
    iStack_151e4 = Ordinal_115();
    if (iStack_151e4 == 0) {
      iStack_151e4 = 6;
      pcStack_151e8 = (char *)0x1;
      uStack_151ec = 2;
      iVar6 = Ordinal_23();
      if (iVar6 == -1) {
        uVar7 = Ordinal_111();
        (*DAT_0065d3e4)("!!socket() failed: %d",uVar7);
      }
      else {
        uVar7 = 0x50;
        pcStack_151c4 = (char *)CONCAT22(pcStack_151c4._2_2_,2);
        uVar3 = Ordinal_9(0x50);
        uStack_151c8 = (undefined1 *)CONCAT22(uVar3,(undefined2)uStack_151c8);
        uStack_151c8 = (undefined1 *)Ordinal_11("120.79.152.79");
        iVar8 = Ordinal_4(iStack_151e4,&uStack_151cc,0x10);
        if (iVar8 == -1) {
          uVar7 = Ordinal_111();
          (*DAT_0065d3e4)("!!send_http: connect failed: %d",uVar7);
        }
        else {
          if (param_2 == (char *)0x0) {
            pcVar14 = "GET %s HTTP/1.1\r\n";
          }
          else {
            pcVar14 = "POST %s HTTP/1.1\r\n";
          }
          iVar8 = _sprintf(pcVar5,pcVar14,param_1);
          iVar9 = _sprintf(pcVar5 + iVar8,"Host: %s \r\n","120.79.152.79");
          iVar8 = iVar8 + iVar9;
          if (param_2 != (char *)0x0) {
            iVar9 = _sprintf(pcVar5 + iVar8,"%s","Content-Type: application/json\r\n");
            iVar8 = iVar8 + iVar9;
          }
          iVar9 = _sprintf(pcVar5 + iVar8,"%s","Accept-Language: zh-cn,zh;q=0.5\r\n");
          iVar10 = _sprintf(pcVar5 + iVar8 + iVar9,"%s",
                            "Accept-Charset: gb2312,utf-8;q=0.7,*;q=0.7\r\n");
          iVar10 = iVar8 + iVar9 + iVar10;
          iVar8 = _sprintf(pcVar5 + iVar10,"%s","Keep-Alive: 300\r\n");
          iVar10 = iVar10 + iVar8;
          iVar8 = _sprintf(pcVar5 + iVar10,"%s","Proxy-Connection: keep-alive\r\n");
          iVar10 = iVar10 + iVar8;
          if (param_2 != (char *)0x0) {
            pcVar14 = param_2;
            do {
              cVar1 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar1 != '\0');
            iVar8 = _sprintf(pcVar5 + iVar10,"Content-Length: %d\r\n",
                             (int)pcVar14 - (int)(param_2 + 1));
            iVar10 = iVar10 + iVar8;
          }
          iVar8 = _sprintf(pcVar5 + iVar10,"%s",&DAT_00624310);
          iVar10 = iVar10 + iVar8;
          if (param_2 != (char *)0x0) {
            iVar8 = _sprintf(pcVar5 + iVar10,"%s",param_2);
            iVar10 = iVar10 + iVar8;
          }
          iVar8 = Ordinal_19(uVar7,pcVar5,iVar10,0);
          if (iVar8 == -1) {
            uVar7 = Ordinal_111();
            (*DAT_0065d3e4)("!!send failed: %d",uVar7);
          }
          else {
            iVar8 = Ordinal_16(uVar7,auStack_10048,0xffff,0);
            if (0 < iVar8) {
              aCStack_10024[iVar8] = '\0';
              pCVar11 = StrStrIA(aCStack_10024,"HTTP/1.1 200 OK");
              if ((pCVar11 == (LPSTR)0x0) &&
                 (pCVar11 = StrStrIA(aCStack_10024,"HTTP/1.0 200 OK"), pCVar11 == (LPSTR)0x0)) {
                (*DAT_0065d3e4)("!!can\'t found 200 OK");
              }
              else {
                uStack_151cc = 1;
                if ((unaff_ESI != 0) &&
                   (pCVar11 = StrStrIA(aCStack_10024,"\r\n\r\n"), pCVar11 != (LPSTR)0x0)) {
                  pCVar11 = pCVar11 + 4;
                  pCVar12 = StrStrIA(aCStack_10024,"Transfer-Encoding: chunked");
                  if (pCVar12 == (LPSTR)0x0) {
                    puStack_151e0 = (undefined4 *)FUN_004a0610();
                    if ((int)puStack_151e0 < 1) {
                      (*DAT_0065d3e4)("!!nContentLength<=0");
                    }
                    else {
                      pCVar13 = aCStack_10024 + (iVar8 - (int)pCVar11);
                      FUN_004a0510(pCVar11);
                      pcVar5 = unaff_EDI;
                      if ((int)pCVar13 < (int)puStack_151e0) {
                        do {
                          iVar8 = Ordinal_16(iVar6,aCStack_10024,0xffff,0);
                          if (iVar8 < 1) break;
                          iVar9 = (int)puStack_151e0 - (int)pCVar13;
                          if (iVar8 <= (int)puStack_151e0 - (int)pCVar13) {
                            iVar9 = iVar8;
                          }
                          FUN_004a0510(aCStack_10024);
                          pCVar13 = pCVar13 + iVar9;
                        } while ((int)pCVar13 < (int)puStack_151e0);
                      }
                    }
                  }
                  else {
                    iVar9 = FUN_004ad0e9(0x10);
                    if ((iVar9 == 0) ||
                       (puStack_151e0 = (undefined4 *)FUN_00476de0(), pcVar5 = unaff_EDI,
                       puStack_151e0 == (undefined4 *)0x0)) {
                      (*DAT_0065d3e4)("new CAutoMem error");
                    }
                    else {
                      FUN_004a0510(pCVar11);
                      uStack_151c8 = auStack_10029;
                      while (((((uStack_151c8[iVar8] != '0' || (uStack_151c8[iVar8 + 1] != '\r')) ||
                               (uStack_151c8[iVar8 + 2] != '\n')) ||
                              ((uStack_151c8[iVar8 + 3] != '\r' || (uStack_151c8[iVar8 + 4] != '\n')
                               ))) && (iVar8 = Ordinal_16(iVar6,aCStack_10024,0xffff,0), 0 < iVar8))
                            ) {
                        FUN_004a0510(aCStack_10024);
                      }
                      pCVar2 = (LPCSTR)puStack_151e0[1];
                      pCVar2[puStack_151e0[3]] = '\0';
                      pCVar11 = StrStrIA(pCVar2,"\r\n");
                      iVar8 = FUN_004a05a0(pCVar11);
                      while (0 < iVar8) {
                        FUN_004a0510(pCVar11 + 2);
                        pCVar2 = pCVar11 + iVar8 + 4;
                        if (((pCVar11[iVar8 + 4] == '0') && (pCVar2[1] == '\r')) &&
                           ((pCVar2[2] == '\n' && ((pCVar2[3] == '\r' && (pCVar2[4] == '\n'))))))
                        goto LAB_004a0ab1;
                        pCVar11 = StrStrIA(pCVar2,"\r\n");
                        iVar8 = FUN_004a05a0(pCVar11);
                      }
                      (*DAT_0065d3e4)("!!PickNumber error");
LAB_004a0ab1:
                      (**(code **)*puStack_151e0)(1);
                    }
                  }
                }
              }
            }
          }
        }
      }
      Ordinal_22(iVar6,1);
      Ordinal_3(iVar6);
      Ordinal_116();
      if (pcVar5 != acStack_15030) {
        _free(pcVar5);
      }
      __security_check_cookie(uStack_2c ^ (uint)&uStack_151ec);
      return;
    }
    pcStack_151e8 = "!!WSAStartup failed: %d";
    uStack_151ec = 0x4a06e8;
    (*DAT_0065d3e4)();
  }
LAB_004a06eb:
  __security_check_cookie(uVar4 ^ (uint)&uStack_151cc);
  return;
}


//==== FUNC 004a0510  FUN_004a0510 ====

undefined4 FUN_004a0510(void *param_1)

{
  void *_Dst;
  int iVar1;
  size_t unaff_EBX;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 4) != 0) && (0 < (int)unaff_EBX)) {
    iVar1 = *(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 0xc);
    if (iVar1 < (int)unaff_EBX) {
      iVar1 = unaff_EBX - iVar1;
      *(int *)(unaff_ESI + 8) =
           *(int *)(unaff_ESI + 8) + ((int)(iVar1 + (iVar1 >> 0x1f & 0x3ffU)) >> 10) * 0x400 + 0x400
      ;
      _Dst = _malloc(*(size_t *)(unaff_ESI + 8));
      if (_Dst == (void *)0x0) {
        return 0;
      }
      _memcpy(_Dst,*(void **)(unaff_ESI + 4),*(size_t *)(unaff_ESI + 0xc));
      _free(*(void **)(unaff_ESI + 4));
      *(void **)(unaff_ESI + 4) = _Dst;
    }
    _memcpy((void *)(*(int *)(unaff_ESI + 0xc) + *(int *)(unaff_ESI + 4)),param_1,unaff_EBX);
    *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + unaff_EBX;
    return 1;
  }
  return 0;
}


//==== FUNC 004a1900  FUN_004a1900 ====

char * FUN_004a1900(LPCWSTR param_1,char *param_2,rsize_t param_3)

{
  int cbMultiByte;
  char *lpMultiByteStr;
  
  cbMultiByte = WideCharToMultiByte(0,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  lpMultiByteStr = _malloc(cbMultiByte + 1U);
  _memset(lpMultiByteStr,0,cbMultiByte + 1U);
  WideCharToMultiByte(0,0,param_1,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  if (param_2 != (char *)0x0) {
    _strncpy_s(param_2,param_3,lpMultiByteStr,0xffffffff);
    _free(lpMultiByteStr);
    return (char *)0x0;
  }
  return lpMultiByteStr;
}


//==== FUNC 0041f2f0  FUN_0041f2f0 ====

void FUN_0041f2f0(int param_1)

{
  CTreeCtrl *this;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  _TREEITEM *p_Var7;
  undefined4 *puVar8;
  undefined4 local_c;
  
  local_c = *(undefined4 *)(param_1 + 0x2d14);
  if (DAT_00658b1c != 0) {
    local_c = FUN_005b2070();
  }
  this = (CTreeCtrl *)(param_1 + 0x2d28);
  FUN_0044e280();
  SendMessageW(*(HWND *)(param_1 + 0x2d48),0x1101,0,-0x10000);
  FUN_00480070(this);
  pHVar5 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar6 = CWnd::FromHandle(pHVar5);
  piVar1 = *(int **)(pCVar6 + 0xb8);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x3000);
      uVar4 = *(undefined4 *)(iVar2 + 4);
      for (puVar8 = *(undefined4 **)(param_1 + 0x2e3c);
          (puVar8 != (undefined4 *)0x0 && (*(int *)*puVar8 != -0x10000));
          puVar8 = (undefined4 *)puVar8[1]) {
      }
      p_Var7 = CTreeCtrl::InsertItem
                         (this,1,(wchar_t *)(iVar2 + 8),0,0,0,0,0,(_TREEITEM *)0xffff0000,
                          (_TREEITEM *)0xffff0002);
      if (p_Var7 != (_TREEITEM *)0x0) {
        puVar8 = _malloc(0x24);
        if (puVar8 == (undefined4 *)0x0) goto LAB_0041f423;
        *puVar8 = p_Var7;
        puVar8[4] = uVar4;
        puVar8[5] = 0;
        puVar8[1] = uVar3;
        puVar8[3] = 0;
        puVar8[7] = local_c;
        puVar8[6] = 1;
        puVar8[8] = 0;
        FUN_0044e0a0(puVar8);
        InvalidateRect(*(HWND *)(param_1 + 0x2d48),(RECT *)0x0,1);
      }
      FUN_00480070(this);
    }
LAB_0041f423:
    piVar1 = (int *)piVar1[1];
  } while( true );
}


//==== FUNC 0047f300  FUN_0047f300 ====

_TREEITEM * __thiscall
FUN_0047f300(CTreeCtrl *param_1,_TREEITEM *param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,wchar_t *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  _TREEITEM *p_Var1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  _TREEITEM *p_Var4;
  undefined4 *puVar5;
  
  p_Var1 = param_2;
  if ((in_EAX == 0) || (iVar3 = FUN_0047f8b0(), iVar3 < *(int *)(param_1 + 0x120))) {
    for (puVar5 = *(undefined4 **)(param_1 + 0x114); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      piVar2 = (int *)*puVar5;
      if (*(_TREEITEM **)*puVar5 == param_2) goto LAB_0047f349;
    }
    param_2 = (_TREEITEM *)0x0;
    piVar2 = (int *)param_2;
LAB_0047f349:
    param_2 = (_TREEITEM *)piVar2;
    if ((p_Var1 == (_TREEITEM *)0xffff0000) ||
       ((param_2 != (_TREEITEM *)0x0 && (*(int *)((int)param_2 + 0x18) == 2)))) {
      p_Var4 = CTreeCtrl::InsertItem(param_1,1,param_6,0,0,0,0,0,p_Var1,(_TREEITEM *)0xffff0002);
      if (p_Var4 != (_TREEITEM *)0x0) {
        puVar5 = _malloc(0x24);
        if (puVar5 == (undefined4 *)0x0) {
          return (_TREEITEM *)0x0;
        }
        puVar5[5] = param_8;
        puVar5[3] = param_5;
        puVar5[4] = param_7;
        puVar5[1] = param_4;
        *puVar5 = p_Var4;
        puVar5[7] = param_9;
        puVar5[6] = (in_EAX != 0) + 1;
        puVar5[8] = 0;
        FUN_0044e0a0(puVar5);
        if (param_3 != 0) {
          if ((p_Var1 != (_TREEITEM *)0xffff0000) && (param_2 != (_TREEITEM *)0x0)) {
            *(int *)((int)param_2 + 0x20) = 1;
          }
          FUN_0047f6b0();
        }
        InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
      }
      FUN_00480070(param_1);
      return p_Var4;
    }
  }
  return (_TREEITEM *)0x0;
}


//==== FUNC 00479a10  FUN_00479a10 ====

uint FUN_00479a10(void)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (in_EAX == 0) {
    return 0;
  }
  if (*(int *)(in_EAX + 0x10) == 0) {
    puVar1 = (undefined4 *)FUN_004ad0e9(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = CMyList::vftable;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0x11;
    }
    *(undefined4 **)(in_EAX + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1[3] = FUN_004797c0;
    puVar1[1] = 0x10;
  }
  puVar1 = _malloc(0x58);
  if (puVar1 != (undefined4 *)0x0) {
    _memset(puVar1,0,0x58);
    uVar2 = FUN_00479770();
    puVar1[1] = uVar2;
    *puVar1 = 0xa8b83333;
    iVar3 = FUN_0044e0a0(puVar1);
    return -(uint)(iVar3 != 0) & (uint)puVar1;
  }
  return 0;
}


//==== FUNC 00479b20  FUN_00479b20 ====

void * FUN_00479b20(void *param_1)

{
  size_t _Size;
  int in_EAX;
  int iVar1;
  void *_Memory;
  void *_Dst;
  
  iVar1 = DAT_0066f9a4;
  if (in_EAX != -0xff00) {
    iVar1 = FUN_004799c0(*(undefined4 *)(DAT_0066f9a4 + 0x10));
  }
  if ((iVar1 == 0) || (param_1 == (void *)0x0)) {
    return (void *)0x0;
  }
  _Memory = (void *)FUN_00479a10();
  if (_Memory == (void *)0x0) {
    return (void *)0x0;
  }
  _Size = *(int *)((int)param_1 + 0x58) * 0xc + 0x68;
  _Dst = _malloc(_Size);
  if (_Dst != (void *)0x0) {
    _memcpy(_Dst,param_1,_Size);
    *(void **)((int)_Memory + 0x14) = _Dst;
    *(undefined4 *)((int)_Memory + 8) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)((int)_Memory + 4) = *(undefined4 *)((int)_Dst + 4);
    return _Dst;
  }
  _free(_Memory);
  return (void *)0x0;
}


//==== FUNC 0047a990  FUN_0047a990 ====

uint FUN_0047a990(void)

{
  void *in_EAX;
  void *_Dst;
  int iVar1;
  
  if (in_EAX == (void *)0x0) {
    return 0;
  }
  _Dst = _malloc(0x33fc);
  if (_Dst == (void *)0x0) {
    return 0;
  }
  _memcpy(_Dst,in_EAX,0x33fc);
  iVar1 = FUN_0044e0a0(_Dst);
  return -(uint)(iVar1 != 0) & (uint)_Dst;
}


//==== FUNC 004b9e3f  FUN_004b9e3f ====

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall
FUN_004b9e3f(CCommonDialog *param_1,int param_2,undefined4 param_3,wchar_t *param_4,uint param_5,
            int param_6,CWnd *param_7,size_t param_8,undefined4 param_9)

{
  CCommonDialog *pCVar1;
  void *_Dst;
  AFX_MODULE_STATE *pAVar2;
  wchar_t *pwVar3;
  HRESULT HVar4;
  int iVar5;
  IID *rclsid;
  undefined4 local_138;
  wchar_t *local_134;
  int local_130;
  int *local_12c;
  _OSVERSIONINFOW local_128;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 300;
  local_8 = 0x4b9e4e;
  local_134 = param_4;
  local_130 = param_6;
  CCommonDialog::CCommonDialog(param_1,param_7);
  local_8 = 0;
  *(undefined ***)param_1 = CFileDialog::vftable;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x31c) = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(param_1 + 800) = 0;
  _memset(&local_128,0,0x114);
  local_128.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_128);
  if (local_128.dwMajorVersion < 6) {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = param_9;
  }
  if (param_8 == 0) {
    param_8 = 0x58;
  }
  _Dst = _malloc(param_8);
  *(void **)(param_1 + 0x74) = _Dst;
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004ae1dd();
  }
  _memset(_Dst,0,param_8);
  *(undefined2 *)(param_1 + 0x90) = 0;
  pCVar1 = param_1 + 0x110;
  *(wchar_t *)pCVar1 = L'\0';
  *(int *)(param_1 + 0x88) = param_2;
  *(uint *)(param_1 + 0x54) = 0x7005 - (uint)(param_2 != 0);
  *(undefined4 *)(param_1 + 0x318) = 0;
  **(size_t **)(param_1 + 0x74) = param_8;
  *(CCommonDialog **)(*(int *)(param_1 + 0x74) + 0x1c) = pCVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x20) = 0x104;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x3c) = param_3;
  *(CCommonDialog **)(*(int *)(param_1 + 0x74) + 0x24) = param_1 + 0x90;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x28) = 0x40;
  *(uint *)(*(int *)(param_1 + 0x74) + 0x34) =
       *(uint *)(*(int *)(param_1 + 0x74) + 0x34) | param_5 | 0x80020;
  if ((param_5 & 0x40) != 0) {
    *(uint *)(*(int *)(param_1 + 0x74) + 0x34) =
         *(uint *)(*(int *)(param_1 + 0x74) + 0x34) & 0xff7fffff;
  }
  pAVar2 = AfxGetModuleState();
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 8) = *(undefined4 *)(pAVar2 + 0xc);
  *(code **)(*(int *)(param_1 + 0x74) + 0x44) = _AfxCommDlgProc;
  if (local_134 != (wchar_t *)0x0) {
    ATL::Checked::tcsncpy_s((wchar_t *)pCVar1,0x104,local_134,0xffffffff);
  }
  if (local_130 != 0) {
    FID_conflict_operator_(local_130);
    pwVar3 = (wchar_t *)func_0x00403800(0);
    while( true ) {
      pwVar3 = _wcschr(pwVar3,L'|');
      if (pwVar3 == (wchar_t *)0x0) break;
      *pwVar3 = L'\0';
      pwVar3 = pwVar3 + 1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0xc) = *(undefined4 *)(param_1 + 0x8c);
  }
  if (*(int *)(param_1 + 0x78) == 1) {
    HVar4 = CoInitializeEx((LPVOID)0x0,2);
    if (-1 < HVar4) {
      *(undefined ***)(param_1 + 0x31c) = CFileDialog::XFileDialogEvents::vftable;
      *(undefined ***)(param_1 + 800) = CFileDialog::XFileDialogControlEvents::vftable;
      if (*(int *)(param_1 + 0x88) == 0) {
        rclsid = (IID *)&DAT_0064b9d4;
      }
      else {
        rclsid = (IID *)&DAT_0064b9c4;
      }
      HVar4 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_005e44ec,&local_12c);
      if (-1 < HVar4) {
        iVar5 = (**(code **)*local_12c)(local_12c,&DAT_005e42e0,&local_138);
        if (-1 < iVar5) {
          iVar5 = (**(code **)(*local_12c + 0x1c))(local_12c,param_1 + 0x31c,param_1 + 0x7c);
          if (-1 < iVar5) {
            *(int **)(param_1 + 0x80) = local_12c;
            *(undefined4 *)(param_1 + 0x84) = local_138;
            goto LAB_004ba0ac;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_004ae215();
      }
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
LAB_004ba0ac:
  FUN_005af03f();
  return;
}


//==== FUNC 004253f0  FUN_004253f0 ====

int FUN_004253f0(int param_1)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_194;
  int local_190;
  undefined1 local_18c [396];
  
  iVar5 = 0;
  if (in_EAX == 0) {
    return 0;
  }
  local_190 = 0;
  _memset(local_18c,0,0x18c);
  iVar7 = DAT_0066f9a4;
  piVar2 = (int *)(in_EAX + 0x3c);
  local_194 = 4;
  do {
    iVar6 = 0x90;
    do {
      uVar8 = CONCAT44(piVar2,iVar7);
      if (*(char *)((int)piVar2 + -1) == '\x05') {
        if (*piVar2 != -0xff00) {
          uVar8 = FUN_004799c0(*(undefined4 *)(iVar7 + 0x10),*piVar2);
        }
        piVar2 = (int *)((ulonglong)uVar8 >> 0x20);
        if (((int)uVar8 != 0) && (iVar1 = *(int *)((int)uVar8 + 0x14), iVar1 != 0)) {
          *(undefined4 *)(iVar1 + 0x50) = 0;
          iVar3 = 0;
          do {
            if (*(int *)(local_18c + iVar3 * 4 + -4) == iVar1) goto LAB_00425491;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 100);
          *(int *)(local_18c + iVar5 * 4 + -4) = iVar1;
          iVar5 = iVar5 + 1;
        }
      }
LAB_00425491:
      piVar2 = piVar2 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_194 = local_194 + -1;
    if (local_194 == 0) {
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 4) = 0x11;
        iVar7 = 0;
        if (0 < iVar5) {
          do {
            puVar4 = _malloc(0xc);
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *(undefined4 *)(local_18c + iVar7 * 4 + -4);
              puVar4[1] = 0;
              if (*(int *)(param_1 + 8) == 0) {
                puVar4[2] = 0;
                *(undefined4 **)(param_1 + 0x10) = puVar4;
              }
              else {
                puVar4[2] = *(undefined4 *)(param_1 + 0x14);
                *(undefined4 **)(*(int *)(param_1 + 0x14) + 4) = puVar4;
              }
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
              *(undefined4 **)(param_1 + 0x14) = puVar4;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar5);
        }
      }
      return iVar5;
    }
  } while( true );
}


//==== FUNC 00428fa0  FUN_00428fa0 ====

void FUN_00428fa0(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  HWND pHVar9;
  wchar_t *pwVar10;
  uint uVar11;
  uint uVar12;
  int unaff_EBX;
  code *pcVar13;
  int unaff_EDI;
  wchar_t **ppwVar14;
  uint *puVar15;
  int iStack_4d4;
  tagRECT *ptStack_4d0;
  wchar_t **ppwVar16;
  wchar_t *pwStack_4c8;
  wchar_t *pwStack_4c4;
  wchar_t *pwStack_4c0;
  uint uStack_4bc;
  int iStack_4ac;
  wchar_t *pwStack_4a8;
  undefined1 *puStack_4a4;
  tagRECT *ptVar17;
  int *piStack_470;
  tagRECT tStack_46c;
  int iStack_45c;
  undefined4 *puStack_458;
  int iStack_454;
  _TREEITEM *p_Stack_450;
  int iStack_44c;
  CWnd *pCStack_448;
  LONG LStack_444;
  int iStack_440;
  int iStack_43c;
  int iStack_438;
  int iStack_434;
  undefined1 auStack_2a4 [24];
  wchar_t awStack_28c [242];
  uint uStack_a8;
  void *pvStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_80;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005dc8d4;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&piStack_470;
  uVar3 = DAT_0064f674 ^ (uint)&stack0xfffffb88;
  ExceptionList = &local_14;
  piVar4 = (int *)FUN_004ad163();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403990();
  }
  iStack_454 = (**(code **)(*piVar4 + 0xc))();
  iStack_454 = iStack_454 + 0x10;
  uStack_c = 0;
  FUN_004031f0();
  puVar5 = (undefined4 *)FUN_004ad0e9();
  uStack_c._0_1_ = 1;
  puStack_458 = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    if (1 < *(int *)(iStack_454 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_454,*(int *)(iStack_454 + -0xc));
    }
    *puVar5 = Gdiplus::Bitmap::vftable;
    piStack_470 = (int *)0x0;
    uVar6 = GdipCreateBitmapFromFile();
    puVar5[2] = uVar6;
    puVar5[1] = piStack_470;
  }
  uStack_c._0_1_ = 0;
  piStack_470 = (int *)(unaff_EDI + 0x2fb0);
  *(undefined4 **)(unaff_EDI + 0x32d8) = puVar5;
  iVar7 = 0;
  do {
    iVar7 = iVar7 + 1;
    FUN_004031f0();
    puVar5 = (undefined4 *)FUN_004ad0e9();
    uStack_c._0_1_ = 2;
    puStack_458 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      if (1 < *(int *)(iStack_454 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&iStack_454,*(int *)(iStack_454 + -0xc));
      }
      *puVar5 = Gdiplus::Bitmap::vftable;
      iStack_45c = 0;
      uVar6 = GdipCreateBitmapFromFile();
      puVar5[2] = uVar6;
      puVar5[1] = iStack_45c;
    }
    uStack_c._0_1_ = 0;
    *piStack_470 = (int)puVar5;
    iStack_45c = 0;
    iVar8 = GdipGetImageWidth();
    piVar4 = piStack_470;
    if (iVar8 != 0) {
      puVar5[2] = iVar8;
    }
    if ((iStack_45c == 0) && ((undefined4 *)*piStack_470 != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)*piStack_470)();
      FUN_004ad123();
      *piVar4 = 0;
    }
    piStack_470 = piStack_470 + 1;
  } while (iVar7 < 0x15);
  pHVar9 = GetParent(*(HWND *)(unaff_EDI + 0x20));
  pCStack_448 = CWnd::FromHandle(pHVar9);
  pcVar13 = SetRect_exref;
  puStack_458 = (undefined4 *)(*(int *)(*(int *)(pCStack_448 + 0xc0) + 0x24) + 0x18);
  SetRect(&tStack_46c,0,0x7d,0xda,0x1ea);
  LStack_444 = tStack_46c.left;
  iStack_440 = tStack_46c.top;
  iStack_43c = tStack_46c.right;
  iStack_438 = tStack_46c.bottom;
  SetRect((LPRECT)(unaff_EDI + 0x3310),0,tStack_46c.bottom,
          *(int *)(unaff_EDI + 0x32f4) - *(int *)(unaff_EDI + 0x32ec),
          *(int *)(unaff_EDI + 0x32f8) - *(int *)(unaff_EDI + 0x32f0));
  if (DAT_00658178 != 0) {
    uVar6 = FUN_0041f150();
    *(undefined4 *)(unaff_EDI + 0x32e8) = uVar6;
  }
  pwStack_4a8 = *(wchar_t **)(unaff_EDI + 0x32e8);
  puStack_4a4 = (undefined1 *)0x0;
  iStack_4ac = 0x4292b3;
  FUN_00480300();
  uVar6 = DAT_00658134;
  *(undefined4 *)(unaff_EDI + 0x3080) = DAT_00658108;
  *(undefined4 *)(unaff_EDI + 0x307c) = uVar6;
  InvalidateRect(*(HWND *)(unaff_EDI + 0x3030),(RECT *)0x0,1);
  uVar12 = DAT_00658140 & 0xff;
  uVar2 = DAT_00658140 >> 8;
  uVar11 = DAT_00658140 >> 0x10;
  *(uint *)(unaff_EDI + 0x3070) =
       ((DAT_00658130 & 0xff | 0xffffff00) << 8 | DAT_00658130 >> 8 & 0xff) << 8 |
       DAT_00658130 >> 0x10 & 0xff;
  *(uint *)(unaff_EDI + 0x306c) = ((uVar12 | 0xffffff00) << 8 | uVar2 & 0xff) << 8 | uVar11 & 0xff;
  InvalidateRect(*(HWND *)(unaff_EDI + 0x3030),(RECT *)0x0,0);
  *(undefined4 *)(unaff_EDI + 0x3078) = 0x1c;
  SendMessageW(*(HWND *)(unaff_EDI + 0x3030),0x111b,0x1c,0);
  p_Stack_450 = *(_TREEITEM **)(unaff_EDI + 0x32d8);
  *(undefined ***)(unaff_EDI + 0x3148) = &PTR_vftable_00651518;
  *(undefined4 *)(unaff_EDI + 0x3084) = 0;
  *(undefined4 *)(unaff_EDI + 0x3154) = 0;
  if (p_Stack_450 != (_TREEITEM *)0x0) {
    iStack_45c = 0;
    iVar7 = GdipGetImageHeight();
    if (iVar7 != 0) {
      *(int *)((int)puStack_458 + 8) = iVar7;
    }
    puStack_458 = *(undefined4 **)(unaff_EDI + 0x32d8);
    iStack_454 = tStack_46c.right;
    iVar7 = GdipGetImageWidth();
    if (iVar7 != 0) {
      *(int *)(p_Stack_450 + 8) = iVar7;
    }
    *(int **)(unaff_EDI + 0x310c) = piStack_470;
    iVar7 = *(int *)(unaff_EDI + 0x3078);
    if (iStack_44c < *(int *)(unaff_EDI + 0x3078)) {
      iVar7 = iStack_44c;
    }
    *(int *)(unaff_EDI + 0x3110) = iVar7;
  }
  FUN_0047fe90();
  *(undefined4 *)(unaff_EDI + 0x3160) = 2;
  piStack_470 = *(int **)(pCStack_448 + 0xb8);
  do {
    if (piStack_470 == (int *)0x0) {
      iVar7 = tStack_46c.top + -6;
      pwVar10 = (wchar_t *)(tStack_46c.top + -0x18);
      iVar8 = iStack_43c + -0x1a;
      ptVar17 = &tStack_46c;
      (*pcVar13)();
      puStack_4a4 = (undefined1 *)0x0;
      pwStack_4a8 = (wchar_t *)0x0;
      iStack_4ac = unaff_EDI + 0x74;
      uStack_4bc = 0x4295a2;
      FUN_004674f0();
      iVar7 = iVar7 + -0x1a;
      puStack_4a4 = &stack0xfffffb80;
      pwStack_4a8 = 
      L"咋ဤ䲋ᐤ\xec83謐櫄樀褀謐⑔贰·\x02褀ш䲋㐤桖ﳨ`傉褈ై辋㋨";
      (*pcVar13)();
      pwStack_4a8 = pwVar10;
      iStack_4ac = iVar8;
      uStack_4bc = 0;
      pwStack_4c0 = (wchar_t *)(unaff_EDI + 0x200);
      pwStack_4c4 = L"del_ov.png";
      pwStack_4c8 = L"del_nr.png";
      ptStack_4d0 = (tagRECT *)0x429608;
      FUN_004674f0();
      iStack_4ac = unaff_EBX + -8;
      uStack_4bc = 0x429628;
      (*pcVar13)();
      uStack_4bc = uVar3;
      pwStack_4c0 = (wchar_t *)iVar7;
      pwStack_4c8 = pwStack_4a8;
      pwStack_4c4 = (wchar_t *)puStack_4a4;
      ptStack_4d0 = (tagRECT *)0x0;
      FUN_004674f0();
      pwStack_4c0 = pwStack_4a8 + -4;
      pwStack_4c8 = pwStack_4a8 + -0xd;
      pwStack_4c4 = (wchar_t *)puStack_4a4;
      ppwVar16 = &pwStack_4a8;
      ptStack_4d0 = (tagRECT *)0x42968e;
      (*pcVar13)();
      ptStack_4d0 = ptVar17;
      FUN_004674f0();
      puVar15 = &uStack_4bc;
      ptStack_4d0 = ptVar17;
      (*pcVar13)();
      FUN_004674f0();
      FUN_0045e170();
      FUN_0045e170();
      FUN_0045e170();
      FUN_0045e170();
      if (DAT_00658b10 == 0) {
        iVar7 = *(int *)(unaff_EDI + 0x32f4) - *(int *)(unaff_EDI + 0x32ec);
        SetRect((LPRECT)&ptStack_4d0,iVar7 + -0x26,*(int *)(unaff_EDI + 0x3314) + -0x1c,
                iVar7 + -0x14,*(int *)(unaff_EDI + 0x3314) + -10);
        FUN_004674f0();
        FUN_0045e170();
      }
      uVar3 = uStack_4bc;
      SetRect((LPRECT)&ptStack_4d0,*(int *)(uStack_4bc + 0x3f8),*(int *)(uStack_4bc + 0x3fc),
              *(int *)(uStack_4bc + 0x3f8) + 0xc4,*(int *)(uStack_4bc + 0x3fc) + 0x15);
      iStack_4d4 = 0;
      if (0 < *(int *)(uVar3 + 0x26b0)) {
        puVar5 = (undefined4 *)(unaff_EDI + 0xfd4);
        do {
          FUN_004674f0();
          puVar5[-4] = iStack_4d4;
          if ((*(uint *)(uVar3 + 0x266c) & 1 << ((byte)iStack_4d4 & 0x1f)) != 0) {
            puVar5[-1] = 0x646464;
            *puVar5 = 0x646464;
            puVar5[1] = 0x646464;
            puVar5[0x10] = 1;
            InvalidateRect((HWND)puVar5[-0x20],(RECT *)0x0,1);
          }
          puVar5[0x30] = &PTR_vftable_00651528;
          SetRect((LPRECT)&ptStack_4d0,(int)ptStack_4d0,(int)pwStack_4c4 + *(int *)(uVar3 + 0x400),
                  (int)pwStack_4c8,
                  (int)((undefined1 *)((int)pwStack_4c4 + *(int *)(uVar3 + 0x400)) + 0x15));
          iStack_4d4 = iStack_4d4 + 1;
          puVar5 = puVar5 + 99;
        } while (iStack_4d4 < *(int *)(uVar3 + 0x26b0));
      }
      uVar2 = *(uint *)(uVar3 + 0x268c);
      if (uVar2 != 0) {
        uVar11 = (int)uVar2 >> 0x10 & 0xffff;
        SetRect((LPRECT)&ptStack_4d0,uVar2 & 0xffff,uVar11,(uVar2 & 0xffff) + 0x2c,uVar11 + 0x11);
        FUN_004674f0();
      }
      iVar7 = iStack_4ac;
      __snwprintf_s(awStack_28c,0x104,0x103,L"%s\\mouse_nr.png");
      __snwprintf_s((wchar_t *)&stack0xfffffb6c,0x104,0x103,L"%s\\mouse_dn.png");
      uStack_4bc = *(uint *)(iVar7 + 0x10f4);
      iStack_4ac = 0;
      iVar8 = GdipGetImageHeight();
      if (iVar8 != 0) {
        *(int *)((int)pwStack_4c4 + 8) = iVar8;
      }
      iVar7 = *(int *)(iVar7 + 0x10f4);
      ppwVar14 = &pwStack_4c8;
      pwStack_4c8 = (wchar_t *)0x0;
      pwStack_4c4 = (wchar_t *)(unaff_EBX + -0x1a);
      iVar8 = GdipGetImageWidth();
      if (iVar8 != 0) {
        *(int *)(iVar7 + 8) = iVar8;
      }
      iVar7 = *(int *)(uVar3 + 0x3f4);
      pwStack_4c4 = (wchar_t *)((int)ppwVar16 + iVar7);
      pwStack_4c0 = (wchar_t *)((int)&ptStack_4d0->left + *(int *)(uVar3 + 0x3f0));
      iVar8 = FUN_004ad0e9();
      uStack_80 = 3;
      if (iVar8 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_00428170();
      }
      uStack_80 = 0;
      *(int **)(unaff_EDI + 0x330c) = piVar4;
      (**(code **)(*piVar4 + 0x13c))();
      CWnd::MoveWindow(*(CWnd **)(unaff_EDI + 0x330c),(int)ppwVar14,iVar7,
                       (int)pwStack_4c8 - (int)ppwVar14,iVar8 - iVar7,1);
      FUN_004282f0(auStack_2a4,&iStack_4ac,*(undefined4 *)(unaff_EDI + 0x32e8),ppwVar14,iVar7,
                   pwStack_4c8);
      CWnd::ShowWindow(*(CWnd **)(unaff_EDI + 0x330c),5);
      if (*(int *)(uVar3 + 0x2a8) != 0) {
        SetTimer(*(HWND *)(unaff_EDI + 0x20),0xca,300,(TIMERPROC)0x0);
      }
      uStack_4bc = *(uint *)(unaff_EDI + 0x3314);
      piVar4 = (int *)(unaff_EDI + 0x3310);
      uVar6 = 0;
      if (*(int *)(unaff_EDI + 0x32e8) != 0) {
        uVar6 = FUN_004092e0(*piVar4,uStack_4bc);
      }
      *(int *)(unaff_EDI + 0x88cc) = *piVar4;
      *(undefined4 *)(unaff_EDI + 0x3320) = uVar6;
      *(undefined4 *)(unaff_EDI + 0x88c8) = uVar6;
      *(undefined4 *)(unaff_EDI + 0x88d0) = *(undefined4 *)(unaff_EDI + 0x3314);
      *(undefined4 *)(unaff_EDI + 0x88d4) = *(undefined4 *)(unaff_EDI + 0x3318);
      *(undefined4 *)(unaff_EDI + 0x88d8) = *(undefined4 *)(unaff_EDI + 0x331c);
      (**(code **)(*(int *)(unaff_EDI + 0x3324) + 0x13c))(0x68);
      CWnd::MoveWindow((CWnd *)(unaff_EDI + 0x3324),*piVar4,*(int *)(unaff_EDI + 0x3314),
                       *(int *)(unaff_EDI + 0x3318) - *piVar4,
                       *(int *)(unaff_EDI + 0x331c) - *(int *)(unaff_EDI + 0x3314),1);
      CWnd::ShowWindow((CWnd *)(unaff_EDI + 0x3324),0);
      if (*(char *)(uVar3 + 0x267f) != '\0') {
        *(int *)(unaff_EDI + 0xe5d8) = *piVar4;
        *(undefined4 *)(unaff_EDI + 0xe5d4) = *(undefined4 *)(unaff_EDI + 0x3320);
        *(undefined4 *)(unaff_EDI + 0xe5dc) = *(undefined4 *)(unaff_EDI + 0x3314);
        *(undefined4 *)(unaff_EDI + 0xe5e0) = *(undefined4 *)(unaff_EDI + 0x3318);
        pcVar13 = *(code **)(*(int *)(unaff_EDI + 0x88dc) + 0x13c);
        *(undefined4 *)(unaff_EDI + 0xe5e4) = *(undefined4 *)(unaff_EDI + 0x331c);
        (*pcVar13)(0x68);
        CWnd::MoveWindow((CWnd *)(unaff_EDI + 0x88dc),*piVar4,*(int *)(unaff_EDI + 0x3314),
                         *(int *)(unaff_EDI + 0x3318) - *piVar4,
                         *(int *)(unaff_EDI + 0x331c) - *(int *)(unaff_EDI + 0x3314),1);
        CWnd::ShowWindow((CWnd *)(unaff_EDI + 0x88dc),0);
      }
      *(int *)(unaff_EDI + 0x13e64) = *piVar4;
      *(undefined4 *)(unaff_EDI + 0x13e60) = *(undefined4 *)(unaff_EDI + 0x3320);
      *(undefined4 *)(unaff_EDI + 0x13e68) = *(undefined4 *)(unaff_EDI + 0x3314);
      *(undefined4 *)(unaff_EDI + 0x13e6c) = *(undefined4 *)(unaff_EDI + 0x3318);
      pcVar13 = *(code **)(*(int *)(unaff_EDI + 0xe5e8) + 0x13c);
      *(undefined4 *)(unaff_EDI + 0x13e70) = *(undefined4 *)(unaff_EDI + 0x331c);
      (*pcVar13)(0x68);
      CWnd::MoveWindow((CWnd *)(unaff_EDI + 0xe5e8),*piVar4,*(int *)(unaff_EDI + 0x3314),
                       *(int *)(unaff_EDI + 0x3318) - *piVar4,
                       *(int *)(unaff_EDI + 0x331c) - *(int *)(unaff_EDI + 0x3314),1);
      CWnd::ShowWindow((CWnd *)(unaff_EDI + 0xe5e8),0);
      uStack_98 = 0xffffffff;
      puVar1 = puVar15 + -1;
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((int)(uVar3 - 1) < 1) {
        (**(code **)(*(int *)puVar15[-4] + 4))(puVar15 + -4);
      }
      ExceptionList = pvStack_a0;
      __security_check_cookie(uStack_a8 ^ (uint)&stack0xfffffb04);
      return;
    }
    iVar7 = *piStack_470;
    if (iVar7 != 0) {
      iStack_434 = *(int *)(unaff_EDI + 0x32dc);
      iStack_44c = *(int *)(iVar7 + 4);
      iStack_45c = *(int *)(unaff_EDI + 0x32d8);
      for (puVar5 = *(undefined4 **)(unaff_EDI + 0x3124);
          (puVar5 != (undefined4 *)0x0 && (*(int *)*puVar5 != -0x10000));
          puVar5 = (undefined4 *)puVar5[1]) {
      }
      puStack_4a4 = (undefined1 *)0x429475;
      p_Stack_450 = CTreeCtrl::InsertItem
                              ((CTreeCtrl *)(unaff_EDI + 0x3010),1,(wchar_t *)(iVar7 + 8),0,0,0,0,0,
                               (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
      if (p_Stack_450 != (_TREEITEM *)0x0) {
        piVar4 = _malloc(0x24);
        pcVar13 = SetRect_exref;
        if (piVar4 == (int *)0x0) goto LAB_00429529;
        *piVar4 = (int)p_Stack_450;
        piVar4[4] = iStack_44c;
        piVar4[5] = 0;
        piVar4[1] = iStack_45c;
        piVar4[3] = 0;
        piVar4[7] = iStack_434;
        piVar4[6] = 1;
        piVar4[8] = 0;
        puVar5 = _malloc(0xc);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = piVar4;
          puVar5[1] = 0;
          if (*(int *)(unaff_EDI + 0x311c) == 0) {
            puVar5[2] = 0;
            *(undefined4 **)(unaff_EDI + 0x3124) = puVar5;
          }
          else {
            puVar5[2] = *(undefined4 *)(unaff_EDI + 0x3128);
            *(undefined4 **)(*(int *)(unaff_EDI + 0x3128) + 4) = puVar5;
          }
          *(int *)(unaff_EDI + 0x311c) = *(int *)(unaff_EDI + 0x311c) + 1;
          *(undefined4 **)(unaff_EDI + 0x3128) = puVar5;
        }
        InvalidateRect(*(HWND *)(unaff_EDI + 0x3030),(RECT *)0x0,1);
        pcVar13 = SetRect_exref;
      }
      FUN_00480070();
    }
LAB_00429529:
    piStack_470 = (int *)piStack_470[1];
  } while( true );
}


//==== FUNC 0042ed80  FUN_0042ed80 ====

void __fastcall FUN_0042ed80(CWnd *param_1)

{
  CWnd *this;
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort uVar6;
  HWND pHVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  _TREEITEM *p_Var13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int unaff_ESI;
  CWnd *pCVar19;
  uint uVar20;
  bool bVar21;
  int *piVar22;
  CSimpleStringT<wchar_t,0> *this_00;
  undefined4 *puVar23;
  undefined2 *yTop;
  LPRECT lprc;
  LPRECT ptVar24;
  LPRECT ptVar25;
  int iVar26;
  void *pvVar27;
  undefined2 *puVar28;
  undefined1 *puVar29;
  undefined4 *puStack_8c;
  int iStack_88;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [8];
  undefined4 *puStack_6c;
  int iStack_68;
  int iStack_64;
  tagRECT tStack_60;
  tagRECT tStack_50;
  tagRECT tStack_40;
  int iStack_30;
  undefined4 *puStack_2c;
  int iStack_28;
  int iStack_24;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_005df283;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  pHVar7 = GetParent(*(HWND *)(param_1 + 0x20));
  auStack_84._8_4_ = CWnd::FromHandle(pHVar7);
  *(int *)(param_1 + 0x230) = *(int *)(*(int *)(auStack_84._8_4_ + 0xc0) + 0x24) + 0x18;
  piVar8 = (int *)FUN_004ad163();
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403990();
  }
  auStack_84._0_4_ = (**(code **)(*piVar8 + 0xc))();
  auStack_84._0_4_ = auStack_84._0_4_ + 0x10;
  iStack_c = 0;
  FUN_004031f0();
  puVar9 = (undefined4 *)FUN_004ad0e9();
  iStack_c._0_1_ = 1;
  puStack_6c = puVar9;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    if (1 < *(int *)(auStack_84._0_4_ + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)auStack_84,*(int *)(auStack_84._0_4_ + -0xc));
    }
    *puVar9 = Gdiplus::Bitmap::vftable;
    auStack_84._4_4_ = 0;
    uVar10 = GdipCreateBitmapFromFile();
    puVar9[2] = uVar10;
    puVar9[1] = auStack_84._4_4_;
  }
  iStack_c = (uint)iStack_c._1_3_ << 8;
  puVar29 = auStack_84 + 4;
  *(undefined4 **)(param_1 + 0x78) = puVar9;
  auStack_84._4_4_ = 0;
  iVar11 = GdipGetImageWidth();
  if (iVar11 != 0) {
    puVar9[2] = iVar11;
  }
  if ((iStack_88 == 0) && (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x78))();
    FUN_004ad123();
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  auStack_84._8_4_ = FUN_00438960();
  if (auStack_84._8_4_ != 0) {
    CopyRect(&tStack_50,(RECT *)&DAT_0065831c);
    SetRect((LPRECT)(auStack_74 + 4),tStack_50.left + DAT_00658b28,tStack_50.top,tStack_50.right,
            tStack_50.bottom);
    uVar10 = FUN_004092e0();
    *(undefined4 *)(param_1 + 0x5d7c) = uVar10;
  }
  SetRect(&tStack_40,0,0x1e,DAT_00658b2c,*(int *)(param_1 + 0x5d90) - *(int *)(param_1 + 0x5d88));
  if (DAT_00658178 != 0) {
    SetRect((LPRECT)(auStack_74 + 4),tStack_40.right,0x1c9,
            *(int *)(param_1 + 0x5d8c) - *(int *)(param_1 + 0x5d84),
            *(int *)(param_1 + 0x5d90) - *(int *)(param_1 + 0x5d88));
    uVar10 = FUN_0041f150();
    *(undefined4 *)(param_1 + 0x5d7c) = uVar10;
    *(undefined4 *)(param_1 + 0x5d80) = 1;
  }
  FUN_00480300();
  uVar10 = DAT_00658134;
  *(undefined4 *)(param_1 + 0x3090) = DAT_00658108;
  *(undefined4 *)(param_1 + 0x308c) = uVar10;
  InvalidateRect(*(HWND *)(param_1 + 0x3040),(RECT *)0x0,1);
  uVar20 = DAT_0065812c;
  if (DAT_0065812c == 0) {
    uVar20 = DAT_00658140;
  }
  uVar12 = DAT_00658130 & 0xff;
  uVar3 = DAT_00658130 >> 8;
  uVar4 = DAT_00658130 >> 0x10;
  *(uint *)(param_1 + 0x307c) =
       ((uVar20 & 0xff | 0xffffff00) << 8 | uVar20 >> 8 & 0xff) << 8 | uVar20 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x3080) = ((uVar12 | 0xffffff00) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
  InvalidateRect(*(HWND *)(param_1 + 0x3040),(RECT *)0x0,0);
  uVar6 = (ushort)DAT_00658b3b;
  *(int *)(param_1 + 0x3088) = (int)(short)uVar6;
  SendMessageW(*(HWND *)(param_1 + 0x3040),0x111b,(int)(short)uVar6,0);
  *(undefined ***)(param_1 + 0x3158) = &PTR_vftable_00651518;
  *(undefined4 *)(param_1 + 0x3094) = 0;
  *(undefined4 *)(param_1 + 0x3164) = 0;
  *(undefined4 *)(param_1 + 0x3170) = 2;
  FUN_0042eab0();
  pCVar19 = param_1 + 0x5d94;
  iVar11 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x230) + 0x2f79) = 0;
  do {
    if (*(int *)(*(int *)pCVar19 + -0xc) == 0) break;
    if ((*(uint *)(*(int *)(param_1 + 0x230) + 0x2d2c) & 1 << ((byte)iVar11 & 0x1f)) == 0) {
      pcVar15 = (char *)(*(int *)(param_1 + 0x230) + 0x2f79);
      *pcVar15 = *pcVar15 + '\x01';
      if (1 < *(int *)(*(int *)pCVar19 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)pCVar19,*(int *)(*(int *)pCVar19 + -0xc));
      }
      puVar9 = *(undefined4 **)(param_1 + 0x3134);
      auStack_84._8_4_ = DAT_00658b30;
      for (; (puVar9 != (undefined4 *)0x0 && (*(int *)*puVar9 != -0x10000));
          puVar9 = (undefined4 *)puVar9[1]) {
      }
      p_Var13 = CTreeCtrl::InsertItem
                          ((CTreeCtrl *)(param_1 + 0x3020),1,*(wchar_t **)pCVar19,0,0,0,0,0,
                           (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
      if (p_Var13 != (_TREEITEM *)0x0) {
        puVar9 = _malloc(0x24);
        if (puVar9 == (undefined4 *)0x0) goto LAB_0042f23c;
        puVar9[4] = iVar11;
        *puVar9 = p_Var13;
        puVar9[5] = 0;
        puVar9[1] = 0;
        puVar9[3] = 0;
        puVar9[7] = auStack_84._8_4_;
        puVar9[6] = 1;
        puVar9[8] = 0;
        FUN_0044e0a0();
        InvalidateRect(*(HWND *)(param_1 + 0x3040),(RECT *)0x0,1);
      }
      FUN_00480070();
    }
LAB_0042f23c:
    iVar11 = iVar11 + 1;
    pCVar19 = pCVar19 + 4;
  } while (iVar11 < 0x17);
  FUN_00438960();
  SetRect((LPRECT)(auStack_74 + 4),0x424,0x1af,0x436,0x1c1);
  FUN_004674f0();
  FUN_0045e170();
  iVar18 = *(int *)(auStack_84._0_4_ + 0x16e8);
  if (iVar18 == 0) {
    iVar18 = *(int *)(auStack_84._0_4_ + 0x16e4);
  }
  if (iVar18 != 0) {
    auStack_84._4_4_ = *(int *)(*(int *)(param_1 + 0x230) + 0x2d14);
    auStack_84._12_4_ = *(int *)(*(int *)(param_1 + 0x230) + 0x2d18);
    iVar14 = GdipGetImageHeight();
    if (iVar14 != 0) {
      *(int *)(iVar18 + 8) = iVar14;
    }
    auStack_84._0_4_ = iVar11;
    iVar14 = GdipGetImageWidth();
    if (iVar14 != 0) {
      *(int *)(iVar18 + 8) = iVar14;
    }
    SetRect((LPRECT)(param_1 + 0x1ec),auStack_84._4_4_,auStack_84._12_4_,iVar11 + auStack_84._4_4_,
            auStack_84._8_4_ + auStack_84._12_4_);
    iVar11 = FUN_00473bd0();
    *(int *)(param_1 + 0x301c) = iVar11;
    *(undefined4 *)(iVar11 + 0x1788) = 2;
    iVar11 = *(int *)(*(int *)(param_1 + 0x230) + 0x2e94);
    iVar18 = *(int *)(param_1 + 0x301c);
    iVar14 = 0;
    if (0 < *(int *)(iVar18 + 0x1764)) {
      piVar8 = (int *)(iVar18 + 0x8c);
      do {
        *piVar8 = (-(uint)(iVar11 != 1) & 0xffffffab) + 0xff;
        iVar14 = iVar14 + 1;
        piVar8 = piVar8 + 10;
      } while (iVar14 < *(int *)(iVar18 + 0x1764));
    }
    *(undefined4 *)(*(int *)(param_1 + 0x301c) + 0x1790) =
         *(undefined4 *)(*(int *)(param_1 + 0x230) + 0x2e94);
    iVar11 = *(int *)(*(int *)(param_1 + 0x301c) + 0x1778);
    iVar18 = 0x10000;
    if (0 < iVar11) {
      piVar8 = (int *)(*(int *)(param_1 + 0x301c) + 0x9c);
      auStack_84._4_4_ = iVar11;
      do {
        iVar11 = *piVar8;
        if ((piVar8[2] != iVar11 && -1 < piVar8[2] - iVar11) && (iVar11 < iVar18)) {
          iVar18 = iVar11;
        }
        piVar8 = piVar8 + 10;
        auStack_84._4_4_ = auStack_84._4_4_ + -1;
      } while (auStack_84._4_4_ != 0);
    }
    *(LONG *)(param_1 + 0x5a84) = ((LPRECT)(param_1 + 0x1ec))->left + iVar18;
    if (DAT_00658af8 != 0) {
      uVar20 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x301c) + 0x1790) = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0x230) + 0x2d10)) {
        iStack_88 = 0;
        auStack_84._0_4_ = 0;
        do {
          uVar10 = FUN_00427f70();
          iVar11 = *(int *)(param_1 + 0x301c);
          if (uVar20 < 0x90) {
            *(undefined4 *)(iVar11 + 0xac + iStack_88) = uVar10;
            InvalidateRect(*(HWND *)(iVar11 + 0x20),(RECT *)0x0,1);
          }
          auStack_84._0_4_ = auStack_84._0_4_ + 0x10;
          iStack_88 = iStack_88 + 0x28;
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < *(int *)(*(int *)(param_1 + 0x230) + 0x2d10));
      }
    }
  }
  SetRect((LPRECT)(param_1 + 0x20c),tStack_40.right,*(int *)(param_1 + 0x1f8),
          *(int *)(param_1 + 0x5d8c) - *(int *)(param_1 + 0x5d84),
          *(int *)(param_1 + 0x5d90) - *(int *)(param_1 + 0x5d88));
  bVar1 = 0;
  iVar11 = 0;
  pcVar15 = (char *)(*(int *)(param_1 + 0x230) + 0x2fc1);
  do {
    if (*pcVar15 != '\0') {
      bVar1 = 1;
      break;
    }
    iVar11 = iVar11 + 1;
    pcVar15 = pcVar15 + 0x28;
  } while (iVar11 < 0x18);
  auStack_84._8_4_ = (-(uint)bVar1 & 0xfffffff6) + 0x28;
  SetRect((LPRECT)(auStack_74 + 4),0xfa,(-(uint)bVar1 & 0xffffffec) + 0x1fe,0x1c2,
          (-(uint)bVar1 & 0xffffffec) + 0x20a);
  uVar10 = DAT_0065815c;
  iVar11 = *(int *)(param_1 + 0x78);
  auStack_84._0_4_ = DAT_00658158;
  tStack_50.right = iStack_68;
  tStack_50.left = auStack_74._4_4_;
  tStack_50.top = (LONG)puStack_6c;
  tStack_50.bottom = iStack_64;
  auStack_84._12_4_ = *(undefined4 *)(param_1 + 0x5d7c);
  iStack_30 = auStack_74._4_4_;
  puStack_2c = puStack_6c;
  iStack_28 = iStack_68;
  iStack_24 = iStack_64;
  *(undefined4 *)(param_1 + 0x333c) = 0x801;
  *(int *)(param_1 + 0x4198) = iVar11;
  if (iVar11 == 0) {
    iVar18 = 0;
  }
  else {
    auStack_84._4_4_ = 0;
    iVar14 = GdipGetImageWidth();
    iVar18 = auStack_84._4_4_;
    if (iVar14 != 0) {
      *(int *)(iVar11 + 8) = iVar14;
    }
  }
  *(int *)(param_1 + 0x416c) = iVar18;
  iVar11 = Create();
  if (iVar11 != 0) {
    *(undefined4 *)(param_1 + 0x419c) = auStack_84._12_4_;
    *(LONG *)(param_1 + 0x41a0) = tStack_50.left;
    *(LONG *)(param_1 + 0x41a4) = tStack_50.top;
    *(LONG *)(param_1 + 0x41a8) = tStack_50.right;
    *(LONG *)(param_1 + 0x41ac) = tStack_50.bottom;
    iVar11 = ((tStack_50.bottom - tStack_50.top) + -3) / 2;
    SetRect((LPRECT)(param_1 + 0x4184),0,iVar11,tStack_50.right - tStack_50.left,iVar11 + 3);
    *(undefined4 *)(param_1 + 0x417c) = auStack_84._0_4_;
    *(undefined4 *)(param_1 + 0x4180) = uVar10;
    *(undefined4 *)(param_1 + 0x4194) = 0;
  }
  FUN_0044a0c0();
  SetRect(&tStack_60,iStack_68 + 10,(int)puStack_6c + -2,iStack_68 + 0x3c,iStack_64 + 2);
  iStack_24 = tStack_60.bottom;
  auStack_84._4_4_ = tStack_60.bottom - tStack_60.top;
  puStack_2c = (undefined4 *)tStack_60.top;
  iStack_28 = tStack_60.right;
  auStack_84._12_4_ = tStack_60.right - tStack_60.left;
  iStack_30 = tStack_60.left;
  iVar11 = *(int *)(param_1 + 0x5d7c);
  tStack_50.top = tStack_60.top;
  piVar8 = &iStack_30;
  iVar18 = 0x5000000b;
  tStack_50.left = tStack_60.left;
  puVar28 = &DAT_0060b0b0;
  pCVar19 = param_1;
  (**(code **)(*(int *)(param_1 + 0x50b8) + 0x13c))();
  FUN_0045e2e0();
  uVar5 = DAT_00658114;
  uVar10 = DAT_0065810c;
  *(undefined4 *)(param_1 + 0x5154) = DAT_00658110;
  *(undefined4 *)(param_1 + 0x5158) = uVar10;
  *(undefined4 *)(param_1 + 0x515c) = uVar5;
  *(undefined4 *)(param_1 + 0x5178) = 0;
  if (DAT_0065151c != 0) {
    *(undefined ***)(param_1 + 0x5218) = &PTR_vftable_00651518;
  }
  *(undefined4 *)(param_1 + 0x5220) = DAT_0065828c;
  uVar10 = DAT_00658108;
  *(undefined4 *)(param_1 + 0x5158) = DAT_00658108;
  *(undefined4 *)(param_1 + 0x5154) = uVar10;
  *(undefined4 *)(param_1 + 0x515c) = uVar10;
  FUN_004035b0();
  FUN_0045e4a0();
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x5210));
  *(undefined ***)(param_1 + 0x5218) = &PTR_vftable_00651520;
  SetRect((LPRECT)auStack_84,auStack_84._0_4_,auStack_84._12_4_ + iVar11,auStack_84._8_4_,
          auStack_84._12_4_ + 0xc + iVar11);
  uVar5 = DAT_0065815c;
  iVar14 = DAT_00658158;
  tStack_60.top = auStack_84._8_4_;
  tStack_60.right = auStack_84._12_4_;
  iVar11 = *(int *)(param_1 + 0x78);
  iStack_64 = auStack_84._0_4_;
  tStack_50.bottom = auStack_84._0_4_;
  uVar10 = *(undefined4 *)(param_1 + 0x5d7c);
  tStack_40.top = auStack_84._8_4_;
  tStack_60.left = auStack_84._4_4_;
  tStack_40.left = auStack_84._4_4_;
  tStack_40.right = auStack_84._12_4_;
  *(undefined4 *)(param_1 + 0x4224) = 0x802;
  *(int *)(param_1 + 0x5080) = iVar11;
  if (iVar11 != 0) {
    unaff_ESI = 0;
    iVar16 = GdipGetImageWidth();
    if (iVar16 != 0) {
      *(int *)(iVar11 + 8) = iVar16;
    }
  }
  *(undefined4 *)(param_1 + 0x5054) = 0;
  iVar16 = Create();
  if (iVar16 != 0) {
    *(int *)(param_1 + 0x5088) = iStack_64;
    *(undefined4 *)(param_1 + 0x5084) = uVar10;
    *(LONG *)(param_1 + 0x508c) = tStack_60.left;
    *(LONG *)(param_1 + 0x5090) = tStack_60.top;
    *(LONG *)(param_1 + 0x5094) = tStack_60.right;
    iVar16 = ((tStack_60.right - tStack_60.left) + -3) / 2;
    SetRect((LPRECT)(param_1 + 0x506c),0,iVar16,tStack_60.top - iStack_64,iVar16 + 3);
    *(int *)(param_1 + 0x5064) = iVar14;
    *(undefined4 *)(param_1 + 0x5068) = uVar5;
    *(undefined4 *)(param_1 + 0x507c) = 0;
  }
  FUN_0044a0c0();
  SetRect((LPRECT)auStack_74,(int)(auStack_84._8_4_ + 10),(int)(auStack_84._4_4_ + -2),
          (int)(auStack_84._8_4_ + 0x3c),auStack_84._12_4_ + 2);
  tStack_40.right = iStack_68;
  puStack_8c = (undefined4 *)(iStack_68 - auStack_74._4_4_);
  tStack_40.left = auStack_74._4_4_;
  tStack_40.top = (LONG)puStack_6c;
  pvVar27 = (void *)0x0;
  tStack_50.bottom = auStack_74._0_4_;
  iVar14 = *(int *)(param_1 + 0x5d7c);
  tStack_60.left = auStack_74._4_4_;
  iStack_64 = auStack_74._0_4_;
  (**(code **)(*(int *)(param_1 + 0x5244) + 0x13c))();
  FUN_0045e2e0();
  uVar5 = DAT_00658114;
  uVar10 = DAT_0065810c;
  *(undefined4 *)(param_1 + 0x52e0) = DAT_00658110;
  *(undefined4 *)(param_1 + 0x52e4) = uVar10;
  *(undefined4 *)(param_1 + 0x52e8) = uVar5;
  *(undefined4 *)(param_1 + 0x5304) = 0;
  if (DAT_0065151c != 0) {
    *(undefined ***)(param_1 + 0x53a4) = &PTR_vftable_00651518;
  }
  *(undefined4 *)(param_1 + 0x53ac) = DAT_0065828c;
  uVar10 = DAT_00658108;
  *(undefined4 *)(param_1 + 0x52e4) = DAT_00658108;
  *(undefined4 *)(param_1 + 0x52e0) = uVar10;
  *(undefined4 *)(param_1 + 0x52e8) = uVar10;
  FUN_004035b0();
  FUN_0045e4a0();
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x539c));
  *(undefined ***)(param_1 + 0x53a4) = &PTR_vftable_00651520;
  if (piVar8 == (int *)0x0) {
    GetWindowRect(*(HWND *)(param_1 + 0x41f0),(LPRECT)(auStack_84 + 0xc));
    CWnd::ScreenToClient(param_1,(tagRECT *)(auStack_84 + 0xc));
    puStack_8c = puStack_6c;
    iVar11 = auStack_84._12_4_;
    unaff_ESI = auStack_74._0_4_;
  }
  else {
    SetRect((LPRECT)&stack0xffffff68,iVar11,(int)puStack_8c + iVar14,iVar11 + 0x82,
            (int)puStack_8c + iVar14 + 0x15);
    FUN_004674f0();
    CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x5be4));
    *(undefined ***)(param_1 + 0x5bec) = &PTR_vftable_00651528;
  }
  iVar14 = (-(uint)(piVar8 != (int *)0x0) & 0xfffffff7) + 0x19 + (int)puStack_8c;
  SetRect((LPRECT)&stack0xffffff68,iVar11 + 0x2d,iVar14,iVar11 + 0x45,iVar14 + 0x18);
  (**(code **)(*(int *)(param_1 + 0x5c9c) + 0x13c))();
  CWnd::MoveWindow(param_1 + 0x5c9c,(int)puVar29,(int)&stack0xffffff28,iVar11 - (int)puVar29,
                   unaff_ESI - (int)&stack0xffffff28,1);
  *(undefined4 *)(param_1 + 0x5d10) = 0xff;
  InvalidateRect(*(HWND *)(param_1 + 0x5cbc),(RECT *)0x0,1);
  *(undefined4 *)(param_1 + 0x5d28) = 0x969696;
  *(undefined4 *)(param_1 + 0x5d24) = 0x969696;
  *(undefined4 *)(param_1 + 0x5d2c) = 0;
  *(undefined4 *)(param_1 + 0x5d18) = 0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x230) + 0x2d7a);
  *(uint *)(param_1 + 0x5d38) = (uint)bVar1;
  if ((bVar1 != 0) &&
     (auStack_84._4_4_ = puVar29, auStack_84._8_4_ = &stack0xffffff28, auStack_84._12_4_ = iVar11,
     auStack_74._0_4_ = unaff_ESI, *(int *)(param_1 + 0x5d7c) != 0)) {
    auStack_84._8_4_ = &stack0xffffff28;
    if (*(undefined4 **)(param_1 + 0x5d3c) != (undefined4 *)0x0) {
      auStack_84._8_4_ = &stack0xffffff28;
      (**(code **)**(undefined4 **)(param_1 + 0x5d3c))();
      FUN_004ad123();
      *(undefined4 *)(param_1 + 0x5d3c) = 0;
    }
    uVar10 = FUN_00467c30();
    *(undefined4 *)(param_1 + 0x5d3c) = uVar10;
  }
  CWnd::ShowWindow(param_1 + 0x5c9c,5);
  iVar14 = ((unaff_ESI - (int)&stack0xffffff28) + -0xd) / 2;
  SetRect((LPRECT)&stack0xffffff60,iVar11 + 0xf,(int)(&stack0xffffff28 + iVar14),iVar11 + 0x1c,
          (int)(&stack0xffffff35 + iVar14));
  FUN_004674f0();
  SetRect((LPRECT)&stack0xffffff60,
          (*(int *)(param_1 + 0x5d8c) - *(int *)(param_1 + 0x5d84)) + -0x25d,0x1ea,
          (*(int *)(param_1 + 0x5d8c) - *(int *)(param_1 + 0x5d84)) + -0x8c,0x26c);
  this = param_1 + 0x234;
  auStack_84._4_4_ = puVar29;
  auStack_84._8_4_ = &stack0xffffff28;
  auStack_84._12_4_ = iVar11;
  auStack_74._0_4_ = unaff_ESI;
  if (*(int *)(param_1 + 0x5d7c) != 0) {
    auStack_84._8_4_ = &stack0xffffff28;
    if (*(undefined4 **)(param_1 + 0x2a8) != (undefined4 *)0x0) {
      auStack_84._8_4_ = &stack0xffffff28;
      (**(code **)**(undefined4 **)(param_1 + 0x2a8))();
      FUN_004ad123();
      *(undefined4 *)(param_1 + 0x2a8) = 0;
    }
    uVar10 = FUN_00467c30();
    *(undefined4 *)(param_1 + 0x2a8) = uVar10;
  }
  pcVar2 = *(code **)(*(int *)this + 0x54);
  *(undefined4 *)(param_1 + 0x3010) = 1;
  (*pcVar2)();
  CWnd::MoveWindow(this,(int)pvVar27,(int)puVar28,iVar18 - (int)pvVar27,(int)piVar8 - (int)puVar28,1
                  );
  FUN_00406020();
  CWnd::ShowWindow(this,5);
  yTop = puVar28 + 0xe;
  *(uint *)(param_1 + 0x3018) = (uint)*(byte *)(*(int *)(param_1 + 0x230) + 0x2d7a);
  iVar11 = 2;
  lprc = (LPRECT)(param_1 + 0x7c);
  iVar14 = iVar18 + 10;
  do {
    ptVar25 = lprc + 5;
    iVar16 = 5;
    iVar26 = iVar14;
    do {
      ptVar24 = lprc + 1;
      SetRect(lprc,iVar14,(int)yTop,iVar14 + 0x14,(int)(yTop + 10));
      iVar14 = iVar14 + 0x17;
      iVar16 = iVar16 + -1;
      lprc = ptVar24;
    } while (iVar16 != 0);
    yTop = (undefined2 *)((int)yTop + 0x1d);
    iVar11 = iVar11 + -1;
    lprc = ptVar25;
    iVar14 = iVar26;
  } while (iVar11 != 0);
  SetRect((LPRECT)(param_1 + 0x21c),*(int *)(param_1 + 0x7c),*(int *)(param_1 + 0x80),
          *(int *)(param_1 + 0x114),*(int *)(param_1 + 0x118) + 10);
  SetRect((LPRECT)&stack0xffffff44,*(int *)(param_1 + 0xcc),*(int *)(param_1 + 0xd8) + 10,
          *(int *)(param_1 + 0xcc) + 0x46,*(int *)(param_1 + 0xd8) + 0x1e);
  auStack_84._8_4_ = pvVar27;
  auStack_84._12_4_ = puVar28;
  auStack_74._0_4_ = iVar18;
  auStack_74._4_4_ = piVar8;
  (**(code **)(*(int *)(param_1 + 0x576c) + 0x13c))();
  FUN_0045e2e0(piVar8,pCVar19,iVar16);
  uVar5 = DAT_00658114;
  uVar10 = DAT_0065810c;
  *(undefined4 *)(param_1 + 0x5808) = DAT_00658110;
  *(undefined4 *)(param_1 + 0x580c) = uVar10;
  *(undefined4 *)(param_1 + 0x5810) = uVar5;
  *(undefined4 *)(param_1 + 0x582c) = 0;
  if (DAT_0065151c != 0) {
    *(undefined ***)(param_1 + 0x58cc) = &PTR_vftable_00651518;
  }
  *(undefined4 *)(param_1 + 0x58d4) = DAT_0065828c;
  piVar17 = (int *)(DAT_0066fc48 + -0x10);
  puVar23 = (undefined4 *)&stack0xfffffef0;
  puVar9 = (undefined4 *)(**(code **)(*(int *)*piVar17 + 0x10))();
  piVar22 = piVar17 + 3;
  if ((*piVar22 < 0) || (puVar9 != (undefined4 *)*piVar17)) {
    piVar22 = piVar17;
    piVar17 = (int *)(**(code **)*puVar9)(piVar17[1],2);
    if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403760();
    }
    piVar17[1] = piVar22[1];
    _memcpy_s(piVar17 + 4,piVar22[1] * 2 + 2,piVar22 + 4,piVar22[1] * 2 + 2);
  }
  else {
    LOCK();
    *piVar22 = *piVar22 + 1;
    UNLOCK();
  }
  *puVar23 = piVar17 + 4;
  FUN_0045e4a0();
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x58c4));
  *(undefined ***)(param_1 + 0x58cc) = &PTR_vftable_00651520;
  GetWindowRect(*(HWND *)(param_1 + 0x3308),(LPRECT)&stack0xffffff50);
  CWnd::ScreenToClient(param_1,(tagRECT *)&stack0xffffff50);
  SetRect((LPRECT)&stack0xffffff30,(int)piVar8,(int)(pCVar19 + 0x23),(int)(piVar8 + 0x31),
          (int)(pCVar19 + 0x38));
  FUN_004674f0(param_1,L"combo2_nr.png",L"combo2_nr.png",param_1 + 0x53d0,0,0,piVar8);
  iVar11 = 0;
  if (*(char *)(*(int *)(param_1 + 0x230) + 0x2f74) != '\0') {
    this_00 = (CSimpleStringT<wchar_t,0> *)&DAT_0066fe5c;
    do {
      if (1 < *(int *)(*(int *)this_00 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork(this_00,*(int *)(*(int *)this_00 + -0xc));
      }
      iVar18 = *(int *)this_00;
      piVar8 = _malloc(0x2c);
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar11;
        *(wchar_t *)(piVar8 + 1) = L'\0';
        if (iVar18 != 0) {
          __snwprintf_s((wchar_t *)(piVar8 + 1),0x14,0x13,L"%s");
        }
        puVar9 = _malloc(0xc);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = piVar8;
          puVar9[1] = 0;
          if (*(int *)(param_1 + 0x5564) == 0) {
            puVar9[2] = 0;
            *(undefined4 **)(param_1 + 0x556c) = puVar9;
          }
          else {
            puVar9[2] = *(undefined4 *)(param_1 + 0x5570);
            *(undefined4 **)(*(int *)(param_1 + 0x5570) + 4) = puVar9;
          }
          *(int *)(param_1 + 0x5564) = *(int *)(param_1 + 0x5564) + 1;
          *(undefined4 **)(param_1 + 0x5570) = puVar9;
        }
      }
      this_00 = this_00 + 4;
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x230) + 0x2f74));
  }
  SetRect((LPRECT)(param_1 + 0x1fc),0x10e,4,0x28a,0x1a);
  auStack_74._0_4_ = -1;
  LOCK();
  iVar11 = iRamfffffffc + -1;
  UNLOCK();
  iVar18 = iRamfffffffc + -1;
  bVar21 = iRamfffffffc == 1;
  iRamfffffffc = iVar11;
  if (bVar21 || iVar18 < 0) {
    (**(code **)(*piRamfffffff0 + 4))();
  }
  ExceptionList = (void *)auStack_84._8_4_;
  return;
}


//==== FUNC 004302c0  FUN_004302c0 ====

void FUN_004302c0(int param_1)

{
  int iVar1;
  int *piVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  _TREEITEM *p_Var5;
  undefined4 *puVar6;
  int iVar7;
  CSimpleStringT<wchar_t,0> *pCVar8;
  int local_c;
  
  pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  if (*(int *)(pCVar4 + 0xa4) != 0) {
    pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    iVar1 = *(int *)(*(int *)(pCVar4 + 0xc0) + 0x24);
    ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_0066fc48 + -0x10));
    FUN_0045e4a0();
    FUN_0045e170();
    FUN_0044e280();
    SendMessageW(*(HWND *)(param_1 + 0x3040),0x1101,0,-0x10000);
    FUN_00480070();
    iVar7 = 0;
    pCVar8 = (CSimpleStringT<wchar_t,0> *)&DAT_0066fde0;
    do {
      if (*(int *)(*(int *)pCVar8 + -0xc) == 0) break;
      if ((*(uint *)(iVar1 + 0x2d44) & 1 << ((byte)iVar7 & 0x1f)) == 0) {
        if (1 < *(int *)(*(int *)pCVar8 + -4)) {
          ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(*(int *)pCVar8 + -0xc));
        }
        for (puVar6 = *(undefined4 **)(param_1 + 0x3134);
            (puVar6 != (undefined4 *)0x0 && (*(int *)*puVar6 != -0x10000));
            puVar6 = (undefined4 *)puVar6[1]) {
        }
        p_Var5 = CTreeCtrl::InsertItem
                           ((CTreeCtrl *)(param_1 + 0x3020),1,*(wchar_t **)pCVar8,0,0,0,0,0,
                            (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
        if (p_Var5 != (_TREEITEM *)0x0) {
          puVar6 = _malloc(0x24);
          if (puVar6 == (undefined4 *)0x0) goto LAB_00430446;
          *puVar6 = p_Var5;
          puVar6[4] = iVar7;
          puVar6[5] = 0;
          puVar6[1] = 0;
          puVar6[3] = 0;
          puVar6[7] = 0xf;
          puVar6[6] = 1;
          puVar6[8] = 0;
          FUN_0044e0a0();
          InvalidateRect(*(HWND *)(param_1 + 0x3040),(RECT *)0x0,1);
        }
        FUN_00480070();
      }
LAB_00430446:
      pCVar8 = pCVar8 + 4;
      iVar7 = iVar7 + 1;
    } while ((int)pCVar8 < 0x66fe48);
    FUN_0047f980();
    local_c = 0;
    pCVar8 = (CSimpleStringT<wchar_t,0> *)&DAT_0066fe5c;
    do {
      iVar1 = *(int *)pCVar8;
      if (*(int *)(iVar1 + -0xc) == 0) break;
      if (1 < *(int *)(iVar1 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork(pCVar8,*(int *)(iVar1 + -0xc));
      }
      if ((*(int *)pCVar8 != 0) && (-1 < local_c)) {
        piVar2 = *(int **)(param_1 + 0x556c);
        iVar1 = 0;
        while( true ) {
          if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_004304dd;
          if (iVar1 == local_c) break;
          piVar2 = (int *)piVar2[1];
          iVar1 = iVar1 + 1;
        }
        __snwprintf_s((wchar_t *)(*piVar2 + 4),0x14,0x13,L"%s");
      }
LAB_004304dd:
      local_c = local_c + 1;
      pCVar8 = pCVar8 + 4;
    } while ((int)pCVar8 < 0x66fe70);
    if ((param_1 != -0x5a8c) && (*(int *)(param_1 + 0x5aac) != 0)) {
      FUN_00430cc0();
    }
    InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
  }
  return;
}


//==== FUNC 0041b7a0  FUN_0041b7a0 ====

void FUN_0041b7a0(void)

{
  void *_Dst;
  size_t *psVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_ESI;
  size_t *unaff_EDI;
  
  if ((unaff_EDI != (size_t *)0x0) && (*(int *)(unaff_ESI + 0x1778) < 0x91)) {
    if (*(void **)(unaff_ESI + 0x1760) != (void *)0x0) {
      _free(*(void **)(unaff_ESI + 0x1760));
      *(undefined4 *)(unaff_ESI + 0x1760) = 0;
    }
    _Dst = _malloc(*unaff_EDI);
    *(void **)(unaff_ESI + 0x1760) = _Dst;
    _memcpy(_Dst,unaff_EDI,*unaff_EDI);
    if (unaff_EDI[1] == 3) {
      psVar1 = (size_t *)(unaff_ESI + 0x8c);
      iVar3 = 0x90;
      do {
        *psVar1 = unaff_EDI[0xa0];
        psVar1 = psVar1 + 10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    else {
      iVar3 = *(int *)(unaff_ESI + 0x1790);
      piVar4 = (int *)(unaff_ESI + 0x8c);
      iVar6 = 0x90;
      do {
        *piVar4 = (-(uint)(iVar3 != 1) & 0xffffffc9) + 0xff;
        piVar4 = piVar4 + 10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    KillTimer(*(HWND *)(unaff_ESI + 0x20),0x7a);
    puVar2 = (undefined4 *)(unaff_ESI + 0x88);
    iVar3 = 0x90;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_0041b8c0();
    if (0 < (int)unaff_EDI[2]) {
      SetTimer(*(HWND *)(unaff_ESI + 0x20),0x7a,unaff_EDI[2],(TIMERPROC)0x0);
    }
    iVar3 = *(int *)(*(int *)(unaff_ESI + 0x1760) + 4);
    uVar5 = 0;
    if ((((iVar3 == 0x11) || (iVar3 == 0x12)) || (iVar3 == 0x13)) ||
       ((iVar3 == 0x14 || (iVar3 == 0x18)))) {
      uVar5 = 1;
    }
    *(undefined4 *)(unaff_ESI + 0x178c) = uVar5;
  }
  return;
}


//==== FUNC 004336b0  FUN_004336b0 ====

void __fastcall FUN_004336b0(CWnd *param_1)

{
  CSimpleStringT<wchar_t,0> *pCVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  HWND pHVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  _TREEITEM *p_Var11;
  int iVar12;
  int iVar13;
  CWnd *pCVar14;
  int iVar15;
  int iVar16;
  code *pcVar17;
  int unaff_ESI;
  uint uVar18;
  int unaff_EDI;
  CSimpleStringT<wchar_t,0> **ppCVar19;
  CWnd *pCStack_140;
  int iStack_13c;
  CWnd *pCVar20;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  CWnd *pCStack_124;
  undefined2 *puStack_120;
  CWnd *pCStack_11c;
  undefined1 *puStack_118;
  CWnd *pCStack_114;
  CWnd *pCStack_110;
  CWnd *pCStack_10c;
  CWnd *pCStack_108;
  undefined *puStack_104;
  CWnd *pCStack_100;
  CWnd *pCStack_fc;
  CWnd *pCStack_f8;
  CWnd *pCStack_f4;
  int iStack_f0;
  LONG *pLStack_ec;
  CWnd *pCStack_e8;
  undefined2 *puStack_e4;
  CWnd *pCStack_e0;
  int *piStack_dc;
  CWnd *pCStack_d8;
  CWnd *pCStack_d4;
  CWnd *pCStack_d0;
  CWnd *pCStack_cc;
  undefined4 uVar21;
  CWnd *pCVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  CWnd *pCStack_a4;
  CWnd *pCVar25;
  int iVar26;
  uint uStack_8c;
  int iStack_88;
  CSimpleStringT<wchar_t,0> *local_84;
  CWnd *pCStack_80;
  int iStack_7c;
  int iStack_78;
  CWnd *local_74;
  tagRECT tStack_70;
  int iStack_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  tagRECT atStack_50 [3];
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_005dea13;
  local_14 = ExceptionList;
  uVar4 = DAT_0064f674 ^ (uint)&stack0xffffff68;
  ExceptionList = &local_14;
  pCStack_a4 = (CWnd *)0x4336eb;
  pHVar5 = GetParent(*(HWND *)(param_1 + 0x20));
  pCStack_a4 = (CWnd *)0x4336f1;
  local_74 = CWnd::FromHandle(pHVar5);
  local_84 = (CSimpleStringT<wchar_t,0> *)(*(int *)(*(int *)(local_74 + 0xc0) + 0x24) + 0x18);
  piVar6 = (int *)FUN_004ad163();
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    pCStack_a4 = (CWnd *)0x433721;
    FUN_00403990();
  }
  iVar7 = (**(code **)(*piVar6 + 0xc))();
  pCStack_80 = (CWnd *)(iVar7 + 0x10);
  pCStack_a4 = (CWnd *)&DAT_0065d1b0;
  iStack_c = 0;
  FUN_004031f0();
  puVar8 = (undefined4 *)FUN_004ad0e9();
  iStack_c._0_1_ = 1;
  tStack_70.top = (LONG)puVar8;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    if (1 < *(int *)(pCStack_80 + -4)) {
      pCStack_a4 = (CWnd *)0x433784;
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&pCStack_80,*(int *)(pCStack_80 + -0xc));
    }
    pCStack_a4 = pCStack_80;
    *puVar8 = Gdiplus::Bitmap::vftable;
    iStack_7c = 0;
    uVar9 = GdipCreateBitmapFromFile();
    puVar8[2] = uVar9;
    puVar8[1] = iStack_7c;
  }
  iStack_c = (uint)iStack_c._1_3_ << 8;
  piVar6 = &iStack_7c;
  *(undefined4 **)(param_1 + 0x78) = puVar8;
  pCStack_a4 = (CWnd *)puVar8[1];
  iStack_7c = 0;
  iVar7 = GdipGetImageWidth();
  if (iVar7 != 0) {
    puVar8[2] = iVar7;
  }
  if ((local_84 == (CSimpleStringT<wchar_t,0> *)0x0) &&
     (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x78))();
    FUN_004ad123();
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  SetRect(atStack_50,0,0x1e,0xda,0x276);
  if (DAT_00658178 != 0) {
    SetRect(&tStack_70,atStack_50[0].right + 1,0x1c9,
            *(int *)(param_1 + 0x5640) - *(int *)(param_1 + 0x5638),
            *(int *)(param_1 + 0x5644) - *(int *)(param_1 + 0x563c));
    uVar9 = FUN_0041f150();
    *(undefined4 *)(param_1 + 0x5634) = uVar9;
  }
  pCStack_d0 = *(CWnd **)(param_1 + 0x5634);
  pCStack_cc = (CWnd *)0x0;
  pCStack_d4 = (CWnd *)0x4338f2;
  FUN_00480300();
  uVar9 = DAT_00658134;
  *(int *)(param_1 + 0x2f20) = DAT_00658108;
  *(undefined4 *)(param_1 + 0x2f1c) = uVar9;
  InvalidateRect(*(HWND *)(param_1 + 0x2ed0),(RECT *)0x0,1);
  uVar3 = DAT_00658130 >> 0x10;
  uVar10 = DAT_00658130 & 0xff;
  uVar18 = DAT_00658130 >> 8;
  *(uint *)(param_1 + 0x2f0c) =
       ((DAT_00658140 & 0xff | 0xffffff00) << 8 | DAT_00658140 >> 8 & 0xff) << 8 |
       DAT_00658140 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2f10) = ((uVar10 | 0xffffff00) << 8 | uVar18 & 0xff) << 8 | uVar3 & 0xff;
  InvalidateRect(*(HWND *)(param_1 + 0x2ed0),(RECT *)0x0,0);
  *(undefined4 *)(param_1 + 0x2f18) = 0x1a;
  SendMessageW(*(HWND *)(param_1 + 0x2ed0),0x111b,0x1a,0);
  *(undefined4 *)(param_1 + 0x2f24) = 0;
  *(undefined4 *)(param_1 + 0x2ff4) = 0;
  iVar7 = 0;
  *(undefined ***)(param_1 + 0x2fe8) = &PTR_vftable_00651518;
  local_84 = (CSimpleStringT<wchar_t,0> *)&DAT_0066fe48;
  do {
    pCVar1 = local_84;
    iVar26 = *(int *)local_84;
    if (*(int *)(iVar26 + -0xc) == 0) break;
    if (1 < *(int *)(iVar26 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(local_84,*(int *)(iVar26 + -0xc));
    }
    for (puVar8 = *(undefined4 **)(param_1 + 0x2fc4);
        (puVar8 != (undefined4 *)0x0 && (*(int *)*puVar8 != -0x10000));
        puVar8 = (undefined4 *)puVar8[1]) {
    }
    pCStack_cc = (CWnd *)0x433a11;
    p_Var11 = CTreeCtrl::InsertItem
                        ((CTreeCtrl *)(param_1 + 0x2eb0),1,*(wchar_t **)pCVar1,0,0,0,0,0,
                         (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
    if (p_Var11 == (_TREEITEM *)0x0) {
LAB_00433a64:
      FUN_00480070();
    }
    else {
      puVar8 = _malloc(0x24);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = p_Var11;
        puVar8[4] = iVar7;
        puVar8[5] = 0;
        puVar8[1] = 0;
        puVar8[3] = 0;
        puVar8[7] = 0xf;
        puVar8[6] = 1;
        puVar8[8] = 0;
        FUN_0044e0a0();
        InvalidateRect(*(HWND *)(param_1 + 0x2ed0),(RECT *)0x0,1);
        goto LAB_00433a64;
      }
    }
    iVar7 = iVar7 + 1;
    local_84 = local_84 + 4;
  } while ((int)local_84 < 0x66fe5c);
  SetRect(&tStack_70,0x424,0x1af,0x436,0x1c1);
  pCStack_d0 = (CWnd *)0x433ae9;
  pCStack_cc = param_1;
  FUN_004674f0();
  FUN_0045e170();
  iVar7 = *(int *)(iStack_7c + 0x16e8);
  if (iVar7 == 0) {
    iVar7 = *(int *)(iStack_7c + 0x16e4);
  }
  iVar26 = 0;
  pcVar17 = SetRect_exref;
  if (iVar7 != 0) {
    iVar7 = *(int *)(param_1 + 0x5640);
    iVar26 = *(int *)(param_1 + 0x5638);
    iVar16 = atStack_50[0].right - atStack_50[0].left;
    local_84 = (CSimpleStringT<wchar_t,0> *)0x0;
    iVar12 = GdipGetImageWidth();
    if (iVar12 != 0) {
      *(int *)(unaff_EDI + 8) = iVar12;
    }
    pCStack_80 = (CWnd *)((((iVar7 - iVar26) - uStack_8c) - iVar16 >> 1) + atStack_50[0].left);
    iVar7 = *(int *)(param_1 + 0x5644);
    iVar26 = *(int *)(param_1 + 0x563c);
    iVar12 = GdipGetImageHeight();
    if (iVar12 != 0) {
      piVar6[2] = iVar12;
    }
    uVar18 = ((iVar7 - iVar26) - unaff_ESI) - 0xb7U >> 1;
    unaff_ESI = 0;
    iVar7 = GdipGetImageHeight();
    if (iVar7 != 0) {
      piVar6[2] = iVar7;
    }
    unaff_EDI = 0;
    iVar7 = GdipGetImageWidth();
    pcVar17 = SetRect_exref;
    if (iVar7 != 0) {
      piVar6[2] = iVar7;
    }
    SetRect((LPRECT)(param_1 + 0x84),iStack_78,uVar18,(int)(pCStack_80 + iStack_78),
            (int)(local_74 + uVar18));
    iVar7 = FUN_00473bd0();
    *(int *)(param_1 + 0x2eac) = iVar7;
    *(undefined4 *)(iVar7 + 0x1788) = 2;
    iVar7 = *(int *)(uVar4 + 0x2e94);
    iVar12 = *(int *)(param_1 + 0x2eac);
    iVar26 = 0;
    if (0 < *(int *)(iVar12 + 0x1764)) {
      local_84 = (CSimpleStringT<wchar_t,0> *)(iVar12 + 0x8c);
      do {
        iVar26 = iVar26 + 1;
        *(uint *)local_84 = (-(uint)(iVar7 != 1) & 0xffffffab) + 0xff;
        local_84 = local_84 + 0x28;
      } while (iVar26 < *(int *)(iVar12 + 0x1764));
    }
    *(undefined4 *)(*(int *)(param_1 + 0x2eac) + 0x1790) = *(undefined4 *)(uVar4 + 0x2e94);
    iVar7 = *(int *)(*(int *)(param_1 + 0x2eac) + 0x1778);
    local_84 = (CSimpleStringT<wchar_t,0> *)0x10000;
    if (0 < iVar7) {
      piVar6 = (int *)(*(int *)(param_1 + 0x2eac) + 0x9c);
      iStack_7c = iVar7;
      do {
        pCVar1 = (CSimpleStringT<wchar_t,0> *)*piVar6;
        if (((CSimpleStringT<wchar_t,0> *)piVar6[2] != pCVar1 && -1 < piVar6[2] - (int)pCVar1) &&
           ((int)pCVar1 < (int)local_84)) {
          local_84 = pCVar1;
        }
        piVar6 = piVar6 + 10;
        iStack_7c = iStack_7c + -1;
      } while (iStack_7c != 0);
    }
    uVar18 = 0;
    *(CSimpleStringT<wchar_t,0> **)(param_1 + 0x5578) = local_84 + ((LPRECT)(param_1 + 0x84))->left;
    uStack_8c = uVar4;
    if ((DAT_00658af8 != 0) &&
       (*(undefined4 *)(*(int *)(param_1 + 0x2eac) + 0x1790) = 0, 0 < *(int *)(uVar4 + 0x2d10))) {
      local_84 = (CSimpleStringT<wchar_t,0> *)0x0;
      do {
        uVar9 = FUN_00427f70();
        iVar7 = *(int *)(param_1 + 0x2eac);
        if (uVar18 < 0x90) {
          *(undefined4 *)(local_84 + iVar7 + 0xac) = uVar9;
          InvalidateRect(*(HWND *)(iVar7 + 0x20),(RECT *)0x0,1);
        }
        local_84 = local_84 + 0x28;
        uVar18 = uVar18 + 1;
        pcVar17 = SetRect_exref;
      } while ((int)uVar18 < *(int *)(uVar4 + 0x2d10));
    }
  }
  pCVar20 = param_1 + 0xa4;
  (*pcVar17)();
  pCVar22 = (CWnd *)0x20a;
  uVar21 = 0x1fe;
  iVar12 = 0xfa;
  pCStack_cc = (CWnd *)&local_84;
  pCStack_d0 = (CWnd *)0x433dc1;
  (*pcVar17)();
  uVar23 = DAT_0065815c;
  uVar24 = DAT_00658158;
  uStack_5c = uStack_8c;
  uVar9 = *(undefined4 *)(param_1 + 0x5634);
  iVar7 = *(int *)(param_1 + 0x78);
  atStack_50[0].top = uStack_8c;
  *(undefined4 *)(param_1 + 0x31cc) = 0x801;
  *(int *)(param_1 + 0x4028) = iVar7;
  pCVar14 = (CWnd *)0x0;
  tStack_70.right = unaff_EDI;
  tStack_70.bottom = unaff_ESI;
  iStack_60 = iVar26;
  iStack_58 = unaff_EDI;
  iStack_54 = unaff_ESI;
  atStack_50[0].left = iVar26;
  if (iVar7 != 0) {
    pCStack_d4 = *(CWnd **)(iVar7 + 4);
    pCStack_d0 = (CWnd *)&pCStack_a4;
    pCStack_a4 = (CWnd *)0x0;
    pCStack_d8 = (CWnd *)0x433e51;
    iVar16 = GdipGetImageWidth();
    pCVar14 = pCStack_a4;
    if (iVar16 != 0) {
      *(int *)(iVar7 + 8) = iVar16;
    }
  }
  pCStack_d0 = (CWnd *)0x0;
  pCStack_d4 = (CWnd *)0x68;
  piStack_dc = &iStack_58;
  pCStack_e0 = (CWnd *)0x50000000;
  puStack_e4 = &DAT_0060b0b0;
  pCStack_e8 = (CWnd *)0x0;
  *(CWnd **)(param_1 + 0x3ffc) = pCVar14;
  pLStack_ec = (LONG *)0x433e86;
  pCStack_d8 = param_1;
  iVar16 = Create();
  if (iVar16 != 0) {
    *(undefined4 *)(param_1 + 0x402c) = uVar9;
    *(LONG *)(param_1 + 0x4030) = tStack_70.right;
    *(LONG *)(param_1 + 0x4034) = tStack_70.bottom;
    *(int *)(param_1 + 0x4038) = iStack_60;
    pCStack_d4 = (CWnd *)(iStack_60 - tStack_70.right);
    *(uint *)(param_1 + 0x403c) = uStack_5c;
    pCStack_d8 = (CWnd *)((int)((uStack_5c - tStack_70.bottom) + -3) / 2);
    pCStack_d0 = pCStack_d8 + 3;
    piStack_dc = (int *)0x0;
    pCStack_e0 = param_1 + 0x4014;
    puStack_e4 = (undefined2 *)0x433edb;
    (*pcVar17)();
    *(undefined4 *)(param_1 + 0x400c) = uVar24;
    *(undefined4 *)(param_1 + 0x4010) = uVar23;
    *(undefined4 *)(param_1 + 0x4024) = 0;
  }
  pCStack_d0 = (CWnd *)0x433f0d;
  FUN_0044a0c0();
  pCStack_d0 = (CWnd *)(uStack_8c + 2);
  pCStack_d4 = (CWnd *)(iVar26 + 0x3c);
  pCStack_d8 = (CWnd *)(unaff_ESI + -2);
  piStack_dc = (int *)(iVar26 + 10);
  pCStack_e0 = (CWnd *)&iStack_88;
  puStack_e4 = (undefined2 *)0x433f30;
  (*pcVar17)();
  iVar15 = iVar26 - unaff_EDI;
  iVar13 = unaff_ESI - iVar7;
  puStack_e4 = (undefined2 *)0x0;
  iVar16 = *(int *)(param_1 + 0x5634);
  pLStack_ec = &tStack_70.top;
  iStack_f0 = 0x5000000b;
  pCStack_f4 = (CWnd *)&DAT_0060b0b0;
  pCStack_f8 = (CWnd *)0x433f9f;
  pCStack_e8 = param_1;
  pCStack_100 = (CWnd *)iVar12;
  puStack_104 = (undefined *)uVar21;
  iStack_7c = iVar7;
  iStack_78 = unaff_EDI;
  tStack_70.top = iVar7;
  tStack_70.right = unaff_EDI;
  tStack_70.bottom = unaff_ESI;
  iStack_60 = iVar26;
  (**(code **)(*(int *)(param_1 + 0x4f48) + 0x13c))();
  pCStack_f8 = pCStack_d4;
  pCStack_fc = pCStack_d4;
  pCStack_108 = (CWnd *)uStack_8c;
  pCStack_110 = (CWnd *)0x433fcd;
  pCStack_10c = (CWnd *)iVar26;
  iVar7 = (int)pCStack_100;
  FUN_0045e2e0();
  uVar24 = DAT_00658114;
  uVar9 = DAT_0065810c;
  *(undefined4 *)(param_1 + 0x4fe4) = DAT_00658110;
  *(undefined4 *)(param_1 + 0x4fe8) = uVar9;
  *(undefined4 *)(param_1 + 0x4fec) = uVar24;
  *(undefined4 *)(param_1 + 0x5008) = 0;
  if (DAT_0065151c != 0) {
    *(undefined ***)(param_1 + 0x50a8) = &PTR_vftable_00651518;
  }
  *(undefined4 *)(param_1 + 0x50b0) = DAT_0065828c;
  iVar26 = DAT_00658108;
  pCStack_f8 = (CWnd *)0x0;
  pCStack_fc = (CWnd *)0x1;
  pCStack_100 = (CWnd *)DAT_00658108;
  *(int *)(param_1 + 0x4fe8) = DAT_00658108;
  puStack_104 = &DAT_00610fd8;
  *(int *)(param_1 + 0x4fe4) = iVar26;
  *(int *)(param_1 + 0x4fec) = iVar26;
  pCStack_108 = (CWnd *)0x434046;
  FUN_004035b0();
  puStack_104 = (undefined *)0x43404b;
  FUN_0045e4a0();
  pCStack_f8 = (CWnd *)0x434056;
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x50a0));
  pCStack_fc = pCVar20;
  puStack_104 = (undefined *)iVar16;
  pCStack_f8 = (CWnd *)(iVar15 + 0x34);
  pCStack_100 = (CWnd *)(iVar15 + 0x28);
  pCStack_108 = (CWnd *)&stack0xffffff40;
  *(undefined ***)(param_1 + 0x50a8) = &PTR_vftable_00651520;
  pCStack_10c = (CWnd *)0x43407d;
  (*pcVar17)();
  pCVar20 = pCStack_cc;
  pCStack_e8 = (CWnd *)DAT_0065815c;
  puStack_e4 = (undefined2 *)DAT_00658158;
  pCStack_a4 = pCStack_d4;
  piStack_dc = *(int **)(param_1 + 0x5634);
  pCStack_d8 = *(CWnd **)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x40b4) = 0x802;
  *(CWnd **)(param_1 + 0x4f10) = pCStack_d8;
  pCVar14 = (CWnd *)0x0;
  iVar26 = iVar7;
  pCVar25 = pCStack_d0;
  iStack_88 = iVar7;
  if (pCStack_d8 != (CWnd *)0x0) {
    pCStack_110 = *(CWnd **)((int)pCStack_d8 + 4);
    pCStack_10c = (CWnd *)&pCStack_e0;
    pCStack_e0 = (CWnd *)0x0;
    pCStack_114 = (CWnd *)0x43410e;
    iVar12 = GdipGetImageWidth();
    pCVar14 = pCStack_e0;
    if (iVar12 != 0) {
      *(int *)((int)pCStack_d8 + 8) = iVar12;
    }
  }
  pCStack_10c = (CWnd *)0x0;
  pCStack_110 = (CWnd *)0x68;
  puStack_118 = &stack0xffffff6c;
  pCStack_11c = (CWnd *)0x50000000;
  puStack_120 = &DAT_0060b0b0;
  pCStack_124 = (CWnd *)0x0;
  *(CWnd **)(param_1 + 0x4ee4) = pCVar14;
  puStack_128 = (undefined1 *)0x434143;
  pCStack_114 = param_1;
  iVar12 = Create();
  if (iVar12 != 0) {
    *(int **)(param_1 + 0x4f14) = piStack_dc;
    *(CWnd **)(param_1 + 0x4f18) = pCStack_a4;
    *(CWnd **)(param_1 + 0x4f1c) = pCVar25;
    *(CWnd **)(param_1 + 0x4f20) = pCVar20;
    pCStack_110 = (CWnd *)((int)pCVar20 - (int)pCStack_a4);
    *(int *)(param_1 + 0x4f24) = iVar7;
    pCStack_114 = (CWnd *)(((iVar7 - (int)pCVar25) + -3) / 2);
    pCStack_10c = pCStack_114 + 3;
    puStack_118 = (undefined1 *)0x0;
    pCStack_11c = param_1 + 0x4efc;
    puStack_120 = (undefined2 *)0x434198;
    (*pcVar17)();
    *(undefined2 **)(param_1 + 0x4ef4) = puStack_e4;
    *(CWnd **)(param_1 + 0x4ef8) = pCStack_e8;
    *(undefined4 *)(param_1 + 0x4f0c) = 0;
  }
  pCStack_10c = (CWnd *)0x4341c4;
  FUN_0044a0c0();
  pCStack_10c = (CWnd *)(iVar26 + 2);
  pCStack_110 = (CWnd *)((int)pCStack_cc + 0x3c);
  pCStack_114 = (CWnd *)((int)pCStack_d0 + -2);
  puStack_118 = (undefined1 *)((int)pCStack_cc + 10);
  pCStack_11c = (CWnd *)&stack0xffffff3c;
  puStack_120 = (undefined2 *)0x4341e7;
  (*pcVar17)();
  iStack_f0 = (int)pCStack_cc - (int)pCStack_d4;
  pLStack_ec = (LONG *)((int)pCStack_d0 - (int)pCStack_d8);
  puStack_120 = (undefined2 *)0x0;
  pCStack_a4 = pCStack_d4;
  pCStack_fc = *(CWnd **)(param_1 + 0x5634);
  puStack_128 = &stack0xffffff58;
  uStack_12c = 0x5000000b;
  pCStack_124 = param_1;
  pCVar20 = pCStack_d8;
  pCVar14 = pCStack_d4;
  (**(code **)(*(int *)(param_1 + 0x50d4) + 0x13c))();
  pCStack_140 = pCStack_100;
  iStack_13c = (int)puStack_104;
  FUN_0045e2e0(pCStack_cc,iVar26);
  uVar24 = DAT_00658114;
  uVar9 = DAT_0065810c;
  *(undefined4 *)(param_1 + 0x5170) = DAT_00658110;
  *(undefined4 *)(param_1 + 0x5174) = uVar9;
  *(undefined4 *)(param_1 + 0x5178) = uVar24;
  *(undefined4 *)(param_1 + 0x5194) = 0;
  if (DAT_0065151c != 0) {
    *(undefined ***)(param_1 + 0x5234) = &PTR_vftable_00651518;
  }
  *(undefined4 *)(param_1 + 0x523c) = DAT_0065828c;
  iVar7 = DAT_00658108;
  pCStack_100 = (CWnd *)&iStack_13c;
  iStack_13c = DAT_00658108;
  *(int *)(param_1 + 0x5174) = DAT_00658108;
  pCStack_140 = (CWnd *)&DAT_00610fe0;
  *(int *)(param_1 + 0x5170) = iVar7;
  *(int *)(param_1 + 0x5178) = iVar7;
  FUN_004035b0();
  pCStack_140 = (CWnd *)0x434302;
  FUN_0045e4a0();
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x522c));
  *(undefined ***)(param_1 + 0x5234) = &PTR_vftable_00651520;
  iStack_13c = 0x434329;
  GetWindowRect(*(HWND *)(param_1 + 0x4080),(LPRECT)&stack0xffffff44);
  CWnd::ScreenToClient(param_1,(tagRECT *)&stack0xffffff44);
  iStack_f0 = iVar13;
  pCStack_f4 = pCVar14;
  pCStack_f8 = pCVar20;
  pCStack_fc = pCVar22;
  iVar7 = iStack_f0 + 0x31;
  pCVar20 = pCStack_fc + 0x45;
  iStack_13c = iStack_f0 + 0x19;
  pCStack_140 = pCStack_fc + 0x2d;
  (*pcVar17)(&pCStack_fc);
  (**(code **)(*(int *)(param_1 + 0x557c) + 0x13c))(0x68,param_1);
  CWnd::MoveWindow(param_1 + 0x557c,(int)puStack_118,(int)pCStack_114,
                   (int)pCStack_110 - (int)puStack_118,(int)pCStack_10c - (int)pCStack_114,1);
  *(undefined4 *)(param_1 + 22000) = 0xff;
  InvalidateRect(*(HWND *)(param_1 + 0x559c),(RECT *)0x0,1);
  *(undefined4 *)(param_1 + 0x5608) = 0x969696;
  *(undefined4 *)(param_1 + 0x5604) = 0x969696;
  *(undefined4 *)(param_1 + 0x560c) = 0;
  *(undefined4 *)(param_1 + 0x55f8) = 0;
  CWnd::ShowWindow(param_1 + 0x557c,5);
  iVar26 = (int)pCStack_114 + 0x12;
  ppCVar19 = (CSimpleStringT<wchar_t,0> **)((int)pCStack_110 + 0x1c);
  iVar16 = (int)pCStack_114 + 5;
  iVar13 = (int)pCStack_110 + 0xf;
  (*pcVar17)(&puStack_118);
  FUN_004674f0(param_1,L"check_nr.png",L"check_nr.png",param_1 + 0x53ec,1,0,uStack_12c,puStack_128,
               pCStack_124,puStack_120);
  (*pcVar17)(&uStack_12c,(*(int *)(param_1 + 0x5640) - *(int *)(param_1 + 0x5638)) + -0x25d,0x1ea,
             (*(int *)(param_1 + 0x5640) - *(int *)(param_1 + 0x5638)) + -0x8c,0x26c);
  pCStack_140 = pCStack_140 + 0x78;
  pCStack_108 = pCVar20 + 0x78;
  iVar12 = *(int *)(param_1 + 0x5634);
  pCStack_10c = (CWnd *)iStack_13c;
  pCVar20 = param_1 + 0xc4;
  pCStack_110 = pCStack_140;
  puStack_104 = (undefined *)iVar7;
  if (iVar12 != 0) {
    if (*(undefined4 **)(param_1 + 0x138) != (undefined4 *)0x0) {
      uVar9 = (**(code **)**(undefined4 **)(param_1 + 0x138))(0);
      FUN_004ad123(uVar9);
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    uVar9 = FUN_00467c30(iVar12,0,pCStack_110,pCStack_10c,pCStack_108,puStack_104);
    *(undefined4 *)(param_1 + 0x138) = uVar9;
  }
  pcVar2 = *(code **)(*(int *)pCVar20 + 0x54);
  iVar12 = 0x50000000;
  *(undefined4 *)(param_1 + 0x2ea0) = 0;
  (*pcVar2)(0,0,0x50000000,&pCStack_140,param_1,0x68,0);
  CWnd::MoveWindow(pCVar20,iVar13,iVar16,(int)ppCVar19 - iVar13,iVar26 - iVar16,1);
  FUN_00406020();
  CWnd::ShowWindow(pCVar20,5);
  (*pcVar17)(param_1 + 0x94,0x10e,4,0x226,0x1a);
  pCStack_114 = (CWnd *)0xffffffff;
  piVar6 = (int *)(iVar12 + -4);
  LOCK();
  iVar7 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar7 == 1 || iVar7 + -1 < 0) {
    (**(code **)(**(int **)(iVar12 + -0x10) + 4))((undefined4 *)(iVar12 + -0x10));
  }
  ExceptionList = pCStack_11c;
  return;
}


//==== FUNC 004345d0  FUN_004345d0 ====

void FUN_004345d0(int param_1)

{
  CTreeCtrl *this;
  int iVar1;
  HWND pHVar2;
  _TREEITEM *p_Var3;
  undefined4 *puVar4;
  CSimpleStringT<wchar_t,0> *this_00;
  int local_4;
  
  pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
  CWnd::FromHandle(pHVar2);
  FUN_0045e170();
  this = (CTreeCtrl *)(param_1 + 0x2eb0);
  FUN_0044e280();
  SendMessageW(*(HWND *)(param_1 + 0x2ed0),0x1101,0,-0x10000);
  FUN_00480070(this);
  local_4 = 0;
  this_00 = (CSimpleStringT<wchar_t,0> *)&DAT_0066fe48;
  do {
    iVar1 = *(int *)this_00;
    if (*(int *)(iVar1 + -0xc) == 0) break;
    if (1 < *(int *)(iVar1 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(this_00,*(int *)(iVar1 + -0xc));
    }
    for (puVar4 = *(undefined4 **)(param_1 + 0x2fc4);
        (puVar4 != (undefined4 *)0x0 && (*(int *)*puVar4 != -0x10000));
        puVar4 = (undefined4 *)puVar4[1]) {
    }
    p_Var3 = CTreeCtrl::InsertItem
                       (this,1,*(wchar_t **)this_00,0,0,0,0,0,(_TREEITEM *)0xffff0000,
                        (_TREEITEM *)0xffff0002);
    if (p_Var3 == (_TREEITEM *)0x0) {
LAB_004346da:
      FUN_00480070(this);
    }
    else {
      puVar4 = _malloc(0x24);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = p_Var3;
        puVar4[4] = local_4;
        puVar4[5] = 0;
        puVar4[1] = 0;
        puVar4[3] = 0;
        puVar4[7] = 0xf;
        puVar4[6] = 1;
        puVar4[8] = 0;
        FUN_0044e0a0(puVar4);
        InvalidateRect(*(HWND *)(param_1 + 0x2ed0),(RECT *)0x0,1);
        goto LAB_004346da;
      }
    }
    local_4 = local_4 + 1;
    this_00 = this_00 + 4;
  } while ((int)this_00 < 0x66fe5c);
  InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
  return;
}


//==== FUNC 00401c30  FUN_00401c30 ====

undefined4 * FUN_00401c30(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  if (in_EAX == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1 = _malloc(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *in_EAX;
    puVar1[1] = in_EAX[1];
    puVar1[2] = in_EAX[2];
    puVar1[3] = in_EAX[3];
    puVar1[4] = in_EAX[4];
    iVar2 = FUN_0044e0a0(puVar1);
    if (iVar2 != 0) {
      FUN_00401f00();
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}


//==== FUNC 00401c90  FUN_00401c90 ====

undefined4 * FUN_00401c90(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int unaff_EDI;
  
  if ((-1 < unaff_EDI) && (in_EAX != (undefined4 *)0x0)) {
    puVar1 = _malloc(0x14);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *in_EAX;
      puVar1[1] = in_EAX[1];
      puVar1[2] = in_EAX[2];
      puVar1[3] = in_EAX[3];
      puVar1[4] = in_EAX[4];
      iVar2 = FUN_0044e100();
      if (iVar2 != 0) {
        FUN_00401f00();
        return puVar1;
      }
    }
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}


//==== FUNC 0043f770  FUN_0043f770 ====

void FUN_0043f770(int param_1,CTreeCtrl *param_2)

{
  ushort *puVar1;
  _TREEITEM *p_Var2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int local_4;
  
  FUN_0044e280();
  SendMessageW(*(HWND *)(param_2 + 0x20),0x1101,0,-0x10000);
  FUN_00480070(param_2);
  puVar1 = (ushort *)(param_1 + 0x5c);
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      if ((*puVar1 == 0) && (*(int *)(puVar1 + 2) == 0)) {
        return;
      }
      uVar4 = (uint)*puVar1;
      if ((((uVar4 == 0xf5) || (uVar4 == 0xf6)) || (uVar4 == 0xf8)) || (uVar4 == 0xf9)) {
        uVar5 = *(uint *)(puVar1 + 2) & 0xffffff | *(int *)(puVar1 + 4) << 0x18;
      }
      else {
        uVar5 = (puVar1[1] & 1) << 0x18 | *(uint *)(puVar1 + 2) & 0xffffff;
        uVar4 = FUN_00482590();
        uVar4 = uVar4 & 0xff;
      }
      for (puVar3 = *(undefined4 **)(param_2 + 0x114);
          (puVar3 != (undefined4 *)0x0 && (*(int *)*puVar3 != -0x10000));
          puVar3 = (undefined4 *)puVar3[1]) {
      }
      p_Var2 = CTreeCtrl::InsertItem
                         (param_2,1,(wchar_t *)0x0,0,0,0,0,0,(_TREEITEM *)0xffff0000,
                          (_TREEITEM *)0xffff0002);
      if (p_Var2 == (_TREEITEM *)0x0) {
LAB_0043f8ae:
        FUN_00480070(param_2);
      }
      else {
        puVar3 = _malloc(0x24);
        if (puVar3 != (undefined4 *)0x0) {
          puVar3[5] = uVar5;
          *puVar3 = p_Var2;
          puVar3[4] = uVar4;
          puVar3[1] = 0;
          puVar3[3] = 0;
          puVar3[7] = 0;
          puVar3[6] = 1;
          puVar3[8] = 0;
          FUN_0044e0a0(puVar3);
          InvalidateRect(*(HWND *)(param_2 + 0x20),(RECT *)0x0,1);
          goto LAB_0043f8ae;
        }
      }
      puVar1 = puVar1 + 6;
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x58));
  }
  return;
}


//==== FUNC 0043d8f0  FUN_0043d8f0 ====

void __thiscall FUN_0043d8f0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  CStringData *pCVar2;
  int iVar3;
  LRESULT LVar4;
  _TREEITEM *p_Var5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_d5c [3];
  byte bStack_d59;
  uint uStack_d58;
  undefined4 *local_d54;
  int *piStack_d50;
  uint auStack_d4c [5];
  undefined1 auStack_d38 [3248];
  undefined4 uStack_88;
  uint uStack_5c;
  undefined2 local_58;
  undefined1 local_56 [58];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005ddb5b;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)auStack_d5c;
  ExceptionList = &local_14;
  local_d54 = param_1;
  if ((DAT_0066a21c != (int *)0x0) && (DAT_0066a214 == 0)) {
    (**(code **)(*DAT_0066a21c + 0x60))();
    if (DAT_0066a21c != (int *)0x0) {
      (**(code **)(*DAT_0066a21c + 4))();
    }
    DAT_0066a21c = (int *)0x0;
  }
  if (param_3 == 1) {
    local_58 = 0;
    _memset(local_56,0,0x3a);
    local_d54 = (undefined4 *)&stack0xfffff290;
    pCVar2 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(DAT_0066fbb4 + -0x10));
    puVar6 = param_1;
    *local_d54 = pCVar2 + 0x10;
    iVar3 = FUN_00449250(puVar6);
    if (iVar3 != 0) {
      if (param_2 == 0) {
        FUN_0043e280();
      }
      else {
        if ((param_2 != 1) && (param_2 != 2)) goto LAB_0043dec1;
        FUN_0043e140(&local_58);
      }
      iVar3 = FUN_0043e7a0();
      param_1[0x244] = (uint)(iVar3 == 0);
      InvalidateRect((HWND)param_1[0x214],(RECT *)0x0,1);
    }
    goto LAB_0043dec1;
  }
  if (param_3 != 2) goto LAB_0043dec1;
  GetTickCount();
  FUN_005ad576();
  iVar3 = _rand();
  bStack_d59 = (char)(iVar3 % 0x29) + 0x28;
  LVar4 = SendMessageW((HWND)param_1[0x5ee],0x110a,9,0);
  for (puVar6 = (undefined4 *)param_1[0x62b]; puVar6 != (undefined4 *)0x0;
      puVar6 = (undefined4 *)puVar6[1]) {
    piStack_d50 = (int *)*puVar6;
    if (*piStack_d50 == LVar4) goto LAB_0043da95;
  }
  piStack_d50 = (int *)0x0;
LAB_0043da95:
  piVar1 = piStack_d50;
  uStack_d58 = 0;
  if (param_2 == 0) {
    auStack_d4c[0] = 0;
    auStack_d4c[1] = 0;
    auStack_d4c[2] = 0;
    auStack_d4c[3] = 0;
    auStack_d4c[4] = 0;
    FUN_00446780(auStack_d38);
    uStack_c = 0;
    uStack_88 = 4;
    FID_conflict_operator_();
    iVar3 = FUN_004b79eb();
    if ((iVar3 != 1) || (uStack_5c == 0)) {
      uStack_c = 0xffffffff;
      FUN_00446a20();
      goto LAB_0043dec1;
    }
    bVar8 = (uStack_5c & 1) != 0;
    if (bVar8) {
      auStack_d4c[0] = 0xa2;
    }
    uStack_d58 = (uint)bVar8;
    if ((uStack_5c & 2) != 0) {
      auStack_d4c[uStack_d58] = 0xa0;
      uStack_d58 = uStack_d58 + 1;
    }
    if ((uStack_5c & 4) != 0) {
      auStack_d4c[uStack_d58] = 0xa4;
      uStack_d58 = uStack_d58 + 1;
    }
    if ((uStack_5c & 8) != 0) {
      auStack_d4c[uStack_d58] = 0x5b;
      uStack_d58 = uStack_d58 + 1;
    }
    auStack_d4c[uStack_d58] = uStack_5c >> 8 & 0xff;
    uStack_d58 = uStack_d58 + 1;
    uVar7 = (uint)bStack_d59;
    if (piVar1 == (int *)0x0) {
      for (puVar6 = (undefined4 *)param_1[0x62b];
          (puVar6 != (undefined4 *)0x0 && (*(int *)*puVar6 != -0x10000));
          puVar6 = (undefined4 *)puVar6[1]) {
      }
      p_Var5 = CTreeCtrl::InsertItem
                         ((CTreeCtrl *)(param_1 + 0x5e6),1,(wchar_t *)0x0,0,0,0,0,0,
                          (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
      if (p_Var5 != (_TREEITEM *)0x0) {
        puVar6 = _malloc(0x24);
        if (puVar6 == (undefined4 *)0x0) goto LAB_0043dd40;
        puVar6[5] = uVar7 | 0x1000000;
        *puVar6 = p_Var5;
        puVar6[4] = auStack_d4c[0];
        puVar6[1] = 0;
        puVar6[3] = 0;
        puVar6[7] = 0;
        puVar6[6] = 1;
        puVar6[8] = 0;
        FUN_0044e0a0();
        InvalidateRect((HWND)param_1[0x5ee],(RECT *)0x0,1);
      }
      FUN_00480070();
    }
    else {
      FUN_0047f4f0(auStack_d4c[0]);
    }
LAB_0043dd40:
    iVar3 = 1;
    uVar7 = uStack_d58;
    if (1 < (int)uStack_d58) {
      do {
        _rand();
        FUN_0047f4f0(auStack_d4c[iVar3]);
        iVar3 = iVar3 + 1;
        uVar7 = uStack_d58;
      } while (iVar3 < (int)uStack_d58);
    }
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      _rand();
      FUN_0047f4f0(auStack_d4c[uVar7]);
    }
    uStack_c = 0xffffffff;
    FUN_00446a20();
  }
  else {
    if ((param_2 < 0xf0) || (0xf4 < param_2)) {
      if ((param_2 == 0xf5) || (param_2 == 0xf6)) {
        uStack_d58 = bStack_d59 | 0x50000;
      }
      else if ((param_2 == 0xf8) || (param_2 == 0xf9)) {
        uStack_d58 = bStack_d59 | 0x10000;
      }
      if (piStack_d50 == (int *)0x0) {
        for (puVar6 = (undefined4 *)param_1[0x62b];
            (puVar6 != (undefined4 *)0x0 && (*(int *)*puVar6 != -0x10000));
            puVar6 = (undefined4 *)puVar6[1]) {
        }
        p_Var5 = CTreeCtrl::InsertItem
                           ((CTreeCtrl *)(param_1 + 0x5e6),1,(wchar_t *)0x0,0,0,0,0,0,
                            (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
        if (p_Var5 != (_TREEITEM *)0x0) {
          puVar6 = _malloc(0x24);
          if (puVar6 == (undefined4 *)0x0) goto LAB_0043deaf;
          puVar6[4] = param_2;
          *puVar6 = p_Var5;
          puVar6[5] = uStack_d58;
          puVar6[1] = 0;
          puVar6[3] = 0;
          puVar6[7] = 0;
          puVar6[6] = 1;
          puVar6[8] = 0;
          FUN_0044e0a0();
          InvalidateRect((HWND)param_1[0x5ee],(RECT *)0x0,1);
        }
        FUN_00480070();
        goto LAB_0043deaf;
      }
    }
    else {
      uVar7 = (uint)bStack_d59;
      if (piStack_d50 == (int *)0x0) {
        for (puVar6 = (undefined4 *)param_1[0x62b];
            (puVar6 != (undefined4 *)0x0 && (*(int *)*puVar6 != -0x10000));
            puVar6 = (undefined4 *)puVar6[1]) {
        }
        p_Var5 = CTreeCtrl::InsertItem
                           ((CTreeCtrl *)(param_1 + 0x5e6),1,(wchar_t *)0x0,0,0,0,0,0,
                            (_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
        if (p_Var5 != (_TREEITEM *)0x0) {
          puVar6 = _malloc(0x24);
          if (puVar6 == (undefined4 *)0x0) goto LAB_0043de93;
          puVar6[5] = uVar7 | 0x1000000;
          *puVar6 = p_Var5;
          puVar6[4] = param_2;
          puVar6[1] = 0;
          puVar6[3] = 0;
          puVar6[7] = 0;
          puVar6[6] = 1;
          puVar6[8] = 0;
          FUN_0044e0a0();
          InvalidateRect((HWND)param_1[0x5ee],(RECT *)0x0,1);
        }
        FUN_00480070();
      }
      else {
        FUN_0047f4f0(param_2);
      }
LAB_0043de93:
      _rand();
    }
    FUN_0047f4f0(param_2);
  }
LAB_0043deaf:
  iVar3 = FUN_0043e7a0();
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x80000000;
  }
LAB_0043dec1:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_d5c);
  return;
}


//==== FUNC 0047f4f0  FUN_0047f4f0 ====

_TREEITEM * FUN_0047f4f0(undefined4 param_1,undefined4 param_2)

{
  _TREEITEM *in_EAX;
  _TREEITEM *p_Var1;
  undefined4 *puVar2;
  CTreeCtrl *unaff_EDI;
  
  if (((in_EAX != (_TREEITEM *)0x0) && (in_EAX != (_TREEITEM *)0xffff0000)) &&
     (in_EAX != (_TREEITEM *)0xffff0002)) {
    p_Var1 = (_TREEITEM *)SendMessageW(*(HWND *)(unaff_EDI + 0x20),0x110a,3,(LPARAM)in_EAX);
    if (p_Var1 == (_TREEITEM *)0x0) {
      p_Var1 = (_TREEITEM *)0xffff0000;
    }
    p_Var1 = CTreeCtrl::InsertItem(unaff_EDI,1,(wchar_t *)0x0,0,0,0,0,0,p_Var1,in_EAX);
    if (p_Var1 != (_TREEITEM *)0x0) {
      puVar2 = _malloc(0x24);
      if (puVar2 == (undefined4 *)0x0) {
        return (_TREEITEM *)0x0;
      }
      *puVar2 = p_Var1;
      puVar2[4] = param_1;
      puVar2[5] = param_2;
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2[6] = 1;
      puVar2[7] = 0;
      puVar2[8] = 0;
      FUN_0044e0a0(puVar2);
      InvalidateRect(*(HWND *)(unaff_EDI + 0x20),(RECT *)0x0,1);
    }
    FUN_00480070(unaff_EDI);
    return p_Var1;
  }
  return (_TREEITEM *)0x0;
}


//==== FUNC 0043f8e0  FUN_0043f8e0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 * FUN_0043f8e0(undefined4 *param_1,int param_2)

{
  size_t _Size;
  short sVar1;
  int *piVar2;
  undefined4 *_Dst;
  LRESULT lParam;
  int *piVar3;
  HKL pHVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  byte local_2f9c;
  int local_2f98;
  undefined2 local_2f94;
  undefined1 local_2f92 [2];
  uint local_2f90 [3043];
  undefined4 uStack_4;
  
  uStack_4 = 0x43f8ea;
  _Dst = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    local_2f94 = 0;
    _memset(local_2f92,0,0x2f92);
    local_2f98 = 0;
    lParam = SendMessageW(*(HWND *)(param_2 + 0x20),0x110a,4,-0x10000);
    puVar7 = local_2f90;
    while (piVar3 = *(int **)(param_2 + 0x114), piVar3 != (int *)0x0) {
      while (piVar2 = (int *)*piVar3, *piVar2 != lParam) {
        piVar3 = (int *)piVar3[1];
        if (piVar3 == (int *)0x0) goto LAB_0043fa43;
      }
      sVar1 = (short)piVar2[4];
      local_2f9c = (byte)sVar1;
      pHVar4 = GetKeyboardLayout(0);
      uVar5 = (uint)pHVar4 & 0xff;
      if (uVar5 == 7) {
        local_2f9c = FUN_00481fc0();
      }
      else if (uVar5 == 0xc) {
        local_2f9c = FUN_004820d0();
      }
      else if (uVar5 == 10) {
        local_2f9c = FUN_00482330();
      }
      else if (uVar5 == 0x1f) {
        local_2f9c = FUN_00482470();
      }
      uVar5 = piVar2[5];
      *(ushort *)(puVar7 + -1) = (ushort)local_2f9c;
      *puVar7 = uVar5 & 0xffffff;
      if ((((sVar1 == 0xf5) || (sVar1 == 0xf6)) || (sVar1 == 0xf8)) || (sVar1 == 0xf9)) {
        puVar7[1] = (int)uVar5 >> 0x18 & 0xff;
      }
      else {
        *(ushort *)((int)puVar7 + -2) = (ushort)(byte)(uVar5 >> 0x18);
      }
      local_2f98 = local_2f98 + 1;
      puVar7 = puVar7 + 3;
      if ((0x3f6 < local_2f98) ||
         (lParam = SendMessageW(*(HWND *)(param_2 + 0x20),0x110a,1,lParam), lParam == 0)) break;
    }
LAB_0043fa43:
    _Size = local_2f98 * 0xc + 0x68;
    _Dst = _malloc(_Size);
    if (_Dst == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    _memset(_Dst,0,_Size);
    puVar8 = _Dst;
    for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *param_1;
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 1;
    }
    _Dst[0x16] = local_2f98;
    _memcpy(_Dst + 0x17,&local_2f94,local_2f98 * 0xc);
  }
  return _Dst;
}


//==== FUNC 0043e650  FUN_0043e650 ====

void __fastcall FUN_0043e650(int param_1)

{
  size_t _Size;
  int *piVar1;
  int *piVar2;
  void *_Src;
  LRESULT LVar3;
  void *_Dst;
  undefined4 uVar4;
  int iVar5;
  int local_44;
  wchar_t local_40 [30];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_44;
  _Src = (void *)FUN_0043e7a0();
  if (_Src != (void *)0x0) {
    LVar3 = SendMessageW(*(HWND *)(param_1 + 0x14f0),0x110a,9,0);
    for (piVar1 = *(int **)(param_1 + 0x15e4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      if (*piVar2 == LVar3) {
        local_44 = piVar2[4];
        if (piVar2[6] != 2) {
          SendMessageW(*(HWND *)(param_1 + 0x14f0),0x110a,3,*piVar2);
          iVar5 = FUN_0047f8f0();
          if (iVar5 == 0) {
            local_44 = -0xff00;
          }
          else {
            local_44 = *(int *)(iVar5 + 0x10);
          }
        }
        goto LAB_0043e6ee;
      }
    }
    local_44 = -0xff00;
LAB_0043e6ee:
    __snwprintf_s(local_40,0x1e,0x1d,L"%s - copy",(int)_Src + 0x14);
    _Size = *(int *)((int)_Src + 0x58) * 0xc + 0x68;
    _Dst = _malloc(_Size);
    if (_Dst != (void *)0x0) {
      _memcpy(_Dst,_Src,_Size);
      _wcsncpy_s((wchar_t *)((int)_Dst + 0x14),0x1e,local_40,0xffffffff);
      uVar4 = FUN_00479770();
      *(uint *)((int)_Dst + 8) = *(uint *)((int)_Dst + 8) & 0x3fffffff;
      *(undefined4 *)((int)_Dst + 4) = uVar4;
      iVar5 = FUN_00479b20(_Dst);
      if (iVar5 != 0) {
        FUN_0043ea80(*(undefined4 *)(iVar5 + 4));
        FUN_0043f770(iVar5,param_1 + 0x1798);
      }
      _free(_Dst);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_44);
  return;
}


//==== FUNC 0043f5a0  FUN_0043f5a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043f5a0(int param_1,uint param_2)

{
  CTreeCtrl *this;
  int iVar1;
  int in_EAX;
  int iVar2;
  DWORD DVar3;
  int *piVar4;
  _TREEITEM *lParam;
  undefined4 *puVar5;
  uint uVar6;
  int local_4;
  
  if ((DAT_0066a1f8 == param_1) && (DAT_0066a1fc == param_2)) {
    return 0;
  }
  this = (CTreeCtrl *)(in_EAX + 0x1798);
  iVar2 = FUN_0043f520(this);
  if (iVar2 != 0) {
    FUN_0043f3e0();
    return 0;
  }
  DVar3 = GetTickCount();
  piVar4 = (int *)FUN_00466510();
  iVar1 = *(int *)(*piVar4 + -0xc);
  piVar4 = (int *)(local_4 + -4);
  LOCK();
  iVar2 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_4 + -0x10) + 4))((undefined4 *)(local_4 + -0x10));
  }
  if (iVar1 == 0) {
    return 0;
  }
  for (puVar5 = *(undefined4 **)(in_EAX + 0x18ac);
      (puVar5 != (undefined4 *)0x0 && (*(int *)*puVar5 != -0x10000));
      puVar5 = (undefined4 *)puVar5[1]) {
  }
  lParam = CTreeCtrl::InsertItem
                     (this,1,(wchar_t *)0x0,0,0,0,0,0,(_TREEITEM *)0xffff0000,
                      (_TREEITEM *)0xffff0002);
  if (lParam != (_TREEITEM *)0x0) {
    puVar5 = _malloc(0x24);
    if (puVar5 == (undefined4 *)0x0) {
      lParam = (_TREEITEM *)0x0;
      goto LAB_0043f6e0;
    }
    puVar5[5] = (~(param_2 >> 7) & 1) << 0x18;
    *puVar5 = lParam;
    puVar5[4] = param_1;
    puVar5[1] = 0;
    puVar5[3] = 0;
    puVar5[7] = 0;
    puVar5[6] = 1;
    puVar5[8] = 0;
    FUN_0044e0a0(puVar5);
    InvalidateRect(*(HWND *)(in_EAX + 0x17b8),(RECT *)0x0,1);
  }
  FUN_00480070(this);
LAB_0043f6e0:
  uVar6 = SendMessageW(*(HWND *)(in_EAX + 0x17b8),0x1105,0,0);
  if (1 < uVar6) {
    SendMessageW(*(HWND *)(in_EAX + 0x17b8),0x110a,2,(LPARAM)lParam);
    iVar2 = FUN_0047f8f0();
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x14) =
           *(uint *)(iVar2 + 0x14) ^ (DVar3 - _DAT_0066a200 ^ *(uint *)(iVar2 + 0x14)) & 0xffffff;
    }
  }
  SendMessageW(*(HWND *)(in_EAX + 0x17b8),0x1114,0,(LPARAM)lParam);
  FUN_00480070(this);
  _DAT_0066a200 = DVar3;
  DAT_0066a1f8 = param_1;
  DAT_0066a1fc = param_2;
  return 1;
}


//==== FUNC 0044aec0  FUN_0044aec0 ====

void FUN_0044aec0(int param_1)

{
  CTreeCtrl *this;
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  _TREEITEM *p_Var3;
  undefined4 *puVar4;
  CSimpleStringT<wchar_t,0> *this_00;
  int iVar5;
  
  this = (CTreeCtrl *)(in_EAX + 0x74);
  FUN_0044e280();
  SendMessageW(*(HWND *)(in_EAX + 0x94),0x1101,0,-0x10000);
  FUN_00480070(this);
  iVar5 = 0;
  this_00 = (CSimpleStringT<wchar_t,0> *)(in_EAX + 0x67e8);
  do {
    iVar1 = *(int *)this_00;
    if (*(int *)(iVar1 + -0xc) == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0x2d38) & 1 << ((byte)iVar5 & 0x1f)) == 0) {
      if (1 < *(int *)(iVar1 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork(this_00,*(int *)(iVar1 + -0xc));
      }
      uVar2 = DAT_00658b30;
      for (puVar4 = *(undefined4 **)(in_EAX + 0x188);
          (puVar4 != (undefined4 *)0x0 && (*(int *)*puVar4 != -0x10000));
          puVar4 = (undefined4 *)puVar4[1]) {
      }
      p_Var3 = CTreeCtrl::InsertItem
                         (this,1,*(wchar_t **)this_00,0,0,0,0,0,(_TREEITEM *)0xffff0000,
                          (_TREEITEM *)0xffff0002);
      if (p_Var3 != (_TREEITEM *)0x0) {
        puVar4 = _malloc(0x24);
        if (puVar4 == (undefined4 *)0x0) goto LAB_0044afd0;
        *puVar4 = p_Var3;
        puVar4[4] = iVar5;
        puVar4[5] = 0;
        puVar4[1] = 0;
        puVar4[3] = 0;
        puVar4[7] = uVar2;
        puVar4[6] = 1;
        puVar4[8] = 0;
        FUN_0044e0a0(puVar4);
        InvalidateRect(*(HWND *)(in_EAX + 0x94),(RECT *)0x0,1);
      }
      FUN_00480070(this);
    }
LAB_0044afd0:
    iVar5 = iVar5 + 1;
    this_00 = this_00 + 4;
    if (9 < iVar5) {
      return;
    }
  } while( true );
}


//==== FUNC 004115f0  FUN_004115f0 ====

void __fastcall FUN_004115f0(LPCWSTR param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  LPCWSTR pWVar3;
  char cVar4;
  void *_Dst;
  UINT UVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  size_t sVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  int *piVar19;
  wchar_t *lpText;
  undefined4 local_d0c;
  LPCWSTR local_d08;
  int local_d04;
  int local_d00;
  int local_cfc [30];
  undefined1 local_c84;
  undefined4 local_c83;
  undefined4 local_c7f;
  undefined4 local_c7b;
  undefined4 local_c77;
  undefined4 local_c73;
  undefined4 local_c6f;
  undefined4 local_c6b;
  undefined2 local_c67;
  undefined1 local_c65;
  int local_c64 [10];
  WCHAR local_c3c [1040];
  WCHAR local_41c [260];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_0064f674 ^ (uint)&local_d0c;
  local_c84 = 0;
  local_c83 = 0;
  local_c7f = 0;
  local_c7b = 0;
  local_c77 = 0;
  local_c73 = 0;
  local_c6f = 0;
  local_c6b = 0;
  local_c67 = 0;
  local_c65 = 0;
  local_d08 = param_1;
  local_d04 = param_2;
  if (*(int *)(param_2 + 0x24) == 0) {
    _Dst = _malloc(0x3484);
    *(void **)(param_2 + 0x24) = _Dst;
    if (_Dst == (void *)0x0) goto LAB_00413217;
    _memset(_Dst,0,0x3484);
  }
  iVar11 = *(int *)(param_2 + 0x24);
  iVar17 = iVar11 + 0x18;
  GetPrivateProfileStringW(L"OPT",L"UID",(LPCWSTR)0x0,(LPWSTR)(param_2 + 0xb2),0xf,param_1);
  UVar5 = GetPrivateProfileIntW(L"OPT",L"FwVerNeedToUpdate",0,param_1);
  *(UINT *)(param_2 + 0x2d8) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ForceUpdate",0,param_1);
  *(UINT *)(param_2 + 0x2dc) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MacroBufferSize",0x1000,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 4) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxLoopCnt",0,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 0xc) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxDelay",0,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 0x10) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxAction",0,param_1);
  *(UINT *)(*(int *)(param_2 + 0x24) + 0x14) = UVar5;
  GetPrivateProfileStringW(L"OPT",L"clrKeyOv",(LPCWSTR)0x0,local_41c,0x104,param_1);
  if (local_41c[0] == L'\0') {
    uVar6 = 0xffffff;
  }
  else {
    local_d0c = (int *)((uint)local_d0c & 0xff000000);
    FUN_00465980(local_41c,3);
    uVar6 = (uint)local_d0c & 0xffffff;
    param_1 = local_d08;
  }
  *(uint *)(iVar11 + 0x2d18) = uVar6;
  GetPrivateProfileStringW(L"OPT",L"clrKeyDn",(LPCWSTR)0x0,local_41c,0x104,param_1);
  if (local_41c[0] == L'\0') {
    uVar6 = 0xffffff;
  }
  else {
    local_d0c = (int *)((uint)local_d0c & 0xff000000);
    FUN_00465980(local_41c,3);
    uVar6 = (uint)local_d0c & 0xffffff;
    param_1 = local_d08;
  }
  *(uint *)(iVar11 + 0x2d1c) = uVar6;
  GetPrivateProfileStringW(L"OPT",L"clrKeyHasFunc",(LPCWSTR)0x0,local_41c,0x104,param_1);
  if (local_41c[0] == L'\0') {
    uVar6 = 0x1d45e8;
  }
  else {
    local_d0c = (int *)((uint)local_d0c & 0xff000000);
    FUN_00465980(local_41c,3);
    uVar6 = (uint)local_d0c & 0xffffff;
    param_1 = local_d08;
  }
  *(uint *)(iVar11 + 0x2d20) = uVar6;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowSleep",1,param_1);
  *(char *)(iVar11 + 0x2da4) = (char)UVar5;
  GetPrivateProfileStringW(L"OPT",L"SleepUI",(LPCWSTR)0x0,local_c3c,0x410,param_1);
  if (local_c3c[0] == L'\0') {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_004658b0(local_c3c,0x10);
    param_1 = local_d08;
  }
  *(char *)(iVar11 + 0x2da5) = cVar4;
  if (cVar4 == '\0') {
    iVar7 = *(int *)(param_2 + 0x18);
    *(undefined1 *)(iVar11 + 0x2da5) = 10;
    if (iVar7 == 0x16) {
      iVar7 = 0;
      local_d0c = (int *)(1 - (iVar11 + 0x2dec));
      puVar12 = (undefined4 *)(iVar11 + 0x2dac);
      do {
        pcVar1 = (char *)(iVar7 + 0x2dd4 + iVar17);
        *puVar12 = (char *)((int)local_d0c + (int)pcVar1);
        *pcVar1 = (char)iVar7 + '\x01';
        iVar7 = iVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar7 < (int)(uint)*(byte *)(iVar11 + 0x2da5));
    }
    else {
      local_c64[0] = 0x1e;
      local_c64[1] = 0x3c;
      local_c64[2] = 0x5a;
      local_c64[3] = 0x78;
      local_c64[4] = 0xb4;
      local_c64[5] = 0xf0;
      local_c64[6] = 300;
      local_c64[7] = 600;
      local_c64[8] = 900;
      local_c64[9] = 0x4b0;
      iVar7 = 0;
      local_d0c = (int *)(iVar11 + 0x2dac);
      do {
        iVar13 = local_c64[iVar7];
        piVar14 = local_d0c + 1;
        *local_d0c = iVar13;
        *(char *)(iVar7 + 0x2dd4 + iVar17) =
             ((char)(iVar13 / 0x1e) + (char)(iVar13 >> 0x1f)) -
             (char)((longlong)iVar13 * 0x88888889 >> 0x3f);
        iVar7 = iVar7 + 1;
        local_d0c = piVar14;
      } while (iVar7 < (int)(uint)*(byte *)(iVar11 + 0x2da5));
    }
  }
  else {
    GetPrivateProfileStringW(L"OPT",L"SleepHW",(LPCWSTR)0x0,local_c3c,0x410,param_1);
    if (local_c3c[0] == L'\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00465980(local_c3c,0x10);
      param_1 = local_d08;
    }
    if (uVar6 != *(byte *)(iVar11 + 0x2da5)) {
      MessageBoxW((HWND)0x0,L"SleepUI!=SleepHW",L"Warning",0);
    }
  }
  GetPrivateProfileStringW(L"OPT",L"Speed",(LPCWSTR)0x0,local_c3c,0x410,param_1);
  iVar7 = 0;
  if (local_c3c[0] != L'\0') {
    iVar7 = FUN_00465980(local_c3c,8);
    param_1 = local_d08;
  }
  *(int *)(iVar11 + 0x2dfc) = iVar7;
  if (iVar7 < 1) {
    local_d0c = (int *)0x4030201;
    *(undefined4 *)(iVar11 + 0x2e00) = 0x4030201;
    *(undefined4 *)(iVar11 + 0x2e08) = 0x4030201;
    *(undefined4 *)(iVar11 + 0x2dfc) = 4;
  }
  else {
    GetPrivateProfileStringW(L"OPT",L"SpeedHW",(LPCWSTR)0x0,local_c3c,0x410,param_1);
    if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,8), iVar7 < 1)) {
      *(undefined4 *)(iVar11 + 0x2e08) = *(undefined4 *)(iVar11 + 0x2e00);
      *(undefined4 *)(iVar11 + 0x2e0c) = *(undefined4 *)(iVar11 + 0x2e04);
    }
    else if (iVar7 != *(int *)(iVar11 + 0x2dfc)) {
      MessageBoxW((HWND)0x0,L"SpeedUI!=SpeedHW",L"Warning",0);
    }
  }
  GetPrivateProfileStringW(L"OPT",L"Light",(LPCWSTR)0x0,local_c3c,0x410,local_d08);
  iVar7 = 0;
  if (local_c3c[0] != L'\0') {
    iVar7 = FUN_00465980(local_c3c,0x14);
  }
  *(int *)(iVar11 + 0x2e10) = iVar7;
  if (iVar7 < 1) {
    iVar7 = 0;
    do {
      *(char *)((int)local_c64 + iVar7) = (char)iVar7 + '\x01';
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x14);
    *(int *)(iVar11 + 0x2e14) = local_c64[0];
    *(int *)(iVar11 + 0x2e28) = local_c64[0];
    *(int *)(iVar11 + 0x2e18) = local_c64[1];
    *(int *)(iVar11 + 0x2e2c) = local_c64[1];
    *(int *)(iVar11 + 0x2e1c) = local_c64[2];
    *(int *)(iVar11 + 0x2e30) = local_c64[2];
    *(int *)(iVar11 + 0x2e20) = local_c64[3];
    *(int *)(iVar11 + 0x2e34) = local_c64[3];
    *(int *)(iVar11 + 0x2e24) = local_c64[4];
    *(int *)(iVar11 + 0x2e38) = local_c64[4];
    *(undefined4 *)(iVar11 + 0x2e10) = 0x14;
  }
  else {
    GetPrivateProfileStringW(L"OPT",L"LightHW",(LPCWSTR)0x0,local_c3c,0x410,local_d08);
    if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,0x14), iVar7 < 1)) {
      *(undefined4 *)(iVar11 + 0x2e28) = *(undefined4 *)(iVar11 + 0x2e14);
      *(undefined4 *)(iVar11 + 0x2e2c) = *(undefined4 *)(iVar11 + 0x2e18);
      *(undefined4 *)(iVar11 + 0x2e30) = *(undefined4 *)(iVar11 + 0x2e1c);
      *(undefined4 *)(iVar11 + 0x2e34) = *(undefined4 *)(iVar11 + 0x2e20);
      *(undefined4 *)(iVar11 + 0x2e38) = *(undefined4 *)(iVar11 + 0x2e24);
    }
    else if (iVar7 != *(int *)(iVar11 + 0x2e10)) {
      MessageBoxW((HWND)0x0,L"LightUI!=LightHW",L"Warning",0);
    }
  }
  pWVar3 = local_d08;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SideLightNum",5,local_d08);
  *(UINT *)(iVar11 + 0x2e3c) = UVar5;
  FUN_00465b00(0,L"ptKB");
  GetPrivateProfileStringW(L"OPT",L"LedParam",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] == L'\0') {
LAB_00412454:
    pbVar8 = (byte *)(iVar11 + 0x2fa3);
    iVar7 = 0x18;
    do {
      pbVar8[-1] = *(char *)(iVar11 + 0x2e10) - 1;
      *pbVar8 = (*(char *)(iVar11 + 0x2dfc) + -1) * '\x10' | 7;
      pbVar8 = pbVar8 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    iVar7 = FUN_00465980(local_c3c,0x30);
    if (iVar7 < 1) goto LAB_00412454;
    iVar13 = 0;
    if (0 < iVar7 / 2) {
      do {
        if (*(int *)(iVar11 + 0x2e10) + -1 < (int)(uint)*(byte *)(iVar11 + 0x2fa2 + iVar13)) {
          lpText = L"LedParam: wrong light >= pVar->nLightNum";
LAB_00411e4c:
          MessageBoxW((HWND)0x0,lpText,L"Error",0);
          break;
        }
        if (*(int *)(iVar11 + 0x2dfc) + -1 < (int)(uint)(*(byte *)(iVar13 + 0x2f8b + iVar17) >> 4))
        {
          lpText = L"LedParam: wrong speed >= pVar->nSpeedNum";
          goto LAB_00411e4c;
        }
        iVar13 = iVar13 + 2;
      } while (iVar13 < iVar7 / 2);
    }
  }
  pWVar3 = local_d08;
  GetPrivateProfileStringW(L"OPT",L"UnRectKey",(LPCWSTR)0x0,local_c3c,0x410,local_d08);
  if (((local_c3c[0] != L'\0') && (iVar7 = FUN_004658b0(local_c3c,0x1e), 0 < iVar7)) &&
     (iVar7 = iVar7 + -1, 3 < iVar7 / 2)) {
    iVar16 = 0;
    *(int *)(iVar11 + 0x2e58) = local_cfc[0];
    iVar13 = 1;
    if (1 < iVar7) {
      piVar14 = (int *)(iVar11 + 0x2e60);
      while (local_cfc[iVar13] != 0) {
        piVar14[-1] = local_cfc[iVar13];
        *piVar14 = local_cfc[iVar13 + 1];
        iVar16 = iVar16 + 1;
        piVar14 = piVar14 + 2;
        if ((7 < iVar16) || (iVar13 = iVar13 + 2, iVar7 <= iVar13)) break;
      }
    }
    if ((*(int *)(iVar11 + 0x2e5c) != *(int *)(iVar11 + 0x2e54 + iVar16 * 8)) ||
       (*(int *)(iVar11 + 0x2e60) != *(int *)(iVar11 + 0x2e58 + iVar16 * 8))) {
      MessageBoxW((HWND)0x0,L"EnterPt[0]!=EnterPt[Last] ",L"Error",0);
    }
  }
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowAutoDetect",0,pWVar3);
  *(short *)(iVar11 + 0x2d58) = (short)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"CfgVal",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d64) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"KbLayout",0,pWVar3);
  *(UINT *)(iVar11 + 0x2ea8) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"KbDrawType",0,pWVar3);
  *(UINT *)(iVar11 + 0x2eac) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"FillKeyWhenHasFunc",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d24) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"RespireType",0,pWVar3);
  *(UINT *)(iVar11 + 0x2ea0) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"KbLanguage",0,pWVar3);
  *(UINT *)(iVar11 + 0x2eb0) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SyncKB",1,pWVar3);
  *(char *)(iVar11 + 0x2f96) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"LightBarMusicCmd",0,pWVar3);
  *(char *)(iVar11 + 0x2f97) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowEffect",0xffffff,pWVar3);
  *(UINT *)(iVar11 + 0x2d34) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowLED",1,pWVar3);
  *(char *)(iVar11 + 0x2d38) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowMusic",1,pWVar3);
  *(char *)(iVar11 + 0x2d39) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowRtEffect",0,pWVar3);
  *(char *)(iVar11 + 0x2d3c) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowPower",0,pWVar3);
  *(char *)(iVar11 + 0x2d3a) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowPowerText",1,pWVar3);
  *(char *)(iVar11 + 0x2d3b) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowDebounce",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d40) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"RandomVal",7,pWVar3);
  *(char *)(iVar11 + 0x2fa1) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MusicUI",0,pWVar3);
  *(UINT *)(iVar11 + 0x2eb4) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxFnNum",0x30,pWVar3);
  *(char *)(iVar11 + 0x2f93) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MatrixLen",0x80,pWVar3);
  *(char *)(iVar11 + 0x2f94) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"CRC",1,pWVar3);
  *(char *)(iVar11 + 0x2f95) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"LayerMask",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d54) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SleepTime",0x78,pWVar3);
  *(UINT *)(iVar11 + 0x2da8) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"LedMask",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d44) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ChannelMask",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d4c) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MusicMask",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d50) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxEftKeyIndex",0,pWVar3);
  *(UINT *)(iVar11 + 0x2e9c) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"DefLedIndex",0,pWVar3);
  *(char *)(iVar11 + 0x2ebb) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"WheelMode",0,pWVar3);
  *(UINT *)(iVar11 + 0x2d9c) = UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"FnAlign",1,pWVar3);
  *(char *)(iVar11 + 0x2d5a) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowTapTip",0,pWVar3);
  *(char *)(iVar11 + 0x2d7f) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowSideLED",0,pWVar3);
  *(char *)(iVar11 + 0x2d81) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowDevTy",1,pWVar3);
  *(char *)(iVar11 + 0x2d82) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"RGB",1,pWVar3);
  *(char *)(iVar11 + 0x2d8b) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"FnNotToSet",1,pWVar3);
  *(char *)(iVar11 + 0x2d8c) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"IC2481",0,pWVar3);
  *(char *)(iVar11 + 0x2d8d) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"XYDirect",1,pWVar3);
  *(char *)(iVar11 + 0x2d8e) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SubFw",0,pWVar3);
  *(char *)(iVar11 + 0x2d8f) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"CmdReset",0,pWVar3);
  *(char *)(iVar11 + 0x2d90) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"VirtualKB",0,pWVar3);
  *(char *)(iVar11 + 0x2d91) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"RoundGrid",0,pWVar3);
  *(char *)(iVar11 + 0x2d92) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowGameTip",0,pWVar3);
  *(char *)(iVar11 + 0x2d93) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"DefSideLedIndex",0,pWVar3);
  *(char *)(iVar11 + 0x2d80) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"ShowKbOption",0,pWVar3);
  *(char *)(iVar11 + 0x2d94) = (char)UVar5;
  GetPrivateProfileStringW(L"OPT",L"ResetItem",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] != L'\0') {
    FUN_00465980(local_c3c,4);
  }
  GetPrivateProfileStringW(L"OPT",L"KeyLineStart",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] != L'\0') {
    FUN_00465980(local_c3c,6);
  }
  GetPrivateProfileStringW(L"OPT",L"KnobIndex",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] != L'\0') {
    FUN_00465980(local_c3c,4);
  }
  GetPrivateProfileStringW(L"OPT",L"NaviInx",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,8), iVar7 < 1)) {
    uVar6 = 0;
    do {
      *(char *)(uVar6 + 0x2d6b + iVar17) = (char)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
  }
  GetPrivateProfileStringW(L"OPT",L"LightBarLedPos",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if (local_c3c[0] == L'\0') {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_00465980(local_c3c,0x16);
  }
  *(char *)(iVar11 + 0x2d7e) = cVar4;
  if (cVar4 == '\0') {
    *(undefined1 *)(iVar11 + 0x2d7e) = 10;
    iVar7 = 0;
    do {
      *(char *)(iVar7 + 0x2d50 + iVar17) = (char)iVar7 + '\x01';
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(iVar11 + 0x2d7e));
  }
  *(undefined4 *)(iVar11 + 0x2e40) = 0xffffffff;
  *(undefined4 *)(iVar11 + 0x2e44) = 0xffffffff;
  *(undefined4 *)(iVar11 + 0x2e48) = 0xffffffff;
  *(undefined4 *)(iVar11 + 0x2e4c) = 0xffffffff;
  *(undefined4 *)(iVar11 + 0x2e50) = 0xffffffff;
  GetPrivateProfileStringW(L"OPT",L"KeyNotToSet",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] != L'\0') && (sVar9 = FUN_00465980(local_c3c,0x20), 0 < (int)sVar9)) {
    if (0x14 < sVar9) {
      sVar9 = 0x14;
    }
    if (0 < (int)sVar9) {
      _memcpy((void *)(iVar11 + 0x2e40),&local_c84,sVar9);
    }
  }
  *(undefined4 *)(iVar11 + 0x2e54) = 0xffffffff;
  GetPrivateProfileStringW(L"OPT",L"KeyNotToSetColor",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] != L'\0') && (sVar9 = FUN_00465980(local_c3c,0x20), 0 < (int)sVar9)) {
    if (4 < sVar9) {
      sVar9 = 4;
    }
    if (0 < (int)sVar9) {
      _memcpy((void *)(iVar11 + 0x2e54),&local_c84,sVar9);
    }
  }
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SendSysParam",0,pWVar3);
  *(short *)(iVar11 + 0x345c) = (short)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SyncMask",7,pWVar3);
  *(short *)(iVar11 + 0x345e) = (short)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"SendTimeOnOpenKB",0,pWVar3);
  *(char *)(iVar11 + 0x3460) = (char)UVar5;
  if (*(int *)(local_d04 + 0x310) != 0) {
    UVar5 = GetPrivateProfileIntW(L"OPT",L"RGBScreen",1,pWVar3);
    *(char *)(iVar11 + 0x3461) = (char)UVar5;
    UVar5 = GetPrivateProfileIntW(L"OPT",L"MaxScreenFrame",0x10,pWVar3);
    *(UINT *)(iVar11 + 0x347c) = UVar5;
    UVar5 = GetPrivateProfileIntW(L"OPT",L"LatticeW",1,pWVar3);
    *(char *)(iVar11 + 0x3462) = (char)UVar5;
    UVar5 = GetPrivateProfileIntW(L"OPT",L"DrawLatticeLine",1,pWVar3);
    *(char *)(iVar11 + 0x3463) = (char)UVar5;
    UVar5 = GetPrivateProfileIntW(L"OPT",L"DrawFrameTime",0,pWVar3);
    *(UINT *)(iVar11 + 0x3480) = UVar5;
    GetPrivateProfileStringW(L"OPT",L"siScreen",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
    if ((local_c3c[0] != L'\0') && (iVar7 = FUN_004658b0(local_c3c,2), 0 < iVar7)) {
      *(int *)(iVar11 + 0x3474) = local_cfc[0];
      *(int *)(iVar11 + 0x3478) = local_cfc[1];
    }
    GetPrivateProfileStringW(L"OPT",L"FrameViewPos",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
    if ((local_c3c[0] != L'\0') && (iVar7 = FUN_004658b0(local_c3c,3), 0 < iVar7)) {
      if (iVar7 != 3) {
        MessageBoxW((HWND)0x0,L"FrameViewPos只能有3个值",L"Error",0);
      }
      *(int *)(iVar11 + 0x3464) = local_cfc[0];
      *(int *)(iVar11 + 0x3468) = local_cfc[1];
      *(int *)(iVar11 + 0x346c) = local_cfc[2] + local_cfc[0];
    }
  }
  local_d0c = (int *)((uint)local_d0c & 0xff000000);
  GetPrivateProfileStringW(L"OPT",L"RGBIndex",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,3), iVar7 < 1)) {
    *(undefined1 *)(iVar11 + 0x2f98) = 2;
    *(undefined1 *)(iVar11 + 0x2f99) = 1;
    *(undefined1 *)(iVar11 + 0x2f9a) = 0;
  }
  else {
    bVar2 = local_d0c._2_1_;
    if ((uint)local_d0c._2_1_ + ((uint)local_d0c >> 8 & 0xff) + ((uint)local_d0c & 0xff) != 3) {
      MessageBoxW((HWND)0x0,L"R G B Index Error",L"Warning",0);
    }
    *(byte *)(iVar11 + 0x2f9a) = bVar2;
    *(undefined1 *)(iVar11 + 0x2f98) = (undefined1)local_d0c;
    *(undefined1 *)(iVar11 + 0x2f99) = local_d0c._1_1_;
  }
  GetPrivateProfileStringW(L"OPT",L"GameRGBIndex",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,3), iVar7 < 1)) {
    *(undefined1 *)(iVar11 + 0x2f9b) = 2;
    *(undefined1 *)(iVar11 + 0x2f9c) = 1;
    *(undefined1 *)(iVar11 + 0x2f9d) = 0;
  }
  else {
    bVar2 = local_d0c._2_1_;
    if ((uint)local_d0c._2_1_ + ((uint)local_d0c >> 8 & 0xff) + ((uint)local_d0c & 0xff) != 3) {
      MessageBoxW((HWND)0x0,L"clrGmKey RGB Index Error",L"Warning",0);
    }
    *(byte *)(iVar11 + 0x2f9d) = bVar2;
    *(undefined1 *)(iVar11 + 0x2f9b) = (undefined1)local_d0c;
    *(undefined1 *)(iVar11 + 0x2f9c) = local_d0c._1_1_;
  }
  GetPrivateProfileStringW(L"OPT",L"MusicRGBIndex",(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
  if ((local_c3c[0] == L'\0') || (iVar7 = FUN_00465980(local_c3c,3), iVar7 < 1)) {
    *(undefined1 *)(iVar11 + 0x2f9e) = *(undefined1 *)(iVar11 + 0x2f98);
    *(undefined1 *)(iVar11 + 0x2f9f) = *(undefined1 *)(iVar11 + 0x2f99);
    *(undefined1 *)(iVar11 + 0x2fa0) = *(undefined1 *)(iVar11 + 0x2f9a);
  }
  else {
    bVar2 = local_d0c._2_1_;
    if ((uint)local_d0c._2_1_ + ((uint)local_d0c >> 8 & 0xff) + ((uint)local_d0c & 0xff) != 3) {
      MessageBoxW((HWND)0x0,L"Music RGB Index Error",L"Warning",0);
    }
    *(byte *)(iVar11 + 0x2fa0) = bVar2;
    *(undefined1 *)(iVar11 + 0x2f9e) = (undefined1)local_d0c;
    *(undefined1 *)(iVar11 + 0x2f9f) = local_d0c._1_1_;
  }
  UVar5 = GetPrivateProfileIntW(L"OPT",L"GaoshouIndex",-1,pWVar3);
  *(char *)(iVar11 + 0x2ebc) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"GaoshouGroupNum",5,pWVar3);
  *(char *)(iVar11 + 0x2f8c) = (char)UVar5;
  UVar5 = GetPrivateProfileIntW(L"OPT",L"StartGp",0x20,pWVar3);
  *(char *)(iVar11 + 0x2f8e) = (char)UVar5;
  GetPrivateProfileStringW(L"OPT",L"clrGaoshou",(LPCWSTR)0x0,local_41c,0x104,pWVar3);
  if (local_41c[0] == L'\0') {
    uVar6 = 0xffffff;
  }
  else {
    local_d0c = (int *)((uint)local_d0c & 0xff000000);
    FUN_00465980(local_41c,3);
    uVar6 = (uint)local_d0c & 0xffffff;
  }
  iVar7 = 0;
  *(uint *)(iVar11 + 0x2f88) = uVar6;
  if (*(char *)(iVar11 + 0x2f8c) != '\0') {
    local_d0c = (int *)(iVar11 + 0x2ebd);
    do {
      iVar7 = iVar7 + 1;
      local_d00 = iVar7;
      __snwprintf_s(local_214,0x14,0x13,L"GaoshouKey%d",iVar7);
      GetPrivateProfileStringW(L"OPT",local_214,(LPCWSTR)0x0,local_c3c,0x410,pWVar3);
      if (local_c3c[0] != L'\0') {
        FUN_00465980(local_c3c,0x28);
        iVar7 = local_d00;
      }
      local_d0c = (int *)((int)local_d0c + 0x28);
    } while (iVar7 < (int)(uint)*(byte *)(iVar11 + 0x2f8c));
  }
  uVar10 = FUN_00413230(pWVar3,1);
  iVar7 = local_d04;
  *(undefined4 *)(iVar11 + 0x2d28) = uVar10;
  FUN_004135f0(local_d04);
  FUN_004135f0(iVar7);
  FUN_004135f0(iVar7);
  *(undefined1 *)(iVar11 + 0x2fd4) = 1;
  *(undefined1 *)(iVar11 + 0x2fd6) = 0;
  *(undefined1 *)(iVar11 + 0x2fd5) = 5;
  *(undefined1 *)(iVar11 + 0x2fd7) = 1;
  *(undefined1 *)(iVar11 + 0x2fd8) = 1;
  *(undefined1 *)(iVar11 + 0x2fd9) = 0;
  *(undefined1 *)(iVar11 + 0x2fda) = 1;
  *(undefined1 *)(iVar11 + 0x2fdb) = 1;
  local_c64[0] = 0xff;
  local_c64[1] = 0xff00;
  local_c64[2] = 0xff0000;
  local_c64[3] = 0xffff;
  local_c64[4] = 0xff00ff;
  local_c64[5] = 0xffff00;
  local_c64[6] = 0xffffff;
  local_c64[7] = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x2fdc);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x2ffc) = 1;
  *(undefined1 *)(iVar11 + 0x2ffe) = 1;
  *(undefined1 *)(iVar11 + 0x2ffd) = 7;
  *(undefined1 *)(iVar11 + 0x2fff) = 1;
  *(undefined1 *)(iVar11 + 0x3000) = 0;
  *(undefined1 *)(iVar11 + 0x3001) = 0;
  *(undefined1 *)(iVar11 + 0x3002) = 0;
  *(undefined1 *)(iVar11 + 0x3003) = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x3004);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x3024) = 1;
  *(undefined1 *)(iVar11 + 0x3026) = 2;
  *(undefined1 *)(iVar11 + 0x3025) = 0x11;
  *(undefined1 *)(iVar11 + 0x3027) = 1;
  *(undefined1 *)(iVar11 + 0x3028) = 1;
  *(undefined1 *)(iVar11 + 0x3029) = 0;
  *(undefined1 *)(iVar11 + 0x302a) = 1;
  *(undefined1 *)(iVar11 + 0x302b) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x302c);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x304c) = 1;
  *(undefined1 *)(iVar11 + 0x304e) = 3;
  *(undefined1 *)(iVar11 + 0x304d) = 0xc;
  *(undefined1 *)(iVar11 + 0x304f) = 1;
  *(undefined1 *)(iVar11 + 0x3050) = 1;
  *(undefined1 *)(iVar11 + 0x3051) = 0;
  *(undefined1 *)(iVar11 + 0x3052) = 1;
  *(undefined1 *)(iVar11 + 0x3053) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x3054);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x3074) = 1;
  *(undefined1 *)(iVar11 + 0x3076) = 4;
  *(undefined1 *)(iVar11 + 0x3075) = 1;
  *(undefined1 *)(iVar11 + 0x3077) = 0;
  *(undefined1 *)(iVar11 + 0x3078) = 1;
  *(undefined1 *)(iVar11 + 0x3079) = 0;
  *(undefined1 *)(iVar11 + 0x307a) = 1;
  *(undefined1 *)(iVar11 + 0x307b) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x307c);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x309c) = 1;
  *(undefined1 *)(iVar11 + 0x309e) = 5;
  *(undefined1 *)(iVar11 + 0x309d) = 3;
  *(undefined1 *)(iVar11 + 0x309f) = 1;
  *(undefined1 *)(iVar11 + 0x30a0) = 0;
  *(undefined1 *)(iVar11 + 0x30a1) = 0;
  *(undefined1 *)(iVar11 + 0x30a2) = 1;
  *(undefined1 *)(iVar11 + 0x30a3) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x30a4);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x30c4) = 1;
  *(undefined1 *)(iVar11 + 0x30c6) = 6;
  *(undefined1 *)(iVar11 + 0x30c5) = 2;
  *(undefined1 *)(iVar11 + 0x30c7) = 1;
  *(undefined1 *)(iVar11 + 0x30c8) = 0;
  *(undefined1 *)(iVar11 + 0x30c9) = 0;
  *(undefined1 *)(iVar11 + 0x30ca) = 0;
  *(undefined1 *)(iVar11 + 0x30cb) = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x30cc);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x30ec) = 1;
  *(undefined1 *)(iVar11 + 0x30ee) = 7;
  *(undefined1 *)(iVar11 + 0x30ed) = 0x13;
  *(undefined1 *)(iVar11 + 0x30ef) = 1;
  *(undefined1 *)(iVar11 + 0x30f0) = 1;
  *(undefined1 *)(iVar11 + 0x30f1) = 0;
  *(undefined1 *)(iVar11 + 0x30f2) = 1;
  *(undefined1 *)(iVar11 + 0x30f3) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x30f4);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x3114) = 1;
  *(undefined1 *)(iVar11 + 0x3116) = 8;
  *(undefined1 *)(iVar11 + 0x3115) = 0xf;
  *(undefined1 *)(iVar11 + 0x3117) = 1;
  *(undefined1 *)(iVar11 + 0x3118) = 1;
  *(undefined1 *)(iVar11 + 0x3119) = 0;
  *(undefined1 *)(iVar11 + 0x311a) = 1;
  *(undefined1 *)(iVar11 + 0x311b) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x311c);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x313c) = 1;
  *(undefined1 *)(iVar11 + 0x313e) = 9;
  *(undefined1 *)(iVar11 + 0x313d) = 0xd;
  *(undefined1 *)(iVar11 + 0x313f) = 1;
  *(undefined1 *)(iVar11 + 0x3140) = 0;
  *(undefined1 *)(iVar11 + 0x3141) = 0;
  *(undefined1 *)(iVar11 + 0x3142) = 0;
  *(undefined1 *)(iVar11 + 0x3143) = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x3144);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x3164) = 1;
  *(undefined1 *)(iVar11 + 0x3166) = 10;
  *(undefined1 *)(iVar11 + 0x3165) = 0x14;
  *(undefined1 *)(iVar11 + 0x3167) = 1;
  *(undefined1 *)(iVar11 + 0x3168) = 1;
  *(undefined1 *)(iVar11 + 0x3169) = 0;
  *(undefined1 *)(iVar11 + 0x316a) = 1;
  *(undefined1 *)(iVar11 + 0x316b) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x316c);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  *(undefined1 *)(iVar11 + 0x318c) = 1;
  *(undefined1 *)(iVar11 + 0x318e) = 0xb;
  *(undefined1 *)(iVar11 + 0x318d) = 0x10;
  *(undefined1 *)(iVar11 + 0x318f) = 1;
  *(undefined1 *)(iVar11 + 0x3190) = 1;
  *(undefined1 *)(iVar11 + 0x3191) = 0;
  *(undefined1 *)(iVar11 + 0x3192) = 0;
  *(undefined1 *)(iVar11 + 0x3193) = 0;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x3194);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  local_d0c = (int *)(iVar11 + 0x2fd5);
  *(undefined1 *)(iVar11 + 0x31b6) = 0xc;
  *(undefined1 *)(iVar11 + 0x31b4) = 1;
  *(undefined1 *)(iVar11 + 0x31b5) = 0x12;
  *(undefined1 *)(iVar11 + 0x31b7) = 1;
  *(undefined1 *)(iVar11 + 0x31b8) = 1;
  *(undefined1 *)(iVar11 + 0x31b9) = 0;
  *(undefined1 *)(iVar11 + 0x31ba) = 1;
  *(undefined1 *)(iVar11 + 0x31bb) = 1;
  piVar14 = local_c64;
  piVar19 = (int *)(iVar11 + 0x31bc);
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar19 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar19 = piVar19 + 1;
  }
  local_d00 = 0;
  local_d04 = 0xbf1;
  do {
    local_d00 = local_d00 + 1;
    __snwprintf_s(local_214,0x1e,0x1d,L"LedOpt%d",local_d00);
    GetPrivateProfileStringW(L"OPT",local_214,(LPCWSTR)0x0,local_c3c,0x410,local_d08);
    if ((local_c3c[0] != L'\0') && (iVar7 = FUN_00465980(local_c3c,0x20), 0 < iVar7)) {
      *(undefined1 *)((int)local_d0c + 1) = local_c84;
      *(undefined1 *)local_d0c = (undefined1)local_c83;
      *(undefined1 *)((int)local_d0c + 2) = local_c83._1_1_;
      *(undefined1 *)((int)local_d0c + 3) = local_c83._2_1_;
      *(undefined1 *)(local_d0c + 1) = local_c83._3_1_;
      *(undefined1 *)((int)local_d0c + -1) = 1;
      *(undefined1 *)((int)local_d0c + 5) = (undefined1)local_c7f;
      cVar4 = local_c7f._1_1_;
      if (local_c7f._1_1_ == -0x80) {
        cVar4 = '\0';
      }
      *(char *)((int)local_d0c + 6) = cVar4;
      piVar14 = local_c64;
      piVar19 = (int *)((int)local_d0c + 7);
      for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
        *piVar19 = *piVar14;
        piVar14 = piVar14 + 1;
        piVar19 = piVar19 + 1;
      }
      if (7 < iVar7) {
        iVar7 = 0;
        puVar12 = &local_c7f;
        do {
          if (*(uint3 *)((int)puVar12 + 2) == 0) break;
          iVar13 = iVar7 + local_d04;
          iVar7 = iVar7 + 1;
          *(uint *)(iVar17 + iVar13 * 4) = (uint)*(uint3 *)((int)puVar12 + 2);
          puVar12 = (undefined4 *)((int)puVar12 + 3);
        } while (iVar7 < 8);
      }
    }
    local_d0c = local_d0c + 10;
    local_d04 = local_d04 + 10;
  } while (local_d04 < 0xce1);
  if (*(char *)(iVar11 + 0x2d81) != '\0') {
    uVar6 = 0;
    puVar18 = (undefined1 *)(iVar11 + 0x3395);
    do {
      uVar6 = uVar6 + 1;
      __snwprintf_s(local_214,0x1e,0x1d,L"SideLedOpt%d",uVar6);
      GetPrivateProfileStringW(L"OPT",local_214,(LPCWSTR)0x0,local_c3c,0x410,local_d08);
      if ((local_c3c[0] != L'\0') && (iVar11 = FUN_00465980(local_c3c,0x20), 0 < iVar11)) {
        puVar18[1] = local_c84;
        *puVar18 = (undefined1)local_c83;
        puVar18[2] = local_c83._1_1_;
        puVar18[3] = local_c83._2_1_;
        puVar18[4] = local_c83._3_1_;
        puVar18[-1] = 1;
        puVar18[5] = (undefined1)local_c7f;
        cVar4 = local_c7f._1_1_;
        if (local_c7f._1_1_ == -0x80) {
          cVar4 = '\0';
        }
        puVar18[6] = cVar4;
        if (7 < iVar11) {
          puVar15 = (uint *)(puVar18 + 7);
          iVar11 = 8;
          puVar12 = &local_c7f;
          do {
            *puVar15 = (uint)*(uint3 *)((int)puVar12 + 2);
            puVar15 = puVar15 + 1;
            iVar11 = iVar11 + -1;
            puVar12 = (undefined4 *)((int)puVar12 + 3);
          } while (iVar11 != 0);
        }
      }
      puVar18 = puVar18 + 0x28;
    } while (uVar6 < 5);
  }
LAB_00413217:
  __security_check_cookie(local_8 ^ (uint)&local_d0c);
  return;
}


//==== FUNC 00479830  FUN_00479830 ====

undefined4 FUN_00479830(void)

{
  undefined4 *_Dst;
  undefined4 *puVar1;
  
  if (DAT_0066f9a4 != (void *)0x0) {
    if (*(int *)((int)DAT_0066f9a4 + 0x10) != 0) {
      FUN_0044e280();
    }
    if (*(undefined4 **)((int)DAT_0066f9a4 + 0x10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)DAT_0066f9a4 + 0x10))(1);
    }
    _free(DAT_0066f9a4);
    DAT_0066f9a4 = (void *)0x0;
  }
  _Dst = _malloc(0x58);
  if (_Dst != (undefined4 *)0x0) {
    _memset(_Dst,0,0x58);
    *_Dst = 0xa8b83333;
    _Dst[1] = 0xffff0100;
    _Dst[3] = 1;
    puVar1 = (undefined4 *)FUN_004ad0e9(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = CMyList::vftable;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0x11;
    }
    _Dst[4] = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      DAT_0066f9a4 = _Dst;
      puVar1[3] = FUN_004797c0;
      puVar1[1] = 0x10;
      return 1;
    }
    _free(_Dst);
  }
  return 0;
}


//==== FUNC 005ae2ff  exception ====

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  *(undefined ***)this = vftable;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    *(char **)(this + 4) = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    *(char **)(this + 4) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}


//==== FUNC 0045fa50  FUN_0045fa50 ====

void FUN_0045fa50(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  int iVar8;
  int iVar9;
  CWnd *unaff_EBX;
  int unaff_ESI;
  short *psVar10;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  CWnd *pCStack_174;
  CWnd *pCStack_170;
  CWnd *pCStack_16c;
  CWnd *pCStack_168;
  CWnd *pCStack_164;
  undefined4 *puStack_160;
  int iStack_15c;
  undefined4 *puStack_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_148 [16];
  int iStack_138;
  int iStack_134;
  tagRECT atStack_128 [4];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [12];
  int aiStack_ac [16];
  int iStack_6c;
  int iStack_68;
  tagSCROLLINFO tStack_5c;
  int iStack_40;
  int iStack_3c;
  int iStack_30;
  int iStack_2c;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_005db309;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  piVar2 = (int *)FUN_004ad163(DAT_0064f674 ^ (uint)&stack0xfffffe78);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403990(0x80004005);
  }
  iStack_154 = (**(code **)(*piVar2 + 0xc))();
  iStack_154 = iStack_154 + 0x10;
  iStack_c = 0;
  FUN_004031f0(&iStack_154,L"%sskins\\slider.png",&DAT_0065d1b0);
  puVar3 = (undefined4 *)FUN_004ad0e9(0x10);
  iStack_c._0_1_ = 1;
  puStack_160 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (1 < *(int *)(iStack_154 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&iStack_154,*(int *)(iStack_154 + -0xc));
    }
    *puVar3 = Gdiplus::Bitmap::vftable;
    pCStack_164 = (CWnd *)0x0;
    uVar4 = GdipCreateBitmapFromFile(iStack_154,&pCStack_164);
    puVar3[2] = uVar4;
    puVar3[1] = pCStack_164;
  }
  iStack_c = (uint)iStack_c._1_3_ << 8;
  *(undefined4 **)(unaff_EBX + 0x78) = puVar3;
  pCStack_164 = (CWnd *)0x0;
  iVar5 = GdipGetImageWidth(puVar3[1],&pCStack_164);
  if (iVar5 != 0) {
    puVar3[2] = iVar5;
  }
  if ((pCStack_16c == (CWnd *)0x0) && (*(undefined4 **)(unaff_EBX + 0x78) != (undefined4 *)0x0)) {
    uVar4 = (**(code **)**(undefined4 **)(unaff_EBX + 0x78))(0);
    FUN_004ad123(uVar4);
    *(undefined4 *)(unaff_EBX + 0x78) = 0;
  }
  FUN_004031f0(&iStack_15c,L"%sskins\\btn_tip.png",&DAT_0065d1b0);
  puStack_158 = (undefined4 *)FUN_004ad0e9(0x10);
  if (puStack_158 == (undefined4 *)0x0) {
    puStack_158 = (undefined4 *)0x0;
  }
  else {
    *puStack_158 = Gdiplus::Bitmap::vftable;
    pCStack_16c = (CWnd *)0x0;
    uVar4 = GdipCreateBitmapFromFile(iStack_15c,&pCStack_16c);
    puStack_158[2] = uVar4;
    puStack_158[1] = pCStack_16c;
  }
  pHVar6 = GetParent(*(HWND *)(unaff_EBX + 0x20));
  pCVar7 = CWnd::FromHandle(pHVar6);
  pCStack_164 = pCVar7 + 0x17b8;
  _memset(aiStack_ac + 2,0,0x38);
  iVar5 = 1;
  aiStack_ac[1] = 1;
  pCVar7 = pCVar7 + 0x17c4;
  do {
    if (*(int *)pCVar7 == 0) break;
    piVar2 = aiStack_ac + iVar5;
    iVar5 = iVar5 + 1;
    aiStack_ac[iVar5] = *piVar2 + *(int *)(pCVar7 + -8);
    pCVar7 = pCVar7 + 0xc;
  } while (iVar5 < 0xf);
  pCStack_170 = unaff_EBX + 0x7c;
  piVar2 = aiStack_ac;
  pCVar7 = pCStack_170;
  for (iVar5 = 0xf; piVar2 = piVar2 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *(int *)pCVar7 = *piVar2;
    pCVar7 = pCVar7 + 4;
  }
  pCStack_16c = (CWnd *)0x0;
  pCStack_174 = pCStack_164;
  pCVar7 = unaff_EBX + 0x158;
  do {
    if (*(int *)pCStack_174 == 0) break;
    SetRect((LPRECT)&stack0xfffffe7c,0x19,*(int *)pCStack_170,0x1a,*(int *)pCStack_170 + 1);
    iStack_154 = iStack_17c - unaff_ESI;
    iStack_150 = iStack_178 - iStack_180;
    iStack_134 = iStack_180;
    iStack_138 = unaff_ESI;
    (**(code **)(*(int *)(pCVar7 + -0xa0) + 0x13c))(&DAT_0060b0b0,0x5000000b,auStack_148);
    FUN_0045e2e0(iStack_138,iStack_134,iStack_154,iStack_150,0,0);
    uVar1 = DAT_00658114;
    uVar4 = DAT_0065810c;
    *(undefined4 *)(pCVar7 + -4) = DAT_00658110;
    *(undefined4 *)pCVar7 = uVar4;
    *(undefined4 *)(pCVar7 + 4) = uVar1;
    *(undefined4 *)(pCVar7 + 0xc) = 1;
    *(undefined4 *)(pCVar7 + 0x20) = 0;
    if (DAT_0065151c != 0) {
      *(undefined ***)(pCVar7 + 0xc0) = &PTR_vftable_00651518;
    }
    pCStack_170 = pCStack_170 + 4;
    pCStack_174 = pCStack_174 + 0xc;
    *(undefined4 *)(pCVar7 + 200) = DAT_0065828c;
    pCStack_16c = pCStack_16c + 1;
    *(undefined4 *)(pCVar7 + 0xcc) = *(undefined4 *)(unaff_EBX + 0x6130);
    pCVar7 = pCVar7 + 0x18c;
  } while ((int)pCStack_16c < 0xf);
  uStack_14c = *(undefined4 *)(*(int *)(unaff_EBX + 0x6138) + 0x24);
  pCStack_170 = (CWnd *)0x111;
  pCStack_174 = (CWnd *)0x0;
  pCStack_16c = pCStack_164;
  *(uint *)(unaff_EBX + 0x613c) = (uint)(*(int *)(*(int *)(unaff_EBX + 0x6138) + 0x14) == 0);
  do {
    iVar5 = *(int *)pCStack_16c;
    if (iVar5 == 0) break;
    if (iVar5 == 2) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x37,0x105,
              aiStack_ac[(int)pCStack_174 + 1] + 0x57);
      FUN_004674f0();
      *(undefined4 *)(unaff_EBX + 0x1d00) = 0x1b;
      *(undefined4 *)(unaff_EBX + 0x1c70) = *(undefined4 *)(unaff_EBX + 0x6130);
      pCStack_164 = (CWnd *)0x0;
      psVar10 = &DAT_00658b8c;
      do {
        if (*psVar10 == 0) break;
        piVar2 = _malloc(0x2c);
        if (piVar2 != (int *)0x0) {
          *piVar2 = (int)pCStack_164;
          *(wchar_t *)(piVar2 + 1) = L'\0';
          if (psVar10 != (short *)0x0) {
            __snwprintf_s((wchar_t *)(piVar2 + 1),0x14,0x13,L"%s",psVar10);
          }
          puVar3 = _malloc(0xc);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = piVar2;
            puVar3[1] = 0;
            if (*(int *)(unaff_EBX + 0x1c98) == 0) {
              puVar3[2] = 0;
              *(undefined4 **)(unaff_EBX + 0x1ca0) = puVar3;
            }
            else {
              puVar3[2] = *(undefined4 *)(unaff_EBX + 0x1ca4);
              *(undefined4 **)(*(int *)(unaff_EBX + 0x1ca4) + 4) = puVar3;
            }
            *(int *)(unaff_EBX + 0x1c98) = *(int *)(unaff_EBX + 0x1c98) + 1;
            *(undefined4 **)(unaff_EBX + 0x1ca4) = puVar3;
          }
        }
        pCStack_164 = pCStack_164 + 1;
        psVar10 = psVar10 + 0x28;
      } while ((int)psVar10 < 0x658f4c);
    }
    else if (iVar5 == 3) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x37,0x45,
              aiStack_ac[(int)pCStack_174 + 1] + 0x48);
      FUN_004674f0();
      *(undefined4 *)(unaff_EBX + 0x1e80) = DAT_00658140;
    }
    else if (iVar5 == 4) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x50,0x28,
              aiStack_ac[(int)pCStack_174 + 1] + 0x5f);
      FUN_004674f0();
      SetRect((LPRECT)&stack0xfffffe7c,0x19,iStack_178 + 0x19,iStack_17c,iStack_178 + 0x28);
      FUN_004674f0();
      *(undefined4 *)(unaff_EBX + 0x2198) = DAT_00658140;
      *(undefined4 *)(unaff_EBX + 0x200c) = DAT_00658140;
    }
    else if (iVar5 == 5) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x37,0x91,
              aiStack_ac[(int)pCStack_174 + 1] + 0x51);
      FUN_004674f0();
      *(undefined4 *)(unaff_EBX + 0x4a3c) = *(undefined4 *)(unaff_EBX + 0x6130);
    }
    else if (iVar5 == 6) {
      if ((DAT_006581e8 != 0) || (DAT_00658288 != 0)) {
        SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x3c,0x91,
                aiStack_ac[(int)pCStack_174 + 1] + 0x56);
        FUN_004674f0();
        FUN_0045e240(2,2);
        *(undefined4 *)(unaff_EBX + 0x4d60) = 0;
        InvalidateRect(*(HWND *)(unaff_EBX + 0x4c08),(RECT *)0x0,1);
        if (DAT_006581e8 != 0) {
          SetRect(atStack_128,iStack_17c + 0x28,iStack_180,iStack_17c + 0xa0,iStack_178);
          FUN_004674f0();
          FUN_0045e240(2,2);
          *(undefined4 *)(unaff_EBX + 0x4bd4) = 0;
          InvalidateRect(*(HWND *)(unaff_EBX + 0x4a7c),(RECT *)0x0,1);
          SetRect((LPRECT)&stack0xfffffe7c,unaff_ESI,iStack_178 + 0x1e,unaff_ESI + 0x2c,
                  iStack_178 + 0x2f);
          FUN_004674f0();
          *(undefined4 *)(unaff_EBX + 0x4ee0) = DAT_00658140;
          SetRect((LPRECT)&stack0xfffffe7c,unaff_ESI,iStack_178 + 0x37,unaff_ESI + 0x1b8,
                  iStack_178 + 0x43);
          iVar5 = *(int *)(unaff_EBX + 0x78);
          pCStack_164 = DAT_0065815c;
          puStack_160 = DAT_00658158;
          pCStack_168 = *(CWnd **)(unaff_EBX + 0x74);
          *(CWnd **)(unaff_EBX + 0x61a4) = pCStack_170;
          *(int *)(unaff_EBX + 0x7000) = iVar5;
          if (iVar5 == 0) {
            iVar9 = 0;
          }
          else {
            iStack_150 = 0;
            iVar8 = GdipGetImageWidth(*(undefined4 *)(iVar5 + 4),&iStack_150);
            iVar9 = iStack_150;
            if (iVar8 != 0) {
              *(int *)(iVar5 + 8) = iVar8;
            }
          }
          *(int *)(unaff_EBX + 0x6fd4) = iVar9;
          iVar5 = Create(0,&DAT_0060b0b0,0x50000000,auStack_148,unaff_EBX,0x68,0);
          if (iVar5 != 0) {
            FUN_0044a500(puStack_160,pCStack_164);
          }
          pCStack_170 = (CWnd *)((int)pCStack_170 + 1);
          FUN_0044a0c0();
          *(undefined4 *)(unaff_EBX + 0x7018) = DAT_00658140;
          CWnd::ShowWindow(unaff_EBX + 0x6150,0);
          InvalidateRect(*(HWND *)(unaff_EBX + 0x20),(RECT *)0x0,1);
        }
      }
    }
    else if (iVar5 == 7) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x37,0x45,
              aiStack_ac[(int)pCStack_174 + 1] + 0x48);
      FUN_004674f0();
      *(undefined4 *)(unaff_EBX + 0x2324) = DAT_00658140;
      SetRect((LPRECT)&stack0xfffffe7c,unaff_ESI + 10,iStack_178 + 0x3c,unaff_ESI + 0x1c2,
              iStack_178 + 0x48);
      iVar5 = *(int *)(unaff_EBX + 0x78);
      pCStack_168 = DAT_0065815c;
      puStack_160 = DAT_00658158;
      pCStack_164 = *(CWnd **)(unaff_EBX + 0x74);
      *(CWnd **)(unaff_EBX + 0x2398) = pCStack_170;
      *(int *)(unaff_EBX + 0x31f4) = iVar5;
      if (iVar5 == 0) {
        iVar9 = 0;
      }
      else {
        iStack_154 = 0;
        iVar8 = GdipGetImageWidth(*(undefined4 *)(iVar5 + 4),&iStack_154);
        iVar9 = iStack_154;
        if (iVar8 != 0) {
          *(int *)(iVar5 + 8) = iVar8;
        }
      }
      *(int *)(unaff_EBX + 0x31c8) = iVar9;
      iVar5 = Create(0,&DAT_0060b0b0,0x50000000,auStack_e8,unaff_EBX,0x68,0);
      if (iVar5 != 0) {
        FUN_0044a500(puStack_160,pCStack_168);
      }
      pCStack_170 = (CWnd *)((int)pCStack_170 + 1);
      FUN_0044a0c0();
      *(undefined4 *)(unaff_EBX + 0x320c) = DAT_00658140;
      SetRect((LPRECT)&stack0xfffffe7c,iStack_17c + 0xf,iStack_180 + -8,iStack_17c + 0x5f,
              iStack_178 + 8);
      uVar4 = *(undefined4 *)(unaff_EBX + 0x74);
      puStack_160 = (undefined4 *)(iStack_178 - iStack_180);
      pCStack_168 = (CWnd *)(iStack_17c - unaff_ESI);
      iStack_68 = iStack_180;
      iStack_6c = unaff_ESI;
      (**(code **)(*(int *)(unaff_EBX + 0x322c) + 0x13c))(&DAT_0060b0b0,0x5000000b,auStack_b8);
      FUN_0045e2e0(iStack_6c,iStack_68,pCStack_168,puStack_160,uVar4,uVar4);
      uVar1 = DAT_00658114;
      uVar4 = DAT_0065810c;
      *(undefined4 *)(unaff_EBX + 13000) = DAT_00658110;
      *(undefined4 *)(unaff_EBX + 0x32cc) = uVar4;
      *(undefined4 *)(unaff_EBX + 0x32d0) = uVar1;
      *(undefined4 *)(unaff_EBX + 0x32ec) = 0;
      if (DAT_0065151c != 0) {
        *(undefined ***)(unaff_EBX + 0x338c) = &PTR_vftable_00651518;
      }
      *(undefined4 *)(unaff_EBX + 0x3394) = DAT_0065828c;
      *(undefined4 *)(unaff_EBX + 0x3398) = DAT_00658140;
      uVar4 = DAT_00658108;
      *(undefined4 *)(unaff_EBX + 0x32cc) = DAT_00658108;
      *(undefined4 *)(unaff_EBX + 13000) = uVar4;
      *(undefined4 *)(unaff_EBX + 0x32d0) = uVar4;
      CGdiObject::DeleteObject((CGdiObject *)(unaff_EBX + 0x3384));
      *(undefined ***)(unaff_EBX + 0x338c) = &PTR_vftable_00651520;
    }
    else if (iVar5 == 9) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x37,0x45,
              aiStack_ac[(int)pCStack_174 + 1] + 0x48);
      FUN_004674f0();
      *(undefined4 *)(unaff_EBX + 0x383c) = DAT_00658140;
      SetRect((LPRECT)&stack0xfffffe7c,unaff_ESI + 10,iStack_178 + 0x14,unaff_ESI + 0x1c2,
              iStack_178 + 0x20);
      pCStack_168 = DAT_0065815c;
      pCStack_164 = *(CWnd **)(unaff_EBX + 0x74);
      puStack_160 = DAT_00658158;
      iVar5 = FUN_0044a4a0(unaff_EBX,unaff_ESI,iStack_180,iStack_17c,iStack_178);
      if (iVar5 != 0) {
        FUN_0044a500(puStack_160,pCStack_168);
      }
      pCStack_170 = (CWnd *)((int)pCStack_170 + 1);
      *(undefined4 *)(unaff_EBX + 0x4724) = DAT_00658140;
      FUN_0044a0c0();
      SetRect((LPRECT)&stack0xfffffe7c,iStack_17c + 0xf,iStack_180 + -8,iStack_17c + 0x5f,
              iStack_178 + 8);
      uVar4 = *(undefined4 *)(unaff_EBX + 0x74);
      puStack_160 = (undefined4 *)(iStack_178 - iStack_180);
      pCStack_168 = (CWnd *)(iStack_17c - unaff_ESI);
      iStack_2c = iStack_180;
      iStack_30 = unaff_ESI;
      (**(code **)(*(int *)(unaff_EBX + 0x4744) + 0x13c))(&DAT_0060b0b0,0x5000000b,auStack_d8);
      FUN_0045e2e0(iStack_30,iStack_2c,pCStack_168,puStack_160,uVar4,uVar4);
      uVar1 = DAT_00658114;
      uVar4 = DAT_0065810c;
      *(undefined4 *)(unaff_EBX + 0x47e0) = DAT_00658110;
      *(undefined4 *)(unaff_EBX + 0x47e4) = uVar4;
      *(undefined4 *)(unaff_EBX + 0x47e8) = uVar1;
      *(undefined4 *)(unaff_EBX + 0x4804) = 0;
      if (DAT_0065151c != 0) {
        *(undefined ***)(unaff_EBX + 0x48a4) = &PTR_vftable_00651518;
      }
      *(undefined4 *)(unaff_EBX + 0x48ac) = DAT_0065828c;
      *(undefined4 *)(unaff_EBX + 0x48b0) = DAT_00658140;
      uVar4 = DAT_00658108;
      *(undefined4 *)(unaff_EBX + 0x47e4) = DAT_00658108;
      *(undefined4 *)(unaff_EBX + 0x47e0) = uVar4;
      *(undefined4 *)(unaff_EBX + 0x47e8) = uVar4;
      CGdiObject::DeleteObject((CGdiObject *)(unaff_EBX + 0x489c));
      *(undefined ***)(unaff_EBX + 0x48a4) = &PTR_vftable_00651520;
    }
    else if (iVar5 == 10) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x37,0x1d1,
              aiStack_ac[(int)pCStack_174 + 1] + 0x43);
      pCStack_168 = DAT_0065815c;
      pCStack_164 = *(CWnd **)(unaff_EBX + 0x74);
      puStack_160 = DAT_00658158;
      iVar5 = FUN_0044a4a0(unaff_EBX,unaff_ESI,iStack_180,iStack_17c,iStack_178);
      if (iVar5 != 0) {
        FUN_0044a500(puStack_160,pCStack_168);
      }
      pCStack_170 = (CWnd *)((int)pCStack_170 + 1);
      FUN_0044a0c0();
      *(undefined4 *)(unaff_EBX + 0x5f54) = DAT_00658140;
      SetRect((LPRECT)&stack0xfffffe7c,iStack_17c + 0xf,iStack_180 + -8,iStack_17c + 0x5f,
              iStack_178 + 8);
      uVar4 = *(undefined4 *)(unaff_EBX + 0x74);
      puStack_160 = (undefined4 *)(iStack_178 - iStack_180);
      pCStack_168 = (CWnd *)(iStack_17c - unaff_ESI);
      iStack_3c = iStack_180;
      iStack_40 = unaff_ESI;
      (**(code **)(*(int *)(unaff_EBX + 0x5f74) + 0x13c))(&DAT_0060b0b0,0x5000000b,&iStack_138);
      FUN_0045e2e0(iStack_40,iStack_3c,pCStack_168,puStack_160,uVar4,uVar4);
      uVar1 = DAT_00658114;
      uVar4 = DAT_0065810c;
      *(undefined4 *)(unaff_EBX + 0x6010) = DAT_00658110;
      *(undefined4 *)(unaff_EBX + 0x6014) = uVar4;
      *(undefined4 *)(unaff_EBX + 0x6018) = uVar1;
      *(undefined4 *)(unaff_EBX + 0x6034) = 0;
      if (DAT_0065151c != 0) {
        *(undefined ***)(unaff_EBX + 0x60d4) = &PTR_vftable_00651518;
      }
      *(undefined4 *)(unaff_EBX + 0x60dc) = DAT_0065828c;
      *(undefined4 *)(unaff_EBX + 0x60e0) = DAT_00658140;
      uVar4 = DAT_00658108;
      *(undefined4 *)(unaff_EBX + 0x6014) = DAT_00658108;
      *(undefined4 *)(unaff_EBX + 0x6010) = uVar4;
      *(undefined4 *)(unaff_EBX + 0x6018) = uVar4;
      CGdiObject::DeleteObject((CGdiObject *)(unaff_EBX + 0x60cc));
      *(undefined ***)(unaff_EBX + 0x60d4) = &PTR_vftable_00651520;
    }
    else if (iVar5 == 0xc) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x37,0x45,
              aiStack_ac[(int)pCStack_174 + 1] + 0x48);
      FUN_004674f0();
      *(undefined4 *)(unaff_EBX + 14000) = DAT_00658140;
    }
    else if (iVar5 == 0xb) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x37,0x45,
              aiStack_ac[(int)pCStack_174 + 1] + 0x48);
      FUN_004674f0();
      *(undefined4 *)(unaff_EBX + 0x3524) = DAT_00658140;
    }
    else if (iVar5 == 0xd) {
      SetRect((LPRECT)&stack0xfffffe7c,0x19,aiStack_ac[(int)pCStack_174 + 1] + 0x37,0x45,
              aiStack_ac[(int)pCStack_174 + 1] + 0x48);
      FUN_004674f0();
      *(undefined4 *)(unaff_EBX + 0x506c) = DAT_00658140;
    }
    pCStack_16c = pCStack_16c + 0xc;
    pCStack_174 = (CWnd *)((int)pCStack_174 + 1);
  } while ((int)pCStack_174 < 0xf);
  if (puStack_158 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)*puStack_158)(0);
  }
  FUN_004ad123(uVar4);
  tStack_5c.nPage = *(int *)(unaff_EBX + 0x612c) - *(int *)(unaff_EBX + 0x6124);
  tStack_5c.cbSize = 0x1c;
  tStack_5c.fMask = 7;
  tStack_5c.nPos = 0;
  tStack_5c.nMin = 0;
  tStack_5c.nMax = 0x960;
  CWnd::SetScrollInfo(unaff_EBX,1,&tStack_5c,0);
  local_14 = (void *)0xffffffff;
  piVar2 = (int *)(iStack_15c + -4);
  LOCK();
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(iStack_15c + -0x10) + 4))((undefined4 *)(iStack_15c + -0x10));
  }
  ExceptionList = pvStack_1c;
  return;
}


//==== FUNC 004abd50  FUN_004abd50 ====

void __fastcall FUN_004abd50(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *_Memory;
  undefined4 *puVar6;
  int unaff_EBX;
  int *unaff_EDI;
  int **ppiVar7;
  int *piStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  size_t *psStack_80;
  int iStack_74;
  undefined1 **ppuStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int *piStack_64;
  size_t sStack_60;
  undefined1 *puStack_5c;
  int iStack_58;
  int *piStack_54;
  undefined4 uStack_44;
  int local_40;
  undefined4 local_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_18;
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)&uStack_44;
  piStack_54 = (int *)0x10;
  local_3c = param_3;
  iStack_58 = 0x4abd79;
  puVar2 = (undefined4 *)FUN_004ad0e9();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    piStack_54 = &local_40;
    *puVar2 = Gdiplus::Bitmap::vftable;
    local_40 = 0;
    puStack_5c = (undefined1 *)0x4abd9b;
    uVar3 = GdipCreateBitmapFromFile();
    puVar2[2] = uVar3;
    puVar2[1] = local_40;
  }
  iStack_58 = puVar2[1];
  piStack_54 = &local_40;
  local_40 = 0;
  puStack_5c = (undefined1 *)0x4abdbf;
  iVar4 = GdipGetImageWidth();
  if (iVar4 != 0) {
    puVar2[2] = iVar4;
  }
  if (unaff_EBX == 0) {
    puStack_5c = (undefined1 *)0x1;
    sStack_60 = 0x4abdd7;
    (**(code **)*puVar2)();
    piStack_54 = (int *)0x4abde5;
    __security_check_cookie(uStack_18 ^ (uint)&stack0xffffffb0);
    return;
  }
  iStack_34 = param_2 + 4;
  puStack_5c = (undefined1 *)0x4abdf5;
  FUN_0044e280();
  sStack_60 = puVar2[1];
  puStack_5c = &stack0xffffffb8;
  piStack_64 = (int *)0x4abe0b;
  iVar4 = GdipImageGetFrameDimensionsCount();
  if (iVar4 != 0) {
    puVar2[2] = iVar4;
  }
  piStack_64 = (int *)(-(uint)((int)(ZEXT48(unaff_EDI) * 0x10 >> 0x20) != 0) |
                      (uint)(ZEXT48(unaff_EDI) * 0x10));
  iStack_68 = 0x4abe2e;
  iVar4 = FUN_004ad118();
  uStack_6c = puVar2[1];
  ppuStack_70 = (undefined1 **)0x4abe42;
  iStack_68 = iVar4;
  piStack_64 = unaff_EDI;
  local_40 = iVar4;
  iVar5 = GdipImageGetFrameDimensionsList();
  if (iVar5 != 0) {
    puVar2[2] = iVar5;
  }
  ppuStack_70 = &puStack_5c;
  puStack_5c = (undefined1 *)0x0;
  iStack_74 = iVar4;
  iVar4 = GdipImageGetFrameCount();
  if (iVar4 != 0) {
    puVar2[2] = iVar4;
  }
  if ((1 < iStack_68) && (piStack_64 != (int *)0x0)) {
    piStack_84 = (int *)puVar2[1];
    psStack_80 = &sStack_60;
    uStack_88 = 0x4abe88;
    iVar4 = GdipGetPropertySize();
    if (iVar4 != 0) {
      puVar2[2] = iVar4;
    }
    psStack_80 = (size_t *)0x4abe99;
    _Memory = _malloc(sStack_60);
    if (_Memory == (void *)0x0) {
      *piStack_64 = (int)puStack_5c * 10;
    }
    else {
      psStack_80 = (size_t *)0x4abeb2;
      FUN_0046af70();
      *piStack_64 = **(int **)((int)_Memory + 0xc) * 10;
      psStack_80 = (size_t *)0x4abec8;
      _free(_Memory);
    }
  }
  psStack_80 = (size_t *)0x4abee6;
  FUN_004ad123();
  uStack_44 = DAT_0060ab80;
  local_40 = DAT_0060ab84;
  local_3c = DAT_0060ab88;
  uStack_38 = DAT_0060ab8c;
  iStack_58 = 0;
  if (0 < iStack_68) {
    do {
      iVar4 = iStack_58;
      piStack_84 = (int *)puVar2[1];
      psStack_80 = &uStack_44;
      uStack_88 = 0x4abf2f;
      iVar5 = GdipImageSelectActiveFrame();
      if (iVar5 != 0) {
        puVar2[2] = iVar5;
      }
      psStack_80 = (size_t *)0x4abf3d;
      puVar6 = (undefined4 *)FUN_004ad0e9();
      if (puVar6 != (undefined4 *)0x0) {
        psStack_80 = (size_t *)puVar2[1];
        puStack_5c = (undefined1 *)0x0;
        piStack_84 = (int *)0x4abf60;
        iVar4 = GdipGetImageHeight();
        piVar1 = piStack_64;
        if (iVar4 != 0) {
          puVar2[2] = iVar4;
        }
        uStack_88 = puVar2[1];
        piStack_84 = &iStack_68;
        iStack_68 = 0;
        piStack_8c = (int *)0x4abf81;
        iVar4 = GdipGetImageWidth();
        if (iVar4 != 0) {
          puVar2[2] = iVar4;
        }
        piStack_8c = &iStack_74;
        uStack_90 = 0;
        uStack_94 = 0x26200a;
        uStack_98 = 0;
        piStack_9c = piVar1;
        *puVar6 = Gdiplus::Bitmap::vftable;
        iStack_74 = 0;
        uVar3 = GdipCreateBitmapFromScan0(ppuStack_70);
        ppiVar7 = &piStack_84;
        puVar6[2] = uVar3;
        puVar6[1] = piStack_8c;
        piStack_84 = (int *)0x0;
        GdipGetImageGraphicsContext(piStack_8c,ppiVar7);
        piVar1 = piStack_8c;
        uStack_90 = 0;
        iVar4 = GdipGetImageHeight(puVar2[1],&uStack_90);
        if (iVar4 != 0) {
          puVar2[2] = iVar4;
        }
        uStack_88 = uStack_98;
        piStack_9c = (int *)0x0;
        iVar4 = GdipGetImageWidth(puVar2[1],&piStack_9c);
        if (iVar4 != 0) {
          puVar2[2] = iVar4;
        }
        GdipDrawImageRectI(piVar1,puVar2[1],0,0,ppiVar7,uStack_90);
        FUN_0044e0a0(puVar6);
        GdipDeleteGraphics(ppiVar7);
        iVar4 = iStack_58;
      }
      iStack_58 = iVar4 + 1;
    } while (iStack_58 < iStack_68);
  }
  psStack_80 = (size_t *)0x4ac061;
  psStack_80 = (size_t *)(**(code **)*puVar2)();
  piStack_84 = (int *)0x4ac067;
  FUN_004ad123();
  iStack_74 = 0x4ac078;
  __security_check_cookie(uStack_38 ^ (uint)&ppuStack_70);
  return;
}


//==== FUNC 004ac280  FUN_004ac280 ====

void FUN_004ac280(void)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBX;
  wchar_t *pwVar5;
  wchar_t local_648;
  undefined4 local_646;
  undefined4 local_642;
  undefined4 local_63e;
  undefined4 local_63a;
  undefined4 local_636;
  undefined4 local_632;
  undefined4 local_62e;
  undefined4 local_62a;
  undefined4 local_626;
  undefined2 local_622;
  undefined4 local_620;
  wchar_t local_61c [260];
  wchar_t local_414 [260];
  wchar_t local_20c [260];
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_648;
  if ((*(int *)(unaff_EBX + 4) != 0) && (local_61c != (wchar_t *)0x0)) {
    __snwprintf_s(local_61c,0x104,0x103,L"%s%s\\");
  }
  for (piVar1 = *(int **)(unaff_EBX + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      __snwprintf_s(local_414,0x104,0x103,L"%s%s");
      DeleteFileW(local_414);
    }
  }
  FUN_0044e280();
  *(undefined1 *)(unaff_EBX + 0x20) = 0xff;
  __snwprintf_s(local_20c,0x104,0x103,L"%s\\screen.gif");
  BVar2 = PathFileExistsW(local_20c);
  if (BVar2 != 0) {
    __snwprintf_s(local_414,0x104,0x103,L"%sscreen.gif");
    CopyFileW(local_20c,local_414,1);
    local_648 = L'\0';
    local_646 = 0;
    local_642 = 0;
    local_63e = 0;
    local_63a = 0;
    local_636 = 0;
    local_632 = 0;
    local_62e = 0;
    local_62a = 0;
    local_626 = 0;
    local_622 = 0;
    local_620 = 0;
    _wcsncpy_s(&local_648,0x14,L"screen.gif",0xffffffff);
    local_620 = 0;
    if ((&stack0x00000000 != (undefined1 *)0x648) &&
       (puVar3 = _malloc(0x2c), puVar3 != (undefined4 *)0x0)) {
      pwVar5 = &local_648;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = *(undefined4 *)pwVar5;
        pwVar5 = pwVar5 + 2;
        puVar3 = puVar3 + 1;
      }
      FUN_0044e0a0();
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_648);
  return;
}


//==== FUNC 004acf90  FUN_004acf90 ====

_TREEITEM * FUN_004acf90(int param_1,undefined4 param_2,undefined4 param_3)

{
  wchar_t *in_EAX;
  _TREEITEM *lParam;
  undefined4 *puVar1;
  CTreeCtrl *unaff_EDI;
  
  lParam = CTreeCtrl::InsertItem
                     (unaff_EDI,1,in_EAX,0,0,0,0,0,(_TREEITEM *)0xffff0000,(_TREEITEM *)0xffff0002);
  if (lParam != (_TREEITEM *)0x0) {
    puVar1 = _malloc(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      return (_TREEITEM *)0x0;
    }
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[7] = 0;
    *puVar1 = lParam;
    puVar1[4] = param_3;
    puVar1[1] = param_2;
    puVar1[3] = 1;
    puVar1[6] = 1;
    puVar1[8] = 0;
    FUN_0044e0a0(puVar1);
    if (param_1 != 0) {
      SendMessageW(*(HWND *)(unaff_EDI + 0x20),0x110b,9,(LPARAM)lParam);
      FUN_00480070(unaff_EDI);
    }
    InvalidateRect(*(HWND *)(unaff_EDI + 0x20),(RECT *)0x0,1);
    FUN_00480070(unaff_EDI);
  }
  return lParam;
}


//==== FUNC 005c8b63  __crtCompareStringA_stat ====

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
  local_8 = DAT_0064f674 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_00657d78 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_00657d78 = 2;
      }
    }
    else {
      DAT_00657d78 = 1;
    }
  }
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_005c8ec1;
  }
  else {
    param_3 = strncnt((char *)param_3,unaff_EDI);
  }
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_005c8ec1;
  }
  else {
    param_5 = strncnt((char *)param_5,unaff_EDI);
  }
  if ((DAT_00657d78 == 2) || (DAT_00657d78 == 0)) {
    _Memory_00 = (PCNZCH)0x0;
    _Memory = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp(param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_005c8ec1;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      _Memory = (byte *)___convertcp(param_6,pcVar7,in_EDX,&param_3,0,0);
      if (_Memory == (byte *)0x0) goto LAB_005c8ec1;
      _Memory_00 = (PCNZCH)___convertcp(param_6,pcVar7,lpMultiByteStr,&param_5,0,0);
      local_28 = _Memory;
      local_20 = _Memory_00;
      if (_Memory_00 == (PCNZCH)0x0) {
        _free(_Memory);
        goto LAB_005c8ec1;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (_Memory != (byte *)0x0) {
      _free(_Memory);
      _free(_Memory_00);
    }
    goto LAB_005c8ec1;
  }
  if (DAT_00657d78 != 1) goto LAB_005c8ec1;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_005c8ec1;
    if (0 < (int)param_3) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_005c8ec1;
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
      goto LAB_005c8ec1;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_005c8ec1;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_005c8d3a:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_005c8d3a;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_005c8ec1;
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
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_005c8dfb;
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
LAB_005c8dfb:
  __freea(local_24);
LAB_005c8ec1:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


//==== FUNC 005c94d4  __strdup ====

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


//==== FUNC 00469ee0  FUN_00469ee0 ====

undefined4 FUN_00469ee0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *_Memory;
  int unaff_EBX;
  undefined *puVar7;
  int unaff_ESI;
  uint unaff_EDI;
  uint uStack_40;
  undefined **ppuStack_3c;
  wchar_t *pwStack_38;
  undefined *puStack_34;
  undefined4 *puVar8;
  undefined *puStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined4 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_005d7db3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_004ad163();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    puStack_34 = (undefined *)0x469f22;
    FUN_00403990();
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  puStack_1c = (undefined *)(iVar2 + 0x10);
  puStack_34 = &DAT_0065d1b0;
  ppuStack_3c = &puStack_1c;
  pwStack_38 = L"%sskins\\%s";
  iStack_4 = 0;
  uStack_40 = 0x469f4f;
  FUN_004031f0();
  uStack_40 = 0x10;
  puVar3 = (undefined4 *)FUN_004ad0e9();
  iStack_4._0_1_ = 1;
  puStack_10 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
    puVar7 = puStack_1c;
  }
  else {
    if (1 < *(int *)(puStack_1c + -4)) {
      puStack_34 = (undefined *)0x469f7f;
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&puStack_1c,*(int *)(puStack_1c + -0xc));
    }
    puVar7 = puStack_1c;
    puStack_34 = puStack_1c;
    *puVar3 = Gdiplus::Bitmap::vftable;
    uStack_18 = 0;
    pwStack_38 = L"䲋ᐤ䞉褈я˫Ｓ岈⠤咍ᐤ뺉\x9c";
    uVar4 = GdipCreateBitmapFromFile();
    puVar3[2] = uVar4;
    puVar3[1] = uStack_18;
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  puVar8 = &uStack_18;
  *(undefined4 **)(unaff_ESI + 0x9c) = puVar3;
  puStack_34 = (undefined *)puVar3[1];
  uStack_18 = 0;
  pwStack_38 = L"쌻ʹ䞉㤈⑜眔譝鲎";
  iVar2 = GdipGetImageWidth();
  if (iVar2 != 0) {
    puVar3[2] = iVar2;
  }
  if (unaff_EBX == 0) {
    if (*(undefined4 **)(unaff_ESI + 0x9c) == (undefined4 *)0x0) {
      pwStack_38 = (wchar_t *)0x0;
    }
    else {
      pwStack_38 = (wchar_t *)0x0;
      ppuStack_3c = (undefined **)0x469fe0;
      pwStack_38 = (wchar_t *)(**(code **)**(undefined4 **)(unaff_ESI + 0x9c))();
    }
    ppuStack_3c = (undefined **)0x469fea;
    FUN_004ad123();
    pwStack_38 = (wchar_t *)(puVar7 + -0x10);
    *(undefined4 *)(unaff_ESI + 0x9c) = 0;
    local_c = (void *)0xffffffff;
    piVar1 = (int *)(puVar7 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      ppuStack_3c = (undefined **)0x46a017;
      (**(code **)(**(int **)pwStack_38 + 4))();
    }
    ExceptionList = pvStack_14;
    return 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0x9c);
  ppuStack_3c = *(undefined ***)(iVar2 + 4);
  pwStack_38 = (wchar_t *)&stack0xffffffe0;
  uStack_40 = 0x46a044;
  iVar5 = GdipImageGetFrameDimensionsCount();
  if (iVar5 != 0) {
    *(int *)(iVar2 + 8) = iVar5;
  }
  uStack_40 = -(uint)((int)((ulonglong)unaff_EDI * 0x10 >> 0x20) != 0) |
              (uint)((ulonglong)unaff_EDI * 0x10);
  iVar5 = FUN_004ad118();
  iVar2 = *(int *)(unaff_ESI + 0x9c);
  uVar4 = *(undefined4 *)(iVar2 + 4);
  uStack_40 = unaff_EDI;
  iVar6 = GdipImageGetFrameDimensionsList(uVar4);
  if (iVar6 != 0) {
    *(int *)(iVar2 + 8) = iVar6;
  }
  iVar2 = *(int *)(unaff_ESI + 0x9c);
  puStack_34 = (undefined *)0x0;
  iVar6 = GdipImageGetFrameCount(*(undefined4 *)(iVar2 + 4),puVar8);
  if (iVar6 != 0) {
    *(int *)(iVar2 + 8) = iVar6;
  }
  *(uint *)(unaff_ESI + 0xa0) = uStack_40;
  if (1 < (int)uStack_40) {
    iVar2 = *(int *)(unaff_ESI + 0x9c);
    iVar6 = GdipGetPropertySize(*(undefined4 *)(iVar2 + 4),&uStack_40,&pwStack_38);
    if (iVar6 != 0) {
      *(int *)(iVar2 + 8) = iVar6;
    }
    _Memory = _malloc((size_t)&puStack_34);
    if (_Memory != (void *)0x0) {
      iVar2 = *(int *)(unaff_ESI + 0x9c);
      iVar6 = GdipGetAllPropertyItems(*(undefined4 *)(iVar2 + 4),&puStack_34,iVar5,_Memory);
      if (iVar6 != 0) {
        *(int *)(iVar2 + 8) = iVar6;
      }
      *(int *)(unaff_ESI + 0x90) = **(int **)((int)_Memory + 0xc) * 10;
      _free(_Memory);
    }
    FUN_004ad123(uVar4);
  }
  *(undefined4 *)(unaff_ESI + 0xa4) = 0;
  piVar1 = (int *)(iVar5 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(iVar5 + -0x10) + 4))((undefined4 *)(iVar5 + -0x10));
  }
  ExceptionList = puStack_34;
  return 1;
}


//==== FUNC 0046b070  FUN_0046b070 ====

uint FUN_0046b070(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (in_EAX == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = _malloc(0x4b8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x12e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *in_EAX;
    in_EAX = in_EAX + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_0044e0a0(puVar1);
  return -(uint)(iVar2 != 0) & (uint)puVar1;
}


//==== FUNC 0046c350  FUN_0046c350 ====

void FUN_0046c350(void)

{
  CTreeCtrl *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  _TREEITEM *p_Var4;
  undefined4 *puVar5;
  CSimpleStringT<wchar_t,0> *this_00;
  int local_2c;
  undefined4 local_24 [9];
  
  FUN_0046c080();
  this = (CTreeCtrl *)(in_EAX + 0x74);
  local_24[0] = 1;
  local_24[1] = 2;
  local_24[2] = 3;
  local_24[3] = 4;
  local_24[4] = 5;
  local_24[5] = 6;
  local_24[6] = 7;
  local_24[7] = 8;
  local_24[8] = 0;
  FUN_0044e280();
  SendMessageW(*(HWND *)(in_EAX + 0x94),0x1101,0,-0x10000);
  FUN_00480070(this);
  this_00 = (CSimpleStringT<wchar_t,0> *)(in_EAX + 0x54c4);
  local_2c = 0;
  do {
    iVar1 = *(int *)this_00;
    if (*(int *)(iVar1 + -0xc) == 0) {
      return;
    }
    if (1 < *(int *)(iVar1 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(this_00,*(int *)(iVar1 + -0xc));
    }
    uVar3 = DAT_00658b30;
    for (puVar5 = *(undefined4 **)(in_EAX + 0x188);
        (puVar5 != (undefined4 *)0x0 && (*(int *)*puVar5 != -0x10000));
        puVar5 = (undefined4 *)puVar5[1]) {
    }
    p_Var4 = CTreeCtrl::InsertItem
                       (this,1,*(wchar_t **)this_00,0,0,0,0,0,(_TREEITEM *)0xffff0000,
                        (_TREEITEM *)0xffff0002);
    if (p_Var4 == (_TREEITEM *)0x0) {
LAB_0046c49a:
      FUN_00480070(this);
    }
    else {
      puVar5 = _malloc(0x24);
      if (puVar5 != (undefined4 *)0x0) {
        uVar2 = local_24[local_2c];
        *puVar5 = p_Var4;
        puVar5[4] = uVar2;
        puVar5[5] = 0;
        puVar5[1] = 0;
        puVar5[3] = 0;
        puVar5[7] = uVar3;
        puVar5[6] = 1;
        puVar5[8] = 0;
        FUN_0044e0a0(puVar5);
        InvalidateRect(*(HWND *)(in_EAX + 0x94),(RECT *)0x0,1);
        goto LAB_0046c49a;
      }
    }
    this_00 = this_00 + 4;
    local_2c = local_2c + 1;
    if (8 < local_2c) {
      return;
    }
  } while( true );
}


//==== FUNC 0046c500  FUN_0046c500 ====

void FUN_0046c500(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  _TREEITEM *lParam;
  undefined4 *puVar6;
  CTreeCtrl *this;
  
  piVar1 = *(int **)(param_1 + 0x5560);
  uVar5 = DAT_00658b30;
  do {
    if (piVar1 == (int *)0x0) {
      DAT_00658b30 = uVar5;
      return;
    }
    iVar2 = *piVar1;
    DAT_00658b30 = uVar5;
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 4);
      iVar4 = *(int *)(param_1 + 0x5568);
      this = (CTreeCtrl *)(param_1 + 0x33c);
      for (puVar6 = *(undefined4 **)(param_1 + 0x450);
          (puVar6 != (undefined4 *)0x0 && (*(int *)*puVar6 != -0x10000));
          puVar6 = (undefined4 *)puVar6[1]) {
      }
      lParam = CTreeCtrl::InsertItem
                         (this,1,(wchar_t *)(iVar2 + 8),0,0,0,0,0,(_TREEITEM *)0xffff0000,
                          (_TREEITEM *)0xffff0002);
      if (lParam != (_TREEITEM *)0x0) {
        puVar6 = _malloc(0x24);
        if (puVar6 == (undefined4 *)0x0) goto LAB_0046c5fd;
        puVar6[7] = uVar5;
        *puVar6 = lParam;
        puVar6[4] = uVar3;
        puVar6[5] = 0;
        puVar6[1] = 0;
        puVar6[3] = 0;
        puVar6[6] = 1;
        puVar6[8] = 0;
        FUN_0044e0a0(puVar6);
        if (iVar4 == iVar2) {
          SendMessageW(*(HWND *)(param_1 + 0x35c),0x110b,9,(LPARAM)lParam);
          FUN_00480070(this);
        }
        InvalidateRect(*(HWND *)(param_1 + 0x35c),(RECT *)0x0,1);
      }
      FUN_00480070(this);
    }
LAB_0046c5fd:
    piVar1 = (int *)piVar1[1];
    uVar5 = DAT_00658b30;
  } while( true );
}


//==== FUNC 0046fe50  FUN_0046fe50 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0046fe50(int param_1)

{
  void *pvVar1;
  undefined4 local_1098;
  undefined4 local_1094;
  undefined4 local_1090;
  undefined4 local_4;
  
  local_4 = 0x46fe5a;
  FUN_0044e280();
  *(undefined4 *)(param_1 + 0x5544) = 0;
  *(undefined4 *)(param_1 + 0x553c) = 0x10;
  pvVar1 = _malloc(0x1800);
  if (pvVar1 != (void *)0x0) {
    if (&local_1098 != (undefined4 *)0x0) {
      _memset(&local_1098,0,0x1098);
      local_1098 = 0x1098;
      local_1094 = 1;
      local_1090 = 300;
      local_4 = 0xff;
    }
    _memcpy(pvVar1,&local_1098,0x1098);
    FUN_0044e0a0();
  }
  pvVar1 = _malloc(0x1800);
  if (pvVar1 != (void *)0x0) {
    if (&stack0x00000000 != (undefined1 *)0x1098) {
      FUN_00470b90();
    }
    _memcpy(pvVar1,&local_1098,0x1098);
    FUN_0044e0a0();
  }
  pvVar1 = _malloc(0x1800);
  if (pvVar1 != (void *)0x0) {
    FUN_00470350();
    _memcpy(pvVar1,&local_1098,0x1098);
    FUN_0044e0a0();
  }
  pvVar1 = _malloc(0x1800);
  if (pvVar1 != (void *)0x0) {
    if (&stack0x00000000 != (undefined1 *)0x1098) {
      FUN_00470ae0();
    }
    _memcpy(pvVar1,&local_1098,0x1098);
    FUN_0044e0a0();
  }
  pvVar1 = _malloc(0x1800);
  if (pvVar1 != (void *)0x0) {
    FUN_00470440(param_1);
    _memcpy(pvVar1,&local_1098,0x1098);
    FUN_0044e0a0();
  }
  pvVar1 = _malloc(0x1800);
  if (pvVar1 != (void *)0x0) {
    FUN_004705e0(param_1);
    _memcpy(pvVar1,&local_1098,0x1098);
    FUN_0044e0a0();
  }
  pvVar1 = _malloc(0x1800);
  if (pvVar1 != (void *)0x0) {
    FUN_004707e0(param_1);
    _memcpy(pvVar1,&local_1098,0x1098);
    FUN_0044e0a0();
  }
  pvVar1 = _malloc(0x1800);
  if (pvVar1 != (void *)0x0) {
    FUN_00470950(param_1);
    _memcpy(pvVar1,&local_1098,0x1098);
    FUN_0044e0a0();
  }
  return;
}


//==== FUNC 00477bf0  FUN_00477bf0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00477bf0(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  LPWSTR pWVar5;
  ulong uVar6;
  WPARAM wParam;
  wchar_t *pwVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  wchar_t *local_5458;
  undefined1 uStack_5454;
  undefined4 uStack_5453;
  undefined4 uStack_544f;
  undefined4 uStack_544b;
  undefined2 uStack_5447;
  undefined1 uStack_5445;
  char cStack_5444;
  undefined1 auStack_5443 [63];
  char local_5404 [1024];
  undefined4 local_5004;
  undefined4 uStack_5000;
  uint local_4;
  
  local_4 = DAT_0064f674 ^ (uint)&local_5458;
  local_5458 = (wchar_t *)0x0;
  if ((DAT_0066f91c == 0) && (DAT_0066f920 == 0)) {
    if (DAT_0066f93c == '\0') goto LAB_00477f19;
    puVar10 = &DAT_0066f93c;
    pcVar9 = "querysharemacro.php?uuid=%s";
    pcVar8 = local_5404;
LAB_00477c6c:
    _sprintf(pcVar8,pcVar9,puVar10);
  }
  else {
    iVar3 = _sprintf(local_5404,"querysharemacro.php?start=%d&range=%d",DAT_0066f91c,DAT_0066f920);
    if (DAT_0066f928 != '\0') {
      puVar10 = &DAT_0066f928;
      pcVar9 = "&order=%s";
      pcVar8 = local_5404 + iVar3;
      goto LAB_00477c6c;
    }
  }
  puVar1 = (undefined4 *)FUN_004ad0e9(0x10);
  if (puVar1 == (undefined4 *)0x0) goto LAB_00477f19;
  *puVar1 = CAutoMem::vftable;
  pvVar2 = _malloc(0x2c00);
  puVar1[1] = pvVar2;
  puVar1[2] = 0x2c00;
  puVar1[3] = 0;
  DAT_0066cfd4 = 1;
  iVar3 = FUN_004a0c90(local_5404);
  if (iVar3 == 1) {
    if (DAT_0066f93c == '\0') {
      *(undefined1 *)(puVar1[1] + puVar1[3]) = 0;
      iVar3 = FUN_004a19f0(&local_5004);
      if (iVar3 != 0) {
        pWVar5 = StrStrW((LPCWSTR)&local_5004,L"||||");
        if (pWVar5 == (LPWSTR)0x0) {
          pwVar7 = L"can\'t find record count";
        }
        else {
          *pWVar5 = L'\0';
          uVar6 = _wcstoul((wchar_t *)&local_5004,&local_5458,10);
          if (*local_5458 == L'\0') {
            uVar4 = FUN_00478120();
            uVar4 = uVar4 & 0xffff | uVar6 << 0x10;
            wParam = 0;
LAB_00477ee0:
            PostMessageW(DAT_0066f918,0x481,wParam,uVar4);
            goto LAB_00477f02;
          }
          pwVar7 = L"convert record count err";
        }
        (*DAT_0065d3e0)(pwVar7);
      }
    }
    else {
      iVar3 = puVar1[1];
      *(undefined1 *)(iVar3 + puVar1[3]) = 0;
      puVar10 = (undefined1 *)FUN_004a0e70(iVar3,&local_5458);
      if (local_5458 == (wchar_t *)0x1) {
        *puVar10 = 0;
        local_5004 = local_5004 & 0xffffff00;
        _memset((void *)((int)&local_5004 + 1),0,0x27ff);
        iVar3 = FUN_00478cf0(0x2800);
        if (iVar3 < 1) {
          (*DAT_0065d3e0)(L"Reverse parsing failed");
        }
        if (local_5004 == 0xfacb99a2) {
          uStack_5453 = 0;
          uStack_544f = 0;
          uStack_544b = 0;
          uStack_5447 = 0;
          uStack_5445 = 0;
          uStack_5454 = 0;
          FUN_00478db0();
          cStack_5444 = '\0';
          _memset(auStack_5443,0,0x3f);
          iVar3 = FUN_00478c80(&cStack_5444,0x40,&uStack_5454);
          if (iVar3 != 0) {
            if (DAT_0066f97c != '\0') {
              pcVar8 = &DAT_0066f97c;
              do {
                pcVar9 = pcVar8;
                pcVar8 = pcVar9 + 1;
              } while (*pcVar9 != '\0');
              iVar3 = __strnicmp(&cStack_5444,&DAT_0066f97c,(size_t)(pcVar9 + -0x66f97c));
              if (iVar3 != 0) {
                pwVar7 = L"MD5 unmatched";
                goto LAB_00477e1d;
              }
            }
            uStack_5000 = FUN_00479770();
            uVar4 = FUN_00479b20(&local_5004);
            if (uVar4 != 0) {
              wParam = 1;
              goto LAB_00477ee0;
            }
            goto LAB_00477f02;
          }
          pwVar7 = L"data_to_text failed, md5";
LAB_00477e1d:
          (*DAT_0065d3e0)(pwVar7);
        }
        else {
          (*DAT_0065d3e0)(L"Wrong MagicNumber: %x",local_5004);
        }
        FUN_004494c0(L"macro download err");
      }
      else {
        (*DAT_0065d3e0)(L"MyStrStrIA nCnt=%d",local_5458);
        FUN_004494c0(L"parsing err: 112");
      }
    }
  }
LAB_00477f02:
  DAT_0066cfd4 = 0;
  (**(code **)*puVar1)(1);
LAB_00477f19:
  __security_check_cookie(local_4 ^ (uint)&local_5458);
  return;
}


//==== FUNC 0047c130  FUN_0047c130 ====

void __fastcall FUN_0047c130(int param_1)

{
  uint uVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int unaff_ESI;
  int unaff_EDI;
  int *piVar15;
  undefined2 *puVar16;
  undefined4 uVar17;
  undefined1 *xLeft;
  undefined4 *puVar18;
  undefined1 auStack_bc [12];
  int *piStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 *puStack_a4;
  tagRECT tStack_a0;
  int iStack_90;
  tagRECT local_8c;
  int iStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int local_60 [7];
  void *pvStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_005dd4d3;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)auStack_bc;
  uVar1 = DAT_0064f674 ^ (uint)&stack0xffffff38;
  ExceptionList = &local_14;
  pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  pHVar2 = GetParent(*(HWND *)(pCVar3 + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  local_8c.left = *(int *)(*(int *)(pCVar3 + 0xc0) + 0x24) + 0x18;
  local_60[0] = FUN_00465bb0();
  if (local_60[0] == 0) {
    FID_conflict_MessageBoxW
              ((HWND)L"CKeyMSDlg::LoadSkins pSensorCfg=0",(LPCWSTR)0x0,(LPCWSTR)0x0,uVar1);
  }
  piVar4 = (int *)FUN_004ad163();
  if (piVar4 != (int *)0x0) {
    iStack_64 = (**(code **)(*piVar4 + 0xc))();
    iStack_64 = iStack_64 + 0x10;
    iStack_c = 0;
    FUN_004031f0();
    puVar5 = (undefined4 *)FUN_004ad0e9();
    iStack_c._0_1_ = 1;
    local_8c.top = (LONG)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      if (1 < *(int *)(iStack_64 + -4)) {
        ATL::CSimpleStringT<wchar_t,0>::Fork
                  ((CSimpleStringT<wchar_t,0> *)&iStack_64,*(int *)(iStack_64 + -0xc));
      }
      *puVar5 = Gdiplus::Bitmap::vftable;
      auStack_bc._0_4_ = 0;
      uVar6 = GdipCreateBitmapFromFile();
      puVar5[2] = uVar6;
      puVar5[1] = auStack_bc._0_4_;
    }
    iStack_c = (uint)iStack_c._1_3_ << 8;
    xLeft = auStack_bc;
    *(undefined4 **)(param_1 + 0x2268) = puVar5;
    uVar6 = puVar5[1];
    auStack_bc._0_4_ = 0;
    iVar7 = GdipGetImageWidth();
    if (iVar7 != 0) {
      puVar5[2] = iVar7;
    }
    if ((unaff_ESI == 0) && (*(undefined4 **)(param_1 + 0x2268) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)(param_1 + 0x2268))();
      FUN_004ad123();
      *(undefined4 *)(param_1 + 0x2268) = 0;
    }
    SetRect((LPRECT)auStack_bc,0x96,0x28,0x172,0x34);
    iVar7 = DAT_0065815c;
    iStack_ac = DAT_00658158;
    tStack_a0.left = auStack_bc._8_4_;
    tStack_a0.top = (LONG)piStack_b0;
    iStack_a8 = auStack_bc._0_4_;
    puStack_a4 = (undefined4 *)auStack_bc._4_4_;
    iVar8 = FUN_0044a4a0();
    if (iVar8 != 0) {
      FUN_0044a500();
    }
    iStack_64 = 1;
    local_60[0] = 2;
    local_60[1] = 4;
    local_60[2] = 6;
    local_60[3] = 8;
    local_60[4] = 10;
    local_60[5] = 0xc;
    local_60[6] = 0xe;
    pvStack_44 = (void *)0x10;
    uStack_40 = 0x12;
    uStack_3c = 0x14;
    if (&iStack_64 != (int *)0x0) {
      _memcpy((void *)(param_1 + 0x2784),&iStack_64,0x2c);
      *(undefined4 *)(param_1 + 0x30e4) = 0xb;
      iVar8 = FUN_0044a3d0();
      if (iVar8 < 1) {
        MessageBoxW((HWND)0x0,L"Scale num too much",L"Warning",0);
      }
    }
    SetRect(&local_8c,auStack_bc._0_4_,(int)piStack_b0 + 10,auStack_bc._0_4_ + 0xd,
            (int)piStack_b0 + 0x17);
    FUN_004674f0(param_1,L"check_nr.png",L"check_nr.png",param_1 + 0x4f24);
    SetRect(&local_8c,auStack_bc._8_4_ + 5,auStack_bc._4_4_,auStack_bc._8_4_ + 0x17,(int)piStack_b0)
    ;
    uVar12 = *(undefined4 *)(param_1 + 0x5878);
    tStack_a0.top = local_8c.bottom;
    iStack_ac = local_8c.bottom - local_8c.top;
    iStack_a8 = local_8c.left;
    tStack_a0.left = local_8c.right;
    iVar9 = local_8c.right - local_8c.left;
    piVar4 = &iStack_a8;
    puStack_a4 = (undefined4 *)local_8c.top;
    puStack_78 = (undefined4 *)local_8c.top;
    puVar5 = (undefined4 *)0x5000000b;
    iStack_7c = local_8c.left;
    puVar16 = &DAT_0060b0b0;
    iVar8 = param_1;
    (**(code **)(*(int *)(param_1 + 0x523c) + 0x13c))();
    FUN_0045e2e0(iStack_90,local_8c.left,uVar6,iVar9,uVar12);
    uVar12 = DAT_00658114;
    uVar6 = DAT_0065810c;
    *(undefined4 *)(param_1 + 0x52d8) = DAT_00658110;
    *(undefined4 *)(param_1 + 0x52dc) = uVar6;
    *(undefined4 *)(param_1 + 0x52e0) = uVar12;
    *(undefined4 *)(param_1 + 0x52fc) = 0;
    if (DAT_0065151c != 0) {
      *(undefined ***)(param_1 + 0x539c) = &PTR_vftable_00651518;
    }
    *(undefined4 *)(param_1 + 0x53a4) = DAT_0065828c;
    *(undefined ***)(param_1 + 0x539c) = &PTR_vftable_00651520;
    SetRect((LPRECT)&stack0xffffff30,(int)xLeft,0x69,(int)(xLeft + 0xdc),0x75);
    uVar6 = DAT_00658158;
    iVar9 = *(int *)(param_1 + 0x5878);
    piStack_b0 = (int *)iVar7;
    auStack_bc._0_4_ = xLeft;
    auStack_bc._4_4_ = uVar1;
    iVar10 = FUN_0044a4a0(param_1,xLeft,uVar1,unaff_EDI);
    if (iVar10 != 0) {
      FUN_0044a500(uVar6);
    }
    FUN_0044a0c0();
    SetRect(&tStack_a0,(int)xLeft,iVar7 + 10,(int)(xLeft + 0xd),iVar7 + 0x17);
    FUN_004674f0(param_1,L"check_nr.png",L"check_nr.png",param_1 + 0x50b0,1,0,tStack_a0.left,
                 tStack_a0.top,tStack_a0.right);
    SetRect(&tStack_a0,unaff_EDI + 5,uVar1,unaff_EDI + 0x17,iVar7);
    uVar6 = *(undefined4 *)(param_1 + 0x5878);
    piStack_b0 = (int *)tStack_a0.bottom;
    auStack_bc._0_4_ = tStack_a0.left;
    auStack_bc._8_4_ = tStack_a0.right;
    iVar7 = tStack_a0.right - tStack_a0.left;
    auStack_bc._4_4_ = tStack_a0.top;
    local_8c.left = tStack_a0.top;
    iStack_90 = tStack_a0.left;
    (**(code **)(*(int *)(param_1 + 0x53c8) + 0x13c))(&DAT_0060b0b0,0x5000000b,auStack_bc,param_1);
    FUN_0045e2e0(puStack_a4,tStack_a0.left,puVar16,iVar7,uVar6,uVar6);
    uVar12 = DAT_00658114;
    uVar6 = DAT_0065810c;
    *(undefined4 *)(param_1 + 0x5464) = DAT_00658110;
    *(undefined4 *)(param_1 + 0x5468) = uVar6;
    *(undefined4 *)(param_1 + 0x546c) = uVar12;
    *(undefined4 *)(param_1 + 0x5488) = 0;
    if (DAT_0065151c != 0) {
      *(undefined ***)(param_1 + 0x5528) = &PTR_vftable_00651518;
    }
    *(undefined4 *)(param_1 + 0x5530) = DAT_0065828c;
    *(undefined ***)(param_1 + 0x5528) = &PTR_vftable_00651520;
    SetRect((LPRECT)&stack0xffffff1c,0x226,0x25,0x2a8,0x3a);
    FUN_004674f0(param_1,L"combo3_nr.png",L"combo3_nr.png",param_1 + 0x74,0,0,puVar5,piVar4,iVar8,
                 iVar9);
    *(undefined4 *)(param_1 + 0x270) = 0x14;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(undefined ***)(param_1 + 0x1d4) = &PTR_vftable_00651528;
    piVar15 = (int *)(auStack_bc._0_4_ + 0x26a0);
    iVar7 = 4;
    do {
      if (*piVar15 != 0) {
        __snwprintf_s((wchar_t *)local_60,10,9,L"%x Hz",*piVar15);
        iVar10 = *piVar15;
        piVar11 = _malloc(0x2c);
        if (piVar11 != (int *)0x0) {
          *piVar11 = iVar10;
          *(wchar_t *)(piVar11 + 1) = L'\0';
          __snwprintf_s((wchar_t *)(piVar11 + 1),0x14,0x13,L"%s",local_60);
          FUN_0044e0a0(piVar11);
        }
      }
      piVar15 = piVar15 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    SetRect((LPRECT)&stack0xffffff1c,(int)puVar5,0x69,(int)(puVar5 + 0x37),0x75);
    iVar10 = DAT_0065815c;
    uVar6 = DAT_00658158;
    iVar7 = *(int *)(param_1 + 0x2268);
    uVar12 = 0;
    *(undefined4 *)(param_1 + 0x4090) = 0x803;
    *(int *)(param_1 + 0x4eec) = iVar7;
    puStack_a4 = puVar5;
    tStack_a0.left = (LONG)piVar4;
    tStack_a0.top = iVar8;
    tStack_a0.right = iVar9;
    if (iVar7 != 0) {
      uVar12 = 0;
      iVar13 = GdipGetImageWidth(*(undefined4 *)(iVar7 + 4),&stack0xffffff14);
      if (iVar13 != 0) {
        *(int *)(iVar7 + 8) = iVar13;
      }
    }
    *(undefined4 *)(param_1 + 0x4ec0) = uVar12;
    iVar7 = Create(0,&DAT_0060b0b0,0x50000000,&stack0xffffff30,param_1,0x68,0);
    if (iVar7 != 0) {
      FUN_0044a500(uVar6,iVar10);
    }
    uVar6 = 0x804;
    local_8c.left = 900;
    local_8c.top = 0x33e;
    local_8c.right = 0x2f8;
    local_8c.bottom = 0x2b2;
    iStack_7c = 0x26c;
    puStack_78 = (undefined4 *)0x226;
    uStack_74 = 0x1e0;
    uStack_70 = 0x19a;
    uStack_6c = 0x154;
    uStack_68 = 0x10e;
    iStack_64 = 200;
    if (&local_8c != (tagRECT *)0x0) {
      _memcpy((void *)(param_1 + 0x4554),&local_8c,0x2c);
      *(undefined4 *)(param_1 + 0x4eb4) = 0xb;
      iVar7 = *(int *)(param_1 + 0x4ec0) / 2;
      iVar7 = FUN_0044a3d0(iVar7,(*(int *)(param_1 + 0x4ee0) - *(int *)(param_1 + 0x4ed8)) - iVar7,
                           param_1 + 0x40a4,0xb);
      if (iVar7 < 1) {
        MessageBoxW((HWND)0x0,L"Scale num too much",L"Warning",0);
      }
    }
    uVar12 = auStack_bc._0_4_;
    if (*(char *)(auStack_bc._0_4_ + 0x2688) == '\0') {
      CWnd::ShowWindow((CWnd *)(param_1 + 0x226c),0);
      CWnd::ShowWindow((CWnd *)(param_1 + 0x4f24),0);
      CWnd::ShowWindow((CWnd *)(param_1 + 0x523c),0);
      CWnd::ShowWindow((CWnd *)(param_1 + 0x53c8),0);
      CWnd::ShowWindow((CWnd *)(param_1 + 0x403c),0);
      CWnd::ShowWindow((CWnd *)(param_1 + 0x3154),0);
      CWnd::ShowWindow((CWnd *)(param_1 + 0x50b0),0);
    }
    SetRect((LPRECT)&stack0xffffff1c,0x366,0x28,0x442,0x34);
    iVar7 = DAT_0065815c;
    uVar17 = DAT_00658158;
    if (*(int *)(uVar12 + 0x2714) != 0) {
      auStack_bc._4_4_ = ZEXT14(*(byte *)(uVar12 + 0x2714));
      iVar10 = *(int *)(param_1 + 0x2268);
      *(undefined4 *)(param_1 + 0x2d8) = 0x804;
      *(int *)(param_1 + 0x1134) = iVar10;
      iVar13 = 0;
      puStack_a4 = puVar5;
      tStack_a0.left = (LONG)piVar4;
      tStack_a0.top = iVar8;
      tStack_a0.right = iVar9;
      if (iVar10 != 0) {
        auStack_bc._0_4_ = 0;
        iVar14 = GdipGetImageWidth(*(undefined4 *)(iVar10 + 4),auStack_bc);
        iVar13 = auStack_bc._0_4_;
        if (iVar14 != 0) {
          *(int *)(iVar10 + 8) = iVar14;
        }
      }
      *(int *)(param_1 + 0x1108) = iVar13;
      iVar10 = Create(0,&DAT_0060b0b0,0x50000000,&puStack_a4,param_1,0x68,0);
      if (iVar10 != 0) {
        FUN_0044a500(uVar17,iVar7);
      }
      uVar6 = 0x805;
      FUN_0044a0c0();
      SetRect((LPRECT)(auStack_bc + 8),iVar8 + 5,(int)piVar4,iVar8 + 0x17,iVar9);
      uVar12 = *(undefined4 *)(param_1 + 0x5878);
      tStack_a0.right = iStack_a8;
      iVar7 = iStack_a8 - (int)piStack_b0;
      puStack_a4 = (undefined4 *)auStack_bc._8_4_;
      tStack_a0.top = iStack_ac;
      auStack_bc._4_4_ = iStack_ac - auStack_bc._8_4_;
      tStack_a0.left = (LONG)piStack_b0;
      puVar18 = (undefined4 *)auStack_bc._8_4_;
      piVar15 = piStack_b0;
      (**(code **)(*(int *)(param_1 + 0x5554) + 0x13c))
                (&DAT_0060b0b0,0x5000000b,&puStack_a4,param_1,0);
      FUN_0045e2e0(puVar18,piVar15,auStack_bc._4_4_,iVar7,uVar12,uVar12);
      uVar17 = DAT_00658114;
      uVar12 = DAT_0065810c;
      *(undefined4 *)(param_1 + 22000) = DAT_00658110;
      *(undefined4 *)(param_1 + 0x55f4) = uVar12;
      *(undefined4 *)(param_1 + 0x55f8) = uVar17;
      *(undefined4 *)(param_1 + 0x5614) = 0;
      if (DAT_0065151c != 0) {
        *(undefined ***)(param_1 + 0x56b4) = &PTR_vftable_00651518;
      }
      *(undefined4 *)(param_1 + 0x56bc) = DAT_0065828c;
      *(undefined ***)(param_1 + 0x56b4) = &PTR_vftable_00651520;
      SetRect((LPRECT)&stack0xffffff1c,(int)puVar5,0x69,(int)(puVar5 + 0x37),0x75);
    }
    iVar7 = iStack_90;
    uVar1 = (uint)*(byte *)(iStack_90 + 0x87c);
    *(uint *)(param_1 + 0x2264) = uVar1;
    uVar12 = DAT_00658158;
    if (uVar1 < 3) {
      if (uVar1 != 0) {
        SetRect((LPRECT)&stack0xffffff1c,(int)puVar5,0x66,(int)puVar5 + 0x46,0x7b);
        iVar10 = param_1 + 0x2054;
        FUN_004674f0(param_1,L"combo4_nr.png",L"combo4_nr.png",iVar10,0,0,puVar5,piVar4,iVar8,iVar9)
        ;
        *(undefined4 *)(param_1 + 0x2250) = 10;
        *(undefined ***)(param_1 + 0x21b4) = &PTR_vftable_00651528;
        __snwprintf_s((wchar_t *)local_60,10,9,L"%d mm",(uint)*(byte *)(iVar7 + 0x880));
        FUN_004074f0(iVar10,0);
        __snwprintf_s((wchar_t *)local_60,10,9,L"%d mm",(uint)*(byte *)(iStack_90 + 0x881));
        FUN_004074f0(iVar10,1);
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x2268);
      auStack_bc._4_4_ = DAT_0065815c;
      *(undefined4 *)(param_1 + 0x11c0) = uVar6;
      *(int *)(param_1 + 0x201c) = iVar7;
      iVar10 = 0;
      puStack_a4 = puVar5;
      tStack_a0.left = (LONG)piVar4;
      tStack_a0.top = iVar8;
      tStack_a0.right = iVar9;
      if (iVar7 != 0) {
        auStack_bc._0_4_ = 0;
        iVar13 = GdipGetImageWidth(*(undefined4 *)(iVar7 + 4),auStack_bc);
        iVar10 = auStack_bc._0_4_;
        if (iVar13 != 0) {
          *(int *)(iVar7 + 8) = iVar13;
        }
      }
      *(int *)(param_1 + 0x1ff0) = iVar10;
      iVar7 = Create(0,&DAT_0060b0b0,0x50000000,&puStack_a4,param_1,0x68,0);
      if (iVar7 != 0) {
        FUN_0044a500(uVar12,auStack_bc._4_4_);
      }
      FUN_0044a0c0();
      if (3 < *(int *)(param_1 + 0x2264)) {
        SetRect((LPRECT)(auStack_bc + 8),iVar8 + 5,(int)piVar4,iVar8 + 0x21,iVar9);
        uVar6 = *(undefined4 *)(param_1 + 0x5878);
        tStack_a0.right = iStack_a8;
        iVar7 = iStack_a8 - (int)piStack_b0;
        puStack_a4 = (undefined4 *)auStack_bc._8_4_;
        tStack_a0.top = iStack_ac;
        auStack_bc._4_4_ = iStack_ac - auStack_bc._8_4_;
        tStack_a0.left = (LONG)piStack_b0;
        puVar5 = (undefined4 *)auStack_bc._8_4_;
        piVar4 = piStack_b0;
        (**(code **)(*(int *)(param_1 + 0x56e0) + 0x13c))
                  (&DAT_0060b0b0,0x5000000b,&puStack_a4,param_1,0);
        FUN_0045e2e0(puVar5,piVar4,auStack_bc._4_4_,iVar7,uVar6,uVar6);
        uVar12 = DAT_00658114;
        uVar6 = DAT_0065810c;
        *(undefined4 *)(param_1 + 0x577c) = DAT_00658110;
        *(undefined4 *)(param_1 + 0x5780) = uVar6;
        *(undefined4 *)(param_1 + 0x5784) = uVar12;
        *(undefined4 *)(param_1 + 0x57a0) = 0;
        if (DAT_0065151c != 0) {
          *(undefined ***)(param_1 + 0x5840) = &PTR_vftable_00651518;
        }
        *(undefined4 *)(param_1 + 0x5848) = DAT_0065828c;
        *(undefined ***)(param_1 + 0x5840) = &PTR_vftable_00651520;
      }
    }
    uStack_3c = 0xffffffff;
    piVar4 = (int *)(tStack_a0.bottom + -4);
    LOCK();
    iVar7 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar7 + -1 < 1) {
      (**(code **)(**(int **)(tStack_a0.bottom + -0x10) + 4))((int *)(tStack_a0.bottom + -0x10));
    }
    ExceptionList = pvStack_44;
    __security_check_cookie(local_60[5] ^ (uint)&stack0xffffff14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403990();
}


//==== FUNC 00482d80  FUN_00482d80 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00482d80(void)

{
  uint uVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint unaff_EDI;
  undefined8 uVar8;
  undefined1 *puVar9;
  UINT uType;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int local_18d0;
  int iStack_18cc;
  int local_18c8;
  int iStack_18c4;
  int local_18bc;
  undefined1 auStack_18b0 [4];
  int iStack_18ac;
  undefined4 auStack_18a4 [1439];
  wchar_t local_228 [262];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d7bad;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&local_18d0;
  uVar1 = DAT_0064f674 ^ (uint)&stack0xffffe728;
  ExceptionList = &local_14;
  if (*(int *)(unaff_EDI + 0xd18) == 0) {
    FUN_00483320();
  }
  else {
    local_18c8 = FUN_00438960();
    if (local_18c8 == 0) {
      FID_conflict_MessageBoxW((HWND)L"load virtualkb.png failed.",(LPCWSTR)0x0,(LPCWSTR)0x0,uVar1);
    }
    else {
      __snwprintf_s(local_228,0x104,0x103,L"%svkb.ini");
      if (DAT_0065e864 == (int *)0x0) {
        DAT_0065e864 = _malloc(0x1204);
        _memset(DAT_0065e864,0,0x1204);
        iVar2 = FUN_00413230();
        *DAT_0065e864 = iVar2;
      }
      pHVar3 = GetParent(*(HWND *)(unaff_EDI + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      iVar2 = *(int *)(*(int *)(pCVar4 + 0xc0) + 0x24) + 0x18;
      local_18d0 = iVar2;
      local_18bc = FUN_004ad0e9();
      pCVar4 = (CWnd *)0x0;
      local_c = 0;
      if (local_18bc != 0) {
        pCVar4 = (CWnd *)FUN_00419ad0();
        iVar2 = local_18d0;
      }
      local_c = 0xffffffff;
      uVar1 = unaff_EDI;
      (**(code **)(*(int *)pCVar4 + 0x13c))();
      *(undefined4 *)(pCVar4 + 0x1788) = 1;
      *(undefined4 *)(pCVar4 + 6000) = *(undefined4 *)(iVar2 + 0x2d00);
      *(undefined4 *)(pCVar4 + 0x1774) = *(undefined4 *)(iVar2 + 0x2d00);
      *(undefined4 *)(pCVar4 + 0x18f8) = 0;
      _memset(auStack_18b0,0,0x1680);
      iVar2 = 0;
      piVar6 = DAT_0065e864;
      if (0 < *DAT_0065e864) {
        iVar12 = 0;
        puVar7 = auStack_18a4;
        do {
          CopyRect((LPRECT)(puVar7 + 2),(RECT *)(iVar12 + 0x904 + (int)piVar6));
          uVar8 = FUN_004671f0();
          piVar6 = (int *)((ulonglong)uVar8 >> 0x20);
          iVar12 = iVar12 + 0x10;
          *puVar7 = (int)uVar8;
          puVar7[-2] = 200;
          iVar2 = iVar2 + 1;
          puVar7 = puVar7 + 10;
        } while (iVar2 < *piVar6);
      }
      iVar2 = *piVar6;
      _memcpy(pCVar4 + 0x88,auStack_18b0,iVar2 * 0x28);
      *(int *)(pCVar4 + 0x1764) = iVar2;
      uType = *(UINT *)(local_18d0 + 4);
      iVar2 = *(int *)(unaff_EDI + 0xd28);
      iVar12 = *(int *)(unaff_EDI + 0xd20);
      puVar10 = &stack0xffffe728;
      iVar5 = GdipGetImageHeight();
      if (iVar5 != 0) {
        iRam00000008 = iVar5;
      }
      if ((uint)(iVar2 - iVar12) <= uVar1) {
        FID_conflict_MessageBoxW
                  ((HWND)L"virtualkb.png size too largee",(LPCWSTR)0x0,(LPCWSTR)0x0,uType);
      }
      iVar2 = *(int *)(unaff_EDI + 0xd24);
      iVar12 = *(int *)(unaff_EDI + 0xd1c);
      puVar9 = &stack0xffffe720;
      iVar11 = 0;
      iVar5 = GdipGetImageWidth(uRam00000004);
      if (iVar5 != 0) {
        *(int *)(iVar11 + 8) = iVar5;
      }
      uVar1 = (uint)((iVar2 - iVar12) - (int)puVar10) >> 1;
      iVar2 = GdipGetImageHeight(*(undefined4 *)(iVar11 + 4),&stack0xffffe71c);
      if (iVar2 != 0) {
        *(int *)(uVar1 + 8) = iVar2;
      }
      iVar2 = GdipGetImageHeight(*(undefined4 *)(uVar1 + 4),&stack0xffffe720);
      if (iVar2 != 0) {
        *(int *)(puVar9 + 8) = iVar2;
      }
      iVar2 = GdipGetImageWidth(*(undefined4 *)(puVar9 + 4),&stack0xffffe714);
      if (iVar2 != 0) {
        *(int *)(puVar9 + 8) = iVar2;
      }
      iVar2 = iStack_18c4 + local_18d0;
      iStack_18ac = local_18bc + iStack_18cc;
      FUN_0041ae20(local_18c8,*(undefined4 *)(unaff_EDI + 0x74));
      CWnd::MoveWindow(pCVar4,local_18d0,iStack_18cc,iVar2 - local_18d0,iStack_18ac - iStack_18cc,1)
      ;
      CWnd::ShowWindow(pCVar4,5);
      *(CWnd **)(unaff_EDI + 0x88) = pCVar4;
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_18d0);
  return;
}


//==== FUNC 0048c350  FUN_0048c350 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c350(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  float _Size;
  bool bVar4;
  int iVar5;
  DWORD DVar6;
  BOOL BVar7;
  void *pvVar8;
  undefined4 *puVar9;
  float fVar10;
  uint uVar11;
  undefined4 uVar12;
  float *pfVar13;
  int iVar14;
  CSimpleStringT<wchar_t,0> *this;
  char cVar15;
  uint uVar16;
  float *pfVar17;
  uint *puVar18;
  int iVar19;
  char cVar20;
  int *piVar21;
  int iVar22;
  undefined *puVar23;
  float *pfVar24;
  uint *puVar25;
  undefined **ppuVar26;
  float10 fVar27;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  wchar_t *_Format;
  float *pfStack_3768;
  float *pfStack_3764;
  undefined4 *puStack_3760;
  float *pfStack_375c;
  undefined *puStack_3758;
  int local_3754;
  float *pfStack_3750;
  float *pfStack_374c;
  undefined4 *local_3748;
  float *pfStack_3744;
  int iStack_3740;
  byte bStack_3739;
  int iStack_3738;
  float fStack_3734;
  int local_3730;
  undefined **ppuStack_372c;
  uint uStack_3728;
  undefined **ppuStack_3724;
  undefined4 uStack_3720;
  float fStack_371c;
  int iStack_3714;
  int local_3710;
  uint auStack_370c [11];
  tagRECT tStack_36e0;
  float fStack_36cc;
  uint auStack_36c8 [8];
  tagRECT tStack_36a8;
  uint auStack_3698 [144];
  uint uStack_3458;
  float fStack_3454;
  char acStack_3450 [9080];
  float afStack_10d8 [46];
  undefined1 auStack_1020 [1024];
  wchar_t awStack_c20 [260];
  wchar_t awStack_a18 [260];
  undefined2 auStack_810 [1024];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005de356;
  local_c = ExceptionList;
  local_10 = DAT_0064f674 ^ (uint)&pfStack_3768;
  ExceptionList = &local_c;
  iVar22 = *(int *)(param_1 + 0xc0);
  local_3754 = param_1;
  local_3748 = param_2;
  local_3730 = iVar22;
  if ((((*(int **)(iVar22 + 0x1c) == (int *)0x0) ||
       (iVar5 = (**(code **)(**(int **)(iVar22 + 0x1c) + 0x14))
                          (DAT_0064f674 ^ (uint)&stack0xffffc888), iVar5 == 0)) ||
      (bVar4 = true, *(int *)(iVar22 + 0x30c) == 1)) ||
     (*(int *)(*(int *)(iVar22 + 0x1c) + 0x238) == 0)) {
    bVar4 = false;
    local_3710 = 0;
    DVar6 = GetTickCount();
    *(DWORD *)(param_1 + 0x2d8) = DVar6;
    if (DAT_00658b04 == 0) goto LAB_0048e8b3;
  }
  else {
    local_3710 = 1;
  }
  if ((*(int *)(param_1 + 0x2d8) != 0) && (bVar4)) {
    DVar6 = GetTickCount();
    if ((int)(DVar6 - *(int *)(param_1 + 0x2d8)) < 4000) goto LAB_0048e8b3;
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  iVar22 = *(int *)(iVar22 + 0x24);
  pfStack_375c = (float *)(iVar22 + 0x18);
  pfStack_3744 = (float *)(param_1 + 0x170c);
  auStack_36c8[0] = 0xff;
  auStack_36c8[1] = 0xff00ff;
  auStack_36c8[2] = 0xffff;
  auStack_36c8[3] = 0xffff00;
  auStack_36c8[4] = 0xff0000;
  auStack_36c8[5] = 0xff00;
  auStack_36c8[6] = 0x80ff;
  auStack_36c8[7] = 0x8000;
  if (*(int *)(param_1 + 0x16f0) == 0) {
    pfStack_374c = (float *)0x0;
  }
  else {
    pfStack_374c = *(float **)(*(int *)(param_1 + 0x16f0) + 0x2d18);
  }
  pfVar13 = pfStack_374c;
  GetWindowRect((HWND)pfStack_374c[8],&tStack_36a8);
  FUN_0041e040(pfVar13,&ppuStack_3724);
  puStack_3760 = (undefined4 *)FUN_0041dfa0();
  pfVar13 = *(float **)(param_1 + 0x1fc);
  if (pfVar13 == (float *)0x0) {
    pfStack_3764 = (float *)(param_1 + 0x200);
    *pfStack_3764 = 0.0;
    *(undefined4 *)(param_1 + 0x204) = 0;
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0;
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    auStack_370c[0] = 0x70;
    auStack_370c[1] = 0x31;
    auStack_370c[2] = 0x51;
    auStack_370c[3] = 0x41;
    auStack_370c[4] = 0x58;
    auStack_370c[5] = 0x20;
    if (*(int *)(iVar22 + 0x2d5c) != 0) {
      auStack_370c[0] = (uint)*(byte *)(iVar22 + 0x2d5c);
      auStack_370c[1] = (uint)*(byte *)(iVar22 + 0x2d5d);
      auStack_370c[2] = (uint)*(byte *)(iVar22 + 0x2d5e);
      auStack_370c[3] = (uint)*(byte *)(iVar22 + 0x2d5f);
      auStack_370c[4] = (uint)*(byte *)(iVar22 + 0x2d60);
      auStack_370c[5] = (uint)*(byte *)(iVar22 + 0x2d61);
    }
    iVar22 = 0;
    do {
      iVar5 = FUN_0041e200(param_1 + 0x218 + *(int *)(param_1 + 0x1fc) * 0x1e);
      if (0 < iVar5) {
        *(int *)(param_1 + 0x200 + *(int *)(param_1 + 0x1fc) * 4) = iVar5;
        *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
        *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + iVar5;
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < 6);
    param_3 = 1;
  }
  else {
    auStack_370c[0] = *(uint *)(param_1 + 0x200);
    auStack_370c[1] = *(uint *)(param_1 + 0x204);
    pfStack_3764 = (float *)(param_1 + 0x200);
    auStack_370c[2] = *(uint *)(param_1 + 0x208);
    auStack_370c[3] = *(uint *)(param_1 + 0x20c);
    auStack_370c[4] = *(uint *)(param_1 + 0x210);
    auStack_370c[5] = *(uint *)(param_1 + 0x214);
    pfVar17 = (float *)(param_1 + 0x218);
    pfVar24 = afStack_10d8;
    for (iVar22 = 0x2d; pfStack_3750 = pfVar13, iVar22 != 0; iVar22 = iVar22 + -1) {
      *pfVar24 = *pfVar17;
      pfVar17 = pfVar17 + 1;
      pfVar24 = pfVar24 + 1;
    }
  }
  fStack_3734 = (float)FUN_005b2070();
  tStack_36e0.right = FUN_005b2070();
  puStack_3758 = (undefined *)FUN_005b2070();
  iVar22 = DAT_0066f9ac;
  fStack_36cc = fStack_371c / (float)_DAT_00625d88;
  iStack_3714 = DAT_0066f9ac;
  iStack_3738 = DAT_0066f9b4;
  uStack_3728 = DAT_0066f9c8;
  if ((param_3 & 1) != 0) {
    _memset((void *)(param_1 + 0x14a0),0,0x240);
    _memset((void *)(param_1 + 0xf0),0,0x78);
    _memset((void *)(param_1 + 0x180),0,0x78);
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0x168;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    iVar5 = *(int *)(*(int *)(local_3730 + 0x24) + 0x2ea8);
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    __snwprintf_s(awStack_a18,0x104,0x103,L"%s\\ET",*(int *)(param_1 + 0xc0) + 0xd0);
    BVar7 = PathFileExistsW(awStack_a18);
    if (BVar7 == 0) {
      __snwprintf_s(awStack_a18,0x104,0x103,L"%sET\\%d",&DAT_0065d1b0,iVar5);
    }
    pvVar8 = *(void **)(param_1 + 0x16e0);
    if (iVar22 == 1) {
      if (pvVar8 != (void *)0x0) {
        _free(pvVar8);
        *(undefined4 *)(param_1 + 0x16e0) = 0;
      }
      pvVar8 = _malloc(0xe64);
      *(void **)(param_1 + 0x16e0) = pvVar8;
      __snwprintf_s(awStack_c20,0x104,0x103,L"%s\\flower.txt",awStack_a18);
      iVar5 = FUN_0048c0b0(awStack_c20);
      if (iVar5 == 0) {
        MessageBoxW((HWND)0x0,L"init_flower failed",L"Warning",0);
      }
    }
    else {
      if (pvVar8 != (void *)0x0) {
        _free(pvVar8);
        *(undefined4 *)(param_1 + 0x16e0) = 0;
      }
      pvVar8 = _malloc(0xe64);
      *(void **)(param_1 + 0x16e0) = pvVar8;
      __snwprintf_s(awStack_c20,0x104,0x103,L"%s\\stream_h.txt",awStack_a18);
      iVar5 = FUN_0048bde0(awStack_c20);
      if (iVar5 == 0) {
        MessageBoxW((HWND)0x0,L"init_stream failed",L"Warning",0);
      }
      if ((iVar22 == 0) || (iVar22 == 4)) {
        _Format = L"%s\\audiobar.txt";
      }
      else {
        if (iVar22 != 6) goto LAB_0048c92a;
        _Format = L"%s\\happy.txt";
      }
      __snwprintf_s(awStack_c20,0x104,0x103,_Format,awStack_a18);
      iVar5 = FUN_0048f230();
      if (iVar5 == 0) {
        MessageBoxW((HWND)0x0,L"init_audiobar failed",L"Warning",0);
      }
    }
  }
LAB_0048c92a:
  _memset(auStack_1020,0,0x400);
  _memset(auStack_3698,0,0x240);
  puVar9 = local_3748;
  iVar5 = local_3754;
  if (param_4 == 0) {
    iStack_3740 = DAT_0066f9c4;
    if (DAT_0066f9c4 < 1) {
      iStack_3740 = 1;
    }
    auStack_370c[6] = 0xf;
    auStack_370c[7] = 0x2d;
    auStack_370c[8] = 0x41;
    auStack_370c[9] = 0x55;
    auStack_370c[10] = 100;
    if (iVar22 == 0) {
      if (((iStack_3738 != 0) &&
          (*(int *)(local_3754 + 0xd8) = *(int *)(local_3754 + 0xd8) + 1,
          4 < *(int *)(local_3754 + 0xd8))) &&
         (*(undefined4 *)(local_3754 + 0xd8) = 0, *(int *)(*(int *)(local_3754 + 0x16e0) + 4) == 1))
      {
        FUN_0048bf50(pfStack_375c,local_3754 + 0x14a0);
      }
      pfStack_374c = (float *)0x0;
      iVar22 = 0;
      pfVar13 = pfStack_3744 + 1;
      do {
        if ((int)*pfVar13 < 1) break;
        iVar22 = iVar22 + 1;
        pfStack_374c = (float *)((int)pfStack_374c + 1);
        pfVar13 = pfVar13 + 0x42;
      } while (iVar22 < 0x17);
      ppuStack_3724 = (undefined **)0x0;
      if (0 < (int)pfStack_374c) {
        fVar27 = (float10)_DAT_00625b68;
        pfStack_3750 = pfStack_3744 + 2;
        puStack_3760 = local_3748 + 1;
        pfVar13 = pfStack_375c;
        local_3748 = puStack_3760;
        do {
          ppuVar26 = ppuStack_3724;
          pfStack_3768 = (float *)*local_3748;
          fVar10 = pfStack_3750[-1];
          if ((ppuStack_3724 == (undefined **)((int)pfStack_374c + -1)) ||
             (ppuStack_3724 == (undefined **)((int)pfStack_374c + -2))) {
            pfStack_3768 = (float *)*puStack_3760;
          }
          if (100 < (int)pfStack_3768) {
            pfStack_3768 = (float *)0x64;
          }
          puStack_3758 = (undefined *)
                         ((float)(int)pfStack_3768 / (float)(fVar27 / (float10)(int)fVar10));
          iVar22 = FUN_005b2070();
          puStack_3758 = (undefined *)(float)(extraout_ST0 - (float10)iVar22);
          iVar5 = FUN_005b2070();
          if ((0 < iVar5) && (iVar22 < (int)fVar10)) {
            iVar22 = iVar22 + 1;
          }
          fVar27 = extraout_ST0_00;
          if (0 < iVar22) {
            pfStack_3744 = pfStack_3750;
            ppuStack_372c = (undefined **)iVar22;
            do {
              fStack_3734 = 0.0;
              pfStack_3768 = pfStack_3744;
              do {
                if (*pfStack_3768 == 0.0) break;
                pfStack_3764 = (float *)0xffffffff;
                fVar27 = (float10)FUN_00467a60(&pfStack_3764);
                if (pfStack_3764 != (float *)0xffffffff) {
                  uVar16 = uStack_3728;
                  if (iStack_3738 != 0) {
                    uVar16 = *(uint *)(local_3754 + 0x14a0 + (int)pfStack_3764 * 4);
                  }
                  if (iStack_3740 != 5) {
                    uVar11 = auStack_370c[iStack_3740 + 5];
                    iVar22 = (uVar16 >> 8 & 0xff) * uVar11;
                    bStack_3739 = ((char)(iVar22 / 0xff) + (char)(iVar22 >> 0x1f)) -
                                  (char)((longlong)iVar22 * 0x80808081 >> 0x3f);
                    uVar16 = (((int)((uVar16 >> 0x10 & 0xff) * uVar11) / 0xff & 0xffU) << 8 |
                             (uint)bStack_3739) << 8 |
                             (int)((uVar16 & 0xff) * uVar11) / 0xff & 0xffU;
                    pfVar13 = pfStack_375c;
                  }
                  iVar5 = (uint)*(byte *)(pfVar13 + (int)pfStack_3764 * 4 + 3) * 3 + -0x1020;
                  iVar22 = *(int *)(local_3730 + 0x24);
                  auStack_1020[(uint)*(byte *)(iVar22 + 0x2f9e) + iVar5 + 0x1020] = (char)uVar16;
                  auStack_1020[(uint)*(byte *)(iVar22 + 0x2f9f) + iVar5 + 0x1020] =
                       (char)(uVar16 >> 8);
                  auStack_1020[(uint)*(byte *)(iVar22 + 0x2fa0) + iVar5 + 0x1020] =
                       (char)(uVar16 >> 0x10);
                  auStack_3698[(int)pfStack_3764] = uVar16;
                }
                pfStack_3768 = pfStack_3768 + 1;
                fStack_3734 = (float)((int)fStack_3734 + 1);
              } while ((int)fStack_3734 < 8);
              pfStack_3744 = pfStack_3744 + 8;
              ppuStack_372c = (undefined **)((int)ppuStack_372c + -1);
            } while (ppuStack_372c != (undefined **)0x0);
            ppuStack_372c = (undefined **)0x0;
            ppuVar26 = ppuStack_3724;
          }
          local_3748 = local_3748 + 1;
          pfStack_3750 = pfStack_3750 + 0x42;
          ppuStack_3724 = (undefined **)((int)ppuVar26 + 1);
        } while ((int)ppuStack_3724 < (int)pfStack_374c);
      }
    }
    else if (iVar22 == 6) {
      if (((iStack_3738 != 0) &&
          (*(int *)(local_3754 + 0xd8) = *(int *)(local_3754 + 0xd8) + 1,
          4 < *(int *)(local_3754 + 0xd8))) &&
         (*(undefined4 *)(local_3754 + 0xd8) = 0, *(int *)(*(int *)(local_3754 + 0x16e0) + 4) == 1))
      {
        FUN_0048bf50(pfStack_375c,local_3754 + 0x14a0);
      }
      tStack_36e0.left = local_3748[1];
      tStack_36e0.top = tStack_36e0.left;
      tStack_36e0.bottom = tStack_36e0.left;
      pfStack_3744 = pfStack_3744 + 2;
      tStack_36e0.right = local_3748[2];
      local_3748 = (undefined4 *)0x0;
      do {
        pfVar13 = pfStack_3744;
        iVar22 = (&tStack_36e0.left)[(int)local_3748];
        if (100 < iVar22) {
          iVar22 = 100;
        }
        fVar10 = pfStack_3744[-1];
        if ((int)fVar10 < 1) break;
        fStack_3734 = (float)(100 / (longlong)(int)fVar10);
        pfStack_3768 = (float *)0x0;
        puStack_3758 = (undefined *)FUN_0048c2c0(iVar22,fVar10,&pfStack_3768);
        ppuStack_3724 = (undefined **)0x0;
        if (0 < (int)puStack_3758) {
          pfStack_374c = pfVar13;
          pfVar13 = pfStack_3768;
          do {
            ppuStack_372c = (undefined **)0x0;
            pfStack_3750 = pfStack_374c;
            ppuVar26 = ppuStack_3724;
            do {
              if (*pfStack_3750 == 0.0) break;
              pfStack_3764 = (float *)0xffffffff;
              FUN_00467a60(&pfStack_3764);
              if (pfStack_3764 != (float *)0xffffffff) {
                uVar16 = uStack_3728;
                if (iStack_3738 != 0) {
                  uVar16 = *(uint *)(local_3754 + 0x14a0 + (int)pfStack_3764 * 4);
                }
                if (iStack_3740 == 5) {
                  if ((pfVar13 != (float *)0x0) && (ppuVar26 == (undefined **)(puStack_3758 + -1)))
                  {
                    uVar11 = (int)((uVar16 & 0xff) * (int)pfVar13) / (int)fStack_3734 & 0xff;
                    bStack_3739 = (byte)((int)((uVar16 >> 8 & 0xff) * (int)pfVar13) /
                                        (int)fStack_3734);
                    uVar16 = (int)((uVar16 >> 0x10 & 0xff) * (int)pfVar13) / (int)fStack_3734;
                    goto LAB_0048cec2;
                  }
                }
                else {
                  uVar3 = auStack_370c[iStack_3740 + 5];
                  uVar11 = (int)((uVar16 & 0xff) * uVar3) / 0xff;
                  iVar22 = (uVar16 >> 8 & 0xff) * uVar3;
                  bStack_3739 = ((char)(iVar22 / 0xff) + (char)(iVar22 >> 0x1f)) -
                                (char)((longlong)iVar22 * 0x80808081 >> 0x3f);
                  uVar16 = (int)((uVar16 >> 0x10 & 0xff) * uVar3) / 0xff;
LAB_0048cec2:
                  uVar16 = ((uVar16 & 0xff) << 8 | (uint)bStack_3739) << 8 | uVar11 & 0xff;
                }
                iVar5 = (uint)*(byte *)(pfStack_375c + (int)pfStack_3764 * 4 + 3) * 3 + -0x1020;
                iVar22 = *(int *)(local_3730 + 0x24);
                auStack_1020[(uint)*(byte *)(iVar22 + 0x2f9e) + iVar5 + 0x1020] = (char)uVar16;
                auStack_1020[(uint)*(byte *)(iVar22 + 0x2f9f) + iVar5 + 0x1020] =
                     (char)(uVar16 >> 8);
                auStack_1020[(uint)*(byte *)(iVar22 + 0x2fa0) + iVar5 + 0x1020] =
                     (char)(uVar16 >> 0x10);
                auStack_3698[(int)pfStack_3764] = uVar16;
                ppuVar26 = ppuStack_3724;
                pfVar13 = pfStack_3768;
              }
              pfStack_3750 = pfStack_3750 + 1;
              ppuStack_372c = (undefined **)((int)ppuStack_372c + 1);
            } while ((int)ppuStack_372c < 8);
            pfStack_374c = pfStack_374c + 8;
            ppuStack_3724 = (undefined **)((int)ppuVar26 + 1);
          } while ((int)ppuStack_3724 < (int)puStack_3758);
        }
        pfStack_3744 = pfStack_3744 + 0x42;
        local_3748 = (undefined4 *)((int)local_3748 + 1);
      } while ((int)local_3748 < 4);
    }
    else if (iVar22 == 4) {
      if (*(int *)(local_3754 + 0xd8) < 1) {
        *(int *)(local_3754 + 0xd8) = *(int *)(local_3754 + 0xd8) + 1;
      }
      else {
        *(undefined4 *)(local_3754 + 0xd8) = 0;
        if (iStack_3738 != 0) {
          FUN_0048bdc0();
        }
      }
      puVar9 = (undefined4 *)(iVar5 + 0x148);
      iVar22 = 0x16;
      do {
        *puVar9 = puVar9[-1];
        puVar9 = puVar9 + -1;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      fVar27 = (float10)_DAT_00625b68;
      ppuStack_3724 = (undefined **)(iVar5 + 0xf0);
      pfStack_3750 = pfStack_3744 + 2;
      *ppuStack_3724 = (undefined *)local_3748[1];
      ppuStack_372c = (undefined **)0x0;
      do {
        puStack_3758 = *ppuStack_3724;
        if (100 < (int)puStack_3758) {
          puStack_3758 = (undefined *)0x64;
        }
        puVar9 = (undefined4 *)pfStack_3750[-1];
        puStack_3760 = puVar9;
        if ((int)puVar9 < 1) break;
        puStack_3760 = (undefined4 *)
                       ((float)(int)puStack_3758 / (float)(fVar27 / (float10)(int)puVar9));
        fVar10 = (float)FUN_005b2070();
        puStack_3760 = (undefined4 *)(float)(extraout_ST0_01 - (float10)(int)fVar10);
        iVar22 = FUN_005b2070();
        if ((0 < iVar22) && ((int)fVar10 < (int)puVar9)) {
          fVar10 = (float)((int)fVar10 + 1);
        }
        fVar27 = extraout_ST0_02;
        if (0 < (int)fVar10) {
          pfStack_374c = pfStack_3750;
          fStack_3734 = fVar10;
          do {
            pfStack_3764 = (float *)0x0;
            pfStack_3768 = pfStack_374c;
            do {
              if (*pfStack_3768 == 0.0) break;
              puStack_3758 = (undefined *)0xffffffff;
              fVar27 = (float10)FUN_00467a60(&puStack_3758);
              if (puStack_3758 != (undefined *)0xffffffff) {
                uVar16 = uStack_3728;
                if (iStack_3738 != 0) {
                  uVar16 = *(uint *)(local_3754 + 0x14a0 + (int)puStack_3758 * 4);
                }
                if (iStack_3740 != 5) {
                  uVar11 = auStack_370c[iStack_3740 + 5];
                  iVar22 = (uVar16 >> 8 & 0xff) * uVar11;
                  bStack_3739 = ((char)(iVar22 / 0xff) + (char)(iVar22 >> 0x1f)) -
                                (char)((longlong)iVar22 * 0x80808081 >> 0x3f);
                  uVar16 = (((int)((uVar16 >> 0x10 & 0xff) * uVar11) / 0xff & 0xffU) << 8 |
                           (uint)bStack_3739) << 8 | (int)((uVar16 & 0xff) * uVar11) / 0xff & 0xffU;
                }
                iVar5 = (uint)*(byte *)(pfStack_375c + (int)puStack_3758 * 4 + 3) * 3 + -0x1020;
                iVar22 = *(int *)(local_3730 + 0x24);
                auStack_1020[(uint)*(byte *)(iVar22 + 0x2f9e) + iVar5 + 0x1020] = (char)uVar16;
                auStack_1020[(uint)*(byte *)(iVar22 + 0x2f9f) + iVar5 + 0x1020] =
                     (char)(uVar16 >> 8);
                auStack_1020[(uint)*(byte *)(iVar22 + 0x2fa0) + iVar5 + 0x1020] =
                     (char)(uVar16 >> 0x10);
                auStack_3698[(int)puStack_3758] = uVar16;
              }
              pfStack_3768 = pfStack_3768 + 1;
              pfStack_3764 = (float *)((int)pfStack_3764 + 1);
            } while ((int)pfStack_3764 < 8);
            pfStack_374c = pfStack_374c + 8;
            fStack_3734 = (float)((int)fStack_3734 - 1);
          } while (fStack_3734 != 0.0);
        }
        pfStack_3750 = pfStack_3750 + 0x42;
        ppuStack_372c = (undefined **)((int)ppuStack_372c + 1);
        ppuStack_3724 = ppuStack_3724 + 1;
      } while ((int)ppuStack_372c < 0x17);
    }
    else if (iVar22 == 5) {
      pfVar13 = (float *)(local_3748 + 1);
      bVar4 = false;
      uVar16 = (uint)(*(int *)(local_3754 + 0xe4) < (int)local_3748[1]);
      if (*(uint *)(local_3754 + 0xe8) != uVar16) {
        if ((*(uint *)(local_3754 + 0xe8) == 1) && (0x31 < (int)local_3748[1])) {
          bVar4 = true;
        }
        *(uint *)(local_3754 + 0xe8) = uVar16;
      }
      *(float *)(local_3754 + 0xe4) = *pfVar13;
      if (bVar4) {
        iVar22 = FUN_005b2070();
        *(int *)(iVar5 + 0x178) = (int)*pfVar13 * iVar22;
        DVar6 = GetTickCount();
        FUN_005ad576(DVar6);
        uVar16 = _rand();
        uVar16 = uVar16 & 0x80000007;
        if ((int)uVar16 < 0) {
          uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
        }
        uVar11 = uStack_3728;
        if (iStack_3738 != 0) {
          uVar11 = auStack_36c8[uVar16];
        }
        *(uint *)(iVar5 + 0x17c) = uVar11;
        iVar22 = _rand();
        iVar19 = FUN_005b2070();
        *(int *)(iVar5 + 0x168) = (iVar22 % (-4 - iVar19) + 5) * 10;
        iVar22 = _rand();
        *(undefined4 *)(iVar5 + 0x170) = 0;
        *(undefined **)(iVar5 + 0x16c) = puStack_3758 + iVar22 % 0x51 + -0x28;
        iVar22 = *(int *)(iVar5 + 0x178) / 5;
        *(int *)(iVar5 + 0x174) = iVar22;
        if (iVar22 < 1) {
          *(undefined4 *)(iVar5 + 0x174) = 1;
        }
      }
      if (*(int *)(iVar5 + 0x178) == 0) {
        if (*(int *)(iVar5 + 0xd8) < 2) {
          *(int *)(iVar5 + 0xd8) = *(int *)(iVar5 + 0xd8) + 1;
          goto LAB_0048e8b3;
        }
        *(undefined4 *)(iVar5 + 0xd8) = 0;
        puStack_3760 = (undefined4 *)FUN_005b2070();
        DVar6 = GetTickCount();
        FUN_005ad576(DVar6);
        ppuStack_372c = (undefined **)FUN_005b2070();
        iVar22 = FUN_005b2070();
        ppuStack_3724 = (undefined **)(iVar22 + -1);
        pfStack_3744 = pfStack_374c + 0x28;
        fStack_3734 = 2.8026e-45;
        pfStack_3750 = pfVar13;
        do {
          fVar10 = *pfStack_3750;
          if (100 < (int)fVar10) {
            fVar10 = 1.4013e-43;
          }
          iVar19 = (int)fVar10 * (int)puStack_3760;
          iVar22 = _rand();
          iVar22 = (iVar22 % (int)ppuStack_372c + 1) * 10;
          iVar5 = _rand();
          iVar5 = (iVar5 % (int)ppuStack_3724 + 2) * 10;
          SetRect(&tStack_36e0,iVar22,iVar5,iVar22 + iVar19,iVar5 + iVar19);
          uVar16 = _rand();
          uVar16 = uVar16 & 0x80000007;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
          }
          uVar11 = uStack_3728;
          if (iStack_3738 != 0) {
            uVar11 = auStack_36c8[uVar16];
          }
          if (iStack_3740 != 5) {
            uVar11 = FUN_0048f1f0();
          }
          pfStack_3764 = (float *)0x0;
          pfStack_3768 = pfStack_375c;
          pfVar13 = pfStack_3744;
          do {
            if (*pfStack_3768 == 0.0) break;
            if ((((tStack_36e0.left <= (int)pfVar13[-1]) && ((int)pfVar13[1] <= tStack_36e0.right))
                && (tStack_36e0.top <= (int)*pfVar13)) && ((int)pfVar13[2] <= tStack_36e0.bottom)) {
              puStack_3758 = (undefined *)0xffffffff;
              FUN_00467a60(&puStack_3758);
              puVar23 = puStack_3758;
              if (puStack_3758 != (undefined *)0xffffffff) {
                FUN_0048c320();
                auStack_3698[(int)puVar23] = uVar11;
              }
            }
            pfStack_3768 = pfStack_3768 + 4;
            pfStack_3764 = (float *)((int)pfStack_3764 + 1);
            pfVar13 = pfVar13 + 10;
          } while ((int)pfStack_3764 < 0x7e);
          pfStack_3750 = pfStack_3750 + 1;
          fStack_3734 = (float)((int)fStack_3734 - 1);
        } while (fStack_3734 != 0.0);
      }
      if (*(int *)(local_3754 + 0x178) != 0) {
        *(int *)(local_3754 + 0x170) = *(int *)(local_3754 + 0x170) + *(int *)(local_3754 + 0x174);
        iVar22 = *(int *)(local_3754 + 0x170) / 2;
        uStack_3720 = 0;
        ppuStack_3724 = CRgn::vftable;
        uStack_4 = 0;
        FUN_00407220(*(int *)(local_3754 + 0x168) - iVar22,*(int *)(local_3754 + 0x16c) - iVar22,
                     iVar22 + *(int *)(local_3754 + 0x168),iVar22 + *(int *)(local_3754 + 0x16c));
        pfStack_3764 = (float *)0x0;
        pfStack_3768 = pfStack_375c;
        do {
          if (*pfStack_3768 == 0.0) break;
          iVar22 = FUN_0041b730();
          uVar16 = *(uint *)(local_3754 + 0x17c);
          auStack_370c[0] = 0;
          auStack_370c[1] = 0x14;
          auStack_370c[2] = 0x28;
          auStack_370c[3] = 0x46;
          auStack_370c[4] = 100;
          uVar11 = auStack_370c[iVar22];
          puStack_3758 = (undefined *)0xffffffff;
          FUN_00467a60(&puStack_3758);
          puVar23 = puStack_3758;
          if (puStack_3758 != (undefined *)0xffffffff) {
            puStack_3760 = (undefined4 *)
                           ((uint)*(byte *)(pfStack_375c + (int)puStack_3758 * 4 + 3) * 3);
            if (uVar11 == 0) {
              uVar16 = 0;
            }
            else if ((uVar11 != 100) || (iStack_3740 != 5)) {
              uVar16 = FUN_0048f1f0();
            }
            FUN_0048c320();
            auStack_3698[(int)puVar23] = uVar16;
          }
          pfStack_3768 = pfStack_3768 + 4;
          pfStack_3764 = (float *)((int)pfStack_3764 + 1);
        } while ((int)pfStack_3764 < 0x7e);
        if (*(int *)(local_3754 + 0x178) <= *(int *)(local_3754 + 0x170)) {
          *(undefined4 *)(local_3754 + 0x178) = 0;
        }
        uStack_4 = 0xffffffff;
        ppuStack_3724 = CRgn::vftable;
        CImageList::~CImageList((CImageList *)&ppuStack_3724);
      }
    }
    else if (iVar22 == 3) {
      iVar22 = local_3748[2];
      if (iVar22 < 1) {
        iVar22 = local_3748[0xc];
      }
      if (100 < iVar22) {
        iVar22 = 100;
      }
      uVar12 = 0;
      if (iStack_3738 != 0) {
        if ((iVar22 < 1) || (iVar22 < *(int *)(local_3754 + 0x1f8))) {
          iVar22 = *(int *)(local_3754 + 0x1f8) - iVar22;
          if (9 < iVar22) {
            iVar22 = 10;
          }
          piVar21 = (int *)(local_3754 + 0x1f8);
          *piVar21 = *piVar21 - iVar22;
          if (*piVar21 < 0) {
            *(undefined4 *)(local_3754 + 0x1f8) = 0;
          }
        }
        else if (iVar22 < 0x29) {
          *(undefined4 *)(local_3754 + 0x14a0) = 0xff0000;
          *(int *)(local_3754 + 0x1f8) = iVar22;
        }
        else if (iVar22 < 0x33) {
          *(undefined4 *)(local_3754 + 0x14a0) = 0xffff00;
          *(int *)(local_3754 + 0x1f8) = iVar22;
        }
        else if (iVar22 < 0x3d) {
          *(undefined4 *)(local_3754 + 0x14a0) = 0xff00;
          *(int *)(local_3754 + 0x1f8) = iVar22;
        }
        else if (iVar22 < 0x47) {
          *(undefined4 *)(local_3754 + 0x14a0) = 0xffff;
          *(int *)(local_3754 + 0x1f8) = iVar22;
        }
        else if (iVar22 < 0x51) {
          *(undefined4 *)(local_3754 + 0x14a0) = 0x80ff;
          *(int *)(local_3754 + 0x1f8) = iVar22;
        }
        else if (iVar22 < 0x5b) {
          *(undefined4 *)(local_3754 + 0x14a0) = 0xff00ff;
          *(int *)(local_3754 + 0x1f8) = iVar22;
        }
        else {
          if (iVar22 < 0x65) {
            uVar12 = 0xff;
          }
          *(undefined4 *)(local_3754 + 0x14a0) = uVar12;
          *(int *)(local_3754 + 0x1f8) = iVar22;
        }
      }
      uVar16 = FUN_0048f1f0();
      iVar22 = 0;
      pfVar13 = pfStack_375c;
      do {
        if (*pfVar13 == 0.0) break;
        iVar19 = (uint)*(byte *)(pfVar13 + 3) * 3 + -0x1020;
        iVar5 = *(int *)(local_3730 + 0x24);
        auStack_1020[(uint)*(byte *)(iVar5 + 0x2f9e) + iVar19 + 0x1020] = (char)uVar16;
        auStack_1020[(uint)*(byte *)(iVar5 + 0x2f9f) + iVar19 + 0x1020] = (char)(uVar16 >> 8);
        bVar2 = *(byte *)(iVar5 + 0x2fa0);
        auStack_3698[iVar22] = uVar16;
        iVar22 = iVar22 + 1;
        pfVar13 = pfVar13 + 4;
        auStack_1020[(uint)bVar2 + iVar19 + 0x1020] = (char)(uVar16 >> 0x10);
      } while (iVar22 < 0x7e);
    }
    else if (iVar22 == 2) {
      if ((iStack_3738 != 0) &&
         (*(int *)(local_3754 + 0xd8) = *(int *)(local_3754 + 0xd8) + 1,
         4 < *(int *)(local_3754 + 0xd8))) {
        *(undefined4 *)(local_3754 + 0xd8) = 0;
        FUN_0048bdc0();
      }
      if (0 < (int)pfStack_3750) {
        pfStack_3768 = (float *)(local_3748 + 1);
        pfStack_3764 = pfStack_3750;
        pfStack_3750 = afStack_10d8;
        do {
          uVar16 = auStack_370c[0];
          fVar10 = *pfStack_3768;
          if (100 < (int)fVar10) {
            fVar10 = 1.4013e-43;
          }
          iVar22 = 0;
          puStack_3760 = (undefined4 *)0x0;
          puStack_3760 = (undefined4 *)FUN_0048c2c0(fVar10,auStack_370c[0],&puStack_3760);
          if (0 < (int)uVar16) {
            do {
              puStack_3758 = (undefined *)0xffffffff;
              FUN_00467a60(&puStack_3758);
              puVar23 = puStack_3758;
              if ((puStack_3758 != (undefined *)0xffffffff) && (iVar22 < (int)puStack_3760)) {
                uVar16 = uStack_3728;
                if (iStack_3738 != 0) {
                  uVar16 = *(uint *)(local_3754 + 0x14a0 + (int)puStack_3758 * 4);
                }
                if (iStack_3740 != 5) {
                  uVar16 = FUN_0048f1f0();
                }
                iVar19 = (uint)*(byte *)(pfStack_375c + (int)puVar23 * 4 + 3) * 3 + -0x1020;
                iVar5 = *(int *)(local_3730 + 0x24);
                auStack_1020[(uint)*(byte *)(iVar5 + 0x2f9e) + iVar19 + 0x1020] = (char)uVar16;
                auStack_1020[(uint)*(byte *)(iVar5 + 0x2f9f) + iVar19 + 0x1020] =
                     (char)(uVar16 >> 8);
                auStack_1020[(uint)*(byte *)(iVar5 + 0x2fa0) + iVar19 + 0x1020] =
                     (char)(uVar16 >> 0x10);
                auStack_3698[(int)puVar23] = uVar16;
              }
              iVar22 = iVar22 + 1;
            } while (iVar22 < (int)auStack_370c[0]);
          }
          pfStack_3768 = pfStack_3768 + 1;
          pfStack_3750 = (float *)((int)pfStack_3750 + 0x1e);
          pfStack_3764 = (float *)((int)pfStack_3764 + -1);
        } while (pfStack_3764 != (float *)0x0);
        pfStack_3764 = (float *)0x0;
      }
    }
    else if (iVar22 == 1) {
      if ((iStack_3738 != 0) &&
         (*(int *)(local_3754 + 0xd8) = *(int *)(local_3754 + 0xd8) + 1,
         1 < *(int *)(local_3754 + 0xd8))) {
        *(undefined4 *)(local_3754 + 0xd8) = 0;
        FUN_0048bdc0();
      }
      iVar22 = local_3748[1];
      if (100 < iVar22) {
        iVar22 = 100;
      }
      if (iVar22 < *(int *)(iVar5 + 0xe4)) {
        iVar22 = *(int *)(iVar5 + 0xe4) - iVar22;
        if (4 < iVar22) {
          iVar22 = 5;
        }
        piVar21 = (int *)(iVar5 + 0xe4);
        *piVar21 = *piVar21 - iVar22;
        if (*piVar21 < 0) {
          *(undefined4 *)(iVar5 + 0xe4) = 0;
        }
        iVar22 = *(int *)(iVar5 + 0xe4);
      }
      else {
        *(int *)(iVar5 + 0xe4) = iVar22;
      }
      iVar5 = *(int *)(iVar5 + 0x16e0);
      iVar19 = *(int *)(iVar5 + 0xe54);
      if (iVar19 == 0) goto LAB_0048e8b3;
      puStack_3760 = (undefined4 *)(100 / (longlong)iVar19);
      pfStack_3768 = (float *)0x0;
      pfStack_3764 = (float *)FUN_0048c2c0(iVar22,iVar19,&pfStack_3768);
      pfStack_374c = (float *)0x0;
      if (0 < (int)pfStack_3764) {
        pfStack_3744 = (float *)(iVar5 + 0x44);
        do {
          iVar22 = 0;
          pfStack_3750 = pfStack_3744;
          do {
            if (*pfStack_3750 == 0.0) break;
            puStack_3758 = (undefined *)0xffffffff;
            FUN_00467a60(&puStack_3758);
            puVar23 = puStack_3758;
            if (puStack_3758 != (undefined *)0xffffffff) {
              uVar16 = uStack_3728;
              if (iStack_3738 != 0) {
                uVar16 = *(uint *)(local_3754 + 0x14a0 + (int)puStack_3758 * 4);
              }
              if ((iStack_3740 != 5) ||
                 ((pfStack_3768 != (float *)0x0 &&
                  (pfStack_374c == (float *)((int)pfStack_3764 + -1))))) {
                uVar16 = FUN_0048f1f0();
              }
              FUN_0048c320();
              auStack_3698[(int)puVar23] = uVar16;
            }
            pfStack_3750 = pfStack_3750 + 1;
            iVar22 = iVar22 + 1;
          } while (iVar22 < 0x19);
          pfStack_3744 = pfStack_3744 + 0x24;
          pfStack_374c = (float *)((int)pfStack_374c + 1);
        } while ((int)pfStack_374c < (int)pfStack_3764);
      }
    }
    else if (iVar22 == 7) {
      iVar22 = local_3748[2];
      bVar4 = false;
      uVar16 = (uint)(*(int *)(local_3754 + 0xe4) < iVar22);
      if (*(uint *)(local_3754 + 0xe8) != uVar16) {
        if ((*(uint *)(local_3754 + 0xe8) == 1) && (0x3b < iVar22)) {
          bVar4 = true;
        }
        *(uint *)(local_3754 + 0xe8) = uVar16;
      }
      *(int *)(local_3754 + 0xe4) = iVar22;
      if ((bVar4) && (*(int *)(local_3754 + 0x178) == 0)) {
        *(undefined4 *)(local_3754 + 0x178) = 2;
      }
      if ((iStack_3738 != 0) &&
         (*(int *)(local_3754 + 0xd8) = *(int *)(local_3754 + 0xd8) + 1,
         1 < *(int *)(local_3754 + 0xd8))) {
        *(undefined4 *)(local_3754 + 0xd8) = 0;
        FUN_0048bdc0();
      }
      iVar22 = *(int *)(iVar5 + 0xdc);
      if (iVar22 < 1) {
LAB_0048dc76:
        *(int *)(iVar5 + 0xdc) = iVar22 + 1;
        goto LAB_0048e8b3;
      }
      *(undefined4 *)(iVar5 + 0xdc) = 0;
      if (*(int *)(iVar5 + 0x178) == 0) {
        DVar6 = GetTickCount();
        FUN_005ad576(DVar6);
        iVar22 = 0;
        pfVar13 = pfStack_3750;
        if (0 < (int)pfStack_3750) {
          pfStack_3768 = (float *)(puVar9 + 1);
          piVar21 = (int *)(iVar5 + 0x188);
          do {
            if ((piVar21[2] == 0) && (0 < (int)*pfStack_3768)) {
              uVar16 = auStack_370c[iVar22];
              iVar19 = _rand();
              iVar19 = iVar19 % ((int)uVar16 / 3 + 1);
              piVar21[-1] = iVar19;
              iVar5 = (int)(uVar16 * (int)*pfStack_3768) / 100 + 1;
              if ((int)uVar16 < iVar19 + iVar5) {
                iVar5 = (uVar16 - iVar19) + -1;
              }
              *piVar21 = iVar5;
              piVar21[1] = 0;
              iVar5 = _rand();
              piVar21[2] = iVar5 % 3 + 1;
              pfVar13 = pfStack_3750;
            }
            iVar22 = iVar22 + 1;
            pfStack_3768 = pfStack_3768 + 1;
            piVar21 = piVar21 + 5;
          } while (iVar22 < (int)pfVar13);
        }
        pfStack_3744 = (float *)0x0;
        if (0 < (int)pfVar13) {
          pfStack_374c = (float *)0x0;
          piVar21 = (int *)(local_3754 + 400);
          do {
            iVar22 = *piVar21;
            if (iVar22 != 0) {
              if ((iVar22 == 1) || (iVar22 == 2)) {
                pfStack_3768 = (float *)0x0;
                if (0 < piVar21[-2]) {
                  do {
                    pfVar13 = pfStack_3768;
                    if (piVar21[-1] <= (int)pfStack_3768) break;
                    iVar22 = FUN_00467bc0();
                    if (iVar22 != -1) {
                      uVar16 = uStack_3728;
                      if (iStack_3738 != 0) {
                        uVar16 = *(uint *)(local_3754 + 0x14a0 + iVar22 * 4);
                      }
                      if (iStack_3740 != 5) {
                        uVar16 = FUN_0048f1f0();
                      }
                      FUN_0048c320();
                      auStack_3698[iVar22] = uVar16;
                      pfVar13 = pfStack_3768;
                    }
                    pfStack_3768 = (float *)((int)pfVar13 + 1);
                  } while ((int)pfStack_3768 < piVar21[-2]);
                }
                if (piVar21[-2] < 7) {
                  piVar21[-1] = piVar21[-1] + 1;
                }
                else {
                  piVar21[-1] = piVar21[-1] + 2;
                }
                if (piVar21[-2] < piVar21[-1]) {
                  piVar21[-4] = 0;
                  piVar21[-3] = 0;
                  piVar21[-2] = 0;
                  piVar21[-1] = 0;
                  *piVar21 = 0;
                  break;
                }
              }
              else {
                puVar9 = (undefined4 *)auStack_370c[(int)pfStack_3744];
                puStack_3758 = (undefined *)0x0;
                puStack_3760 = puVar9;
                if (0 < (int)puVar9) {
                  do {
                    puVar23 = puStack_3758;
                    iVar22 = FUN_00467bc0();
                    if (iVar22 != -1) {
                      uVar16 = uStack_3728;
                      if (iStack_3738 != 0) {
                        uVar16 = *(uint *)(local_3754 + 0x14a0 + iVar22 * 4);
                      }
                      if (iStack_3740 != 5) {
                        uVar16 = FUN_0048f1f0();
                      }
                      FUN_0048c320();
                      auStack_3698[iVar22] = uVar16;
                      puVar9 = puStack_3760;
                      puVar23 = puStack_3758;
                    }
                    puStack_3758 = puVar23 + 1;
                  } while ((int)puStack_3758 < (int)puVar9);
                }
                piVar21[-4] = 0;
                piVar21[-3] = 0;
                piVar21[-2] = 0;
                piVar21[-1] = 0;
                *piVar21 = 0;
              }
            }
            pfStack_374c = (float *)((int)pfStack_374c + 0x1e);
            pfStack_3744 = (float *)((int)pfStack_3744 + 1);
            piVar21 = piVar21 + 5;
          } while ((int)pfStack_3744 < (int)pfStack_3750);
        }
      }
      else {
        iVar22 = 0;
        puStack_3760 = (undefined4 *)((iVar5 + 0x14a0) - (int)auStack_3698);
        pfVar13 = pfStack_375c;
        do {
          if (*pfVar13 == 0.0) break;
          uVar16 = uStack_3728;
          if (iStack_3738 != 0) {
            uVar16 = *(uint *)((int)auStack_3698 + (int)(puStack_3760 + iVar22));
          }
          if (iStack_3740 != 5) {
            uVar16 = FUN_0048f1f0();
          }
          FUN_0048c320();
          auStack_3698[iVar22] = uVar16;
          iVar22 = iVar22 + 1;
          pfVar13 = pfVar13 + 4;
        } while (iVar22 < 0x7e);
        piVar21 = (int *)(local_3754 + 0x178);
        *piVar21 = *piVar21 + -1;
        if (*piVar21 < 0) {
          *(undefined4 *)(local_3754 + 0x178) = 0;
        }
      }
    }
    else if (iVar22 == 8) {
      iVar22 = local_3748[1];
      pfVar13 = (float *)(local_3748 + 1);
      bVar4 = false;
      uVar16 = (uint)(*(int *)(local_3754 + 0xe4) < iVar22);
      if (*(uint *)(local_3754 + 0xe8) != uVar16) {
        if ((*(uint *)(local_3754 + 0xe8) == 1) && (0x3b < iVar22)) {
          bVar4 = true;
        }
        *(uint *)(local_3754 + 0xe8) = uVar16;
      }
      *(int *)(local_3754 + 0xe4) = iVar22;
      if ((bVar4) && (*(int *)(local_3754 + 0x178) == 0)) {
        *(undefined4 *)(local_3754 + 0x178) = 2;
      }
      if (*(int *)(local_3754 + 0x178) == 0) {
        if ((iStack_3738 != 0) &&
           (*(int *)(local_3754 + 0xd8) = *(int *)(local_3754 + 0xd8) + 1,
           4 < *(int *)(local_3754 + 0xd8))) {
          *(undefined4 *)(local_3754 + 0xd8) = 0;
          FUN_0048bdc0();
        }
        iVar22 = *(int *)(iVar5 + 0xdc);
        if (iVar22 < 1) goto LAB_0048dc76;
        *(undefined4 *)(iVar5 + 0xdc) = 0;
        DVar6 = GetTickCount();
        FUN_005ad576(DVar6);
        fStack_3734 = 0.0;
        if (0 < (int)pfStack_3750) {
          pfStack_374c = afStack_10d8;
          pfVar17 = (float *)(iVar5 + 400);
          pfStack_3764 = pfVar13;
          do {
            pfVar13 = (float *)auStack_370c[(int)fStack_3734];
            puVar9 = (undefined4 *)*pfStack_3764;
            ppuVar26 = (undefined **)((int)pfVar13 / 2);
            pfStack_3768 = pfVar13;
            puStack_3760 = puVar9;
            pfStack_3744 = pfVar17;
            ppuStack_372c = ppuVar26;
            iVar22 = FUN_005b2070();
            if (100 < iVar22) {
              iVar22 = 100;
            }
            puStack_3760 = (undefined4 *)0x0;
            puStack_3758 = (undefined *)FUN_0048c2c0(iVar22,ppuVar26,&puStack_3760);
            if ((0x31 < (int)puVar9) && (*pfVar17 == 0.0)) {
              *pfVar17 = 1.4013e-45;
              pfVar17[-1] = 0.0;
            }
            local_3748 = (undefined4 *)0x0;
            pfVar24 = pfStack_3768;
            if (*pfVar17 == 0.0) {
              if (0 < (int)puStack_3758) {
                iVar22 = _rand();
                puStack_3760 = (undefined4 *)(iVar22 % 3);
                for (ppuStack_3724 = ppuVar26; -1 < (int)ppuStack_3724;
                    ppuStack_3724 = (undefined **)((int)ppuStack_3724 + -1)) {
                  iVar22 = FUN_00467bc0();
                  if (iVar22 != -1) {
                    if (((int)puStack_3758 < (int)local_3748) || (puStack_3760 != (undefined4 *)0x2)
                       ) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uStack_3728;
                      if (iStack_3738 != 0) {
                        uVar16 = *(uint *)(local_3754 + 0x14a0 + iVar22 * 4);
                      }
                      if (iStack_3740 != 5) {
                        uVar16 = FUN_0048f1f0();
                      }
                    }
                    FUN_0048c320();
                    local_3748 = (undefined4 *)((int)local_3748 + 1);
                    auStack_3698[iVar22] = uVar16;
                    ppuVar26 = ppuStack_372c;
                  }
                  pfVar13 = pfStack_3768;
                }
                ppuVar26 = (undefined **)((int)ppuVar26 + 1);
                local_3748 = (undefined4 *)0x0;
                ppuStack_372c = ppuVar26;
                if ((int)ppuVar26 < (int)pfVar13) {
                  do {
                    ppuStack_372c = ppuVar26;
                    iVar22 = FUN_00467bc0();
                    if (iVar22 != -1) {
                      if (((int)puStack_3758 < (int)local_3748) ||
                         (puStack_3760 != (undefined4 *)0x2)) {
                        uVar16 = 0;
                      }
                      else {
                        uVar16 = uStack_3728;
                        if (iStack_3738 != 0) {
                          uVar16 = *(uint *)(local_3754 + 0x14a0 + iVar22 * 4);
                        }
                        if (iStack_3740 != 5) {
                          uVar16 = FUN_0048f1f0();
                        }
                      }
                      FUN_0048c320();
                      local_3748 = (undefined4 *)((int)local_3748 + 1);
                      auStack_3698[iVar22] = uVar16;
                      ppuVar26 = ppuStack_372c;
                    }
                    ppuVar26 = (undefined **)((int)ppuVar26 + 1);
                    ppuStack_372c = ppuVar26;
                  } while ((int)ppuVar26 < (int)pfStack_3768);
                }
              }
            }
            else {
              while (ppuStack_3724 = ppuVar26, pfStack_3768 = pfVar24, -1 < (int)ppuStack_3724) {
                iVar22 = FUN_00467bc0();
                if (iVar22 != -1) {
                  if ((int)pfStack_3744[-1] < (int)local_3748) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = uStack_3728;
                    if (iStack_3738 != 0) {
                      uVar16 = *(uint *)(local_3754 + 0x14a0 + iVar22 * 4);
                    }
                    if (iStack_3740 != 5) {
                      uVar16 = FUN_0048f1f0();
                    }
                  }
                  FUN_0048c320();
                  local_3748 = (undefined4 *)((int)local_3748 + 1);
                  auStack_3698[iVar22] = uVar16;
                }
                pfVar24 = pfStack_3768;
                ppuVar26 = (undefined **)((int)ppuStack_3724 + -1);
              }
              iVar22 = (int)ppuStack_372c + 1;
              local_3748 = (undefined4 *)0x0;
              if (iVar22 < (int)pfVar24) {
                do {
                  iVar5 = FUN_00467bc0();
                  if (iVar5 != -1) {
                    if ((int)pfStack_3744[-1] < (int)local_3748) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = uStack_3728;
                      if (iStack_3738 != 0) {
                        uVar16 = *(uint *)(local_3754 + 0x14a0 + iVar5 * 4);
                      }
                      if (iStack_3740 != 5) {
                        uVar16 = FUN_0048f1f0();
                      }
                    }
                    FUN_0048c320();
                    local_3748 = (undefined4 *)((int)local_3748 + 1);
                    auStack_3698[iVar5] = uVar16;
                    pfVar24 = pfStack_3768;
                  }
                  iVar22 = iVar22 + 1;
                } while (iVar22 < (int)pfVar24);
              }
              if (((int)pfVar24 < 0x10) || ((int)ppuStack_372c + -2 <= (int)pfStack_3744[-1])) {
                pfStack_3744[-1] = (float)((int)pfStack_3744[-1] + 1);
              }
              else {
                pfStack_3744[-1] = (float)((int)pfStack_3744[-1] + 2);
              }
              if ((int)ppuStack_372c < (int)pfStack_3744[-1]) {
                *pfStack_3744 = 0.0;
              }
            }
            pfStack_3764 = pfStack_3764 + 1;
            pfStack_374c = (float *)((int)pfStack_374c + 0x1e);
            fStack_3734 = (float)((int)fStack_3734 + 1);
            pfVar17 = pfStack_3744 + 5;
            pfStack_3744 = pfVar17;
          } while ((int)fStack_3734 < (int)pfStack_3750);
        }
      }
      else {
        iVar22 = *(int *)(local_3754 + 0x178) + -1;
        *(int *)(local_3754 + 0x178) = iVar22;
        if (iVar22 < 0) {
          *(undefined4 *)(local_3754 + 0x178) = 0;
        }
      }
    }
    else if (iVar22 == 9) {
      if ((iStack_3738 != 0) &&
         (*(int *)(local_3754 + 0xd8) = *(int *)(local_3754 + 0xd8) + 1,
         4 < *(int *)(local_3754 + 0xd8))) {
        *(undefined4 *)(local_3754 + 0xd8) = 0;
        FUN_0048bdc0();
      }
      tStack_36e0.left = (local_3748[1] * (int)fStack_3734) / 100;
      if ((tStack_36e0.left < (int)puStack_3760) && (0 < (int)local_3748[1])) {
        tStack_36e0.left = (LONG)puStack_3760;
      }
      ppuStack_372c = (undefined **)((int)puStack_3760 / 2);
      if (0 < tStack_36e0.left) {
        fStack_3734 = (float)tStack_36e0.left;
        puStack_3760 = (undefined4 *)0x0;
        pfVar13 = pfStack_374c;
        do {
          puVar9 = puStack_3760;
          pfStack_3764 = (float *)((float)(*(int *)(local_3754 + 0xec) + (int)puStack_3760) *
                                  (float)_DAT_00625cf0);
          fVar27 = (float10)FUN_005b3580();
          pfStack_3764 = (float *)(float)fVar27;
          puStack_3760 = (undefined4 *)((float)(int)puStack_3760 * fStack_36cc);
          FUN_0041e6a0(puStack_3760);
          iVar22 = FUN_005b2070();
          puStack_3760 = (undefined4 *)(fStack_3734 * (float)pfStack_3764);
          iVar22 = iVar22 + tStack_36e0.right;
          FUN_0041e6a0(puStack_3760);
          iVar5 = FUN_005b2070();
          iVar22 = FUN_0041e140(pfVar13,iVar22,puStack_3758 + iVar5);
          if ((iVar22 != -1) && (iVar22 = FUN_00467bc0(), iVar22 != -1)) {
            uVar16 = uStack_3728;
            if (iStack_3738 != 0) {
              uVar16 = *(uint *)(local_3754 + 0x14a0 + iVar22 * 4);
            }
            if (iStack_3740 != 5) {
              uVar16 = FUN_0048f1f0();
            }
            FUN_0048c320();
            auStack_3698[iVar22] = uVar16;
            pfVar13 = pfStack_374c;
          }
          puStack_3760 = (undefined4 *)((int)puVar9 + (int)ppuStack_372c);
        } while ((int)puStack_3760 < 0x2d1);
        piVar21 = (int *)(local_3754 + 0xec);
        *piVar21 = *piVar21 + -0x14;
        if (*piVar21 < 0) {
          *(undefined4 *)(local_3754 + 0xec) = 0x2d0;
        }
      }
    }
    else if (iVar22 == 0x10) {
      iVar5 = 0;
      iVar22 = 0;
      pfStack_3768 = (float *)0x0;
      if (0 < *(int *)(local_3754 + 0x1fc)) {
        iVar19 = 0;
        do {
          if (pfStack_3768 != (float *)0x0) goto LAB_0048e7a1;
          iVar14 = 0;
          if (0 < (int)*pfStack_3764) {
            do {
              if (iVar22 == *(int *)(local_3754 + 0x2cc)) {
                pfStack_3768 = (float *)(uint)*(byte *)((int)afStack_10d8 + iVar14 + iVar19);
                iVar14 = *(int *)(local_3754 + 0x2cc) + 1;
                *(int *)(local_3754 + 0x2cc) = iVar14;
                if (*(int *)(local_3754 + 0x2d0) <= iVar14) {
                  *(undefined4 *)(local_3754 + 0x2cc) = 0;
                }
                break;
              }
              iVar14 = iVar14 + 1;
              iVar22 = iVar22 + 1;
            } while (iVar14 < (int)*pfStack_3764);
          }
          pfStack_3764 = pfStack_3764 + 1;
          iVar5 = iVar5 + 1;
          iVar19 = iVar19 + 0x1e;
        } while (iVar5 < *(int *)(local_3754 + 0x1fc));
        if (pfStack_3768 != (float *)0x0) {
LAB_0048e7a1:
          iVar22 = FUN_00467bc0();
          if (iVar22 != -1) {
            FUN_0048c320();
          }
        }
      }
    }
  }
  iVar22 = local_3754;
  puVar18 = auStack_3698;
  puVar25 = (uint *)(local_3754 + 0x1260);
  for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar25 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar25 = puVar25 + 1;
  }
  if (local_3710 == 0) goto LAB_0048e8b3;
  uStack_3458 = 0;
  _memset(&fStack_3454,0,0x21fc);
  iVar5 = *(int *)(local_3730 + 0x24);
  fVar10 = *(float *)(iVar5 + 0x2d28);
  fStack_3734 = fVar10;
  if ((*(int **)(local_3730 + 0x1c))[0x8d] == 1) {
    iVar22 = (**(code **)(**(int **)(local_3730 + 0x1c) + 0x40))(auStack_1020,0x17a,0);
  }
  else {
    local_3710 = 1;
    if (iStack_3714 == 3) {
      acStack_3450[*(byte *)(iVar5 + 0x2f9e) + 0x21f8] = (char)auStack_3698[0];
      acStack_3450[*(byte *)(iVar5 + 0x2f9f) + 0x21f8] = (char)(auStack_3698[0] >> 8);
      acStack_3450[*(byte *)(iVar5 + 0x2fa0) + 0x21f8] = (char)(auStack_3698[0] >> 0x10);
      local_3710 = 2;
      ppuVar26 = (undefined **)0x3;
LAB_0048e837:
      if (DAT_0065d3dc == 5) {
        FUN_00407c90(acStack_3450 + 0x21f8,ppuVar26,0,L"Music: ");
      }
      if (200 < (int)ppuVar26) {
        ppuVar26 = (undefined **)0xc8;
        (*DAT_0065d3e0)(L"!!!!!!!!!!!nKIndex>200");
      }
      if ((*(int *)(local_3730 + 0x30c) != 0) || ((*(int **)(local_3730 + 0x1c))[0x8e] == 0))
      goto LAB_0048e8b3;
      iVar22 = (**(code **)(**(int **)(local_3730 + 0x1c) + 0x40))
                         (acStack_3450 + 0x21f8,ppuVar26,local_3710);
    }
    else {
      cVar20 = (char)(uStack_3728 >> 8);
      cVar15 = (char)(uStack_3728 >> 0x10);
      if (iStack_3714 == 0x10) {
        if (*(int *)(iVar22 + 0x2d4) < 0x68) {
          acStack_3450[*(byte *)(iVar5 + 0x2f9e) + 0x21f8] = (char)uStack_3728;
          acStack_3450[*(byte *)(iVar5 + 0x2f9f) + 0x21f8] = cVar20;
          acStack_3450[*(byte *)(iVar5 + 0x2fa0) + 0x21f8] = cVar15;
          ppuVar26 = (undefined **)0x4;
          if (0 < (int)fVar10) {
            _memset(acStack_3450 + 0x21fc,0,(size_t)fVar10);
            ppuVar26 = (undefined **)((int)fVar10 + 4);
          }
          *(int *)(iVar22 + 0x2d4) = *(int *)(iVar22 + 0x2d4) + 1;
          acStack_3450[*(int *)(iVar22 + 0x2cc) + 0x21fc] = (char)*(int *)(iVar22 + 0x2cc);
          acStack_3450[0x21fb] = SUB41(fVar10,0);
          goto LAB_0048ec44;
        }
      }
      else {
        if (iStack_3738 == 0) {
          acStack_3450[*(byte *)(iVar5 + 0x2f9e) + 0x21f8] = (char)uStack_3728;
          acStack_3450[*(byte *)(iVar5 + 0x2f9f) + 0x21f8] = cVar20;
          acStack_3450[*(byte *)(iVar5 + 0x2fa0) + 0x21f8] = cVar15;
          cVar15 = '\0';
          iVar22 = 0;
          ppuVar26 = (undefined **)0x4;
          acStack_3450[0x21fb] = '\0';
          if (0 < (int)fVar10) {
            pfVar13 = pfStack_375c + 3;
            do {
              if (auStack_3698[iVar22] != 0) {
                (acStack_3450 + 0x21f8)[(int)ppuVar26] = *(char *)pfVar13;
                ppuVar26 = (undefined **)((int)ppuVar26 + 1);
                cVar15 = cVar15 + '\x01';
              }
              iVar22 = iVar22 + 1;
              pfVar13 = pfVar13 + 4;
              acStack_3450[0x21fb] = cVar15;
            } while (iVar22 < (int)fVar10);
          }
        }
        else {
          pfStack_3764 = (float *)0x0;
          if (0 < (int)fVar10) {
            iVar22 = 0;
            do {
              uVar16 = auStack_3698[(int)pfStack_3764];
              if (uVar16 != 0) {
                iVar5 = 0;
                puVar18 = &uStack_3458;
                do {
                  if (*puVar18 == uVar16) goto LAB_0048ea02;
                  iVar5 = iVar5 + 1;
                  puVar18 = puVar18 + 0x22;
                } while (iVar5 < 0x40);
                iVar5 = 0;
                iVar19 = 0;
                *(uint *)((int)&uStack_3458 + iVar22) = uVar16;
                pfVar13 = pfStack_375c + 3;
                do {
                  if (uVar16 == auStack_3698[iVar19]) {
                    iVar14 = iVar5 + iVar22;
                    iVar5 = iVar5 + 1;
                    acStack_3450[iVar14] = *(char *)pfVar13;
                    if (0x7d < iVar5) break;
                  }
                  iVar19 = iVar19 + 1;
                  pfVar13 = pfVar13 + 4;
                } while (iVar19 < (int)fVar10);
                *(int *)((int)&fStack_3454 + iVar22) = iVar5;
                iVar22 = iVar22 + 0x88;
                if (0x21ff < iVar22) break;
              }
LAB_0048ea02:
              pfStack_3764 = (float *)((int)pfStack_3764 + 1);
            } while ((int)pfStack_3764 < (int)fVar10);
          }
          pfStack_3750 = &fStack_3454;
          auStack_810[0] = 0;
          iStack_3714 = 0;
          ppuVar26 = (undefined **)0x0;
          do {
            if ((*pfStack_3750 == 0.0) ||
               (ppuStack_372c = (undefined **)((int)*pfStack_3750 + 4 + (int)ppuVar26),
               200 < (int)ppuStack_372c)) break;
            iVar22 = *(int *)(local_3730 + 0x24);
            fVar10 = pfStack_3750[-1];
            pcVar1 = acStack_3450 + 0x21f8 + (int)ppuVar26;
            pcVar1[*(byte *)(iVar22 + 0x2f9e)] = SUB41(fVar10,0);
            pcVar1[*(byte *)(iVar22 + 0x2f9f)] = (char)((uint)fVar10 >> 8);
            pcVar1[*(byte *)(iVar22 + 0x2fa0)] = (char)((uint)fVar10 >> 0x10);
            _Size = *pfStack_3750;
            (acStack_3450 + 0x21fb)[(int)ppuVar26] = *(char *)pfStack_3750;
            _memcpy(acStack_3450 + 0x21fc + (int)ppuVar26,pfStack_3750 + 1,(size_t)_Size);
            if (DAT_0065d3dc == 5) {
              FUN_00407fb0(L"\r\nColor=%06x, Key=",fVar10);
              pfStack_3764 = (float *)0x0;
              if (0 < (int)*pfStack_3750) {
                puStack_3758 = (undefined *)*pfStack_3750;
                do {
                  this = (CSimpleStringT<wchar_t,0> *)FUN_0048c260();
                  uStack_4 = 1;
                  if (1 < *(int *)(*(int *)this + -4)) {
                    ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
                  }
                  FUN_00407fb0(&DAT_0060bb74,*(undefined4 *)this);
                  uStack_4 = 0xffffffff;
                  piVar21 = puStack_3760 + -1;
                  LOCK();
                  iVar22 = *piVar21;
                  *piVar21 = *piVar21 + -1;
                  UNLOCK();
                  if (iVar22 == 1 || iVar22 + -1 < 0) {
                    (**(code **)(*(int *)puStack_3760[-4] + 4))(puStack_3760 + -4);
                  }
                  pfStack_3764 = (float *)((int)pfStack_3764 + 1);
                } while ((int)pfStack_3764 < (int)puStack_3758);
              }
            }
            pfStack_3750 = pfStack_3750 + 0x22;
            iStack_3714 = iStack_3714 + 1;
            ppuVar26 = ppuStack_372c;
          } while (iStack_3714 < 0x40);
          if (DAT_0065d3dc == 5) {
            (*DAT_0065d3e0)(&DAT_0060b960,auStack_810);
          }
        }
LAB_0048ec44:
        if (0 < (int)ppuVar26) goto LAB_0048e837;
      }
      acStack_3450[0x21fa] = 0;
      acStack_3450[0x21f9] = 0;
      acStack_3450[0x21f8] = 0;
      if (*(int *)(local_3730 + 0x30c) != 0) goto LAB_0048e8b3;
      iVar22 = (**(code **)(**(int **)(local_3730 + 0x1c) + 0x40))(acStack_3450 + 0x21f8,3,2);
    }
  }
  if (iVar22 == 0) {
    (*DAT_0065d3e0)(L"Set music real data failed");
  }
LAB_0048e8b3:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&pfStack_3768);
  return;
}


//==== FUNC 004a1f90  FUN_004a1f90 ====

int * FUN_004a1f90(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  size_t _Size;
  int *piVar6;
  undefined1 *puVar7;
  int *piStack_2c;
  int local_20;
  size_t sStack_1c;
  int iStack_14;
  size_t *psStack_10;
  
  iVar5 = 0;
  if (param_1 != 0) {
    piStack_2c = &local_20;
    local_20 = 0;
    iVar1 = GdipGetImageWidth(*(undefined4 *)(param_1 + 4));
    if (iVar1 != 0) {
      *(int *)(param_1 + 8) = iVar1;
    }
    if (unaff_ESI != 0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = GdipGetImageHeight();
      if (iVar2 != 0) {
        *(int *)(param_1 + 8) = iVar2;
      }
      piStack_2c = (int *)0x0;
      iVar2 = GdipGetImageWidth(*(undefined4 *)(param_1 + 4),&piStack_2c);
      if (iVar2 != 0) {
        *(int *)(param_1 + 8) = iVar2;
      }
      _Size = (int)&stack0xffffffd8 * iVar1 * 2;
      puVar7 = &stack0xffffffd8;
      sStack_1c = _Size;
      piVar3 = _malloc(_Size);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        if (0 < iVar1) {
          local_20 = (int)&stack0xffffffd8 * 2;
          piVar6 = piVar3;
          do {
            iVar2 = 0;
            piStack_2c = piVar6;
            if (0 < (int)puVar7) {
              do {
                iVar4 = GdipBitmapGetPixel(*(undefined4 *)(iStack_14 + 4),iVar2,iVar5,
                                           &stack0xffffffd8);
                if (iVar4 != 0) {
                  *(int *)(iStack_14 + 8) = iVar4;
                }
                *(undefined2 *)piVar6 = 0;
                iVar2 = iVar2 + 1;
                piVar6 = (int *)((int)piVar6 + 2);
              } while (iVar2 < (int)puVar7);
            }
            piVar6 = (int *)((int)piStack_2c + local_20);
            iVar5 = iVar5 + 1;
            _Size = sStack_1c;
          } while (iVar5 < iVar1);
        }
        if (psStack_10 != (size_t *)0x0) {
          *psStack_10 = _Size;
          return piVar3;
        }
      }
      return piVar3;
    }
  }
  return (int *)(undefined2 *)0x0;
}


//==== FUNC 004a40c0  FUN_004a40c0 ====

undefined4 FUN_004a40c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  int iVar2;
  uint unaff_EBX;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_8;
  size_t sStack_4;
  
  puVar1 = param_1;
  uVar4 = 0;
  local_8 = 0;
  param_1 = (undefined4 *)0x0;
  GdipGetImageEncodersSize(&local_8,&param_1);
  if (sStack_4 == 0) {
    return 0;
  }
  _Memory = _malloc(sStack_4);
  GdipGetImageEncoders(unaff_ESI,sStack_4,_Memory);
  uVar5 = 0;
  puVar3 = (undefined4 *)((int)_Memory + 0x30);
  do {
    if (unaff_EBX <= uVar4) {
LAB_004a415d:
      _free(_Memory);
      return uVar5;
    }
    iVar2 = __wcsicmp((wchar_t *)*puVar3,L"image/gif");
    if (iVar2 == 0) {
      iVar2 = uVar4 * 0x4c;
      *puVar1 = *(undefined4 *)(iVar2 + (int)_Memory);
      puVar1[1] = *(undefined4 *)((int)_Memory + iVar2 + 4);
      puVar1[2] = *(undefined4 *)((int)_Memory + iVar2 + 8);
      puVar1[3] = *(undefined4 *)((int)_Memory + iVar2 + 0xc);
      uVar5 = 1;
      goto LAB_004a415d;
    }
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 0x13;
  } while( true );
}


//==== FUNC 004a44b0  FUN_004a44b0 ====

uint FUN_004a44b0(void)

{
  wchar_t wVar1;
  void *_Memory;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint unaff_EDI;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  GdipGetImageEncodersSize();
  if (&local_4 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  _Memory = _malloc((size_t)&local_4);
  if (_Memory == (void *)0x0) {
    return 0xffffffff;
  }
  GdipGetImageEncoders(&local_8,&local_4,_Memory);
  uVar5 = 0;
  if (unaff_EDI != 0) {
    puVar6 = (undefined4 *)((int)_Memory + 0x30);
    do {
      pwVar2 = (wchar_t *)*puVar6;
      pwVar4 = L"image/png";
      do {
        wVar1 = *pwVar2;
        bVar7 = (ushort)wVar1 < (ushort)*pwVar4;
        if (wVar1 != *pwVar4) {
LAB_004a4546:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_004a454b;
        }
        if (wVar1 == L'\0') break;
        wVar1 = pwVar2[1];
        bVar7 = (ushort)wVar1 < (ushort)pwVar4[1];
        if (wVar1 != pwVar4[1]) goto LAB_004a4546;
        pwVar2 = pwVar2 + 2;
        pwVar4 = pwVar4 + 2;
      } while (wVar1 != L'\0');
      iVar3 = 0;
LAB_004a454b:
      if (iVar3 == 0) {
        local_8 = *(undefined4 *)(uVar5 * 0x4c + (int)_Memory);
        local_4 = *(undefined4 *)((int)_Memory + uVar5 * 0x4c + 4);
        _free(_Memory);
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x13;
    } while (uVar5 < unaff_EDI);
  }
  _free(_Memory);
  return 0xffffffff;
}


//==== FUNC 004a4610  FUN_004a4610 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4610(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t _Size;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  int iVar8;
  void *pvStack_20;
  uint local_1c;
  uint uStack_18;
  size_t sStack_14;
  int in_stack_fffffff4;
  
  iVar8 = 0;
  if (param_1 != 0) {
    local_1c = 0;
    iVar2 = GdipGetImageWidth(*(undefined4 *)(param_1 + 4));
    if (iVar2 != 0) {
      *(int *)(param_1 + 8) = iVar2;
    }
    pvStack_20 = (void *)0x0;
    iVar2 = GdipGetImageHeight(*(undefined4 *)(param_1 + 4),&pvStack_20);
    if (iVar2 != 0) {
      *(int *)(param_1 + 8) = iVar2;
    }
    _Size = unaff_EDI * (int)&local_1c;
    sStack_14 = _Size;
    pvStack_20 = _malloc(_Size);
    if (pvStack_20 != (void *)0x0) {
      _memset(pvStack_20,0,_Size);
      iVar5 = 0;
      uVar3 = 0;
      iVar2 = 0;
      if (0 < unaff_EDI) {
        do {
          iVar6 = 0;
          uVar4 = uVar3;
          iVar7 = iVar8;
          if (0 < (int)&local_1c) {
            do {
              iVar8 = GdipBitmapGetPixel(*(undefined4 *)(in_stack_fffffff4 + 4),iVar6,iVar2,
                                         &local_1c);
              uVar3 = local_1c;
              if (iVar8 != 0) {
                *(int *)(in_stack_fffffff4 + 8) = iVar8;
                uVar3 = uVar4;
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar7 + 1;
              uStack_18 = (uint)ROUND((double)(uVar3 & 0xff) * _DAT_00625c00 +
                                      (double)(uVar3 >> 8 & 0xff) * _DAT_00625c08 +
                                      (double)(uVar3 >> 0x10 & 0xff) * _DAT_00625c10);
              *(undefined1 *)(iVar7 + (int)pvStack_20) = (undefined1)uStack_18;
              iVar5 = iVar5 + (uStack_18 & 0xff);
              uVar4 = uVar3;
              iVar7 = iVar8;
            } while (iVar6 < (int)&local_1c);
          }
          iVar2 = iVar2 + 1;
          _Size = sStack_14;
        } while (iVar2 < unaff_EDI);
      }
      sStack_14 = iVar5 / (int)_Size;
      iVar8 = 0;
      iVar2 = 0;
      if (0 < unaff_EDI) {
        do {
          iVar7 = 0;
          iVar5 = in_stack_fffffff4;
          if (0 < (int)&local_1c) {
            do {
              pbVar1 = (byte *)((int)pvStack_20 + iVar2);
              iVar2 = iVar2 + 1;
              if ((int)sStack_14 < (int)(uint)*pbVar1) {
                uVar3 = 0xff;
              }
              else {
                uVar3 = 0;
              }
              in_stack_fffffff4 = iVar5;
              iVar6 = GdipBitmapSetPixel(*(undefined4 *)(iVar5 + 4),iVar7,iVar8,
                                         ((uVar3 | 0xffffff00) << 8 | uVar3) << 8 | uVar3);
              if (iVar6 != 0) {
                *(int *)(iVar5 + 8) = iVar6;
              }
              iVar7 = iVar7 + 1;
              iVar5 = in_stack_fffffff4;
            } while (iVar7 < (int)&local_1c);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < unaff_EDI);
      }
      _free(pvStack_20);
      return;
    }
  }
  return;
}


//==== FUNC 004a6500  FUN_004a6500 ====

void FUN_004a6500(void *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *_Memory;
  int *piVar5;
  HANDLE pvVar6;
  size_t unaff_EBX;
  int unaff_EBP;
  int unaff_retaddr;
  undefined4 uStack_50;
  void *pvVar7;
  UINT uType;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005d7663;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_0044e280();
  if (*(undefined4 **)((int)param_1 + 0xb4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0xb4))();
    FUN_004ad123();
    *(undefined4 *)((int)param_1 + 0xb4) = 0;
  }
  puVar1 = (undefined4 *)FUN_004ad0e9();
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    if (1 < *(int *)(param_2 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&param_2,*(int *)(param_2 + -0xc));
    }
    *puVar1 = Gdiplus::Bitmap::vftable;
    uVar2 = GdipCreateBitmapFromFile();
    puVar1[2] = uVar2;
    puVar1[1] = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 **)((int)param_1 + 0xb4) = puVar1;
  uType = puVar1[1];
  iVar3 = GdipGetImageWidth();
  if (iVar3 != 0) {
    puVar1[2] = iVar3;
  }
  if (local_4 == 0) {
    if (*(undefined4 **)((int)param_1 + 0xb4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0xb4))();
      FUN_004ad123();
      *(undefined4 *)((int)param_1 + 0xb4) = 0;
    }
    FID_conflict_MessageBoxW((HWND)&DAT_006250f0,(LPCWSTR)0x0,(LPCWSTR)0x0,uType);
    goto LAB_004a6913;
  }
  iVar3 = *(int *)((int)param_1 + 0xb4);
  *(undefined4 *)((int)param_1 + 0xe0) = 1;
  local_4 = 0;
  iVar4 = GdipImageGetFrameDimensionsCount();
  pvVar7 = local_c;
  if (iVar4 != 0) {
    *(int *)(iVar3 + 8) = iVar4;
  }
  uVar2 = FUN_004ad118();
  iVar3 = *(int *)((int)param_1 + 0xb4);
  uStack_50 = *(undefined4 *)(iVar3 + 4);
  iVar4 = GdipImageGetFrameDimensionsList();
  if (iVar4 != 0) {
    *(int *)(iVar3 + 8) = iVar4;
  }
  iVar3 = *(int *)((int)param_1 + 0xb4);
  iStack_18 = 0;
  iVar4 = GdipImageGetFrameCount(*(undefined4 *)(iVar3 + 4),uVar2,&iStack_18);
  if (iVar4 != 0) {
    *(int *)(iVar3 + 8) = iVar4;
  }
  *(size_t *)((int)param_1 + 0xcc) = unaff_EBX;
  *(uint *)((int)param_1 + 200) = (uint)(1 < (int)unaff_EBX);
  if (1 < (int)unaff_EBX != 0) {
    iVar3 = *(int *)((int)param_1 + 0xb4);
    iVar4 = GdipGetPropertySize(*(undefined4 *)(iVar3 + 4),&stack0xffffffdc,&stack0xffffffb8);
    if (iVar4 != 0) {
      *(int *)(iVar3 + 8) = iVar4;
    }
    _Memory = _malloc(unaff_EBX);
    if (_Memory != (void *)0x0) {
      iVar3 = *(int *)((int)param_1 + 0xb4);
      iVar4 = GdipGetAllPropertyItems(*(undefined4 *)(iVar3 + 4),unaff_EBX,pvVar7,_Memory);
      if (iVar4 != 0) {
        *(int *)(iVar3 + 8) = iVar4;
      }
    }
    iVar3 = **(int **)((int)_Memory + 0xc) * 10;
    *(int *)((int)param_1 + 0xe8) = iVar3;
    if (iVar3 < *(int *)((int)param_1 + 0xec)) {
      *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xec);
    }
    _free(_Memory);
  }
  FUN_004ad123(uVar2);
  iVar3 = *(int *)((int)param_1 + 0xcc);
  *(undefined4 *)((int)param_1 + 0xd0) = 0;
  *(undefined4 *)((int)param_1 + 0xd4) = 0;
  if (0x3c < iVar3) {
    iVar3 = 0x3c;
  }
  *(int *)((int)param_1 + 0xdc) = iVar3;
  FUN_0044e280();
  iVar3 = 0;
  if (0 < *(int *)((int)param_1 + 0xcc)) {
    do {
      piVar5 = _malloc(0xc);
      if (piVar5 != (int *)0x0) {
        *piVar5 = iVar3;
        piVar5[1] = 0;
        if (*(int *)((int)param_1 + 0x9c) == 0) {
          piVar5[2] = 0;
          *(int **)((int)param_1 + 0xa4) = piVar5;
        }
        else {
          piVar5[2] = *(int *)((int)param_1 + 0xa8);
          *(int **)(*(int *)((int)param_1 + 0xa8) + 4) = piVar5;
        }
        *(int *)((int)param_1 + 0x9c) = *(int *)((int)param_1 + 0x9c) + 1;
        *(int **)((int)param_1 + 0xa8) = piVar5;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)param_1 + 0xcc));
  }
  GetClientRect(*(HWND *)((int)param_1 + 0x20),(LPRECT)&stack0xffffffbc);
  iVar3 = *(int *)((int)param_1 + 0xb4);
  iVar4 = GdipGetImageWidth(*(undefined4 *)(iVar3 + 4),&stack0xffffffdc);
  if (iVar4 != 0) {
    *(int *)(iVar3 + 8) = iVar4;
  }
  iVar3 = *(int *)((int)param_1 + 0xb4);
  uStack_50 = 0;
  iVar4 = GdipGetImageHeight(*(undefined4 *)(iVar3 + 4),&uStack_50);
  if (iVar4 != 0) {
    *(int *)(iVar3 + 8) = iVar4;
  }
  if ((*(float *)((int)param_1 + 0xc0) == (float)local_4) &&
     (*(float *)((int)param_1 + 0xc4) == (float)unaff_EBP)) {
    iVar3 = FUN_005b2070();
    iVar4 = FUN_005b2070();
    if (((*(int **)((int)param_1 + 0x90) == (int *)0x0) ||
        (piVar5 = (int *)**(int **)((int)param_1 + 0x90), piVar5 == (int *)0x0)) || (*piVar5 != 1))
    {
      puVar1 = _malloc(0xc);
      puVar1[1] = iVar4;
      puVar1[2] = iVar3;
LAB_004a68c5:
      *puVar1 = 1;
      FUN_0044e0a0();
    }
    else {
      piVar5[1] = piVar5[1] + iVar4;
      piVar5[2] = piVar5[2] + iVar3;
    }
  }
  else if (local_4 <= iStack_1c) {
    if (unaff_EBP <= iStack_18 - iStack_20) {
      iVar3 = (iStack_1c - local_4) / 2;
      iVar4 = ((iStack_18 - iStack_20) - unaff_EBP) / 2;
      if (((*(int **)((int)param_1 + 0x90) == (int *)0x0) ||
          (piVar5 = (int *)**(int **)((int)param_1 + 0x90), piVar5 == (int *)0x0)) || (*piVar5 != 1)
         ) {
        puVar1 = _malloc(0xc);
        puVar1[1] = iVar3;
        puVar1[2] = iVar4;
        goto LAB_004a68c5;
      }
      piVar5[1] = piVar5[1] + iVar3;
      piVar5[2] = piVar5[2] + iVar4;
    }
  }
  if ((*(int *)((int)param_1 + 0x74) == 0) && (*(int *)((int)param_1 + 200) != 0)) {
    uStack_50 = 0x4a68ee;
    pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x74) = pvVar6;
    __beginthread((_StartAddress *)&LAB_004a6010,0,param_1);
  }
  *(undefined4 *)((int)param_1 + 0xe0) = 0;
  InvalidateRect(*(HWND *)((int)param_1 + 0x20),(RECT *)0x0,1);
LAB_004a6913:
  local_c = (void *)0xffffffff;
  piVar5 = (int *)(unaff_retaddr + -4);
  LOCK();
  iVar3 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(unaff_retaddr + -0x10) + 4))();
  }
  ExceptionList = pvStack_14;
  return;
}


//==== FUNC 004a5a30  FUN_004a5a30 ====

void FUN_004a5a30(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  int unaff_EDI;
  
  if (((*(int **)(in_EAX + 0x18) == (int *)0x0) ||
      (piVar1 = (int *)**(int **)(in_EAX + 0x18), piVar1 == (int *)0x0)) || (*piVar1 != 3)) {
    puVar2 = _malloc(0xc);
    *puVar2 = 3;
    puVar2[1] = unaff_EDI;
    FUN_0044e0a0(puVar2);
  }
  else {
    piVar1[1] = piVar1[1] + unaff_EDI;
    if ((piVar1[1] == 0x168) || (piVar1[1] == -0x168)) {
      piVar1[1] = 0;
      return;
    }
  }
  return;
}


//==== FUNC 004ac080  FUN_004ac080 ====

void FUN_004ac080(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (in_EAX != (undefined4 *)0x0) {
    puVar1 = _malloc(0x2c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *in_EAX;
        in_EAX = in_EAX + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_0044e0a0(puVar1);
    }
  }
  return;
}


//==== FUNC 004ad169  Allocate ====

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


//==== FUNC 004ad3a0  AllocateHeap ====

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall ATL::CTempBuffer<char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall AllocateHeap(undefined4 *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403990(0x8007000e);
  }
  *param_1 = pvVar1;
  return;
}


//==== FUNC 004c43c2  AfxUnlockTempMaps ====

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
      if (((param_1 != -1) && (iVar2 = FUN_004bebe7(), iVar2 != 0)) &&
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
    pCVar4 = CThreadLocalObject::GetDataNA((CThreadLocalObject *)&DAT_00653d98);
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


//==== FUNC 004f0dd6  FUN_004f0dd6 ====

void FUN_004f0dd6(size_t param_1)

{
  _malloc(param_1);
  return;
}


//==== FUNC 005b2e93  _wcsupr_s_l_stat ====

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
  
  uVar2 = DAT_0064f674 ^ (uint)&stack0xfffffffc;
  if (unaff_EBX == (wchar_t *)0x0) {
LAB_005b2ead:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    pwVar4 = (wchar_t *)_wcsnlen(unaff_EBX,(size_t)param_1);
    if (param_1 <= pwVar4) {
      *unaff_EBX = L'\0';
      goto LAB_005b2ead;
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
      goto LAB_005b3012;
    }
    pwVar4 = (wchar_t *)
             ___crtLCMapStringW((LPCWSTR)param_2,*(DWORD *)(*(int *)param_2 + 0x14),(LPCWSTR)0x200,
                                (int)unaff_EBX,(LPWSTR)0xffffffff,0);
    if (pwVar4 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_005b2f44:
      __errno();
      goto LAB_005b3012;
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
LAB_005b2fa5:
            local_c = (wchar_t *)(puVar5 + 2);
          }
        }
        else {
          puVar5 = _malloc(_Size);
          local_c = (wchar_t *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_005b2fa5;
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
        goto LAB_005b3012;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_005b2f44;
    }
    *unaff_EBX = L'\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  __invalid_parameter(0,0,0,0,0);
LAB_005b3012:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}


//==== FUNC 005b306f  _wcslwr_s_l_stat ====

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
  
  uVar2 = DAT_0064f674 ^ (uint)&stack0xfffffffc;
  if (unaff_EBX == (wchar_t *)0x0) {
LAB_005b3089:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    pwVar4 = (wchar_t *)_wcsnlen(unaff_EBX,(size_t)param_1);
    if (param_1 <= pwVar4) {
      *unaff_EBX = L'\0';
      goto LAB_005b3089;
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
      goto LAB_005b31ee;
    }
    pwVar4 = (wchar_t *)
             ___crtLCMapStringW((LPCWSTR)param_2,*(DWORD *)(*(int *)param_2 + 0x14),(LPCWSTR)0x100,
                                (int)unaff_EBX,(LPWSTR)0xffffffff,0);
    if (pwVar4 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_005b3120:
      __errno();
      goto LAB_005b31ee;
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
LAB_005b3181:
            local_c = (wchar_t *)(puVar5 + 2);
          }
        }
        else {
          puVar5 = _malloc(_Size);
          local_c = (wchar_t *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_005b3181;
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
        goto LAB_005b31ee;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_005b3120;
    }
    *unaff_EBX = L'\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  __invalid_parameter(0,0,0,0,0);
LAB_005b31ee:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}


//==== FUNC 00585265  FUN_00585265 ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00585265(LPCWSTR param_1,LPCWSTR param_2)

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
  wchar_t *pwVar5;
  
  uVar1 = DAT_0064f674 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (LPCWSTR)0x0) || (param_2 == (LPCWSTR)0x0)) goto LAB_0058533e;
  pAVar2 = AfxGetModuleState();
  hModule = *(HMODULE *)(pAVar2 + 0xc);
  hResInfo = FindResourceW(hModule,param_1,param_2);
  if ((hResInfo == (HRSRC)0x0) ||
     (hResData = LoadResource(hModule,hResInfo), hResData == (HGLOBAL)0x0)) goto LAB_0058533e;
  _Str = LockResource(hResData);
  if (_Str == (char *)0x0) goto LAB_005852c8;
  sVar3 = _strlen(_Str);
  _Size = sVar3 + 9 + sVar3 + 1;
  if ((int)_Size < 0x401) {
    puVar4 = (undefined4 *)&stack0xffffffe0;
    _Memory = (wchar_t *)&stack0xffffffe0;
    if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_00585306:
      _Memory = (wchar_t *)(puVar4 + 2);
    }
  }
  else {
    puVar4 = _malloc(_Size);
    _Memory = (wchar_t *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xdddd;
      goto LAB_00585306;
    }
  }
  if (_Memory == (wchar_t *)0x0) {
LAB_005852c8:
                    /* WARNING: Subroutine does not return */
    FUN_004ae215();
  }
  pwVar5 = AfxA2WHelper(_Memory,_Str,sVar3 + 1);
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_00585247(pwVar5);
  }
  FreeResource(hResData);
  __freea(_Memory);
LAB_0058533e:
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 0058965b  BuildPropPageArray ====

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
LAB_005896a6:
                    /* WARNING: Subroutine does not return */
    FUN_004ae1dd();
  }
  p_Var5 = (_PROPSHEETPAGEA *)((int)&p_Var4->dwSize + _Size);
  if (p_Var5 < p_Var4) {
                    /* WARNING: Subroutine does not return */
    FUN_004ae215();
  }
  uVar1 = *(uint *)(this + 0x58);
  local_8 = 0;
  *(_PROPSHEETPAGEA **)(this + 0x74) = p_Var4;
  p_Var7 = p_Var4;
  if (0 < *(int *)(this + 0x90)) {
    do {
      pCVar3 = GetPage(this,local_8);
      if ((p_Var7 < p_Var4) || (p_Var5 < p_Var7)) goto LAB_005896a6;
      FUN_004ad96a(p_Var7,(int)p_Var5 - (int)p_Var7,*(undefined4 **)(pCVar3 + 0x74),
                   **(undefined4 **)(pCVar3 + 0x74));
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


//==== FUNC 005b4aec  terminate ====

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


//==== FUNC 0046c060  FUN_0046c060 ====

undefined4 __fastcall FUN_0046c060(CDialog *param_1)

{
  CDialog::OnInitDialog(param_1);
  FUN_0046c690(param_1);
  return 1;
}


//==== FUNC 00472570  FUN_00472570 ====

void __fastcall FUN_00472570(CDialog *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  HANDLE hObject;
  uint uVar4;
  undefined1 *puStack_f10;
  undefined1 auStack_f0c [3248];
  undefined4 uStack_25c;
  undefined4 uStack_248;
  wchar_t awStack_22c [262];
  uint uStack_20;
  uint local_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de4ab;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&puStack_f10;
  ExceptionList = &local_14;
  CDialog::OnInitDialog(param_1);
  FUN_00476cc0();
  FUN_00472bd0();
  (**(code **)(*(int *)param_1 + 0x174))();
  if ((DAT_00658288 != 0) && (*(int *)(*(int *)(param_1 + 0xc0) + 0x2d8) != 0)) {
    if ((*(int *)(param_1 + 0xc0) != 0) && (awStack_22c != (wchar_t *)0x0)) {
      __snwprintf_s(awStack_22c,0x104,0x103,L"%s\\Update.exe");
    }
    BVar1 = PathFileExistsW(awStack_22c);
    if (BVar1 == 0) {
      FUN_004494c0(L"File is not exist: %s");
    }
    else if (*(int *)(*(int *)(param_1 + 0xc0) + 0x1c) != 0) {
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc0) + 0x1c) + 0x28))();
      (*DAT_0065d3e0)(L"CSettingKBDlg: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x, bWired=%d",
                      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x1c) + 0x18),
                      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x2d8));
      iVar3 = *(int *)(param_1 + 0xc0);
      if (((*(int *)(*(int *)(iVar3 + 0x1c) + 0x18) != 0) &&
          (*(int *)(*(int *)(iVar3 + 0x1c) + 0x18) <= *(int *)(iVar3 + 0x2d8))) && (iVar2 == 0)) {
        if (*(int *)(iVar3 + 0x2dc) == 0) {
          puStack_f10 = &stack0xfffff0dc;
          FUN_00404ee0(&DAT_0066fe70);
          iVar3 = FUN_004493c0(param_1);
          if (iVar3 != 0) {
            SetTimer(*(HWND *)(param_1 + 0x20),0x8803,1000,(TIMERPROC)0x0);
          }
        }
        else {
          FUN_00446780(auStack_f0c);
          puStack_10 = (undefined1 *)0x0;
          uStack_25c = 1;
          uStack_248 = 1;
          FID_conflict_operator_();
          FUN_004b79eb();
          SetTimer(*(HWND *)(param_1 + 0x20),0x8803,1000,(TIMERPROC)0x0);
          puStack_10 = (undefined1 *)0xffffffff;
          FUN_00446a20();
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0xc0) != 0) &&
      (iVar3 = *(int *)(*(int *)(param_1 + 0xc0) + 0x24), iVar3 != 0)) &&
     ((*(short *)(iVar3 + 0x345c) != 0 && ((*(byte *)(iVar3 + 0x345e) & 6) != 0)))) {
    hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,FUN_004723b0,param_1,0,
                           (LPDWORD)&stack0xfffff0ec);
    if (hObject != (HANDLE)0x0) {
      CloseHandle(hObject);
    }
  }
  uVar4 = GetWindowLongW(*(HWND *)(param_1 + 0x20),-0x10);
  SetWindowLongW(*(HWND *)(param_1 + 0x20),-0x10,uVar4 | 0x4000000);
  ExceptionList = pvStack_18;
  __security_check_cookie(uStack_20 ^ (uint)&stack0xfffff0ec);
  return;
}


//==== FUNC 004756b0  FUN_004756b0 ====

void __fastcall FUN_004756b0(CDialog *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  HWND hWnd;
  wchar_t awStack_21c [262];
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_0064f674 ^ (uint)awStack_21c;
  CDialog::OnInitDialog(param_1);
  FUN_00476cc0();
  FUN_00475c70();
  (**(code **)(*(int *)param_1 + 0x174))();
  if ((DAT_00658288 != 0) && (*(int *)(*(int *)(param_1 + 0xc0) + 0x2d8) != 0)) {
    if ((*(int *)(param_1 + 0xc0) != 0) && (awStack_21c != (wchar_t *)0x0)) {
      __snwprintf_s(awStack_21c,0x104,0x103,L"%s\\Update.exe");
    }
    BVar1 = PathFileExistsW(awStack_21c);
    if (BVar1 == 0) {
      FUN_004494c0(L"File is not exist: %s");
    }
    else if (*(int *)(*(int *)(param_1 + 0xc0) + 0x1c) != 0) {
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc0) + 0x1c) + 0x28))();
      (*DAT_0065d3e0)(L"CSettingMSDlg: pHidDev->m_nVer=%x, pDev->nFwVerNeedToUpdate=%x, bWired=%d",
                      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x1c) + 0x18),
                      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x2d8));
      iVar3 = *(int *)(param_1 + 0xc0);
      if (((*(int *)(*(int *)(iVar3 + 0x1c) + 0x18) != 0) &&
          (*(int *)(*(int *)(iVar3 + 0x1c) + 0x18) <= *(int *)(iVar3 + 0x2d8))) && (iVar2 == 0)) {
        if (*(int *)(iVar3 + 0x2dc) == 0) {
          FUN_00404ee0(&DAT_0066fe70);
          iVar3 = FUN_004493c0(param_1);
          if (iVar3 == 0) goto LAB_0047582a;
          hWnd = *(HWND *)(param_1 + 0x20);
        }
        else {
          FUN_00448e50();
          hWnd = *(HWND *)(param_1 + 0x20);
        }
        SetTimer(hWnd,0x8803,1000,(TIMERPROC)0x0);
      }
    }
  }
LAB_0047582a:
  uVar4 = GetWindowLongW(*(HWND *)(param_1 + 0x20),-0x10);
  SetWindowLongW(*(HWND *)(param_1 + 0x20),-0x10,uVar4 | 0x4000000);
  __security_check_cookie(uStack_10 ^ (uint)&stack0xfffffde0);
  return;
}


//==== FUNC 005c34bd  __wsopen_helper ====

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
  
  local_8 = &DAT_00640780;
  uStack_c = 0x5c34c9;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (wchar_t *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = __tsopen_nolock(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_005c355b();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


//==== FUNC 005c3f8b  __sopen_helper ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __sopen_helper
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl
__sopen_helper(char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  int *piVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006407a0;
  uStack_c = 0x5c3f97;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = __tsopen_nolock(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_005c4029();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


//==== FUNC 005adcb5  __fread_nolock_s ====

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
LAB_005add30:
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
joined_r0x005add56:
        do {
          while( true ) {
            if (uVar7 == 0) {
              return _Count;
            }
            if ((_File->_flag & 0x10cU) == 0) break;
            uVar4 = _File->_cnt;
            if (uVar4 == 0) break;
            if ((int)uVar4 < 0) {
LAB_005adea7:
              _File->_flag = _File->_flag | 0x20;
LAB_005adeab:
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
              goto LAB_005adcec;
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
LAB_005ade7a:
              if (_DstSize != 0xffffffff) {
                _memset(_DstBuf,0,_DstSize);
              }
              piVar3 = __errno();
              *piVar3 = 0x22;
              goto LAB_005adcec;
            }
            _DstBuf_00 = puVar2;
            iVar5 = __fileno(_File);
            iVar5 = __read(iVar5,_DstBuf_00,uVar4);
            if (iVar5 == 0) {
              _File->_flag = _File->_flag | 0x10;
              goto LAB_005adeab;
            }
            if (iVar5 == -1) goto LAB_005adea7;
            uVar7 = uVar7 - iVar5;
            uVar1 = uVar1 - iVar5;
            puVar2 = puVar2 + iVar5;
            goto joined_r0x005add56;
          }
          iVar5 = __filbuf(_File);
          if (iVar5 == -1) goto LAB_005adeab;
          if (uVar1 == 0) goto LAB_005ade7a;
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
      goto LAB_005add30;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
LAB_005adcec:
    __invalid_parameter(0,0,0,0,0);
  }
  return 0;
}


//==== FUNC 005bab51  __filbuf ====

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
    __invalid_parameter(0,0,0,0,0);
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
              puVar5 = &DAT_0064f908;
            }
            else {
              iVar3 = __fileno(_File);
              uVar4 = __fileno(_File);
              puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_00671260)[iVar3 >> 5]);
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


//==== FUNC 005c4836  __filwbuf ====

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
    __invalid_parameter(0,0,0,0,0);
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
              puVar5 = &DAT_0064f908;
            }
            else {
              iVar3 = __fileno(_File);
              uVar4 = __fileno(_File);
              puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_00671260)[iVar3 >> 5]);
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


//==== FUNC 00479fd0  FUN_00479fd0 ====

void FUN_00479fd0(void)

{
  HANDLE hObject;
  int iVar1;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_0064f674 ^ (uint)local_214;
  __snwprintf_s(local_214,0x104,0x103,L"%s%s",&DAT_0065cfa8,L"mac.dct");
  hObject = CreateFileW(local_214,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    FUN_00479830();
    iVar1 = FUN_00479ea0(hObject);
    CloseHandle(hObject);
    if (iVar1 == 0) {
      FUN_00479c20();
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_214);
  return;
}


//==== FUNC 00498a40  FUN_00498a40 ====

undefined4 __fastcall FUN_00498a40(LPVOID param_1)

{
  HANDLE pvVar1;
  LPVOID local_4;
  
  if (*(int *)(*(int *)((int)param_1 + 0x10) + 0x310) != 0) {
    local_4 = param_1;
    FUN_00492e00();
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x28c) = pvVar1;
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x290) = pvVar1;
    local_4 = (LPVOID)0x0;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x1000,FUN_00498730,param_1,0,(LPDWORD)&local_4
                         );
    if (pvVar1 != (HANDLE)0x0) {
      CloseHandle(pvVar1);
    }
  }
  return 1;
}


//==== FUNC 00456cb0  FUN_00456cb0 ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00456e72) */
/* WARNING: Removing unreachable block (ram,0x00456e9b) */

void __fastcall FUN_00456cb0(CWinApp *param_1)

{
  uint uVar1;
  int iVar2;
  LPWSTR lpCmdLine;
  LPWSTR *hMem;
  HANDLE pvVar3;
  DWORD DVar4;
  uint unaff_EBX;
  uint unaff_ESI;
  wchar_t *pwVar5;
  int *pNumArgs;
  WORD WStack_1d5c;
  WORD WStack_1d5a;
  INITCOMMONCONTROLSEX local_1d48;
  undefined4 local_1d40;
  undefined4 local_1d3c;
  undefined4 local_1d38;
  undefined4 local_1d34;
  WCHAR aWStack_a54 [260];
  wchar_t awStack_84c [260];
  wchar_t awStack_644 [260];
  wchar_t awStack_43c [260];
  wchar_t awStack_234 [262];
  uint uStack_28;
  void *pvStack_20;
  uint local_1c;
  CWinApp *pCStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005d8dad;
  local_14 = ExceptionList;
  local_1c = DAT_0064f674 ^ (uint)&WStack_1d5c;
  uVar1 = DAT_0064f674 ^ (uint)&stack0xffffe298;
  ExceptionList = &local_14;
  local_1d48.dwSize = 8;
  local_1d48.dwICC = 0xff;
  pCStack_18 = param_1;
  InitCommonControlsEx(&local_1d48);
  CWinApp::InitInstance(param_1);
  AfxEnableControlContainer((COccManager *)0x0);
  CWinApp::SetRegistryKey(param_1,L"Local AppWizard-Generated Applications");
  local_1d40 = 1;
  local_1d3c = 0;
  local_1d38 = 0;
  local_1d34 = 0;
  GdiplusStartup(param_1 + 0xe8,&local_1d40,0,uVar1);
  GetModuleFileNameW((HMODULE)0x0,aWStack_a54,0x104);
  __wsplitpath_s(aWStack_a54,awStack_644,0x104,awStack_84c,0x104,awStack_234,0x104,awStack_43c,0x104
                );
  __wmakepath_s((wchar_t *)&DAT_0065d1b0,0x104,awStack_644,awStack_84c,(wchar_t *)0x0,(wchar_t *)0x0
               );
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_0040e560();
  GetLocalTime((LPSYSTEMTIME)&stack0xffffe29c);
  (*DAT_0065d3e0)(L"--------------------------------------------------");
  (*DAT_0065d3e0)(L"Launch %04d-%d-%d %d:%d, ver=%x, AppTitle=%s",unaff_ESI & 0xffff,
                  unaff_ESI >> 0x10,unaff_EBX >> 0x10,WStack_1d5c,WStack_1d5a,DAT_006581e4,
                  &DAT_0065817c);
  iVar2 = FUN_00456b40();
  if (iVar2 == 0) goto LAB_00456f5f;
  pNumArgs = (int *)&stack0xffffe298;
  lpCmdLine = GetCommandLineW();
  hMem = CommandLineToArgvW(lpCmdLine,pNumArgs);
  (*DAT_0065d3e0)(L"nArgs=%d",0);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  LocalFree(hMem);
  if (*(int *)(param_1 + 0xfc) != 0) {
    Sleep(0x5dc);
  }
  FUN_00467840();
  SetLastError(0);
  pvVar3 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,&DAT_0065817c);
  *(HANDLE *)(param_1 + 0xec) = pvVar3;
  DVar4 = GetLastError();
  if (*(int *)(param_1 + 0xec) == 0) {
    pwVar5 = L"CreateMutex m_hMutex=0, Err=%d";
LAB_00456f13:
    (*DAT_0065d3e0)(pwVar5,DVar4);
  }
  else {
    if (DVar4 == 0xb7) {
      EnumWindows((WNDENUMPROC)&LAB_00456c00,(LPARAM)param_1);
      goto LAB_00456f5f;
    }
    if (DVar4 != 0) {
      pwVar5 = L"CreateMutex Err=%d";
      goto LAB_00456f13;
    }
  }
  iVar2 = FUN_00467920();
  if (4 < iVar2) {
    FUN_004678f0();
  }
  FUN_004573c0(&local_1d3c);
  pCStack_18 = (CWinApp *)0x0;
  *(undefined4 **)(param_1 + 0x20) = &local_1d3c;
  FUN_004b79eb();
  pCStack_18 = (CWinApp *)0xffffffff;
  FUN_00456f90(&local_1d3c);
LAB_00456f5f:
  ExceptionList = pvStack_20;
  __security_check_cookie(uStack_28 ^ (uint)&stack0xffffe298);
  return;
}


