// TRANSPORT FUNCTIONS:
//   00401450 FUN_00401450
//   00401220 FUN_00401220
//   0047b630 Write
//   004020b0 FUN_004020b0
//   00451cf5 FUN_00451cf5
//   005f95aa __NMSG_WRITE
//   00606159 __write_nolock
//   0047b5ee Read
//   00401ff0 FUN_00401ff0
//   00607918 __read_nolock
//   00607252 __ftelli64_nolock
//   0044afd0 FUN_0044afd0
//   00401000 FUN_00401000
// TOTAL TARGET FUNCTIONS: 133
//==== FUNC 00401450  FUN_00401450 ====

undefined4 FUN_00401450(void)

{
  ushort *puVar1;
  undefined2 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  size_t sVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  short *psVar10;
  LPWSTR pWVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint local_10;
  int local_c;
  uint local_8;
  
  iVar4 = *(int *)(in_EAX + 0x1c);
  if ((iVar4 == 0) || (iVar4 == -1)) {
    return 0;
  }
  cVar3 = HidD_GetPreparsedData(iVar4,(undefined4 *)(in_EAX + 0x228));
  if (((cVar3 == '\0') ||
      (cVar3 = HidD_GetAttributes(*(undefined4 *)(in_EAX + 0x1c),in_EAX + 0x26c), cVar3 == '\0')) ||
     (iVar4 = HidP_GetCaps(*(undefined4 *)(in_EAX + 0x228),in_EAX + 0x22c), iVar4 == 0)) {
    return 0;
  }
  pvVar5 = _calloc((uint)*(ushort *)(in_EAX + 0x230),1);
  uVar12 = *(ushort *)(in_EAX + 0x25a);
  *(void **)(in_EAX + 0x278) = pvVar5;
  pvVar5 = _calloc((uint)uVar12,0x48);
  *(void **)(in_EAX + 0x284) = pvVar5;
  pvVar6 = _calloc((uint)*(ushort *)(in_EAX + 0x25c),0x48);
  *(void **)(in_EAX + 0x288) = pvVar6;
  local_10 = (uint)uVar12;
  HidP_GetSpecificButtonCaps(0,0,0,0,pvVar5,&local_10,*(undefined4 *)(in_EAX + 0x228));
  local_10 = (uint)*(ushort *)(in_EAX + 0x25c);
  HidP_GetSpecificValueCaps(0,0,0,0,pvVar6,&local_10,*(undefined4 *)(in_EAX + 0x228));
  uVar12 = 0;
  local_8 = 0;
  if (*(short *)(in_EAX + 0x25c) != 0) {
    psVar10 = (short *)((int)pvVar6 + 0x3a);
    do {
      if ((char)psVar10[-0x17] == '\0') {
        local_8 = local_8 + 1;
      }
      else {
        local_8 = CONCAT22(local_8._2_2_,(ushort)local_8 + (*psVar10 - psVar10[-1]) + 1);
      }
      uVar12 = uVar12 + 1;
      psVar10 = psVar10 + 0x24;
    } while (uVar12 < *(ushort *)(in_EAX + 0x25c));
  }
  puVar15 = *(undefined2 **)(in_EAX + 0x288);
  sVar7 = (uint)*(ushort *)(in_EAX + 0x25a) + (local_8 & 0xffff);
  *(size_t *)(in_EAX + 0x280) = sVar7;
  puVar8 = _calloc(sVar7,0x20);
  uVar13 = 0;
  *(undefined1 **)(in_EAX + 0x27c) = puVar8;
  local_c = 0;
  if (*(short *)(in_EAX + 0x25a) != 0) {
    puVar9 = (ushort *)((int)pvVar5 + 0x38);
    uVar14 = uVar13;
    do {
      uVar13 = uVar14 + 1;
      if (*(uint *)(in_EAX + 0x280) <= uVar14) goto LAB_004016f9;
      *puVar8 = 1;
      *(undefined4 *)(puVar8 + 4) = 0x110000;
      *(ushort *)(puVar8 + 2) = puVar9[-0x1c];
      if ((char)puVar9[-0x16] == '\0') {
        uVar14 = (uint)*puVar9;
        *(uint *)(puVar8 + 0x10) = uVar14;
      }
      else {
        *(uint *)(puVar8 + 0x10) = (uint)*puVar9;
        uVar14 = (uint)puVar9[1];
      }
      *(uint *)(puVar8 + 0x14) = uVar14;
      sVar7 = HidP_MaxUsageListLength(0,puVar9[-0x1c],*(undefined4 *)(in_EAX + 0x228));
      *(size_t *)(puVar8 + 0x18) = sVar7;
      pvVar5 = _calloc(sVar7,2);
      *(void **)(puVar8 + 0x1c) = pvVar5;
      puVar1 = puVar9 + -0x1b;
      puVar9 = puVar9 + 0x24;
      *(uint *)(puVar8 + 8) = (uint)(byte)*puVar1;
      local_c = local_c + 1;
      puVar8 = puVar8 + 0x20;
      uVar14 = uVar13;
    } while ((ushort)local_c < *(ushort *)(in_EAX + 0x25a));
  }
  local_c = 0;
  if ((ushort)local_8 != 0) {
    do {
      if (*(char *)(puVar15 + 6) == '\0') {
        uVar14 = uVar13 + 1;
        if (*(uint *)(in_EAX + 0x280) <= uVar13) break;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 4) = 0x110000;
        *(undefined2 *)(puVar8 + 2) = *puVar15;
        *(undefined2 *)(puVar8 + 0x10) = puVar15[0x1c];
        *(uint *)(puVar8 + 8) = (uint)*(byte *)(puVar15 + 1);
        puVar8 = puVar8 + 0x20;
      }
      else {
        uVar12 = puVar15[0x1c];
        uVar14 = uVar13;
        if (uVar12 <= (ushort)puVar15[0x1d]) {
          do {
            uVar14 = uVar13 + 1;
            if (*(uint *)(in_EAX + 0x280) <= uVar13) goto LAB_004016f9;
            *puVar8 = 0;
            *(undefined4 *)(puVar8 + 4) = 0x110000;
            uVar2 = *puVar15;
            *(ushort *)(puVar8 + 0x10) = uVar12;
            *(undefined2 *)(puVar8 + 2) = uVar2;
            *(uint *)(puVar8 + 8) = (uint)*(byte *)(puVar15 + 1);
            uVar12 = uVar12 + 1;
            puVar8 = puVar8 + 0x20;
            uVar13 = uVar14;
          } while (uVar12 <= (ushort)puVar15[0x1d]);
        }
      }
      local_c = local_c + 1;
      puVar15 = puVar15 + 0x24;
      uVar13 = uVar14;
    } while ((ushort)local_c < (ushort)local_8);
  }
LAB_004016f9:
  pvVar5 = _calloc((uint)*(ushort *)(in_EAX + 0x232),1);
  uVar12 = *(ushort *)(in_EAX + 0x260);
  *(void **)(in_EAX + 0x28c) = pvVar5;
  pvVar5 = _calloc((uint)uVar12,0x48);
  *(void **)(in_EAX + 0x298) = pvVar5;
  pvVar6 = _calloc((uint)*(ushort *)(in_EAX + 0x262),0x48);
  *(void **)(in_EAX + 0x29c) = pvVar6;
  local_10 = (uint)uVar12;
  HidP_GetSpecificButtonCaps(1,0,0,0,pvVar5,&local_10,*(undefined4 *)(in_EAX + 0x228));
  local_10 = (uint)*(ushort *)(in_EAX + 0x262);
  HidP_GetSpecificValueCaps(1,0,0,0,pvVar6,&local_10,*(undefined4 *)(in_EAX + 0x228));
  uVar12 = 0;
  local_8 = 0;
  if (*(short *)(in_EAX + 0x262) != 0) {
    psVar10 = (short *)((int)pvVar6 + 0x3a);
    do {
      if ((char)psVar10[-0x17] == '\0') {
        local_8 = local_8 + 1;
      }
      else {
        local_8 = CONCAT22(local_8._2_2_,(ushort)local_8 + (*psVar10 - psVar10[-1]) + 1);
      }
      uVar12 = uVar12 + 1;
      psVar10 = psVar10 + 0x24;
    } while (uVar12 < *(ushort *)(in_EAX + 0x262));
  }
  puVar15 = *(undefined2 **)(in_EAX + 0x29c);
  sVar7 = (uint)*(ushort *)(in_EAX + 0x260) + (local_8 & 0xffff);
  *(size_t *)(in_EAX + 0x294) = sVar7;
  puVar8 = _calloc(sVar7,0x20);
  uVar13 = 0;
  *(undefined1 **)(in_EAX + 0x290) = puVar8;
  local_c = 0;
  if (*(short *)(in_EAX + 0x260) != 0) {
    puVar9 = (ushort *)((int)pvVar5 + 0x38);
    uVar14 = uVar13;
    do {
      uVar13 = uVar14 + 1;
      if (*(uint *)(in_EAX + 0x294) <= uVar14) goto LAB_00401940;
      *puVar8 = 1;
      *(undefined4 *)(puVar8 + 4) = 0x110000;
      *(ushort *)(puVar8 + 2) = puVar9[-0x1c];
      if ((char)puVar9[-0x16] == '\0') {
        uVar14 = (uint)*puVar9;
        *(uint *)(puVar8 + 0x10) = uVar14;
      }
      else {
        *(uint *)(puVar8 + 0x10) = (uint)*puVar9;
        uVar14 = (uint)puVar9[1];
      }
      *(uint *)(puVar8 + 0x14) = uVar14;
      sVar7 = HidP_MaxUsageListLength(1,puVar9[-0x1c],*(undefined4 *)(in_EAX + 0x228));
      *(size_t *)(puVar8 + 0x18) = sVar7;
      pvVar5 = _calloc(sVar7,2);
      *(void **)(puVar8 + 0x1c) = pvVar5;
      puVar1 = puVar9 + -0x1b;
      puVar9 = puVar9 + 0x24;
      *(uint *)(puVar8 + 8) = (uint)(byte)*puVar1;
      local_c = local_c + 1;
      puVar8 = puVar8 + 0x20;
      uVar14 = uVar13;
    } while ((ushort)local_c < *(ushort *)(in_EAX + 0x260));
  }
  local_c = 0;
  if ((ushort)local_8 != 0) {
    do {
      if (*(char *)(puVar15 + 6) == '\0') {
        uVar14 = uVar13 + 1;
        if (*(uint *)(in_EAX + 0x294) <= uVar13) break;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 4) = 0x110000;
        *(undefined2 *)(puVar8 + 2) = *puVar15;
        *(undefined2 *)(puVar8 + 0x10) = puVar15[0x1c];
        *(uint *)(puVar8 + 8) = (uint)*(byte *)(puVar15 + 1);
        puVar8 = puVar8 + 0x20;
      }
      else {
        uVar12 = puVar15[0x1c];
        uVar14 = uVar13;
        if (uVar12 <= (ushort)puVar15[0x1d]) {
          do {
            uVar14 = uVar13 + 1;
            if (*(uint *)(in_EAX + 0x294) <= uVar13) goto LAB_00401940;
            *puVar8 = 0;
            *(undefined4 *)(puVar8 + 4) = 0x110000;
            uVar2 = *puVar15;
            *(ushort *)(puVar8 + 0x10) = uVar12;
            *(undefined2 *)(puVar8 + 2) = uVar2;
            *(uint *)(puVar8 + 8) = (uint)*(byte *)(puVar15 + 1);
            uVar12 = uVar12 + 1;
            puVar8 = puVar8 + 0x20;
            uVar13 = uVar14;
          } while (uVar12 <= (ushort)puVar15[0x1d]);
        }
      }
      local_c = local_c + 1;
      puVar15 = puVar15 + 0x24;
      uVar13 = uVar14;
    } while ((ushort)local_c < (ushort)local_8);
  }
LAB_00401940:
  pvVar5 = _calloc((uint)*(ushort *)(in_EAX + 0x234),1);
  uVar12 = *(ushort *)(in_EAX + 0x266);
  *(void **)(in_EAX + 0x2a0) = pvVar5;
  pvVar5 = _calloc((uint)uVar12,0x48);
  *(void **)(in_EAX + 0x2ac) = pvVar5;
  pvVar6 = _calloc((uint)*(ushort *)(in_EAX + 0x268),0x48);
  *(void **)(in_EAX + 0x2b0) = pvVar6;
  local_10 = (uint)uVar12;
  HidP_GetSpecificButtonCaps(2,0,0,0,pvVar5,&local_10,*(undefined4 *)(in_EAX + 0x228));
  local_10 = (uint)*(ushort *)(in_EAX + 0x268);
  HidP_GetSpecificValueCaps(2,0,0,0,pvVar6,&local_10,*(undefined4 *)(in_EAX + 0x228));
  uVar12 = 0;
  local_8 = 0;
  if (*(short *)(in_EAX + 0x268) != 0) {
    psVar10 = (short *)((int)pvVar6 + 0x3a);
    do {
      if ((char)psVar10[-0x17] == '\0') {
        local_8 = local_8 + 1;
      }
      else {
        local_8 = CONCAT22(local_8._2_2_,(ushort)local_8 + (*psVar10 - psVar10[-1]) + 1);
      }
      uVar12 = uVar12 + 1;
      psVar10 = psVar10 + 0x24;
    } while (uVar12 < *(ushort *)(in_EAX + 0x268));
  }
  puVar15 = *(undefined2 **)(in_EAX + 0x2b0);
  sVar7 = (uint)*(ushort *)(in_EAX + 0x266) + (local_8 & 0xffff);
  *(size_t *)(in_EAX + 0x2a8) = sVar7;
  puVar8 = _calloc(sVar7,0x20);
  uVar13 = 0;
  *(undefined1 **)(in_EAX + 0x2a4) = puVar8;
  local_c = 0;
  if (*(short *)(in_EAX + 0x266) != 0) {
    puVar9 = (ushort *)((int)pvVar5 + 0x38);
    uVar14 = uVar13;
    do {
      uVar13 = uVar14 + 1;
      if (*(uint *)(in_EAX + 0x2a8) <= uVar14) goto LAB_00401b99;
      *puVar8 = 1;
      *(undefined4 *)(puVar8 + 4) = 0x110000;
      *(ushort *)(puVar8 + 2) = puVar9[-0x1c];
      if ((char)puVar9[-0x16] == '\0') {
        uVar14 = (uint)*puVar9;
        *(uint *)(puVar8 + 0x10) = uVar14;
      }
      else {
        *(uint *)(puVar8 + 0x10) = (uint)*puVar9;
        uVar14 = (uint)puVar9[1];
      }
      *(uint *)(puVar8 + 0x14) = uVar14;
      sVar7 = HidP_MaxUsageListLength(2,puVar9[-0x1c],*(undefined4 *)(in_EAX + 0x228));
      *(size_t *)(puVar8 + 0x18) = sVar7;
      pvVar5 = _calloc(sVar7,2);
      *(void **)(puVar8 + 0x1c) = pvVar5;
      puVar1 = puVar9 + -0x1b;
      puVar9 = puVar9 + 0x24;
      *(uint *)(puVar8 + 8) = (uint)(byte)*puVar1;
      local_c = local_c + 1;
      puVar8 = puVar8 + 0x20;
      uVar14 = uVar13;
    } while ((ushort)local_c < *(ushort *)(in_EAX + 0x266));
  }
  local_c = 0;
  if ((ushort)local_8 != 0) {
    do {
      if (*(char *)(puVar15 + 6) == '\0') {
        uVar14 = uVar13 + 1;
        if (*(uint *)(in_EAX + 0x2a8) <= uVar13) break;
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 4) = 0x110000;
        *(undefined2 *)(puVar8 + 2) = *puVar15;
        *(undefined2 *)(puVar8 + 0x10) = puVar15[0x1c];
        *(uint *)(puVar8 + 8) = (uint)*(byte *)(puVar15 + 1);
        puVar8 = puVar8 + 0x20;
      }
      else {
        uVar12 = puVar15[0x1c];
        uVar14 = uVar13;
        if (uVar12 <= (ushort)puVar15[0x1d]) {
          do {
            uVar14 = uVar13 + 1;
            if (*(uint *)(in_EAX + 0x2a8) <= uVar13) goto LAB_00401b99;
            *puVar8 = 0;
            *(undefined4 *)(puVar8 + 4) = 0x110000;
            uVar2 = *puVar15;
            *(ushort *)(puVar8 + 0x10) = uVar12;
            *(undefined2 *)(puVar8 + 2) = uVar2;
            *(uint *)(puVar8 + 8) = (uint)*(byte *)(puVar15 + 1);
            uVar12 = uVar12 + 1;
            puVar8 = puVar8 + 0x20;
            uVar13 = uVar14;
          } while (uVar12 <= (ushort)puVar15[0x1d]);
        }
      }
      local_c = local_c + 1;
      puVar15 = puVar15 + 0x24;
      uVar13 = uVar14;
    } while ((ushort)local_c < (ushort)local_8);
  }
LAB_00401b99:
  *(undefined4 *)(in_EAX + 0x2b4) = 0;
  pWVar11 = StrStrIW((LPCWSTR)(in_EAX + 0x20),L"&mi_");
  if (pWVar11 != (LPWSTR)0x0) {
    _swscanf(pWVar11 + 4,L"%x",(undefined4 *)(in_EAX + 0x2b4));
  }
  *(undefined4 *)(in_EAX + 0x2b8) = 0;
  pWVar11 = StrStrIW((LPCWSTR)(in_EAX + 0x20),L"&col");
  if (pWVar11 != (LPWSTR)0x0) {
    _swscanf(pWVar11 + 4,L"%x",(undefined4 *)(in_EAX + 0x2b8));
  }
  return 1;
}


//==== FUNC 00401220  FUN_00401220 ====

void __fastcall FUN_00401220(undefined4 *param_1,uint *param_2)

{
  WCHAR WVar1;
  uint uVar2;
  size_t sVar3;
  HDEVINFO DeviceInfoSet;
  void *pvVar4;
  BOOL BVar5;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W DeviceInterfaceDetailData;
  WCHAR *pWVar6;
  DWORD DVar7;
  WCHAR *pWVar8;
  uint MemberIndex;
  int iVar9;
  undefined4 *puStack_4c;
  undefined4 *local_48;
  size_t sStack_44;
  uint *local_40;
  GUID local_3c;
  _SP_DEVICE_INTERFACE_DATA _Stack_2c;
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_006dfb80 ^ (uint)&puStack_4c;
  MemberIndex = 0;
  local_40 = (uint *)0x0;
  local_48 = param_1;
  local_3c.Data1 = (ulong)param_2;
  HidD_GetHidGuid(&local_3c.Data2);
  *param_1 = 0;
  *param_2 = 0;
  DeviceInfoSet = SetupDiGetClassDevsW(&local_3c,(PCWSTR)0x0,(HWND)0x0,0x12);
  *param_2 = 4;
  _Stack_2c.cbSize = 0x1c;
  do {
    do {
      uVar2 = *param_2;
      sVar3 = uVar2 * 2;
      *param_2 = sVar3;
      if ((void *)*puStack_4c == (void *)0x0) {
        pvVar4 = _calloc(sVar3,4);
      }
      else {
        pvVar4 = _realloc((void *)*puStack_4c,uVar2 * 8);
      }
      if (pvVar4 == (void *)0x0) {
LAB_004013b1:
        pvVar4 = (void *)*puStack_4c;
        if (pvVar4 != (void *)0x0) {
          iVar9 = 0;
          if (0 < (int)MemberIndex) {
            do {
              _free(*(void **)((int)pvVar4 + iVar9 * 4));
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)MemberIndex);
          }
          _free(pvVar4);
        }
        SetupDiDestroyDeviceInfoList(DeviceInfoSet);
        __security_check_cookie(uStack_10 ^ (uint)&stack0xffffffb0);
        return;
      }
      *puStack_4c = pvVar4;
      local_48 = (undefined4 *)((int)pvVar4 + MemberIndex * 4);
    } while (*param_2 <= MemberIndex);
    do {
      BVar5 = SetupDiEnumDeviceInterfaces
                        (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&local_3c,MemberIndex,&_Stack_2c);
      if (BVar5 == 0) {
        DVar7 = GetLastError();
        if (DVar7 == 0x103) {
          *param_2 = MemberIndex;
          SetupDiDestroyDeviceInfoList(DeviceInfoSet);
          __security_check_cookie(uStack_10 ^ (uint)&stack0xffffffb0);
          return;
        }
      }
      else {
        SetupDiGetDeviceInterfaceDetailW
                  (DeviceInfoSet,&_Stack_2c,(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0,0,&sStack_44,
                   (PSP_DEVINFO_DATA)0x0);
        sVar3 = sStack_44;
        DeviceInterfaceDetailData = _malloc(sStack_44);
        if (DeviceInterfaceDetailData == (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0) goto LAB_004013b1;
        DeviceInterfaceDetailData->cbSize = 6;
        BVar5 = SetupDiGetDeviceInterfaceDetailW
                          (DeviceInfoSet,&_Stack_2c,DeviceInterfaceDetailData,sVar3,&sStack_44,
                           (PSP_DEVINFO_DATA)0x0);
        if (BVar5 == 0) {
          _free(DeviceInterfaceDetailData);
          goto LAB_004013b1;
        }
        pWVar6 = DeviceInterfaceDetailData->DevicePath;
        do {
          WVar1 = *pWVar6;
          pWVar6 = pWVar6 + 1;
        } while (WVar1 != L'\0');
        pWVar6 = _malloc(((int)pWVar6 - (int)(DeviceInterfaceDetailData + 1) >> 1) * 2 + 2);
        *local_48 = pWVar6;
        if (pWVar6 == (WCHAR *)0x0) goto LAB_004013b1;
        pWVar8 = DeviceInterfaceDetailData->DevicePath;
        do {
          WVar1 = *pWVar8;
          *pWVar6 = WVar1;
          pWVar8 = pWVar8 + 1;
          pWVar6 = pWVar6 + 1;
        } while (WVar1 != L'\0');
        _free(DeviceInterfaceDetailData);
        param_2 = local_40;
      }
      local_48 = local_48 + 1;
      MemberIndex = MemberIndex + 1;
    } while (MemberIndex < *param_2);
  } while( true );
}


//==== FUNC 0047b630  Write ====

/* Library Function - Single Match
    public: virtual void __thiscall CFile::Write(void const *,unsigned int)
   
   Library: Visual Studio 2010 Release */

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
                    /* WARNING: Subroutine does not return */
      FUN_004ebe2d(0xd,0xffffffff,*(undefined4 *)(this + 0xc));
    }
  }
  return;
}


//==== FUNC 004020b0  FUN_004020b0 ====

BOOL __thiscall FUN_004020b0(int param_1,LPCVOID param_2,DWORD param_3,DWORD *param_4,DWORD param_5)

{
  BOOL BVar1;
  DWORD DVar2;
  BOOL BVar3;
  _OVERLAPPED local_24;
  HANDLE local_10;
  HANDLE local_c;
  DWORD local_8;
  
  local_10 = *(HANDLE *)(param_1 + 0x2c4);
  local_24.hEvent = *(HANDLE *)(param_1 + 0x2c0);
  BVar3 = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 1;
  local_24.Internal = 0;
  local_24.InternalHigh = 0;
  local_24.u.s.Offset = 0;
  local_24.u.s.OffsetHigh = 0;
  if (param_4 != (DWORD *)0x0) {
    *param_4 = 0;
  }
  local_c = local_24.hEvent;
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x1c),param_2,param_3,(LPDWORD)0x0,&local_24);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x3e5) goto LAB_00402151;
  }
  DVar2 = WaitForMultipleObjects(2,&local_10,0,param_5);
  if ((DVar2 != 0) && (DVar2 == 1)) {
    BVar3 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x1c),&local_24,&local_8,1);
  }
LAB_00402151:
  if (param_4 != (DWORD *)0x0) {
    *param_4 = local_8;
  }
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  return BVar3;
}


//==== FUNC 00451cf5  FUN_00451cf5 ====

undefined4 FUN_00451cf5(void)

{
  DWORD nNumberOfBytesToWrite;
  HGLOBAL hResData;
  LPVOID pvVar1;
  HANDLE hFile;
  int unaff_EBP;
  HRSRC unaff_ESI;
  HMODULE unaff_EDI;
  
  nNumberOfBytesToWrite = SizeofResource(unaff_EDI,unaff_ESI);
  if (nNumberOfBytesToWrite != 0) {
    hResData = LoadResource(unaff_EDI,unaff_ESI);
    if (hResData != (HGLOBAL)0x0) {
      pvVar1 = LockResource(hResData);
      *(LPVOID *)(unaff_EBP + -4) = pvVar1;
      if (pvVar1 != (LPVOID)0x0) {
        hFile = CreateFileW(*(LPCWSTR *)(unaff_EBP + 0x10),0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2
                            ,0,(HANDLE)0x0);
        if (hFile != (HANDLE)0x0) {
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          WriteFile(hFile,*(LPCVOID *)(unaff_EBP + -4),nNumberOfBytesToWrite,
                    (LPDWORD)(unaff_EBP + 0xc),(LPOVERLAPPED)0x0);
          if (*(DWORD *)(unaff_EBP + 0xc) == nNumberOfBytesToWrite) {
            FlushFileBuffers(hFile);
            CloseHandle(hFile);
            FreeResource(hResData);
            return 1;
          }
        }
      }
      FreeResource(hResData);
    }
  }
  return 0;
}


//==== FUNC 005f95aa  __NMSG_WRITE ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2010 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  wchar_t **lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  wchar_t *local_200;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  pwVar1 = __GET_RTERRMSG(param_1);
  local_200 = pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_006dfb7c == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        uVar6 = 0;
        do {
          local_1fc[uVar6] = (char)pwVar1[uVar6];
          if (pwVar1[uVar6] == L'\0') break;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 500);
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_200;
        local_1fc[499] = 0;
        sVar5 = _strlen(local_1fc);
        WriteFile(hFile,local_1fc,sVar5,(LPDWORD)lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _wcscpy_s((wchar_t *)&DAT_006eec08,0x314,L"Runtime Error!\n\nProgram: ");
      if (eVar3 == 0) {
        _DAT_006eee42 = 0;
        DVar4 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_006eec3a,0x104);
        if ((DVar4 != 0) ||
           (eVar3 = _wcscpy_s((wchar_t *)&DAT_006eec3a,0x2fb,L"<program name unknown>"), eVar3 == 0)
           ) {
          sVar5 = _wcslen((wchar_t *)&DAT_006eec3a);
          if (0x3c < sVar5 + 1) {
            sVar5 = _wcslen((wchar_t *)&DAT_006eec3a);
            iVar2 = wcsncpy_s(&DAT_006eebc4 + sVar5 * 2,0x2fb - ((int)(sVar5 * 2 + -0x76) >> 1),
                              &DAT_0066aef0,3);
            if (iVar2 != 0) goto LAB_005f966f;
          }
          eVar3 = _wcscat_s((wchar_t *)&DAT_006eec08,0x314,L"\n\n");
          if ((eVar3 == 0) &&
             (eVar3 = _wcscat_s((wchar_t *)&DAT_006eec08,0x314,local_200), eVar3 == 0)) {
            ___crtMessageBoxW((LPCWSTR)&DAT_006eec08,L"Microsoft Visual C++ Runtime Library",0x12010
                             );
            goto LAB_005f974a;
          }
        }
      }
LAB_005f966f:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
LAB_005f974a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00606159  __write_nolock ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  char cVar1;
  wchar_t *pwVar2;
  WCHAR WVar3;
  wchar_t wVar4;
  ulong *puVar5;
  int *piVar6;
  int iVar7;
  _ptiddata p_Var8;
  BOOL BVar9;
  DWORD nNumberOfBytesToWrite;
  WCHAR *pWVar10;
  int iVar11;
  uint uVar12;
  int unaff_EBX;
  WCHAR *pWVar13;
  uint uVar14;
  int iVar15;
  ushort uVar16;
  uint local_1ae8;
  WCHAR *local_1ae4;
  int *local_1ae0;
  uint local_1adc;
  WCHAR *local_1ad8;
  int local_1ad4;
  WCHAR *local_1ad0;
  uint local_1acc;
  char local_1ac5;
  uint local_1ac4;
  DWORD local_1ac0;
  WCHAR local_1abc [852];
  CHAR local_1414 [3416];
  WCHAR local_6bc [854];
  undefined2 local_10;
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  local_1ad0 = _Buf;
  local_1acc = 0;
  local_1ad4 = 0;
  if (_MaxCharCount == 0) goto LAB_00606848;
  if (_Buf == (void *)0x0) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_005fa769();
    goto LAB_00606848;
  }
  piVar6 = &DAT_006efc40 + (_FileHandle >> 5);
  iVar11 = (_FileHandle & 0x1fU) * 0x40;
  local_1ac5 = (char)(*(char *)(*piVar6 + 0x24 + iVar11) * '\x02') >> 1;
  local_1ae0 = piVar6;
  if (((local_1ac5 == '\x02') || (local_1ac5 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_005fa769();
    goto LAB_00606848;
  }
  if ((*(byte *)(*piVar6 + 4 + iVar11) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EBX);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar11 + 4 + *piVar6) & 0x80) == 0)) {
LAB_006064d9:
    if ((*(byte *)(*piVar6 + 4 + iVar11) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar6 + iVar11),local_1ad0,_MaxCharCount,&local_1adc,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_006067ba:
        local_1ac0 = GetLastError();
      }
      else {
        local_1ac0 = 0;
        local_1acc = local_1adc;
      }
LAB_006067c6:
      if (local_1acc != 0) goto LAB_00606848;
      goto LAB_006067cf;
    }
    local_1ac0 = 0;
    if (local_1ac5 == '\0') {
      pWVar13 = local_1ad0;
      if (_MaxCharCount == 0) goto LAB_00606805;
      do {
        uVar14 = 0;
        uVar12 = (int)pWVar13 - (int)local_1ad0;
        pWVar10 = local_1abc;
        do {
          if (_MaxCharCount <= uVar12) break;
          WVar3 = *pWVar13;
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          uVar12 = uVar12 + 1;
          if ((char)WVar3 == '\n') {
            local_1ad4 = local_1ad4 + 1;
            *(char *)pWVar10 = '\r';
            pWVar10 = (WCHAR *)((int)pWVar10 + 1);
            uVar14 = uVar14 + 1;
          }
          *(char *)pWVar10 = (char)WVar3;
          pWVar10 = (WCHAR *)((int)pWVar10 + 1);
          uVar14 = uVar14 + 1;
          local_1ae4 = pWVar13;
        } while (uVar14 < 0x13ff);
        BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),local_1abc,
                          (int)pWVar10 - (int)local_1abc,&local_1adc,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_006067ba;
        local_1acc = local_1acc + local_1adc;
      } while (((int)pWVar10 - (int)local_1abc <= (int)local_1adc) &&
              ((uint)((int)pWVar13 - (int)local_1ad0) < _MaxCharCount));
      goto LAB_006067c6;
    }
    if (local_1ac5 == '\x02') {
      pWVar13 = local_1ad0;
      if (_MaxCharCount != 0) {
        do {
          local_1ac4 = 0;
          uVar12 = (int)pWVar13 - (int)local_1ad0;
          pWVar10 = local_1abc;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar3 = *pWVar13;
            pWVar13 = pWVar13 + 1;
            uVar12 = uVar12 + 2;
            if (WVar3 == L'\n') {
              local_1ad4 = local_1ad4 + 2;
              *pWVar10 = L'\r';
              pWVar10 = pWVar10 + 1;
              local_1ac4 = local_1ac4 + 2;
            }
            local_1ac4 = local_1ac4 + 2;
            *pWVar10 = WVar3;
            pWVar10 = pWVar10 + 1;
            local_1ae4 = pWVar13;
          } while (local_1ac4 < 0x13fe);
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),local_1abc,
                            (int)pWVar10 - (int)local_1abc,&local_1adc,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_006067ba;
          local_1acc = local_1acc + local_1adc;
        } while (((int)pWVar10 - (int)local_1abc <= (int)local_1adc) &&
                ((uint)((int)pWVar13 - (int)local_1ad0) < _MaxCharCount));
        goto LAB_006067c6;
      }
    }
    else {
      local_1ad8 = local_1ad0;
      if (_MaxCharCount != 0) {
        do {
          local_1ac4 = 0;
          uVar12 = (int)local_1ad8 - (int)local_1ad0;
          pWVar13 = local_6bc;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar3 = *local_1ad8;
            local_1ad8 = local_1ad8 + 1;
            uVar12 = uVar12 + 2;
            if (WVar3 == L'\n') {
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              local_1ac4 = local_1ac4 + 2;
            }
            local_1ac4 = local_1ac4 + 2;
            *pWVar13 = WVar3;
            pWVar13 = pWVar13 + 1;
          } while (local_1ac4 < 0x6a8);
          iVar15 = 0;
          iVar7 = WideCharToMultiByte(0xfde9,0,local_6bc,((int)pWVar13 - (int)local_6bc) / 2,
                                      local_1414,0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 == 0) goto LAB_006067ba;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),local_1414 + iVar15,iVar7 - iVar15,
                              &local_1adc,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_1ac0 = GetLastError();
              break;
            }
            iVar15 = iVar15 + local_1adc;
          } while (iVar15 < iVar7);
        } while ((iVar7 <= iVar15) &&
                (local_1acc = (int)local_1ad8 - (int)local_1ad0, local_1acc < _MaxCharCount));
        goto LAB_006067c6;
      }
    }
  }
  else {
    p_Var8 = __getptd();
    pwVar2 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar11 + *piVar6),(LPDWORD)&local_1ae4);
    if ((BVar9 == 0) || ((pwVar2 == (wchar_t *)0x0 && (local_1ac5 == '\0')))) goto LAB_006064d9;
    local_1ae4 = (WCHAR *)GetConsoleCP();
    local_1ad8 = (WCHAR *)0x0;
    if (_MaxCharCount != 0) {
      local_1ac4 = 0;
      pWVar13 = local_1ad0;
      do {
        piVar6 = local_1ae0;
        if (local_1ac5 == '\0') {
          cVar1 = (char)*pWVar13;
          local_1ae8 = (uint)(cVar1 == '\n');
          iVar7 = *local_1ae0 + iVar11;
          if (*(int *)(iVar7 + 0x38) == 0) {
            iVar7 = _isleadbyte(CONCAT22(cVar1 >> 7,(short)cVar1));
            if (iVar7 == 0) {
              uVar16 = 1;
              pWVar10 = pWVar13;
              goto LAB_00606340;
            }
            if ((char *)((int)local_1ad0 + (_MaxCharCount - (int)pWVar13)) < (char *)0x2) {
              local_1acc = local_1acc + 1;
              *(char *)(iVar11 + 0x34 + *piVar6) = (char)*pWVar13;
              *(undefined4 *)(iVar11 + 0x38 + *piVar6) = 1;
              break;
            }
            iVar7 = _mbtowc((wchar_t *)&local_1ac0,(char *)pWVar13,2);
            if (iVar7 == -1) break;
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_1ac4 = local_1ac4 + 1;
          }
          else {
            local_10._0_1_ = *(CHAR *)(iVar7 + 0x34);
            *(undefined4 *)(iVar7 + 0x38) = 0;
            uVar16 = 2;
            pWVar10 = &local_10;
            local_10._1_1_ = cVar1;
LAB_00606340:
            iVar7 = _mbtowc((wchar_t *)&local_1ac0,(char *)pWVar10,(uint)uVar16);
            if (iVar7 == -1) break;
          }
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          local_1ac4 = local_1ac4 + 1;
          nNumberOfBytesToWrite =
               WideCharToMultiByte((UINT)local_1ae4,0,(LPCWSTR)&local_1ac0,1,(LPSTR)&local_10,5,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),&local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_006067ba;
          local_1acc = local_1ac4 + local_1ad4;
          if ((int)local_1ad8 < (int)nNumberOfBytesToWrite) break;
          if (local_1ae8 != 0) {
            local_10._0_1_ = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),&local_10,1,(LPDWORD)&local_1ad8,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_006067ba;
            if ((int)local_1ad8 < 1) break;
            local_1ad4 = local_1ad4 + 1;
            local_1acc = local_1acc + 1;
          }
        }
        else {
          if ((local_1ac5 == '\x01') || (local_1ac5 == '\x02')) {
            local_1ac0 = (DWORD)(ushort)*pWVar13;
            local_1ae8 = (uint)(local_1ac0 == 10);
            pWVar13 = pWVar13 + 1;
            local_1ac4 = local_1ac4 + 2;
          }
          if ((local_1ac5 == '\x01') || (local_1ac5 == '\x02')) {
            wVar4 = __putwch_nolock((wchar_t)local_1ac0);
            if (wVar4 != (wchar_t)local_1ac0) goto LAB_006067ba;
            local_1acc = local_1acc + 2;
            if (local_1ae8 != 0) {
              local_1ac0 = 0xd;
              wVar4 = __putwch_nolock(L'\r');
              if (wVar4 != (wchar_t)local_1ac0) goto LAB_006067ba;
              local_1acc = local_1acc + 1;
              local_1ad4 = local_1ad4 + 1;
            }
          }
        }
      } while (local_1ac4 < _MaxCharCount);
      goto LAB_006067c6;
    }
LAB_006067cf:
    if (local_1ac0 != 0) {
      if (local_1ac0 == 5) {
        piVar6 = __errno();
        *piVar6 = 9;
        puVar5 = ___doserrno();
        *puVar5 = 5;
      }
      else {
        __dosmaperr(local_1ac0);
      }
      goto LAB_00606848;
    }
  }
LAB_00606805:
  if (((*(byte *)(iVar11 + 4 + *local_1ae0) & 0x40) == 0) || ((char)*local_1ad0 != '\x1a')) {
    piVar6 = __errno();
    *piVar6 = 0x1c;
    puVar5 = ___doserrno();
    *puVar5 = 0;
  }
LAB_00606848:
  iVar11 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar11;
}


//==== FUNC 0047b5ee  Read ====

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


//==== FUNC 00401ff0  FUN_00401ff0 ====

BOOL __thiscall FUN_00401ff0(int param_1,LPVOID param_2,DWORD param_3,DWORD *param_4,DWORD param_5)

{
  BOOL BVar1;
  DWORD DVar2;
  BOOL BVar3;
  _OVERLAPPED local_24;
  HANDLE local_10;
  HANDLE local_c;
  DWORD local_8;
  
  local_10 = *(HANDLE *)(param_1 + 0x2c4);
  local_24.hEvent = *(HANDLE *)(param_1 + 700);
  BVar3 = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 1;
  local_24.Internal = 0;
  local_24.InternalHigh = 0;
  local_24.u.s.Offset = 0;
  local_24.u.s.OffsetHigh = 0;
  if (param_4 != (DWORD *)0x0) {
    *param_4 = 0;
  }
  local_c = local_24.hEvent;
  BVar1 = ReadFile(*(HANDLE *)(param_1 + 0x1c),param_2,param_3,(LPDWORD)0x0,&local_24);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x3e5) goto LAB_00402091;
  }
  DVar2 = WaitForMultipleObjects(2,&local_10,0,param_5);
  if ((DVar2 != 0) && (DVar2 == 1)) {
    BVar3 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x1c),&local_24,&local_8,1);
  }
LAB_00402091:
  if (param_4 != (DWORD *)0x0) {
    *param_4 = local_8;
  }
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  return BVar3;
}


//==== FUNC 00607918  __read_nolock ====

/* Library Function - Single Match
    __read_nolock
   
   Library: Visual Studio 2010 Release */

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
  if ((_FileHandle < 0) || (DAT_006efc20 <= (uint)_FileHandle)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    FUN_005fa769();
    return -1;
  }
  piVar5 = &DAT_006efc40 + (_FileHandle >> 5);
  iVar13 = (_FileHandle & 0x1fU) * 0x40;
  bVar2 = *(byte *)(*piVar5 + 4 + iVar13);
  if ((bVar2 & 1) == 0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    goto LAB_00607a17;
  }
  if (_MaxCharCount < 0x80000000) {
    local_10 = (byte *)0x0;
    if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
      return 0;
    }
    if (_DstBuf != (void *)0x0) {
      local_6 = (char)(*(char *)(*piVar5 + 0x24 + iVar13) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~_MaxCharCount & 1) == 0) goto LAB_00607a05;
        uVar6 = _MaxCharCount >> 1;
        _MaxCharCount = 4;
        if (3 < uVar6) {
          _MaxCharCount = uVar6;
        }
        pbVar11 = __malloc_crt(_MaxCharCount);
        local_14 = pbVar11;
        if (pbVar11 == (byte *)0x0) {
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
          if ((~_MaxCharCount & 1) == 0) goto LAB_00607a05;
          _MaxCharCount = _MaxCharCount & 0xfffffffe;
        }
        local_14 = _DstBuf;
        pbVar11 = _DstBuf;
      }
      pbVar7 = pbVar11;
      uVar6 = _MaxCharCount;
      if ((((*(byte *)(*piVar5 + iVar13 + 4) & 0x48) != 0) &&
          (bVar2 = *(byte *)(*piVar5 + iVar13 + 5), bVar2 != 10)) && (_MaxCharCount != 0)) {
        uVar6 = _MaxCharCount - 1;
        *pbVar11 = bVar2;
        pbVar7 = pbVar11 + 1;
        local_10 = (byte *)0x1;
        *(undefined1 *)(iVar13 + 5 + *piVar5) = 10;
        if (((local_6 != '\0') && (bVar2 = *(byte *)(iVar13 + 0x25 + *piVar5), bVar2 != 10)) &&
           (uVar6 != 0)) {
          *pbVar7 = bVar2;
          pbVar7 = pbVar11 + 2;
          uVar6 = _MaxCharCount - 2;
          local_10 = (byte *)0x2;
          *(undefined1 *)(iVar13 + 0x25 + *piVar5) = 10;
          if (((local_6 == '\x01') && (bVar2 = *(byte *)(iVar13 + 0x26 + *piVar5), bVar2 != 10)) &&
             (uVar6 != 0)) {
            *pbVar7 = bVar2;
            pbVar7 = pbVar11 + 3;
            local_10 = (byte *)0x3;
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
            goto LAB_00607d24;
          }
          goto LAB_00607d19;
        }
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        local_10 = (byte *)((int)local_10 + local_1c);
        pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
        if ((*pbVar7 & 0x80) == 0) goto LAB_00607d24;
        if (local_6 == '\x02') {
          if ((local_1c == 0) || (*(short *)pbVar11 != 10)) {
            *pbVar7 = *pbVar7 & 0xfb;
          }
          else {
            *pbVar7 = *pbVar7 | 4;
          }
          local_10 = local_14 + (int)local_10;
          _MaxCharCount = (uint)local_14;
          pbVar11 = local_14;
          if (local_14 < local_10) {
            do {
              sVar3 = *(short *)_MaxCharCount;
              if (sVar3 == 0x1a) {
                pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
                if ((*pbVar7 & 0x40) == 0) {
                  *pbVar7 = *pbVar7 | 2;
                }
                else {
                  *(undefined2 *)pbVar11 = *(undefined2 *)_MaxCharCount;
                  pbVar11 = pbVar11 + 2;
                }
                break;
              }
              if (sVar3 == 0xd) {
                if (_MaxCharCount < local_10 + -2) {
                  if (*(short *)(_MaxCharCount + 2) == 10) {
                    uVar1 = _MaxCharCount + 4;
                    goto LAB_00607dc4;
                  }
LAB_00607e57:
                  _MaxCharCount = _MaxCharCount + 2;
                  uVar16 = 0xd;
LAB_00607e59:
                  *(undefined2 *)pbVar11 = uVar16;
                }
                else {
                  uVar1 = _MaxCharCount + 2;
                  BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_c,2,&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                  goto LAB_00607e57;
                  if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                    if ((pbVar11 == local_14) && (local_c == 10)) goto LAB_00607dc4;
                    __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_00607e60;
                    goto LAB_00607e57;
                  }
                  if (local_c == 10) {
LAB_00607dc4:
                    _MaxCharCount = uVar1;
                    uVar16 = 10;
                    goto LAB_00607e59;
                  }
                  pbVar11[0] = 0xd;
                  pbVar11[1] = 0;
                  *(undefined1 *)(iVar13 + 5 + *piVar5) = (undefined1)local_c;
                  *(undefined1 *)(iVar13 + 0x25 + *piVar5) = local_c._1_1_;
                  *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
                  _MaxCharCount = uVar1;
                }
                pbVar11 = pbVar11 + 2;
                uVar1 = _MaxCharCount;
              }
              else {
                *(short *)pbVar11 = sVar3;
                pbVar11 = pbVar11 + 2;
                uVar1 = _MaxCharCount + 2;
              }
LAB_00607e60:
              _MaxCharCount = uVar1;
            } while (_MaxCharCount < local_10);
          }
          local_10 = (byte *)((int)pbVar11 - (int)local_14);
          goto LAB_00607d24;
        }
        if ((local_1c == 0) || (*pbVar11 != 10)) {
          *pbVar7 = *pbVar7 & 0xfb;
        }
        else {
          *pbVar7 = *pbVar7 | 4;
        }
        local_10 = local_14 + (int)local_10;
        _MaxCharCount = (uint)local_14;
        pbVar11 = local_14;
        if (local_14 < local_10) {
          do {
            bVar2 = *(byte *)_MaxCharCount;
            if (bVar2 == 0x1a) {
              pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
              if ((*pbVar7 & 0x40) == 0) {
                *pbVar7 = *pbVar7 | 2;
              }
              else {
                *pbVar11 = *(byte *)_MaxCharCount;
                pbVar11 = pbVar11 + 1;
              }
              break;
            }
            if (bVar2 == 0xd) {
              if (_MaxCharCount < local_10 + -1) {
                if (*(char *)(_MaxCharCount + 1) == '\n') {
                  uVar6 = _MaxCharCount + 2;
                  goto LAB_00607ba4;
                }
LAB_00607c1b:
                _MaxCharCount = _MaxCharCount + 1;
                *pbVar11 = 0xd;
              }
              else {
                uVar6 = _MaxCharCount + 1;
                BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_5,1,&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                goto LAB_00607c1b;
                if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                  if ((pbVar11 == local_14) && (local_5 == '\n')) goto LAB_00607ba4;
                  __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_00607c1f;
                  goto LAB_00607c1b;
                }
                if (local_5 == '\n') {
LAB_00607ba4:
                  _MaxCharCount = uVar6;
                  *pbVar11 = 10;
                }
                else {
                  *pbVar11 = 0xd;
                  *(char *)(iVar13 + 5 + *piVar5) = local_5;
                  _MaxCharCount = uVar6;
                }
              }
              pbVar11 = pbVar11 + 1;
              uVar6 = _MaxCharCount;
            }
            else {
              *pbVar11 = bVar2;
              pbVar11 = pbVar11 + 1;
              uVar6 = _MaxCharCount + 1;
            }
LAB_00607c1f:
            _MaxCharCount = uVar6;
          } while (_MaxCharCount < local_10);
        }
        local_10 = (byte *)((int)pbVar11 - (int)local_14);
        if ((local_6 != '\x01') || (local_10 == (byte *)0x0)) goto LAB_00607d24;
        bVar2 = pbVar11[-1];
        if ((char)bVar2 < '\0') {
          iVar12 = 1;
          pbVar11 = pbVar11 + -1;
          while ((((&DAT_006e0960)[bVar2] == '\0' && (iVar12 < 5)) && (local_14 <= pbVar11))) {
            pbVar11 = pbVar11 + -1;
            bVar2 = *pbVar11;
            iVar12 = iVar12 + 1;
          }
          if ((char)(&DAT_006e0960)[*pbVar11] == 0) {
            piVar5 = __errno();
            *piVar5 = 0x2a;
            goto LAB_00607d20;
          }
          if ((char)(&DAT_006e0960)[*pbVar11] + 1 == iVar12) {
            pbVar11 = pbVar11 + iVar12;
          }
          else if ((*(byte *)(*piVar5 + 4 + iVar13) & 0x48) == 0) {
            __lseeki64_nolock(_FileHandle,CONCAT44(1,-iVar12 >> 0x1f),unaff_EDI);
          }
          else {
            pbVar7 = pbVar11 + 1;
            *(byte *)(*piVar5 + 5 + iVar13) = *pbVar11;
            if (1 < iVar12) {
              *(byte *)(iVar13 + 0x25 + *piVar5) = *pbVar7;
              pbVar7 = pbVar11 + 2;
            }
            if (iVar12 == 3) {
              *(byte *)(iVar13 + 0x26 + *piVar5) = *pbVar7;
              pbVar7 = pbVar7 + 1;
            }
            pbVar11 = pbVar7 + -iVar12;
          }
        }
        iVar12 = (int)pbVar11 - (int)local_14;
        local_10 = (byte *)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_14,iVar12,_DstBuf,uVar1 >> 1);
        if (local_10 != (byte *)0x0) {
          bVar14 = local_10 != (byte *)iVar12;
          local_10 = (byte *)((int)local_10 * 2);
          *(uint *)(iVar13 + 0x30 + *piVar5) = (uint)bVar14;
          goto LAB_00607d24;
        }
        uVar10 = GetLastError();
LAB_00607d19:
        __dosmaperr(uVar10);
      }
LAB_00607d20:
      local_18 = -1;
LAB_00607d24:
      if (local_14 != _DstBuf) {
        _free(local_14);
      }
      if (local_18 == -2) {
        return (int)local_10;
      }
      return local_18;
    }
  }
LAB_00607a05:
  puVar4 = ___doserrno();
  *puVar4 = 0;
  piVar5 = __errno();
  *piVar5 = 0x16;
LAB_00607a17:
  FUN_005fa769();
  return -1;
}


//==== FUNC 00607252  __ftelli64_nolock ====

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __ftelli64_nolock
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __ftelli64_nolock(FILE *_File)

{
  uint _FileHandle;
  char *pcVar1;
  int iVar2;
  BOOL BVar3;
  byte *pbVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int unaff_EDI;
  uint uVar11;
  char *pcVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 local_1018;
  DWORD local_1010;
  byte local_1009 [4097];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _FileHandle = __fileno(_File);
  if (_File->_cnt < 0) {
    _File->_cnt = 0;
  }
  local_1018 = __lseeki64(_FileHandle,0x100000000,unaff_EDI);
  uVar7 = (uint)((ulonglong)local_1018 >> 0x20);
  pcVar1 = (char *)local_1018;
  if ((uVar7 == 0 || local_1018 < 0) && (local_1018 < 0)) goto LAB_006072af;
  piVar5 = &DAT_006efc40 + ((int)_FileHandle >> 5);
  iVar10 = (_FileHandle & 0x1f) * 0x40;
  iVar2 = *piVar5 + iVar10;
  local_1009[0] = (char)(*(char *)(iVar2 + 0x24) * '\x02') >> 1;
  if ((_File->_flag & 0x108U) == 0) {
    uVar7 = (uVar7 - (_File->_cnt >> 0x1f)) - (uint)(pcVar1 < (char *)_File->_cnt);
    goto LAB_0060758d;
  }
  pcVar12 = _File->_ptr;
  local_1010 = (int)pcVar12 - (int)_File->_base;
  if ((_File->_flag & 3U) == 0) {
    if ((char)_File->_flag < '\0') goto LAB_0060745d;
    piVar5 = __errno();
    *piVar5 = 0x16;
  }
  else {
    if ((local_1009[0] != 1) || (*(int *)(iVar2 + 0x30) == 0)) {
      if ((*(byte *)(iVar2 + 4) & 0x80) != 0) {
        for (pcVar9 = _File->_base; pcVar9 < pcVar12; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_1010 = local_1010 + 1;
          }
        }
      }
LAB_0060745d:
      if (local_1018 == 0) {
        uVar7 = 0;
        goto LAB_0060758d;
      }
      if ((_File->_flag & 1) != 0) {
        if (_File->_cnt == 0) {
          local_1010 = 0;
        }
        else {
          pcVar12 = pcVar12 + (_File->_cnt - (int)_File->_base);
          if ((*(byte *)(iVar2 + 4) & 0x80) != 0) {
            lVar15 = __lseeki64(_FileHandle,0x200000000,unaff_EDI);
            if (lVar15 == local_1018) {
              pcVar6 = _File->_base;
              pcVar9 = pcVar6 + (int)pcVar12;
              for (; pcVar6 < pcVar9; pcVar6 = pcVar6 + 1) {
                if (*pcVar6 == '\n') {
                  pcVar12 = pcVar12 + 1;
                }
              }
              bVar13 = (_File->_flag & 0x2000U) == 0;
            }
            else {
              lVar15 = __lseeki64(_FileHandle,(ulonglong)uVar7,unaff_EDI);
              if (((int)((ulonglong)lVar15 >> 0x20) == 0 || lVar15 < 0) && (lVar15 < 0))
              goto LAB_006072af;
              if (((char *)0x200 < pcVar12) ||
                 (((_File->_flag & 8U) == 0 ||
                  (pcVar12 = (char *)0x200, (_File->_flag & 0x400U) != 0)))) {
                pcVar12 = (char *)_File->_bufsiz;
              }
              bVar13 = (*(byte *)(*piVar5 + 4 + iVar10) & 4) == 0;
            }
            if (!bVar13) {
              pcVar12 = pcVar12 + 1;
            }
          }
          if (local_1009[0] == 1) {
            pcVar12 = (char *)((uint)pcVar12 >> 1);
          }
          local_1018 = CONCAT44(uVar7 - (pcVar1 < pcVar12),(int)pcVar1 - (int)pcVar12);
        }
      }
      if (local_1009[0] == 1) {
        local_1010 = local_1010 >> 1;
      }
      uVar7 = local_1018._4_4_ + (uint)CARRY4(local_1010,(uint)local_1018);
      goto LAB_0060758d;
    }
    uVar11 = local_1010 >> 1;
    if (_File->_cnt == 0) goto LAB_0060758d;
    lVar15 = __lseeki64(_FileHandle,(ulonglong)*(uint *)(iVar2 + 0x2c),unaff_EDI);
    iVar8 = (int)((ulonglong)lVar15 >> 0x20);
    iVar2 = *piVar5;
    if ((((uint)lVar15 == *(uint *)(iVar2 + 0x28 + iVar10)) &&
        (iVar8 == *(int *)(iVar2 + 0x2c + iVar10))) &&
       (BVar3 = ReadFile(*(HANDLE *)(iVar2 + iVar10),local_1009 + 1,0x1000,&local_1010,
                         (LPOVERLAPPED)0x0), BVar3 != 0)) {
      lVar14 = __lseeki64(_FileHandle,(ulonglong)uVar7,unaff_EDI);
      if ((((int)((ulonglong)lVar14 >> 0x20) != 0 && -1 < lVar14) || (-1 < lVar14)) &&
         (uVar11 <= local_1010)) {
        pbVar4 = local_1009 + 1;
        if (uVar11 != 0) {
          do {
            uVar11 = uVar11 - 1;
            if (local_1009 + local_1010 + 1 <= pbVar4) break;
            if (*pbVar4 == 0xd) {
              if ((pbVar4 < local_1009 + local_1010) && (pbVar4[1] == 10)) {
                pbVar4 = pbVar4 + 1;
              }
            }
            else {
              pbVar4 = pbVar4 + (char)(&DAT_006e0960)[*pbVar4];
            }
            pbVar4 = pbVar4 + 1;
          } while (uVar11 != 0);
        }
        uVar7 = iVar8 + (uint)CARRY4((int)pbVar4 - (int)(local_1009 + 1),(uint)lVar15);
        goto LAB_0060758d;
      }
    }
  }
LAB_006072af:
  uVar7 = 0xffffffff;
LAB_0060758d:
  lVar15 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar7);
  return lVar15;
}


//==== FUNC 0044afd0  FUN_0044afd0 ====

undefined4 FUN_0044afd0(IStream *param_1)

{
  HANDLE hFile;
  DWORD dwBytes;
  HGLOBAL hMem;
  LPVOID lpBuffer;
  BOOL BVar1;
  HRESULT HVar2;
  int iVar3;
  HDC hdc;
  HGDIOBJ pvVar4;
  HGDIOBJ local_10;
  DWORD local_c;
  int *local_8;
  
  hFile = CreateFileW((LPCWSTR)param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  GetLastError();
  if (hFile != (HANDLE)0xffffffff) {
    dwBytes = GetFileSize(hFile,(LPDWORD)0x0);
    if (dwBytes != 0xffffffff) {
      hMem = GlobalAlloc(2,dwBytes);
      if (hMem != (HGLOBAL)0x0) {
        lpBuffer = GlobalLock(hMem);
        if (lpBuffer != (LPVOID)0x0) {
          local_c = 0;
          BVar1 = ReadFile(hFile,lpBuffer,dwBytes,&local_c,(LPOVERLAPPED)0x0);
          if (BVar1 != 0) {
            GlobalUnlock(hMem);
            CloseHandle(hFile);
            param_1 = (IStream *)0x0;
            HVar2 = CreateStreamOnHGlobal(hMem,1,&param_1);
            if ((-1 < HVar2) && (param_1 != (IStream *)0x0)) {
              iVar3 = Ordinal_418(param_1,dwBytes,0,&DAT_006938c4,&local_8);
              if ((-1 < iVar3) && (local_8 != (int *)0x0)) {
                (*param_1->lpVtbl->Release)(param_1);
                (**(code **)(*local_8 + 0xc))(local_8,&local_10);
                hdc = CreateCompatibleDC((HDC)0x0);
                SelectObject(hdc,local_10);
                pvVar4 = GetCurrentObject(hdc,7);
                FUN_0044b620(pvVar4);
                DeleteDC(hdc);
                return 1;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}


//==== FUNC 00401000  FUN_00401000 ====

void FUN_00401000(DWORD param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  BOOL BVar4;
  _OVERLAPPED local_20;
  HANDLE local_c;
  HANDLE local_8;
  
  DVar1 = param_1;
  do {
    local_c = *(HANDLE *)(DVar1 + 0x2c4);
    local_20.hEvent = *(HANDLE *)(DVar1 + 700);
    BVar4 = 0;
    param_1 = 0;
    *(undefined4 *)(DVar1 + 0x2c8) = 1;
    local_20.Internal = 0;
    local_20.InternalHigh = 0;
    local_20.u.s.Offset = 0;
    local_20.u.s.OffsetHigh = 0;
    local_8 = local_20.hEvent;
    BVar2 = ReadFile(*(HANDLE *)(DVar1 + 0x1c),*(LPVOID *)(DVar1 + 0x278),
                     (uint)*(ushort *)(DVar1 + 0x230),(LPDWORD)0x0,&local_20);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x3e5) goto LAB_00401074;
    }
    else {
LAB_00401074:
      DVar3 = WaitForMultipleObjects(2,&local_c,0,0xffffffff);
      if ((DVar3 != 0) && (DVar3 == 1)) {
        BVar4 = GetOverlappedResult(*(HANDLE *)(DVar1 + 0x1c),&local_20,&param_1,1);
      }
    }
    *(undefined4 *)(DVar1 + 0x2c8) = 0;
    if (BVar4 == 0) {
      (**(code **)(DVar1 + 0x2d4))(*(undefined4 *)(DVar1 + 0x278),0xffffffff);
      *(undefined4 *)(DVar1 + 0x2d0) = 0;
                    /* WARNING: Subroutine does not return */
      ExitThread(0);
    }
    (**(code **)(DVar1 + 0x2d4))(*(undefined4 *)(DVar1 + 0x278),param_1);
  } while( true );
}


//==== FUNC 00401ea0  FUN_00401ea0 ====

undefined4 FUN_00401ea0(void)

{
  int in_EAX;
  HANDLE pvVar1;
  int iVar2;
  DWORD dwDesiredAccess;
  
  dwDesiredAccess = 0;
  if ((*(int *)(in_EAX + 0x2c8) != 0) || (*(int *)(in_EAX + 0x2cc) != 0)) {
    SetEvent(*(HANDLE *)(in_EAX + 0x2c4));
  }
  FUN_00401c10();
  if (*(HANDLE *)(in_EAX + 0x1c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(in_EAX + 0x1c));
    *(undefined4 *)(in_EAX + 0x1c) = 0;
  }
  if (*(int *)(in_EAX + 0xc) != 0) {
    dwDesiredAccess = 0x80000000;
  }
  if (*(int *)(in_EAX + 0x10) != 0) {
    dwDesiredAccess = dwDesiredAccess | 0x40000000;
  }
  pvVar1 = CreateFileW((LPCWSTR)(in_EAX + 0x20),dwDesiredAccess,
                       (uint)(*(int *)(in_EAX + 0x18) == 0) * 2 + 1,(LPSECURITY_ATTRIBUTES)0x0,3,
                       -(uint)(*(int *)(in_EAX + 0x14) != 0) & 0x40000000,(HANDLE)0x0);
  *(HANDLE *)(in_EAX + 0x1c) = pvVar1;
  if (pvVar1 != (HANDLE)0xffffffff) {
    iVar2 = FUN_00401450();
    if (iVar2 != 0) {
      return 1;
    }
    CloseHandle(*(HANDLE *)(in_EAX + 0x1c));
  }
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  return 0;
}


//==== FUNC 00401df0  FUN_00401df0 ====

bool __fastcall FUN_00401df0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = FUN_00401220();
  return iVar1 != 0;
}


//==== FUNC 0044c510  FUN_0044c510 ====

void __thiscall FUN_0044c510(int param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  wchar_t *pwVar5;
  CFile local_28 [20];
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006281d0;
  local_10 = ExceptionList;
  uVar2 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  CFile::CFile(local_28);
  local_8 = 0;
  iVar3 = CFile::Open(local_28,param_2,0x1001,(CFileException *)0x0);
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00454eae(uVar2);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004029d0(0x80004005);
    }
    iVar3 = (**(code **)(*piVar4 + 0xc))();
    local_14 = (void *)(iVar3 + 0x10);
    local_8._0_1_ = 1;
    uVar2 = FUN_0044bab0(&local_14);
    CFile::Write(local_28,local_14,uVar2);
    CFile::Close(local_28);
    if (param_2 == (wchar_t *)0x0) {
      iVar3 = 0;
    }
    else {
      pwVar5 = param_2;
      do {
        wVar1 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar1 != L'\0');
      iVar3 = (int)pwVar5 - (int)(param_2 + 1) >> 1;
    }
    FUN_004037a0(param_2,iVar3);
    SendMessageW(*(HWND *)(param_1 + 0x20),0xb9,0,0);
    local_8 = (uint)local_8._1_3_ << 8;
    piVar4 = (int *)((int)local_14 + -4);
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)((int)local_14 + -0x10) + 4))((undefined4 *)((int)local_14 + -0x10));
    }
  }
  local_8 = 0xffffffff;
  FUN_0047bbc2();
  ExceptionList = local_10;
  return;
}


//==== FUNC 004b2f50  Save ====

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CMFCToolBarImages::Save(char const *)
    public: int __thiscall CMFCToolBarImages::Save(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall Save(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *hMem;
  SIZE_T SVar3;
  CFile local_44 [20];
  int local_30;
  int local_2c;
  wchar_t *local_28;
  undefined2 local_24;
  int local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  int local_1a;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x4b2f5c;
  local_30 = param_1;
  if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x88) != 0)) &&
     (*(int *)(param_1 + 0x20) == 0)) {
    uVar1 = FUN_00454eae();
    FUN_00403410(uVar1);
    local_8 = 0;
    if (param_2 == 0) {
      FUN_004038c0(param_1 + 0x94);
    }
    else {
      FUN_00403930(param_2);
    }
    if (((*(int *)(param_1 + 0x18) != 0) ||
        (iVar2 = FUN_00405910(*(undefined4 *)(param_1 + 0x94)), iVar2 != 0)) &&
       (hMem = DDBToDIB(*(HBITMAP__ **)(param_1 + 0x88),0), hMem != (int *)0x0)) {
      CFile::CFile(local_44);
      local_8._0_1_ = 1;
      iVar2 = CFile::Open(local_44,local_28,0x1001,(CFileException *)0x0);
      if (iVar2 == 0) {
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0047bbc2();
        local_2c = 0;
      }
      else {
        iVar2 = 1 << ((byte)*(short *)((int)hMem + 0xe) & 0x1f);
        if ((0x100 < iVar2) || (*(short *)((int)hMem + 0xe) == 0x20)) {
          iVar2 = 0;
        }
        local_24 = 0x4d42;
        SVar3 = GlobalSize(hMem);
        local_22 = SVar3 + 0xe;
        local_1e = 0;
        local_1c = 0;
        local_1a = *hMem + 0xe + iVar2 * 4;
        CFile::Write(local_44,&local_24,0xe);
        SVar3 = GlobalSize(hMem);
        CFile::Write(local_44,hMem,SVar3);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0047bbc2();
        local_2c = 1;
        param_1 = local_30;
      }
      GlobalFree(hMem);
      if (local_2c != 0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        FUN_00402b80();
        goto LAB_004b30bc;
      }
    }
    FUN_00402b80();
  }
LAB_004b30bc:
  FUN_005f3822();
  return;
}


//==== FUNC 00440b60  FUN_00440b60 ====

void FUN_00440b60(void *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined1 local_58 [4];
  undefined4 *local_54;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  local_50 = param_3;
  *param_5 = 0;
  local_54 = param_5;
  local_4c = 0;
  if (DAT_006e5f20 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_2 < 0x40) {
    FID_conflict__memcpy(local_48,param_1,param_2);
    _memset(local_48 + param_2,0,0x40 - param_2);
  }
  else {
    FID_conflict__memcpy(local_48,param_1,0x40);
  }
  do {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e6204);
    iVar1 = FUN_004020b0(local_48,0x40,local_58,1000);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e6204);
    if (iVar1 < 1) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e6204);
    iVar1 = FUN_00401ff0(local_50,param_4,local_54,300);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e6204);
  } while ((iVar1 == 0) && (local_4c = local_4c + 1, local_4c < 4));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00440c80  FUN_00440c80 ====

void FUN_00440c80(void *param_1,uint param_2)

{
  undefined1 local_4c [4];
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  if (DAT_006e5f20 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_2 < 0x40) {
    FID_conflict__memcpy(local_48,param_1,param_2);
    _memset(local_48 + param_2,0,0x40 - param_2);
  }
  else {
    FID_conflict__memcpy(local_48,param_1,0x40);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e6204);
  FUN_004020b0(local_48,0x40,local_4c,1000);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e6204);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00451cd0  FUN_00451cd0 ====

undefined4 FUN_00451cd0(LPCWSTR param_1,uint param_2,LPCWSTR param_3,HMODULE param_4)

{
  HMODULE hModule;
  HRSRC hResInfo;
  DWORD nNumberOfBytesToWrite;
  HGLOBAL hResData;
  LPVOID lpBuffer;
  HANDLE hFile;
  
  hModule = param_4;
  hResInfo = FindResourceW(param_4,(LPCWSTR)(param_2 & 0xffff),param_1);
  if (hResInfo == (HRSRC)0x0) {
    return 0;
  }
  nNumberOfBytesToWrite = SizeofResource(hModule,hResInfo);
  if (nNumberOfBytesToWrite != 0) {
    hResData = LoadResource(hModule,hResInfo);
    if (hResData != (HGLOBAL)0x0) {
      lpBuffer = LockResource(hResData);
      if (lpBuffer != (LPVOID)0x0) {
        hFile = CreateFileW(param_3,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
        if (hFile != (HANDLE)0x0) {
          param_2 = 0;
          WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,&param_2,(LPOVERLAPPED)0x0);
          if (param_2 == nNumberOfBytesToWrite) {
            FlushFileBuffers(hFile);
            CloseHandle(hFile);
            FreeResource(hResData);
            return 1;
          }
        }
      }
      FreeResource(hResData);
    }
  }
  return 0;
}


//==== FUNC 005ef00f  _malloc ====

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl _malloc(size_t _Size)

{
  SIZE_T dwBytes;
  LPVOID pvVar1;
  int iVar2;
  int *piVar3;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_006ef44c == (HANDLE)0x0) {
        __FF_MSGBANNER();
        __NMSG_WRITE(0x1e);
        ___crtExitProcess(0xff);
      }
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
      pvVar1 = HeapAlloc(DAT_006ef44c,0,dwBytes);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (DAT_006ef7ac == 0) {
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


//==== FUNC 005f9759  __FF_MSGBANNER ====

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2010 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_006dfb7c != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}


//==== FUNC 005f26cc  __amsg_exit ====

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2010 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  __exit(0xff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


//==== FUNC 00606064  __mtinitlocknum ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_006ef44c == 0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_006e0838 + _LockNum * 2;
  if (*piVar1 == 0) {
    lpCriticalSection = __malloc_crt(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        BVar2 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
        if (BVar2 == 0) {
          _free(lpCriticalSection);
          piVar1 = __errno();
          *piVar1 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)lpCriticalSection;
        }
      }
      else {
        _free(lpCriticalSection);
      }
      FUN_0060611d();
      iVar3 = local_20;
    }
  }
  return iVar3;
}


//==== FUNC 005eda2b  fast_error_exit ====

/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2010 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_006eebbc == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}


//==== FUNC 005eefd0  __heap_alloc ====

/* Library Function - Single Match
    __heap_alloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl __heap_alloc(size_t _Size)

{
  LPVOID pvVar1;
  
  if (DAT_006ef44c == (HANDLE)0x0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  if (_Size == 0) {
    _Size = 1;
  }
  pvVar1 = HeapAlloc(DAT_006ef44c,0,_Size);
  return pvVar1;
}


//==== FUNC 005f390d  __purecall ====

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2010 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = DecodePointer(DAT_006ef928);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  __NMSG_WRITE(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}


//==== FUNC 00606856  __write ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2010 Release */

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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_006efc20)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_006efc40)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_006efc40)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_00606922();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_005fa769();
  }
  return -1;
}


//==== FUNC 0061dc6d  __chsize_nolock ====

/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2010 Release */

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
  if (uVar12 == 0xffffffffffffffff) goto LAB_0061dcf5;
  lVar13 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar4 = (int)((ulonglong)lVar13 >> 0x20);
  if (lVar13 == -1) goto LAB_0061dcf5;
  uVar8 = in_stack_00000008 - (uint)lVar13;
  uVar5 = (uint)(in_stack_00000008 < (uint)lVar13);
  iVar1 = (int)_Size - iVar4;
  iVar9 = iVar1 - uVar5;
  if ((iVar9 < 0) ||
     ((iVar9 == 0 || SBORROW4((int)_Size,iVar4) != SBORROW4(iVar1,uVar5) && (uVar8 == 0)))) {
    if ((iVar9 < 1) && (iVar9 < 0)) {
      lVar13 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar13 == -1) goto LAB_0061dcf5;
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
        goto LAB_0061ddf3;
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
      goto LAB_0061dcf5;
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
      goto LAB_0061dd47;
    }
    puVar6 = ___doserrno();
    if (*puVar6 == 5) {
      piVar3 = __errno();
      *piVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_0061dd47:
    __setmode_nolock(_FileHandle,iVar4);
    DVar14 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar14,_Buf);
LAB_0061ddf3:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_0061dcf5;
  }
  lVar13 = __lseeki64_nolock(_FileHandle,uVar12 >> 0x20,unaff_EDI);
  if (lVar13 != -1) {
    return 0;
  }
LAB_0061dcf5:
  piVar3 = __errno();
  return *piVar3;
}


//==== FUNC 0044d330  FUN_0044d330 ====

void __thiscall FUN_0044d330(int param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  __uint64 _Var7;
  CFile local_28 [20];
  wchar_t *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006283c0;
  local_10 = ExceptionList;
  uVar2 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  CFile::CFile(local_28);
  local_8 = 0;
  iVar3 = CFile::Open(local_28,param_2,0,(CFileException *)0x0);
  if (iVar3 == 0) {
LAB_0044d483:
    local_8 = 0xffffffff;
    FUN_0047bbc2(uVar2);
    ExceptionList = local_10;
    return;
  }
  _Var7 = CFile::GetLength(local_28);
  uVar4 = (uint)_Var7;
  FUN_00403ea0(&DAT_0064e1e0);
  local_8._0_1_ = 1;
  if (-1 < (int)uVar4) {
    if ((int)(*(int *)(local_14 + -4) - uVar4 | 1U - *(int *)(local_14 + -2)) < 0) {
      FUN_00403460(uVar4);
    }
    if ((int)uVar4 <= *(int *)(local_14 + -4)) {
      *(uint *)(local_14 + -6) = uVar4;
      local_14[uVar4] = L'\0';
      CFile::Read(local_28,local_14,uVar4);
      sVar5 = _wcsnlen(local_14,*(size_t *)(local_14 + -4));
      if ((-1 < (int)sVar5) && ((int)sVar5 <= *(int *)(local_14 + -4))) {
        *(size_t *)(local_14 + -6) = sVar5;
        local_14[sVar5] = L'\0';
        CFile::Close(local_28);
        FUN_0044b940(local_14);
        if (param_2 == (wchar_t *)0x0) {
          iVar3 = 0;
        }
        else {
          pwVar6 = param_2;
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          iVar3 = (int)pwVar6 - (int)(param_2 + 1) >> 1;
        }
        FUN_004037a0(param_2,iVar3);
        SendMessageW(*(HWND *)(param_1 + 0x20),0xb9,0,0);
        local_8 = (uint)local_8._1_3_ << 8;
        pwVar6 = local_14 + -2;
        LOCK();
        iVar3 = *(int *)pwVar6;
        *(int *)pwVar6 = *(int *)pwVar6 + -1;
        UNLOCK();
        if (iVar3 == 1 || iVar3 + -1 < 0) {
          (**(code **)(**(int **)(local_14 + -8) + 4))(local_14 + -8);
        }
        goto LAB_0044d483;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004029d0(0x80070057);
}


//==== FUNC 00436ee0  FUN_00436ee0 ====

void FUN_00436ee0(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  LPCWSTR lpFirst;
  LPWSTR pWVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00626b8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_006e90c0 & 1) == 0) {
    DAT_006e90c0 = DAT_006e90c0 | 1;
    local_8 = 0;
    FUN_004010f0(DAT_006dfb80 ^ (uint)&stack0xfffffffc);
    _atexit(FUN_006483e0);
  }
  local_8 = 0xffffffff;
  do {
    iVar3 = FUN_00401df0();
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      ExitThread(0);
    }
    lpFirst = (LPCWSTR)FUN_00401e10();
    bVar2 = false;
    while (lpFirst != (LPCWSTR)0x0) {
      local_14 = 0;
      pWVar4 = StrStrIW(lpFirst,L"vid_");
      if (pWVar4 != (LPWSTR)0x0) {
        _swscanf(pWVar4 + 4,L"%x",&local_14);
      }
      if ((short)local_14 == 0xc45) {
        local_14 = 0;
        pWVar4 = StrStrIW(lpFirst,L"pid_");
        if (pWVar4 != (LPWSTR)0x0) {
          _swscanf(pWVar4 + 4,L"%x",&local_14);
        }
        if ((short)local_14 != 0x5004) goto LAB_00436fce;
LAB_00437034:
        iVar3 = FUN_00401f50(lpFirst,1,0,1,0);
        if (iVar3 != 0) {
          if (DAT_006e9058 == 0xc45) {
            if (DAT_006e905a == 0x5004) {
LAB_00437090:
              if ((DAT_006e9016 == 0xc) && (DAT_006e9014 == 1)) {
                bVar2 = true;
                iVar3 = FUN_00401ff0(DAT_006e9060,DAT_006e9018,&local_1c,0xffffffff);
                while (iVar3 != 0) {
                  FUN_00402170(DAT_006e9060,local_1c,0,DAT_006e9064,DAT_006e9068,DAT_006e9010);
                  sVar1 = **(short **)(DAT_006e9064 + 0x1c);
                  if ((ushort)(sVar1 + 0xe7ffU) < 4) {
                    FUN_0043da60(sVar1);
                  }
                  else if ((sVar1 == 0x1811) || (sVar1 == 0x1810)) {
                    FUN_00439e10(sVar1);
                  }
                  else if (sVar1 == 0x401) {
                    SetTimer(*(HWND *)(DAT_006e639c + 0x20),0x41b,0,(TIMERPROC)0x0);
                  }
                  else if (sVar1 == 0x402) {
                    SetTimer(*(HWND *)(DAT_006e639c + 0x20),0x41d,0,(TIMERPROC)0x0);
                  }
                  iVar3 = FUN_00401ff0(DAT_006e9060,DAT_006e9018,&local_1c,0xffffffff);
                }
              }
            }
          }
          else if ((DAT_006e9058 == 0x320f) && (DAT_006e905a == 0x5000)) goto LAB_00437090;
          FUN_00401fb0();
          if (bVar2) break;
        }
      }
      else {
LAB_00436fce:
        local_14 = 0;
        pWVar4 = StrStrIW(lpFirst,L"vid_");
        if (pWVar4 != (LPWSTR)0x0) {
          _swscanf(pWVar4 + 4,L"%x",&local_14);
        }
        if ((short)local_14 == 0x320f) {
          local_18 = 0;
          pWVar4 = StrStrIW(lpFirst,L"pid_");
          if (pWVar4 != (LPWSTR)0x0) {
            _swscanf(pWVar4 + 4,L"%x",&local_18);
          }
          if ((short)local_18 == 0x5000) goto LAB_00437034;
        }
      }
      lpFirst = (LPCWSTR)FUN_00401e10();
    }
    FUN_00401e50();
    Sleep(1000);
  } while( true );
}


//==== FUNC 00616702  FUN_00616702 ====

int FUN_00616702(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  int *piVar6;
  DWORD DVar7;
  long lVar8;
  int iVar9;
  HANDLE pvVar10;
  byte bVar11;
  int unaff_EDI;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  _SECURITY_ATTRIBUTES local_34;
  uint local_28;
  HANDLE local_24;
  uint local_20;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  char local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar12 = (param_3 & 0x80) == 0;
  local_28 = 0;
  local_6 = 0;
  local_c = 0;
  local_34.nLength = 0xc;
  local_34.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar12) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_34.bInheritHandle = (BOOL)bVar12;
  iVar3 = FUN_0061e023(&local_28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_10 = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_10 = 0x40000000;
        goto LAB_006167c4;
      }
    }
    else if (uVar4 != 2) goto LAB_00616784;
    local_10 = 0xc0000000;
  }
LAB_006167c4:
  if (param_4 == 0x10) {
    local_18 = 0;
  }
  else if (param_4 == 0x20) {
    local_18 = 1;
  }
  else if (param_4 == 0x30) {
    local_18 = 2;
  }
  else if (param_4 == 0x40) {
    local_18 = 3;
  }
  else {
    if (param_4 != 0x80) {
LAB_00616784:
      puVar5 = ___doserrno();
      *puVar5 = 0;
      *in_EAX = 0xffffffff;
      piVar6 = __errno();
      *piVar6 = 0x16;
      FUN_005fa769();
      return 0x16;
    }
    local_18 = (uint)(local_10 == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_1c = 3;
    }
    else if (uVar4 == 0x100) {
      local_1c = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_00616886;
      if (uVar4 != 0x300) goto LAB_00616866;
      local_1c = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_00616886:
        local_1c = 5;
        goto LAB_00616896;
      }
      if (uVar4 != 0x700) {
LAB_00616866:
        puVar5 = ___doserrno();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        piVar6 = __errno();
        *piVar6 = 0x16;
        FUN_005fa769();
        return 0x16;
      }
    }
    local_1c = 1;
  }
LAB_00616896:
  local_14 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_006eebc8 & param_5))) {
    local_14 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_14 = local_14 | 0x4000000;
    local_10 = local_10 | 0x10000;
    local_18 = local_18 | 4;
  }
  if ((param_3 & 0x1000) != 0) {
    local_14 = local_14 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_14 = local_14 | 0x10000000;
    }
  }
  else {
    local_14 = local_14 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    piVar6 = __errno();
    *piVar6 = 0x18;
    piVar6 = __errno();
    return *piVar6;
  }
  *param_1 = 1;
  local_24 = CreateFileA(param_2,local_10,local_18,&local_34,local_1c,local_14,(HANDLE)0x0);
  if (local_24 == (HANDLE)0xffffffff) {
    if (((local_10 & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_10 = local_10 & 0x7fffffff;
      local_24 = CreateFileA(param_2,local_10,local_18,&local_34,local_1c,local_14,(HANDLE)0x0);
      if (local_24 != (HANDLE)0xffffffff) goto LAB_006169be;
    }
    pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    goto LAB_006169af;
  }
LAB_006169be:
  DVar7 = GetFileType(local_24);
  if (DVar7 == 0) {
    pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    CloseHandle(local_24);
    if (DVar7 == 0) {
      piVar6 = __errno();
      *piVar6 = 0xd;
    }
    goto LAB_006169af;
  }
  if (DVar7 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar7 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_24);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40) = bVar11;
  pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_00616d24;
    if ((param_3 & 2) == 0) goto LAB_00616af2;
    lVar8 = __lseek_nolock(*in_EAX,-1,2);
    if (lVar8 == -1) {
      puVar5 = ___doserrno();
      bVar11 = local_5;
      if (*puVar5 == 0x83) goto LAB_00616af2;
    }
    else {
      local_8 = '\0';
      iVar3 = __read_nolock(*in_EAX,&local_8,1);
      if ((((iVar3 != 0) || (local_8 != '\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,lVar8 >> 0x1f)), iVar3 != -1)) &&
         (lVar8 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar8 != -1)) goto LAB_00616af2;
    }
LAB_00616aa3:
    __close_nolock(*in_EAX);
    goto LAB_006169af;
  }
LAB_00616af2:
  local_5 = bVar11;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28 & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28 & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_00616b61;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_00616b61:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_20 = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_10 & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_1c == 0) goto LAB_00616d24;
        if (2 < local_1c) {
          if (local_1c < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_00616bc9;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_00616c8e;
          }
LAB_00616bc0:
          if (local_1c != 5) goto LAB_00616d24;
        }
LAB_00616bc9:
        iVar3 = 0;
        if (local_6 == 1) {
          local_20 = 0xbfbbef;
          iVar14 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_00616d24;
          local_20 = 0xfeff;
          iVar14 = 2;
        }
        do {
          iVar9 = __write(*in_EAX,(void *)((int)&local_20 + iVar3),iVar14 - iVar3);
          if (iVar9 == -1) goto LAB_00616aa3;
          iVar3 = iVar3 + iVar9;
        } while (iVar3 < iVar14);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_1c != 0)) {
            if (2 < local_1c) {
              if (4 < local_1c) goto LAB_00616bc0;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_00616aa3;
                goto LAB_00616c14;
              }
            }
            goto LAB_00616bc9;
          }
          goto LAB_00616d24;
        }
LAB_00616c14:
        iVar3 = __read_nolock(*in_EAX,&local_20,3);
        if (iVar3 == -1) goto LAB_00616aa3;
        if (iVar3 == 2) {
LAB_00616c9b:
          if ((local_20 & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            piVar6 = __errno();
            *piVar6 = 0x16;
            return 0x16;
          }
          if ((local_20 & 0xffff) == 0xfeff) {
            lVar8 = __lseek_nolock(*in_EAX,2,0);
            if (lVar8 == -1) goto LAB_00616aa3;
            local_6 = 2;
            goto LAB_00616d24;
          }
        }
        else if (iVar3 == 3) {
          if (local_20 == 0xbfbbef) {
            local_6 = 1;
            goto LAB_00616d24;
          }
          goto LAB_00616c9b;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_00616c8e:
        if (uVar4 == 0xffffffff) goto LAB_00616aa3;
      }
    }
  }
LAB_00616d24:
  pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if ((local_10 & 0xc0000000) != 0xc0000000) {
    return local_c;
  }
  if ((param_3 & 1) == 0) {
    return local_c;
  }
  CloseHandle(local_24);
  pvVar10 = CreateFileA(param_2,local_10 & 0x7fffffff,local_18,&local_34,3,local_14,(HANDLE)0x0);
  if (pvVar10 != (HANDLE)0xffffffff) {
    *(HANDLE *)((*in_EAX & 0x1f) * 0x40 + (&DAT_006efc40)[(int)*in_EAX >> 5]) = pvVar10;
    return local_c;
  }
  DVar7 = GetLastError();
  __dosmaperr(DVar7);
  pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0xfe;
  __free_osfhnd(*in_EAX);
LAB_006169af:
  piVar6 = __errno();
  return *piVar6;
}


//==== FUNC 00617937  FUN_00617937 ====

int FUN_00617937(undefined4 *param_1,LPCWSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  int *piVar6;
  DWORD DVar7;
  long lVar8;
  int iVar9;
  HANDLE pvVar10;
  byte bVar11;
  int unaff_EDI;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  _SECURITY_ATTRIBUTES local_38;
  undefined4 local_2c;
  uint local_28;
  HANDLE local_24;
  uint local_20;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar12 = (param_3 & 0x80) == 0;
  local_28 = 0;
  local_6 = 0;
  local_c = 0;
  local_38.nLength = 0xc;
  local_38.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar12) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_38.bInheritHandle = (BOOL)bVar12;
  iVar3 = FUN_0061e023(&local_28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_10 = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_10 = 0x40000000;
        goto LAB_006179f9;
      }
    }
    else if (uVar4 != 2) goto LAB_006179b9;
    local_10 = 0xc0000000;
  }
LAB_006179f9:
  if (param_4 == 0x10) {
    local_18 = 0;
  }
  else if (param_4 == 0x20) {
    local_18 = 1;
  }
  else if (param_4 == 0x30) {
    local_18 = 2;
  }
  else if (param_4 == 0x40) {
    local_18 = 3;
  }
  else {
    if (param_4 != 0x80) {
LAB_006179b9:
      puVar5 = ___doserrno();
      *puVar5 = 0;
      *in_EAX = 0xffffffff;
      piVar6 = __errno();
      *piVar6 = 0x16;
      FUN_005fa769();
      return 0x16;
    }
    local_18 = (uint)(local_10 == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_1c = 3;
    }
    else if (uVar4 == 0x100) {
      local_1c = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_00617abb;
      if (uVar4 != 0x300) goto LAB_00617a9b;
      local_1c = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_00617abb:
        local_1c = 5;
        goto LAB_00617acb;
      }
      if (uVar4 != 0x700) {
LAB_00617a9b:
        puVar5 = ___doserrno();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        piVar6 = __errno();
        *piVar6 = 0x16;
        FUN_005fa769();
        return 0x16;
      }
    }
    local_1c = 1;
  }
LAB_00617acb:
  local_14 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_006eebc8 & param_5))) {
    local_14 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_14 = local_14 | 0x4000000;
    local_10 = local_10 | 0x10000;
    local_18 = local_18 | 4;
  }
  if ((param_3 & 0x1000) != 0) {
    local_14 = local_14 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_14 = local_14 | 0x10000000;
    }
  }
  else {
    local_14 = local_14 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    piVar6 = __errno();
    *piVar6 = 0x18;
    piVar6 = __errno();
    return *piVar6;
  }
  *param_1 = 1;
  local_24 = CreateFileW(param_2,local_10,local_18,&local_38,local_1c,local_14,(HANDLE)0x0);
  if (local_24 == (HANDLE)0xffffffff) {
    if (((local_10 & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_10 = local_10 & 0x7fffffff;
      local_24 = CreateFileW(param_2,local_10,local_18,&local_38,local_1c,local_14,(HANDLE)0x0);
      if (local_24 != (HANDLE)0xffffffff) goto LAB_00617bf3;
    }
    pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    goto LAB_00617be4;
  }
LAB_00617bf3:
  DVar7 = GetFileType(local_24);
  if (DVar7 == 0) {
    pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    CloseHandle(local_24);
    if (DVar7 == 0) {
      piVar6 = __errno();
      *piVar6 = 0xd;
    }
    goto LAB_00617be4;
  }
  if (DVar7 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar7 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_24);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40) = bVar11;
  pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_00617f5a;
    if ((param_3 & 2) == 0) goto LAB_00617d28;
    lVar8 = __lseek_nolock(*in_EAX,-1,2);
    if (lVar8 == -1) {
      puVar5 = ___doserrno();
      bVar11 = local_5;
      if (*puVar5 == 0x83) goto LAB_00617d28;
    }
    else {
      local_2c = 0;
      iVar3 = __read_nolock(*in_EAX,&local_2c,1);
      if ((((iVar3 != 0) || ((short)local_2c != 0x1a)) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,lVar8 >> 0x1f)), iVar3 != -1)) &&
         (lVar8 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar8 != -1)) goto LAB_00617d28;
    }
LAB_00617cd8:
    __close_nolock(*in_EAX);
    goto LAB_00617be4;
  }
LAB_00617d28:
  local_5 = bVar11;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28 & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28 & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_00617d97;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_00617d97:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_20 = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_10 & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_1c == 0) goto LAB_00617f5a;
        if (2 < local_1c) {
          if (local_1c < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_00617dff;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_00617ec4;
          }
LAB_00617df6:
          if (local_1c != 5) goto LAB_00617f5a;
        }
LAB_00617dff:
        iVar3 = 0;
        if (local_6 == 1) {
          local_20 = 0xbfbbef;
          iVar14 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_00617f5a;
          local_20 = 0xfeff;
          iVar14 = 2;
        }
        do {
          iVar9 = __write(*in_EAX,(void *)((int)&local_20 + iVar3),iVar14 - iVar3);
          if (iVar9 == -1) goto LAB_00617cd8;
          iVar3 = iVar3 + iVar9;
        } while (iVar3 < iVar14);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_1c != 0)) {
            if (2 < local_1c) {
              if (4 < local_1c) goto LAB_00617df6;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_00617cd8;
                goto LAB_00617e4a;
              }
            }
            goto LAB_00617dff;
          }
          goto LAB_00617f5a;
        }
LAB_00617e4a:
        iVar3 = __read_nolock(*in_EAX,&local_20,3);
        if (iVar3 == -1) goto LAB_00617cd8;
        if (iVar3 == 2) {
LAB_00617ed1:
          if ((local_20 & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            piVar6 = __errno();
            *piVar6 = 0x16;
            return 0x16;
          }
          if ((local_20 & 0xffff) == 0xfeff) {
            lVar8 = __lseek_nolock(*in_EAX,2,0);
            if (lVar8 == -1) goto LAB_00617cd8;
            local_6 = 2;
            goto LAB_00617f5a;
          }
        }
        else if (iVar3 == 3) {
          if (local_20 == 0xbfbbef) {
            local_6 = 1;
            goto LAB_00617f5a;
          }
          goto LAB_00617ed1;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_00617ec4:
        if (uVar4 == 0xffffffff) goto LAB_00617cd8;
      }
    }
  }
LAB_00617f5a:
  pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if ((local_10 & 0xc0000000) != 0xc0000000) {
    return local_c;
  }
  if ((param_3 & 1) == 0) {
    return local_c;
  }
  CloseHandle(local_24);
  pvVar10 = CreateFileW(param_2,local_10 & 0x7fffffff,local_18,&local_38,3,local_14,(HANDLE)0x0);
  if (pvVar10 != (HANDLE)0xffffffff) {
    *(HANDLE *)((*in_EAX & 0x1f) * 0x40 + (&DAT_006efc40)[(int)*in_EAX >> 5]) = pvVar10;
    return local_c;
  }
  DVar7 = GetLastError();
  __dosmaperr(DVar7);
  pbVar1 = (byte *)((&DAT_006efc40)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0xfe;
  __free_osfhnd(*in_EAX);
LAB_00617be4:
  piVar6 = __errno();
  return *piVar6;
}


//==== FUNC 00607ecf  __read ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __read
   
   Library: Visual Studio 2010 Release */

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
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_006efc20)) {
    iVar3 = (_FileHandle & 0x1fU) * 0x40;
    if ((*(byte *)((&DAT_006efc40)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      if (_MaxCharCount < 0x80000000) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_006efc40)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __read_nolock(_FileHandle,_DstBuf,_MaxCharCount);
        }
        FUN_00607fbd();
        return local_20;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
      piVar2 = __errno();
      *piVar2 = 0x16;
      goto LAB_00607f1d;
    }
  }
  puVar1 = ___doserrno();
  *puVar1 = 0;
  piVar2 = __errno();
  *piVar2 = 9;
LAB_00607f1d:
  FUN_005fa769();
  return -1;
}


//==== FUNC 005f2745  __fseeki64_nolock ====

/* Library Function - Single Match
    __fseeki64_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __fseeki64_nolock(FILE *_File,longlong _Offset,int _Origin)

{
  uint uVar1;
  int _FileHandle;
  int *piVar2;
  int unaff_EDI;
  longlong lVar3;
  undefined4 in_stack_00000008;
  
  if (((_File->_flag & 0x83U) == 0) ||
     (((_Offset._4_4_ != 0 && (_Offset._4_4_ != 1)) && (_Offset._4_4_ != 2)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
  }
  else {
    _File->_flag = _File->_flag & 0xffffffef;
    lVar3 = _Offset;
    if (_Offset._4_4_ == 1) {
      lVar3 = __ftelli64_nolock(_File);
      lVar3 = lVar3 + CONCAT44((undefined4)_Offset,in_stack_00000008);
      in_stack_00000008 = (undefined4)lVar3;
      lVar3 = CONCAT44(1,(int)((ulonglong)lVar3 >> 0x20));
      _Offset._4_4_ = 0;
    }
    __flush(_File);
    _Offset._0_4_ = (undefined4)lVar3;
    uVar1 = _File->_flag;
    if ((char)uVar1 < '\0') {
      _File->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      _File->_bufsiz = 0x200;
    }
    _FileHandle = __fileno(_File);
    lVar3 = __lseeki64(_FileHandle,CONCAT44(_Offset._4_4_,(undefined4)_Offset),unaff_EDI);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return -1;
}


//==== FUNC 0060759c  __ftelli64 ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ftelli64
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __ftelli64(FILE *_File)

{
  int *piVar1;
  longlong lVar2;
  undefined4 local_24;
  undefined4 local_20;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_005fa769();
    local_20 = 0xffffffff;
    local_24 = 0xffffffff;
  }
  else {
    __lock_file(_File);
    lVar2 = __ftelli64_nolock(_File);
    FUN_006075ff();
    local_24 = (undefined4)lVar2;
    local_20 = (undefined4)((ulonglong)lVar2 >> 0x20);
  }
  return CONCAT44(local_20,local_24);
}


//==== FUNC 0044b2d0  FUN_0044b2d0 ====

void __fastcall FUN_0044b2d0(CWnd *param_1)

{
  wchar_t *_Filename;
  wchar_t *_Filename_00;
  HRGN hRgn;
  undefined1 local_440 [4];
  int local_43c;
  int local_438;
  tagRECT local_428;
  wchar_t local_418 [260];
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  FUN_00450010(*(undefined4 *)(param_1 + 0xa0));
  _Filename = (wchar_t *)FUN_00450060(L"SCREEN",L"Main",&DAT_0064e1e0);
  _Filename_00 = (wchar_t *)FUN_00450060(L"SCREEN",L"Mask",_Filename);
  __wmakepath(local_210,(wchar_t *)0x0,*(wchar_t **)(param_1 + 0xa4),_Filename,(wchar_t *)0x0);
  __wmakepath(local_418,(wchar_t *)0x0,*(wchar_t **)(param_1 + 0xa4),_Filename_00,(wchar_t *)0x0);
  FUN_0044afd0(local_210,param_1 + 0x94);
  FUN_0044afd0(local_418,param_1 + 0x98);
  GlobalFree(_Filename);
  GlobalFree(_Filename_00);
  GetObjectW(*(HANDLE *)(param_1 + 0x94),0x18,local_440);
  local_428.left = 0;
  local_428.top = 0;
  local_428.right = 0;
  local_428.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_428);
  CWnd::SetWindowPos(param_1,(CWnd *)&DAT_006ead18,local_428.left,local_428.top,local_43c,local_438,
                     0x80);
  hRgn = (HRGN)FUN_0044abe0(*(undefined4 *)(param_1 + 0x98),0xffffff,0);
  if (hRgn != (HRGN)0x0) {
    SetWindowRgn(*(HWND *)(param_1 + 0x20),hRgn,1);
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00402290  FUN_00402290 ====

bool FUN_00402290(undefined4 param_1)

{
  HANDLE pvVar1;
  LPVOID unaff_ESI;
  
  if (*(HANDLE *)((int)unaff_ESI + 0x2d0) != (HANDLE)0x0) {
    TerminateThread(*(HANDLE *)((int)unaff_ESI + 0x2d0),0);
  }
  *(undefined4 *)((int)unaff_ESI + 0x2d4) = param_1;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401000,unaff_ESI,0,(LPDWORD)0x0);
  *(HANDLE *)((int)unaff_ESI + 0x2d0) = pvVar1;
  return pvVar1 != (HANDLE)0x0;
}


//==== FUNC 00401f50  FUN_00401f50 ====

void __thiscall
FUN_00401f50(int param_1,short *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  short sVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  iVar2 = (param_1 + 0x20) - (int)param_2;
  do {
    sVar1 = *param_2;
    *(short *)(iVar2 + (int)param_2) = sVar1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  FUN_00401ea0();
  return;
}


//==== FUNC 00435c60  FUN_00435c60 ====

void FUN_00435c60(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  LPCWSTR pWVar4;
  LPWSTR pWVar5;
  HANDLE hObject;
  undefined4 local_38;
  undefined1 local_34 [44];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  bVar2 = true;
  if (DAT_006e63a8 != 0) {
    Sleep(10);
  }
  iVar3 = FUN_00401df0();
  if (iVar3 != 0) {
    pWVar4 = (LPCWSTR)FUN_00401e10();
    bVar1 = false;
    while (pWVar4 != (LPCWSTR)0x0) {
      local_38 = 0;
      pWVar5 = StrStrIW(pWVar4,L"vid_");
      if (pWVar5 != (LPWSTR)0x0) {
        _swscanf(pWVar5 + 4,L"%x",&local_38);
      }
      if ((short)local_38 == 0xc45) {
        local_38 = 0;
        pWVar5 = StrStrIW(pWVar4,L"pid_");
        if (pWVar5 != (LPWSTR)0x0) {
          _swscanf(pWVar5 + 4,L"%x",&local_38);
        }
        if ((short)local_38 != 0x5004) goto LAB_00435d26;
LAB_00435d94:
        iVar3 = FUN_00401f50(pWVar4,1,1,1,0);
        if (iVar3 != 0) {
          if (DAT_006e6194 == 0xc45) {
            if (DAT_006e6196 == 0x5004) {
LAB_00435de3:
              if ((DAT_006e6152 == -0xe4) && (DAT_006e6150 == 0x92)) {
                bVar1 = true;
                DAT_006e5f20 = 1;
                FUN_00440ea0(local_34);
              }
            }
          }
          else if ((DAT_006e6194 == 0x320f) && (DAT_006e6196 == 0x5000)) goto LAB_00435de3;
          FUN_00401fb0();
          if (bVar1) break;
        }
      }
      else {
LAB_00435d26:
        local_38 = 0;
        pWVar5 = StrStrIW(pWVar4,L"vid_");
        if (pWVar5 != (LPWSTR)0x0) {
          _swscanf(pWVar5 + 4,L"%x",&local_38);
        }
        if ((short)local_38 == 0x320f) {
          local_38 = 0;
          pWVar5 = StrStrIW(pWVar4,L"pid_");
          if (pWVar5 != (LPWSTR)0x0) {
            _swscanf(pWVar5 + 4,L"%x",&local_38);
          }
          if ((short)local_38 == 0x5000) goto LAB_00435d94;
        }
      }
      pWVar4 = (LPCWSTR)FUN_00401e10();
    }
    FUN_00401e50();
    DAT_006e5f20 = 0;
LAB_00435e50:
    if (DAT_006e5f20 == 0) {
      iVar3 = FUN_00401df0();
      if (iVar3 == 0) goto LAB_004360ba;
      pWVar4 = (LPCWSTR)FUN_00401e10();
      while (pWVar4 != (LPCWSTR)0x0) {
        local_38 = 0;
        pWVar5 = StrStrIW(pWVar4,L"vid_");
        if (pWVar5 != (LPWSTR)0x0) {
          _swscanf(pWVar5 + 4,L"%x",&local_38);
        }
        if ((short)local_38 == 0xc45) {
          local_38 = 0;
          pWVar5 = StrStrIW(pWVar4,L"pid_");
          if (pWVar5 != (LPWSTR)0x0) {
            _swscanf(pWVar5 + 4,L"%x",&local_38);
          }
          if ((short)local_38 != 0x5004) goto LAB_00435ee3;
LAB_00435f45:
          iVar3 = FUN_00401f50(pWVar4,1,1,1,0);
          if (iVar3 != 0) {
            if (DAT_006e6194 == 0xc45) {
              if (DAT_006e6196 == 0x5004) {
LAB_00435f98:
                if ((DAT_006e6152 == -0xe4) && (DAT_006e6150 == 0x92)) {
                  DAT_006e5f20 = 1;
                  if ((DAT_006e6194 == 0xc45) && (DAT_006e6196 == 0x5004)) {
                    DAT_006d8a28 = 0x17a;
                    DAT_006d8a30 = 0x7e;
                  }
                  else {
                    DAT_006d8a28 = 0x200;
                    DAT_006d8a30 = 0x80;
                  }
                  DAT_006d8a2c = DAT_006d8a28;
                  FUN_0043e560(1);
                  break;
                }
              }
            }
            else if ((DAT_006e6194 == 0x320f) && (DAT_006e6196 == 0x5000)) goto LAB_00435f98;
            FUN_00401fb0();
          }
        }
        else {
LAB_00435ee3:
          local_38 = 0;
          pWVar5 = StrStrIW(pWVar4,L"vid_");
          if (pWVar5 != (LPWSTR)0x0) {
            _swscanf(pWVar5 + 4,L"%x",&local_38);
          }
          if ((short)local_38 == 0x320f) {
            local_38 = 0;
            pWVar5 = StrStrIW(pWVar4,L"pid_");
            if (pWVar5 != (LPWSTR)0x0) {
              _swscanf(pWVar5 + 4,L"%x",&local_38);
            }
            if ((short)local_38 == 0x5000) goto LAB_00435f45;
          }
        }
        pWVar4 = (LPCWSTR)FUN_00401e10();
      }
      if (bVar2) {
        bVar2 = false;
        FUN_0043e560(DAT_006e5f20);
        if (DAT_006e5f20 == 0) {
          DAT_006e63a8 = 1;
        }
      }
      FUN_00401e50();
    }
    else {
      hObject = CreateFileW((LPCWSTR)&DAT_006e5f44,0,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (hObject == (HANDLE)0xffffffff) {
        DAT_006e5f20 = 0;
        FUN_0043e560(0);
      }
      else {
        CloseHandle(hObject);
      }
    }
    if (DAT_006e5f20 == 0) {
      Sleep(1000);
    }
    else {
      Sleep(100);
    }
    goto LAB_00435e50;
  }
LAB_004360ba:
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}


//==== FUNC 00573f80  SaveState ====

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWinAppEx::SaveState(char const *,class CFrameImpl *)
    public: virtual int __thiscall CWinAppEx::SaveState(wchar_t const *,class CFrameImpl *)
   
   Library: Visual Studio 2010 Release */

void __thiscall SaveState(CWinAppEx *param_1,int param_2,CFrameImpl *param_3)

{
  CSettingsStore *pCVar1;
  undefined4 *puVar2;
  CCommandManager *this;
  CWnd *pCVar3;
  CFrameWnd *pCVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  int *local_70;
  undefined4 local_6c;
  int local_68;
  CWnd *local_64;
  wchar_t *local_60;
  CDockState local_5c [84];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x573f8c;
  if (*(int *)(param_1 + 0xe4) != 0) {
    if (param_2 != 0) {
      FUN_00403930(param_2);
    }
    CWinAppEx::GetRegSectionPath(param_1,(char *)&local_60);
    local_8 = 0;
    (**(code **)(*(int *)param_1 + 0x138))();
    local_70 = (int *)0x0;
    local_6c = 0;
    local_8._0_1_ = 1;
    pCVar1 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_70,0,0);
    puVar2 = (undefined4 *)CWinAppEx::GetRegSectionPath(param_1,(char *)&local_64);
    local_8._0_1_ = 2;
    local_68 = (**(code **)(*(int *)pCVar1 + 0xc))(*puVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00402b80();
    if (local_68 != 0) {
      (**(code **)(*(int *)pCVar1 + 0x38))(DAT_006eddc0,10);
      (**(code **)(*(int *)pCVar1 + 0x38))(DAT_006eddc4,0);
    }
    CMFCToolBar::SaveParameters(local_60);
    pwVar6 = local_60;
    this = (CCommandManager *)FUN_004dee3c();
    CCommandManager::SaveState(this,pwVar6);
    if (param_3 != (CFrameImpl *)0x0) {
      CDockState::CDockState(local_5c);
      local_8._0_1_ = 3;
      FUN_005d44ec(local_5c);
      puVar2 = (undefined4 *)FUN_004429d0(&local_68,param_1 + 0xbc,&DAT_006edda4);
      local_8._0_1_ = 4;
      CDockState::SaveState(local_5c,(wchar_t *)*puVar2);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00402b80();
      SaveDockState(local_60);
      puVar2 = DAT_006ec220;
      while (puVar2 != (undefined4 *)0x0) {
        if (puVar2 == (undefined4 *)0x0) {
LAB_0057419b:
                    /* WARNING: Subroutine does not return */
          FUN_0045349b();
        }
        local_64 = (CWnd *)puVar2[2];
        puVar2 = (undefined4 *)*puVar2;
        if (local_64 == (CWnd *)0x0) goto LAB_0057419b;
        pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(local_64 + 0x20));
        if ((pCVar3 != (CWnd *)0x0) &&
           ((*(int *)(param_1 + 0xe0) == 0 ||
            (pCVar4 = CWnd::GetTopLevelFrame(local_64), pCVar4 == *(CFrameWnd **)(param_3 + 0xb0))))
           ) {
          (**(code **)(*(int *)local_64 + 0x22c))(local_60,0xffffffff,0xffffffff);
        }
      }
      FUN_00507a9c(*(undefined4 *)(param_1 + 0xe0));
      FUN_0050a754(*(undefined4 *)(param_1 + 0xe0));
      SaveState(&local_60,*(undefined4 *)(param_3 + 0xb0));
      CFrameImpl::StoreWindowPlacement(param_3);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_005d3f8e();
    }
    if (DAT_006ec1cc != 0) {
      Save(0);
    }
    if (DAT_006ee918 != (CMouseManager *)0x0) {
      CMouseManager::SaveState(DAT_006ee918,local_60);
    }
    if (DAT_006edc34 != (int *)0x0) {
      (**(code **)(*DAT_006edc34 + 0x1c))(local_60);
    }
    if (DAT_006ecbac != 0) {
      if (param_3 == (CFrameImpl *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_3 + 0xb0);
      }
      FUN_004debf2(local_60,uVar5);
    }
    if (DAT_006ed564 != (CUserToolsManager *)0x0) {
      CUserToolsManager::SaveState(DAT_006ed564,local_60);
    }
    (**(code **)(*(int *)param_1 + 0x13c))();
    local_8 = local_8 & 0xffffff00;
    if (local_70 != (int *)0x0) {
      (**(code **)(*local_70 + 4))(1);
    }
    FUN_00402b80();
  }
  FUN_005f3822();
  return;
}


//==== FUNC 00440ea0  FUN_00440ea0 ====

void FUN_00440ea0(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  undefined4 local_80 [14];
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[0] = 4;
  local_48[7] = 0;
  local_48[3] = 3;
  local_48[4] = 0x2c;
  local_48[5] = 0;
  local_48[6] = 0;
  iVar2 = 0;
  uVar3 = 3;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if (iVar2 == 1) {
    if (local_81 == -1) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_81 == -2) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    puVar4 = local_80;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar4;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00440f70  FUN_00440f70 ====

void FUN_00440f70(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [8];
  undefined4 local_40 [14];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[0] = 4;
  local_48[7] = 0;
  local_48[3] = 4;
  local_48[4] = 0x2c;
  local_48[5] = 0;
  local_48[6] = 0;
  puVar4 = local_40;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar3 = 3;
  iVar2 = 0;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar2 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00440d30  FUN_00440d30 ====

void FUN_00440d30(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[7] = 0;
  local_48[0] = 4;
  local_48[3] = 1;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  uVar3 = 3;
  iVar2 = 0;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar2 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00440de0  FUN_00440de0 ====

void FUN_00440de0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[7] = 0;
  local_48[0] = 4;
  local_48[3] = 2;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  uVar3 = 3;
  iVar2 = 0;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  Sleep(10);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar2 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441d10  FUN_00441d10 ====

void FUN_00441d10(void *param_1,size_t param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[5] = (char)param_3;
  local_48[0] = 4;
  local_48[3] = 6;
  local_48[7] = 0;
  local_48[4] = (char)param_2;
  local_48[6] = (char)((uint)param_3 >> 8);
  if (0 < (int)param_2) {
    FID_conflict__memcpy(local_48 + 8,param_1,param_2);
  }
  iVar2 = 0;
  uVar3 = 3;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar2 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441c30  FUN_00441c30 ====

void FUN_00441c30(void *param_1,size_t param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  iVar3 = DAT_006e1cec * 0x200 + param_3 * 3;
  _memset(local_48 + 1,0,0x3f);
  local_48[5] = (char)iVar3;
  local_48[6] = (char)((uint)iVar3 >> 8);
  local_48[0] = 4;
  local_48[3] = 0x11;
  local_48[7] = 0;
  local_48[4] = (char)param_2;
  if (0 < (int)param_2) {
    FID_conflict__memcpy(local_48 + 8,param_1,param_2);
  }
  iVar3 = 0;
  uVar2 = 3;
  do {
    pbVar1 = local_48 + uVar2;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + (uint)*pbVar1;
  } while (uVar2 < 0x40);
  local_48[1] = (byte)iVar3;
  local_48[2] = (byte)((uint)iVar3 >> 8);
  iVar3 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar3 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441330  FUN_00441330 ====

void FUN_00441330(int param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_94 [4];
  int local_90;
  size_t local_8c;
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  local_90 = param_1;
  if (2 < param_2) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  _memset(local_48,0,0x40);
  uVar4 = 0;
  local_48[0] = 4;
  local_48[3] = 8;
  local_48[7] = 0;
  if (DAT_006d8a28 != 0) {
    iVar5 = 0x38 - param_1;
    do {
      if ((uint)(iVar5 + (int)(param_1 + uVar4)) < DAT_006d8a28) {
        local_8c = 0x38;
      }
      else {
        local_8c = DAT_006d8a28 - uVar4;
      }
      local_48[4] = (byte)local_8c;
      local_48[5] = (char)DAT_006d8a2c * (char)param_2 + (char)uVar4;
      local_48[6] = (byte)(DAT_006d8a2c * param_2 + uVar4 >> 8);
      FID_conflict__memcpy(local_48 + 8,(void *)(param_1 + uVar4),local_8c);
      uVar3 = 3;
      iVar2 = 0;
      do {
        pbVar1 = local_48 + uVar3;
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + (uint)*pbVar1;
      } while (uVar3 < 0x40);
      local_48[1] = (byte)iVar2;
      local_48[2] = (byte)((uint)iVar2 >> 8);
      iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_94);
      if (iVar2 != 1) break;
      if (local_81 == -1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_81 == -2) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      uVar4 = uVar4 + 0x38;
      param_1 = local_90;
    } while (uVar4 < DAT_006d8a28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 004415f0  FUN_004415f0 ====

void FUN_004415f0(int param_1,uint param_2)

{
  byte *pbVar1;
  size_t _Size;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_94 [4];
  int local_90;
  int local_8c;
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  local_8c = param_1;
  _memset(local_48,0,0x40);
  uVar4 = 0;
  local_48[0] = 4;
  local_48[3] = 10;
  local_48[7] = 0;
  if (param_2 != 0) {
    local_90 = 0x38 - param_1;
    do {
      if ((uint)(local_90 + (int)(param_1 + uVar4)) < param_2) {
        _Size = 0x38;
      }
      else {
        _Size = param_2 - uVar4;
      }
      local_48[4] = (byte)_Size;
      local_48[5] = (byte)uVar4;
      local_48[6] = (byte)(uVar4 >> 8);
      FID_conflict__memcpy(local_48 + 8,(void *)(param_1 + uVar4),_Size);
      uVar3 = 3;
      iVar2 = 0;
      do {
        pbVar1 = local_48 + uVar3;
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + (uint)*pbVar1;
      } while (uVar3 < 0x40);
      local_48[1] = (byte)iVar2;
      local_48[2] = (byte)((uint)iVar2 >> 8);
      iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_94);
      if (iVar2 != 1) break;
      if (local_81 == -1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_81 == -2) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      uVar4 = uVar4 + 0x38;
      param_1 = local_8c;
    } while (uVar4 < param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441de0  FUN_00441de0 ====

void FUN_00441de0(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  undefined4 local_80 [14];
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[5] = (char)param_3;
  local_48[4] = param_2;
  local_48[6] = (char)((uint)param_3 >> 8);
  local_48[0] = 4;
  local_48[3] = 5;
  local_48[7] = 0;
  uVar3 = 3;
  iVar2 = 0;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if (iVar2 == 1) {
    if (local_81 == -1) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_81 == -2) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    puVar4 = local_80;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar4;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 004411c0  FUN_004411c0 ====

void FUN_004411c0(int param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_94 [4];
  int local_90;
  size_t local_8c;
  undefined1 local_88 [7];
  char local_81;
  undefined1 local_80 [56];
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  local_90 = param_1;
  if (2 < param_2) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  _memset(local_48,0,0x40);
  uVar4 = 0;
  local_48[0] = 4;
  local_48[3] = 7;
  local_48[7] = 0;
  if (DAT_006d8a28 != 0) {
    iVar5 = 0x38 - param_1;
    do {
      if ((uint)(iVar5 + (int)(param_1 + uVar4)) < DAT_006d8a28) {
        local_8c = 0x38;
      }
      else {
        local_8c = DAT_006d8a28 - uVar4;
      }
      local_48[4] = (undefined1)local_8c;
      local_48[5] = (char)DAT_006d8a2c * (char)param_2 + (char)uVar4;
      local_48[6] = (char)(DAT_006d8a2c * param_2 + uVar4 >> 8);
      uVar3 = 3;
      iVar2 = 0;
      do {
        pbVar1 = local_48 + uVar3;
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + (uint)*pbVar1;
      } while (uVar3 < 0x40);
      local_48[1] = (byte)iVar2;
      local_48[2] = (byte)((uint)iVar2 >> 8);
      iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_94);
      if (iVar2 != 1) break;
      if (local_81 == -1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_81 == -2) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      FID_conflict__memcpy((void *)(param_1 + uVar4),local_80,local_8c);
      uVar4 = uVar4 + 0x38;
      param_1 = local_90;
    } while (uVar4 < DAT_006d8a28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 004414a0  FUN_004414a0 ====

void FUN_004414a0(int param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_98 [4];
  int local_94;
  int local_90;
  size_t local_8c;
  undefined1 local_88 [7];
  char local_81;
  undefined1 local_80 [56];
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  local_94 = param_1;
  _memset(local_48,0,0x40);
  uVar4 = 0;
  local_48[0] = 4;
  local_48[3] = 9;
  local_48[7] = 0;
  if (param_2 != 0) {
    local_90 = 0x38 - param_1;
    do {
      if ((uint)(local_90 + (int)(param_1 + uVar4)) < param_2) {
        local_8c = 0x38;
      }
      else {
        local_8c = param_2 - uVar4;
      }
      local_48[4] = (undefined1)local_8c;
      local_48[5] = (char)uVar4;
      local_48[6] = (char)(uVar4 >> 8);
      uVar3 = 3;
      iVar2 = 0;
      do {
        pbVar1 = local_48 + uVar3;
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + (uint)*pbVar1;
      } while (uVar3 < 0x40);
      local_48[1] = (byte)iVar2;
      local_48[2] = (byte)((uint)iVar2 >> 8);
      iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_98);
      if (iVar2 != 1) break;
      if (local_81 == -1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_81 == -2) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      FID_conflict__memcpy((void *)(param_1 + uVar4),local_80,local_8c);
      uVar4 = uVar4 + 0x38;
      param_1 = local_94;
    } while (uVar4 < param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441a00  FUN_00441a00 ====

void FUN_00441a00(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_94 [4];
  int local_90;
  size_t local_8c;
  undefined1 local_88 [7];
  char local_81;
  undefined1 local_80 [56];
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48,0,0x40);
  uVar4 = 0;
  local_48[0] = 4;
  local_48[3] = 0xf;
  local_48[7] = 0;
  if (DAT_006d8a28 != 0) {
    local_90 = 0x38 - param_1;
    do {
      if ((uint)(local_90 + (int)(param_1 + uVar4)) < DAT_006d8a28) {
        local_8c = 0x38;
      }
      else {
        local_8c = DAT_006d8a28 - uVar4;
      }
      local_48[4] = (undefined1)local_8c;
      local_48[5] = (char)uVar4;
      local_48[6] = (char)(uVar4 >> 8);
      uVar3 = 3;
      iVar2 = 0;
      do {
        pbVar1 = local_48 + uVar3;
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + (uint)*pbVar1;
      } while (uVar3 < 0x40);
      local_48[1] = (byte)iVar2;
      local_48[2] = (byte)((uint)iVar2 >> 8);
      iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_94);
      if (iVar2 != 1) break;
      if (local_81 == -1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_81 == -2) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      FID_conflict__memcpy((void *)(param_1 + uVar4),local_80,local_8c);
      uVar4 = uVar4 + 0x38;
    } while (uVar4 < DAT_006d8a28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441030  FUN_00441030 ====

void FUN_00441030(undefined2 *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  undefined2 local_80;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[0] = 4;
  local_48[7] = 0;
  local_48[3] = 5;
  local_48[4] = 2;
  local_48[5] = 0;
  local_48[6] = 0;
  iVar2 = 0;
  uVar3 = 3;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if (iVar2 == 1) {
    if (local_81 == -1) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_81 == -2) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *param_1 = local_80;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441100  FUN_00441100 ====

void FUN_00441100(undefined2 *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [8];
  undefined2 local_40;
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_40 = *param_1;
  local_48[0] = 4;
  local_48[7] = 0;
  local_48[3] = 6;
  local_48[4] = 2;
  local_48[5] = 0;
  local_48[6] = 0;
  uVar3 = 3;
  iVar2 = 0;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar2 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441730  FUN_00441730 ====

void FUN_00441730(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[7] = 0;
  local_48[0] = 4;
  local_48[3] = 0xb;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  uVar3 = 3;
  iVar2 = 0;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar2 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 004417e0  FUN_004417e0 ====

void FUN_004417e0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[7] = 0;
  local_48[0] = 4;
  local_48[3] = 0xc;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  uVar3 = 3;
  iVar2 = 0;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  Sleep(10);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar2 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 004418a0  FUN_004418a0 ====

void FUN_004418a0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[7] = 0;
  local_48[0] = 4;
  local_48[3] = 0xd;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  uVar3 = 3;
  iVar2 = 0;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar2 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441950  FUN_00441950 ====

void FUN_00441950(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _memset(local_48 + 1,0,0x3f);
  local_48[7] = 0;
  local_48[0] = 4;
  local_48[3] = 0xe;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  uVar3 = 3;
  iVar2 = 0;
  do {
    pbVar1 = local_48 + uVar3;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + (uint)*pbVar1;
  } while (uVar3 < 0x40);
  local_48[1] = (byte)iVar2;
  local_48[2] = (byte)((uint)iVar2 >> 8);
  iVar2 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if ((iVar2 == 1) && (local_81 == -1)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441b40  FUN_00441b40 ====

void FUN_00441b40(undefined4 *param_1,undefined1 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_8c [4];
  undefined1 local_88 [7];
  char local_81;
  undefined4 local_80 [14];
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  iVar3 = param_4 * 0x200 + param_3 * 3;
  _memset(local_48 + 1,0,0x3f);
  local_48[5] = (char)iVar3;
  local_48[0] = 4;
  local_48[3] = 0x10;
  local_48[7] = 0;
  local_48[4] = param_2;
  local_48[6] = (char)((uint)iVar3 >> 8);
  uVar2 = 3;
  iVar3 = 0;
  do {
    pbVar1 = local_48 + uVar2;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + (uint)*pbVar1;
  } while (uVar2 < 0x40);
  local_48[1] = (byte)iVar3;
  local_48[2] = (byte)((uint)iVar3 >> 8);
  iVar3 = FUN_00440b60(local_48,0x40,local_88,0x40,local_8c);
  if (iVar3 == 1) {
    if (local_81 == -1) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_81 == -2) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    puVar4 = local_80;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_1 = *puVar4;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00441ec0  FUN_00441ec0 ====

void FUN_00441ec0(void)

{
  undefined1 local_44;
  undefined1 local_43 [2];
  undefined2 local_41;
  undefined1 local_3d;
  
  _memset(local_43,0,0x3f);
  local_44 = 4;
  local_3d = 0;
  local_41 = 0xeeee;
  FUN_00440c80(&local_44,0x40);
  return;
}


//==== FUNC 00453316  FUN_00453316 ====

void * FUN_00453316(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if ((pvVar1 == (void *)0x0) && (PTR_thunk_FUN_00453463_006d8f20 != (undefined *)0x0)) {
    pvVar1 = (void *)(*(code *)PTR_thunk_FUN_00453463_006d8f20)(param_1);
    return pvVar1;
  }
  return pvVar1;
}


//==== FUNC 00601aa7  __malloc_crt ====

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2010 Release */

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
    if (DAT_006ef7b0 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_006ef7b0 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


//==== FUNC 005f3649  _realloc ====

/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) {
        __callnewh(_NewSize);
        piVar4 = __errno();
        *piVar4 = 0xc;
        return (void *)0x0;
      }
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar2 = HeapReAlloc(DAT_006ef44c,0,_Memory,_NewSize);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      if (DAT_006ef7ac == 0) {
        piVar4 = __errno();
        DVar5 = GetLastError();
        iVar3 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar3;
        return (void *)0x0;
      }
      iVar3 = __callnewh(_NewSize);
    } while (iVar3 != 0);
    piVar4 = __errno();
    DVar5 = GetLastError();
    iVar3 = __get_errno_from_oserr(DVar5);
    *piVar4 = iVar3;
  }
  return (void *)0x0;
}


//==== FUNC 005f1037  _Copy_str ====

/* Library Function - Single Match
    private: void __thiscall std::exception::_Copy_str(char const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::exception::_Copy_str(exception *this,char *param_1)

{
  size_t sVar1;
  char *_Dst;
  
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,param_1);
      this[8] = (exception)0x1;
    }
  }
  return;
}


//==== FUNC 004814a9  AfxUnlockTempMaps ====

/* Library Function - Single Match
    int __stdcall AfxUnlockTempMaps(int)
   
   Library: Visual Studio 2010 Release */

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
      if (((param_1 != -1) && (iVar2 = FUN_0046359d(), iVar2 != 0)) &&
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
    pCVar4 = CThreadLocalObject::GetDataNA((CThreadLocalObject *)&DAT_006eaf58);
    if ((((pCVar4 != (CNoTrackObject *)0x0) && (iVar2 != 0)) &&
        ((*(void **)(pCVar4 + 0xc) == (void *)0x0 ||
         (sVar5 = __msize(*(void **)(pCVar4 + 0xc)), sVar5 < *(uint *)(iVar2 + 0xa0))))) &&
       (*(int *)(iVar2 + 0xa0) != 0)) {
      param_1 = 0;
      if (*(void **)(pCVar4 + 0xc) != (void *)0x0) {
        param_1 = __msize(*(void **)(pCVar4 + 0xc));
        _free(*(void **)(pCVar4 + 0xc));
      }
      pvVar6 = _malloc(*(size_t *)(iVar2 + 0xa0));
      *(void **)(pCVar4 + 0xc) = pvVar6;
      if ((pvVar6 == (void *)0x0) && (param_1 != 0)) {
        pvVar6 = _malloc(param_1);
        *(void **)(pCVar4 + 0xc) = pvVar6;
      }
    }
  }
  return (uint)(*(int *)(pAVar1 + 0x10) != 0);
}


//==== FUNC 004b00c9  Allocate ====

/* Library Function - Single Match
    public: void * __thiscall ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<class
   ATL::CCRTAllocator>::Allocate(unsigned long)
   
   Library: Visual Studio 2010 Release */

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


//==== FUNC 005a5480  InitDialogInfo ====

/* Library Function - Single Match
    protected: struct DLGTEMPLATE const * __thiscall CPropertyPage::InitDialogInfo(struct
   DLGTEMPLATE const *)
   
   Library: Visual Studio 2010 Release */

DLGTEMPLATE * __thiscall CPropertyPage::InitDialogInfo(CPropertyPage *this,DLGTEMPLATE *param_1)

{
  void *pvVar1;
  AFX_MODULE_STATE *pAVar2;
  DLGTEMPLATE *pDVar3;
  
  Cleanup(this);
  pvVar1 = _malloc(0x10);
  *(void **)(this + 0x90) = pvVar1;
  pAVar2 = AfxGetModuleState();
  pDVar3 = (DLGTEMPLATE *)
           (**(code **)(**(int **)(pAVar2 + 0x3c) + 0x14))(*(undefined4 *)(this + 0x90),param_1);
  return pDVar3;
}


//==== FUNC 005a5405  AllocPSP ====

/* Library Function - Single Match
    protected: void __thiscall CPropertyPage::AllocPSP(unsigned long)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPropertyPage::AllocPSP(CPropertyPage *this,ulong param_1)

{
  void *_Dst;
  
  if (param_1 == 0) {
    param_1 = 0x38;
  }
  _Dst = _malloc(param_1);
  *(void **)(this + 0x94) = _Dst;
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00453463();
  }
  _memset(_Dst,0,param_1);
  **(size_t **)(this + 0x94) = param_1;
  return;
}


//==== FUNC 0060bc2a  __crtGetStringTypeA_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  uint uVar1;
  uint cchWideChar;
  undefined4 *puVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  
  uVar1 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchWideChar = MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_0060bcff;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar2 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0060bcb9:
        lpWideCharStr = (LPCWSTR)(puVar2 + 2);
      }
    }
    else {
      puVar2 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0xdddd;
        goto LAB_0060bcb9;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar3 = MultiByteToWideChar(param_6,1,param_3,param_4,lpWideCharStr,cchWideChar);
    if (iVar3 != 0) {
      GetStringTypeW(param_2,lpWideCharStr,iVar3,param_5);
    }
    __freea(lpWideCharStr);
  }
LAB_0060bcff:
  iVar3 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


//==== FUNC 00404a50  FUN_00404a50 ====

void __thiscall FUN_00404a50(undefined4 *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004029d0(0x8007000e);
  }
  *param_1 = pvVar1;
  return;
}


//==== FUNC 005ef1e6  _wcslwr_s_l_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _wcslwr_s_l_stat(wchar_t *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2010 Release */

int __cdecl _wcslwr_s_l_stat(wchar_t *param_1,uint param_2,localeinfo_struct *param_3)

{
  uint _Size;
  wchar_t wVar1;
  uint uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  wchar_t *in_ECX;
  wchar_t *_LpDestStr;
  int iVar6;
  
  uVar2 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _LpDestStr = (wchar_t *)0x0;
  if (in_ECX == (wchar_t *)0x0) {
LAB_005ef202:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    pwVar4 = (wchar_t *)_wcsnlen(in_ECX,(size_t)param_1);
    if (param_1 <= pwVar4) {
      *in_ECX = L'\0';
      goto LAB_005ef202;
    }
    if (*(LPCWSTR *)(*(int *)param_2 + 0x14) == (LPCWSTR)0x0) {
      wVar1 = *in_ECX;
      while (wVar1 != L'\0') {
        wVar1 = *in_ECX;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          *in_ECX = wVar1 + L' ';
        }
        in_ECX = in_ECX + 1;
        wVar1 = *in_ECX;
      }
      goto LAB_005ef344;
    }
    pwVar4 = (wchar_t *)
             ___crtLCMapStringW(*(LPCWSTR *)(*(int *)param_2 + 0x14),0x100,in_ECX,-1,(LPWSTR)0x0,0);
    if (pwVar4 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_005ef28a:
      __errno();
      goto LAB_005ef344;
    }
    if (pwVar4 <= param_1) {
      if ((0 < (int)pwVar4) && (1 < 0xffffffe0U / (uint)pwVar4)) {
        _Size = (int)pwVar4 * 2 + 8;
        if (_Size < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffe8;
          _LpDestStr = (wchar_t *)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_005ef2eb:
            _LpDestStr = (wchar_t *)(puVar5 + 2);
          }
        }
        else {
          puVar5 = _malloc(_Size);
          _LpDestStr = (wchar_t *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_005ef2eb;
          }
        }
      }
      if (_LpDestStr != (wchar_t *)0x0) {
        iVar6 = ___crtLCMapStringW(*(LPCWSTR *)(*(int *)param_2 + 0x14),0x100,in_ECX,-1,_LpDestStr,
                                   (int)pwVar4);
        if (iVar6 == 0) {
          piVar3 = __errno();
          *piVar3 = 0x2a;
        }
        else {
          _wcscpy_s(in_ECX,(rsize_t)param_1,_LpDestStr);
        }
        __freea(_LpDestStr);
        goto LAB_005ef344;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_005ef28a;
    }
    *in_ECX = L'\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  FUN_005fa769();
LAB_005ef344:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}


//==== FUNC 00456b1c  AfxLoadSysColorBitmap ====

/* Library Function - Single Match
    struct HBITMAP__ * __stdcall AfxLoadSysColorBitmap(struct HINSTANCE__ *,struct HRSRC__ *,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

HBITMAP__ * AfxLoadSysColorBitmap(HINSTANCE__ *param_1,HRSRC__ *param_2,int param_3)

{
  BYTE *pBVar1;
  int *piVar2;
  DWORD DVar3;
  int cx;
  int cy;
  HGLOBAL hResData;
  HBITMAP__ *h;
  int *piVar4;
  BITMAPINFO *lpbmi;
  DWORD DVar5;
  DWORD DVar6;
  DWORD DVar7;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h_00;
  uint uVar8;
  size_t _Size;
  
  hResData = LoadResource(param_1,param_2);
  if ((hResData == (HGLOBAL)0x0) || (piVar4 = LockResource(hResData), piVar4 == (int *)0x0)) {
    h = (HBITMAP__ *)0x0;
  }
  else {
    _Size = *piVar4 + 0x40;
    lpbmi = _malloc(_Size);
    if (lpbmi == (BITMAPINFO *)0x0) {
      h = (HBITMAP__ *)0x0;
    }
    else {
      FUN_00404620(lpbmi,_Size,piVar4,_Size);
      DVar3 = (lpbmi->bmiHeader).biSize;
      param_2 = (HRSRC__ *)0x0;
      do {
        pBVar1 = &lpbmi->bmiColors[(int)((int)&param_2[-3].unused + 2)].rgbBlue + DVar3;
        uVar8 = 0;
        do {
          if (*(int *)pBVar1 == (&DAT_00659d00)[uVar8 * 2]) {
            if (param_3 == 0) {
              piVar2 = &DAT_00659d04 + uVar8 * 2;
              DVar5 = GetSysColor(*piVar2);
              DVar6 = GetSysColor(*piVar2);
              DVar7 = GetSysColor(*piVar2);
              *(DWORD *)pBVar1 =
                   DVar7 >> 0x10 & 0xff | ((DVar6 & 0xff) << 8 | DVar5 >> 8 & 0xff) << 8;
            }
            else if ((&DAT_00659d04)[uVar8 * 2] != 0x12) {
              *(int *)pBVar1 = 0xffffff;
            }
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < 4);
        param_2 = (HRSRC__ *)((int)&param_2->unused + 1);
      } while ((int)param_2 < 0x10);
      cx = (lpbmi->bmiHeader).biWidth;
      cy = (lpbmi->bmiHeader).biHeight;
      hdc = GetDC((HWND)0x0);
      h = CreateCompatibleBitmap(hdc,cx,cy);
      if (h != (HBITMAP)0x0) {
        hdc_00 = CreateCompatibleDC(hdc);
        h_00 = SelectObject(hdc_00,h);
        StretchDIBits(hdc_00,0,0,cx,cy,0,0,cx,cy,
                      piVar4 + (1 << ((byte)(lpbmi->bmiHeader).biBitCount & 0x1f)) + 10,lpbmi,0,
                      0xcc0020);
        SelectObject(hdc_00,h_00);
        DeleteDC(hdc_00);
      }
      ReleaseDC((HWND)0x0,hdc);
      _free(lpbmi);
      FreeResource(hResData);
    }
  }
  return h;
}


//==== FUNC 00621268  operator= ====

/* Library Function - Single Match
    public: class std::_Yarn<char> & __thiscall std::_Yarn<char>::operator=(char const *)
   
   Library: Visual Studio 2010 Release */

_Yarn<char> * __thiscall std::_Yarn<char>::operator=(_Yarn<char> *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  pcVar2 = *(char **)this;
  if (pcVar2 != param_1) {
    if (pcVar2 != (char *)0x0) {
      _free(pcVar2);
    }
    *(undefined4 *)this = 0;
    if (param_1 != (char *)0x0) {
      cVar1 = *param_1;
      pcVar2 = param_1;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
      }
      _Dst = _malloc((size_t)(pcVar2 + (1 - (int)param_1)));
      *(void **)this = _Dst;
      if (_Dst != (void *)0x0) {
        FID_conflict__memcpy(_Dst,param_1,(size_t)(pcVar2 + (1 - (int)param_1)));
      }
    }
  }
  return this;
}


//==== FUNC 00608487  __crtLCMapStringA_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint _Size;
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint cchWideChar;
  undefined4 *puVar5;
  uint uVar6;
  LPCWSTR lpDestStr;
  int iVar7;
  LPCWSTR local_10;
  
  uVar2 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  pcVar3 = param_4;
  iVar7 = param_5;
  if (0 < param_5) {
    do {
      iVar7 = iVar7 + -1;
      if (*pcVar3 == '\0') goto LAB_006084b7;
      pcVar3 = pcVar3 + 1;
    } while (iVar7 != 0);
    iVar7 = -1;
LAB_006084b7:
    iVar7 = param_5 - iVar7;
    iVar4 = iVar7 + -1;
    bVar1 = iVar4 < param_5;
    param_5 = iVar4;
    if (bVar1) {
      param_5 = iVar7;
    }
  }
  if (param_8 == 0) {
    param_8 = param_1->locinfo->lc_codepage;
  }
  cchWideChar = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,param_5,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_0060865c;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffe0;
      local_10 = (LPCWSTR)&stack0xffffffe0;
      if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_00608547:
        local_10 = (LPCWSTR)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_10 = (LPCWSTR)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_00608547;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_0060865c;
  iVar7 = MultiByteToWideChar(param_8,1,param_4,param_5,local_10,cchWideChar);
  if ((iVar7 != 0) &&
     (uVar6 = LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)0x0,0), uVar6 != 0)) {
    if ((param_3 & 0x400) == 0) {
      if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        _Size = uVar6 * 2 + 8;
        if (_Size < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_00608650;
          lpDestStr = (LPCWSTR)&stack0xffffffe8;
        }
        else {
          lpDestStr = _malloc(_Size);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar7 = LCMapStringW(param_2,param_3,local_10,cchWideChar,lpDestStr,uVar6);
        if (iVar7 != 0) {
          if (param_7 == 0) {
            param_7 = 0;
            param_6 = (LPSTR)0x0;
          }
          WideCharToMultiByte(param_8,0,lpDestStr,uVar6,param_6,param_7,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_7 != 0) && ((int)uVar6 <= param_7)) {
      LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)param_6,param_7);
    }
  }
LAB_00608650:
  __freea(local_10);
LAB_0060865c:
  iVar7 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar7;
}


//==== FUNC 0043d700  FUN_0043d700 ====

void FUN_0043d700(LPCWSTR param_1)

{
  short *psVar1;
  short sVar2;
  size_t _Size;
  LPWSTR psz1;
  HANDLE hFindFile;
  FILE *_File;
  void *pvVar3;
  short *psVar4;
  void *pvVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  hFindFile = FindFirstFileW(param_1,&local_258);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
    _File = __wfopen(param_1,L"rb+");
    if (_File != (FILE *)0x0) {
      DAT_006e63e4 = _malloc(0x8040);
      if (DAT_006e63e4 != (void *)0x0) {
        _fread(DAT_006e63e4,0x8040,1,_File);
        pvVar3 = DAT_006e63e4;
        DAT_006e63e8 = _malloc((uint)*(ushort *)((int)DAT_006e63e4 + 0xe) * 0x4080);
        if (DAT_006e63e8 != (void *)0x0) {
          _fread(DAT_006e63e8,(uint)*(ushort *)((int)pvVar3 + 0xe) * 0x4080,1,_File);
          DAT_006e63ec = *(undefined2 *)((int)pvVar3 + 0xe);
          _Size = *(size_t *)((int)pvVar3 + 0x10);
          pvVar3 = _malloc(_Size);
          if (pvVar3 != (void *)0x0) {
            _fread(pvVar3,_Size,1,_File);
            uVar8 = 0;
            DAT_006e63f4 = 0;
            psVar7 = (short *)((int)DAT_006e63e4 + 0x40);
            iVar6 = DAT_006e63f0;
            do {
              if ((*psVar7 == 3) || (*psVar7 == 6)) {
                psVar4 = (short *)((int)pvVar3 + (*(uint *)(psVar7 + 2) & 0xfffffffe));
                psVar1 = psVar4 + 1;
                do {
                  sVar2 = *psVar4;
                  psVar4 = psVar4 + 1;
                } while (sVar2 != 0);
                *(int *)(iVar6 + 4 + uVar8 * 8) = ((int)psVar4 - (int)psVar1 >> 1) * 2 + 2;
                iVar6 = DAT_006e63f0;
                pvVar5 = _malloc(*(size_t *)(DAT_006e63f0 + 4 + uVar8 * 8));
                *(void **)(iVar6 + uVar8 * 8) = pvVar5;
                psz1 = *(LPWSTR *)(DAT_006e63f0 + uVar8 * 8);
                if (psz1 == (LPWSTR)0x0) {
                  *(undefined4 *)(DAT_006e63f0 + 4 + uVar8 * 8) = 0;
                  break;
                }
                StrCpyW(psz1,(LPCWSTR)((int)pvVar3 + (*(uint *)(psVar7 + 2) & 0xfffffffe)));
                DAT_006e63f4 = DAT_006e63f4 + *(int *)(DAT_006e63f0 + 4 + uVar8 * 8);
                iVar6 = DAT_006e63f0;
              }
              uVar8 = uVar8 + 1;
              psVar7 = psVar7 + 8;
            } while (uVar8 < 0x800);
            _free(pvVar3);
          }
        }
      }
      _fclose(_File);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 0043d4f0  FUN_0043d4f0 ====

uint FUN_0043d4f0(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e6418);
  FUN_00436220();
  FUN_00439620();
  FUN_0043d4d0();
  DAT_006e6430 = _malloc(0x8040);
  if (DAT_006e6430 != (void *)0x0) {
    FID_conflict__memcpy(DAT_006e6430,DAT_006e63e4,0x8040);
    pvVar2 = DAT_006e6430;
    FUN_0043d350(DAT_006e6430,DAT_006e63ec,DAT_006e63f4,0);
    DAT_006e6434 = _malloc((uint)*(ushort *)((int)pvVar2 + 0xe) * 0x4080);
    if (DAT_006e6434 != (void *)0x0) {
      FID_conflict__memcpy(DAT_006e6434,DAT_006e63e8,(uint)*(ushort *)((int)pvVar2 + 0xe) * 0x4080);
      DAT_006e6438 = *(undefined2 *)((int)pvVar2 + 0xe);
      pvVar3 = _malloc(*(size_t *)((int)pvVar2 + 0x10));
      if (pvVar3 != (void *)0x0) {
        psVar5 = (short *)((int)DAT_006e63e4 + 0x40);
        uVar6 = 0;
        iVar4 = DAT_006e63f0;
        do {
          iVar1 = *(int *)(uVar6 + 4 + iVar4);
          if (((iVar1 != 0) && (iVar1 + uVar7 <= *(uint *)((int)pvVar2 + 0x10))) &&
             ((*psVar5 == 3 || (*psVar5 == 6)))) {
            StrCpyW((LPWSTR)((int)pvVar3 + (uVar7 & 0xfffffffe)),*(LPCWSTR *)(uVar6 + iVar4));
            *(uint *)(psVar5 + 2) = uVar7;
            uVar7 = uVar7 + *(int *)(uVar6 + 4 + DAT_006e63f0);
            iVar4 = DAT_006e63f0;
          }
          uVar6 = uVar6 + 8;
          psVar5 = psVar5 + 8;
        } while (uVar6 < 0x4000);
        DAT_006e6440 = DAT_006e63f4;
        DAT_006e643c = pvVar3;
        uVar7 = FUN_004378a0(param_1);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e6418);
  return uVar7;
}


//==== FUNC 004378a0  FUN_004378a0 ====

void FUN_004378a0(int param_1)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  short *psVar7;
  byte bVar8;
  undefined2 *puVar9;
  uint local_63c;
  uint local_638;
  short local_634;
  byte local_632;
  undefined2 *local_630;
  uint local_62c;
  size_t local_628;
  uint local_624;
  void *local_620;
  uint local_61c;
  undefined1 local_618 [2];
  byte local_616;
  undefined2 local_614 [768];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00626cc6;
  local_10 = ExceptionList;
  local_14 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_006e8ddc != 0) {
    param_1 = 1;
  }
  FUN_00439e30(&local_638,&local_63c,local_14);
  if (DAT_006e63bc < local_63c) {
    uVar4 = FUN_004438e0();
    puVar5 = (undefined4 *)FUN_00443910(&local_620,L"EXTRA_MACRO_TOO_LONG",uVar4);
    local_8 = 0;
    AfxMessageBox((wchar_t *)*puVar5,0x40000,0);
    local_8 = 0xffffffff;
    piVar1 = (int *)((int)local_620 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)((int)local_620 + -0x10) + 4))((undefined4 *)((int)local_620 + -0x10));
    }
  }
  else {
    uVar6 = local_638;
    if (local_638 > DAT_006e63bc) {
      uVar6 = local_63c;
    }
    local_62c = (uint)(local_638 <= DAT_006e63bc);
    local_628 = uVar6;
    local_620 = _malloc(uVar6);
    if (local_620 != (void *)0x0) {
      FUN_00439a90(local_620,uVar6,local_62c);
      local_61c = 0;
      bVar8 = local_616;
      do {
        if (param_1 == 0) {
          local_61c = FUN_0043d970();
        }
        iVar2 = local_61c * 0x100;
        FID_conflict__memcpy(local_614 + iVar2,&DAT_006d8a38,DAT_006d8a28);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e6418);
        local_624 = 0;
        if (DAT_006d8a30 != 0) {
          puVar9 = (undefined2 *)&DAT_006d8a38;
          local_630 = local_614 + iVar2;
          do {
            sVar3 = FUN_00443400(puVar9);
            if (sVar3 != 0) {
              FUN_004023f0(sVar3);
              uVar6 = FUN_00402380(sVar3);
              psVar7 = (short *)(local_61c * 0x2000 + 0x40 + DAT_006e6430 + (uVar6 & 0xffff) * 0x10)
              ;
              sVar3 = *psVar7;
              if (sVar3 == 0) {
                bVar8 = *(byte *)(puVar9 + 1);
                _local_618 = CONCAT12(local_616,*puVar9);
              }
              else if (sVar3 == 1) {
                bVar8 = 0;
                _local_618 = (uint3)local_616 << 0x10;
              }
              else if (sVar3 == 2) {
                uVar6 = *(uint *)(psVar7 + 2);
                if (uVar6 == 0x1d) {
                  _local_618 = CONCAT12(local_616,0x102);
                  bVar8 = 1;
                }
                else if (uVar6 == 0x2a) {
                  _local_618 = CONCAT12(local_616,0x102);
                  bVar8 = 2;
                }
                else if (uVar6 == 0x38) {
                  _local_618 = CONCAT12(local_616,0x102);
                  bVar8 = 4;
                }
                else if (uVar6 == 0x15b) {
                  _local_618 = CONCAT12(local_616,0x102);
                  bVar8 = 8;
                }
                else if (uVar6 == 0x11d) {
                  _local_618 = CONCAT12(local_616,0x102);
                  bVar8 = 0x10;
                }
                else if (uVar6 == 0x36) {
                  _local_618 = CONCAT12(local_616,0x102);
                  bVar8 = 0x20;
                }
                else if (uVar6 == 0x138) {
                  _local_618 = CONCAT12(local_616,0x102);
                  bVar8 = 0x40;
                }
                else if (uVar6 == 0x15c) {
                  _local_618 = CONCAT12(local_616,0x102);
                  bVar8 = 0x80;
                }
                else if (uVar6 == 0x171) {
                  _local_618 = CONCAT12(local_616,0x101);
                  bVar8 = 1;
                }
                else if (uVar6 == 0x172) {
                  _local_618 = CONCAT12(local_616,0x101);
                  bVar8 = 2;
                }
                else if (uVar6 == 0x173) {
                  _local_618 = CONCAT12(local_616,0x101);
                  bVar8 = 4;
                }
                else if (uVar6 == 0x161) {
                  _local_618 = CONCAT12(local_616,0x501);
                  bVar8 = 1;
                }
                else if (uVar6 == 0x162) {
                  _local_618 = CONCAT12(local_616,0x501);
                  bVar8 = 0xff;
                }
                else {
                  _local_618 = CONCAT12(local_616,0x202);
                  FUN_00402450(uVar6 & 0xffff,&local_634);
                  bVar8 = (local_634 != 7) - 1U & local_632;
                }
              }
              else if (sVar3 == 3) {
                bVar8 = *(byte *)(puVar9 + 1);
                _local_618 = CONCAT12(local_616,*puVar9);
              }
              else if (sVar3 == 4) {
                _local_618 = CONCAT12(local_616,0x105);
                bVar8 = FUN_00439650(psVar7[2]);
              }
              else if (sVar3 == 5) {
                _local_618 = CONCAT12(local_616,0x205);
                bVar8 = 0;
              }
              else if (sVar3 == 6) {
                bVar8 = 0;
                _local_618 = (uint3)local_616 << 0x10;
              }
              else if (sVar3 == 7) {
                local_616 = (byte)((ushort)(&DAT_006546f0)[*(int *)(psVar7 + 2)] >> 8);
                bVar8 = local_616;
                _local_618 = CONCAT21((&DAT_006546f0)[*(int *)(psVar7 + 2)],3);
              }
              else if (sVar3 == 8) {
                bVar8 = *(byte *)(psVar7 + 2);
                _local_618 = CONCAT12(local_616,0x505);
              }
              *local_630 = local_618;
              *(byte *)(local_630 + 1) = bVar8;
            }
            local_630 = (undefined2 *)((int)local_630 + 3);
            local_624 = local_624 + 1;
            puVar9 = (undefined2 *)((int)puVar9 + 3);
          } while (local_624 < DAT_006d8a30);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e6418);
      } while ((param_1 != 0) && (local_61c = local_61c + 1, local_61c < 3));
      FUN_00440d30();
      FUN_004415f0(local_620,local_628);
      uVar6 = 0;
      do {
        if (param_1 == 0) {
          uVar6 = FUN_0043d970();
        }
        FUN_00441330(local_614 + uVar6 * 0x100,uVar6);
      } while ((param_1 != 0) && (uVar6 = uVar6 + 1, uVar6 < 3));
      FUN_00440de0(1);
      if (local_62c == 0) {
        uVar4 = FUN_004438e0();
        puVar5 = (undefined4 *)FUN_00443910(&local_624,L"EXTRA_PROFILE_SPACE_TIGHT",uVar4);
        local_8 = 1;
        AfxMessageBox((wchar_t *)*puVar5,0x40000,0);
        local_8 = 0xffffffff;
        piVar1 = (int *)(local_624 - 4);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1 || iVar2 + -1 < 0) {
          (**(code **)(**(int **)(local_624 - 0x10) + 4))((undefined4 *)(local_624 - 0x10));
        }
      }
      _free(local_620);
      DAT_006e8ddc = 0;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 0043f050  FUN_0043f050 ====

void FUN_0043f050(int param_1)

{
  LPCWSTR pWVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  HANDLE hFindFile;
  FILE *pFVar7;
  short *psVar8;
  LPCWSTR _Filename;
  uint uVar9;
  uint uVar10;
  int local_27c;
  void *local_278;
  void *local_274;
  undefined4 local_270;
  FILE *local_26c;
  LPCWSTR local_268;
  _WIN32_FIND_DATAW local_264;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006273b6;
  local_10 = ExceptionList;
  local_14 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_270 = 0;
  piVar4 = (int *)FUN_00454eae(local_14);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004029d0(0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  local_268 = (LPCWSTR)(iVar5 + 0x10);
  local_8 = 0;
  uVar6 = FUN_0043d970();
  uVar6 = FUN_0043ece0(&local_27c,uVar6);
  local_8._0_1_ = 1;
  FUN_004038c0(uVar6);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar4 = (int *)(local_27c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_27c + -0x10) + 4))((undefined4 *)(local_27c + -0x10));
  }
  if (param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  }
  _Filename = local_268;
  hFindFile = FindFirstFileW(local_268,&local_264);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
    pFVar7 = __wfopen(_Filename,L"wb+");
    pvVar3 = DAT_006e63e4;
    local_26c = pFVar7;
    if (pFVar7 != (FILE *)0x0) {
      local_278 = DAT_006e63e4;
      FUN_0043d350(DAT_006e63e4,DAT_006e63ec,DAT_006e63f4,0);
      local_274 = _malloc(*(size_t *)((int)pvVar3 + 0x10));
      if (local_274 != (void *)0x0) {
        uVar10 = 0;
        psVar8 = (short *)((int)DAT_006e63e4 + 0x40);
        uVar9 = 0;
        iVar5 = DAT_006e63f0;
        do {
          iVar2 = *(int *)(uVar9 + 4 + iVar5);
          if (((iVar2 != 0) && (iVar2 + uVar10 <= *(uint *)((int)local_278 + 0x10))) &&
             ((*psVar8 == 3 || (*psVar8 == 6)))) {
            StrCpyW((LPWSTR)((int)local_274 + (uVar10 & 0xfffffffe)),*(LPCWSTR *)(uVar9 + iVar5));
            *(uint *)(psVar8 + 2) = uVar10;
            uVar10 = uVar10 + *(int *)(uVar9 + 4 + DAT_006e63f0);
            iVar5 = DAT_006e63f0;
          }
          pFVar7 = local_26c;
          uVar9 = uVar9 + 8;
          psVar8 = psVar8 + 8;
        } while (uVar9 < 0x4000);
        _fwrite(DAT_006e63e4,0x8040,1,local_26c);
        _fwrite(DAT_006e63e8,(uint)DAT_006e63ec * 0x4080,1,pFVar7);
        pvVar3 = local_274;
        _fwrite(local_274,*(size_t *)((int)local_278 + 0x10),1,pFVar7);
        local_270 = 1;
        _free(pvVar3);
        _Filename = local_268;
        pFVar7 = local_26c;
      }
      _fclose(pFVar7);
    }
  }
  if (param_1 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  }
  local_8 = 0xffffffff;
  pWVar1 = _Filename + -2;
  LOCK();
  iVar5 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar5 + -1 < 1) {
    (**(code **)(**(int **)(_Filename + -8) + 4))(_Filename + -8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 0043e180  FUN_0043e180 ====

undefined4 FUN_0043e180(int param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  void *pvVar3;
  FILE *_File;
  void *_Str;
  int iVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar7 = 0;
  if (param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  }
  _File = __wfopen(param_2,L"wb+");
  pvVar3 = DAT_006e63e4;
  if (_File != (FILE *)0x0) {
    FUN_0043d350(DAT_006e63e4,DAT_006e63ec,DAT_006e63f4,0);
    _Str = _malloc(*(size_t *)((int)pvVar3 + 0x10));
    if (_Str != (void *)0x0) {
      uVar8 = 0;
      psVar5 = (short *)((int)DAT_006e63e4 + 0x40);
      uVar6 = 0;
      iVar4 = DAT_006e63f0;
      do {
        iVar2 = *(int *)(uVar6 + 4 + iVar4);
        if (((iVar2 != 0) && (iVar2 + uVar8 <= *(uint *)((int)pvVar3 + 0x10))) &&
           ((*psVar5 == 3 || (*psVar5 == 6)))) {
          StrCpyW((LPWSTR)((int)_Str + (uVar8 & 0xfffffffe)),*(LPCWSTR *)(uVar6 + iVar4));
          *(uint *)(psVar5 + 2) = uVar8;
          uVar8 = uVar8 + *(int *)(uVar6 + 4 + DAT_006e63f0);
          iVar4 = DAT_006e63f0;
        }
        uVar6 = uVar6 + 8;
        psVar5 = psVar5 + 8;
      } while (uVar6 < 0x4000);
      _fwrite(DAT_006e63e4,0x8040,1,_File);
      _fwrite(DAT_006e63e8,(uint)DAT_006e63ec * 0x4080,1,_File);
      _fwrite(_Str,*(size_t *)((int)pvVar3 + 0x10),1,_File);
      uVar7 = 1;
      _free(_Str);
    }
    _fclose(_File);
  }
  if (param_1 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  }
  pwVar1 = param_2 + -2;
  LOCK();
  iVar4 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(param_2 + -8) + 4))(param_2 + -8);
  }
  return uVar7;
}


//==== FUNC 00473e89  CFileDialog ====

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall CFileDialog::CFileDialog(int,wchar_t const *,wchar_t const *,unsigned
   long,wchar_t const *,class CWnd *,unsigned long,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CFileDialog::CFileDialog
          (CFileDialog *this,int param_1,wchar_t *param_2,wchar_t *param_3,ulong param_4,
          wchar_t *param_5,CWnd *param_6,ulong param_7,int param_8)

{
  CFileDialog *pCVar1;
  undefined4 uVar2;
  void *_Dst;
  AFX_MODULE_STATE *pAVar3;
  wchar_t *pwVar4;
  HRESULT HVar5;
  int iVar6;
  IID *rclsid;
  undefined4 local_13c;
  wchar_t *local_138;
  wchar_t *local_134;
  int *local_130;
  size_t local_12c;
  _OSVERSIONINFOW local_128;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x130;
  local_8 = 0x473e98;
  local_138 = param_3;
  local_134 = param_5;
  local_12c = param_7;
  CDialog::CDialog((CDialog *)this,0,param_6);
  local_8 = 0;
  *(undefined ***)this = vftable;
  uVar2 = FUN_00454eae();
  FUN_00403410(uVar2);
  *(undefined4 *)(this + 0x340) = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(this + 0x344) = 0;
  _memset(&local_128,0,0x114);
  local_128.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_128);
  if (local_128.dwMajorVersion < 6) {
    *(undefined4 *)(this + 0x98) = 0;
  }
  else {
    *(int *)(this + 0x98) = param_8;
  }
  *(undefined4 *)(this + 0x9c) = 0;
  if (local_12c == 0) {
    local_12c = 0x58;
  }
  _Dst = _malloc(local_12c);
  *(void **)(this + 0x94) = _Dst;
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00453463();
  }
  _memset(_Dst,0,local_12c);
  *(undefined2 *)(this + 0xb4) = 0;
  pCVar1 = this + 0x134;
  *(undefined2 *)pCVar1 = 0;
  *(int *)(this + 0xac) = param_1;
  *(uint *)(this + 0x74) = 0x7005 - (uint)(param_1 != 0);
  *(undefined4 *)(this + 0x33c) = 0;
  **(size_t **)(this + 0x94) = local_12c;
  *(CFileDialog **)(*(int *)(this + 0x94) + 0x1c) = pCVar1;
  *(undefined4 *)(*(int *)(this + 0x94) + 0x20) = 0x104;
  *(wchar_t **)(*(int *)(this + 0x94) + 0x3c) = param_2;
  *(CFileDialog **)(*(int *)(this + 0x94) + 0x24) = this + 0xb4;
  *(undefined4 *)(*(int *)(this + 0x94) + 0x28) = 0x40;
  *(uint *)(*(int *)(this + 0x94) + 0x34) =
       *(uint *)(*(int *)(this + 0x94) + 0x34) | param_4 | 0x80020;
  if ((param_4 & 0x40) != 0) {
    *(uint *)(*(int *)(this + 0x94) + 0x34) = *(uint *)(*(int *)(this + 0x94) + 0x34) & 0xff7fffff;
  }
  pAVar3 = AfxGetModuleState();
  *(undefined4 *)(*(int *)(this + 0x94) + 8) = *(undefined4 *)(pAVar3 + 0xc);
  *(code **)(*(int *)(this + 0x94) + 0x44) = _AfxCommDlgProc;
  if (local_138 != (wchar_t *)0x0) {
    uVar2 = wcsncpy_s(pCVar1,0x104,local_138,0xffffffff);
    FUN_00402940(uVar2);
  }
  if (local_134 != (wchar_t *)0x0) {
    FUN_00403930(local_134);
    pwVar4 = (wchar_t *)FUN_004035b0(0);
    while( true ) {
      pwVar4 = _wcschr(pwVar4,L'|');
      if (pwVar4 == (wchar_t *)0x0) break;
      *pwVar4 = L'\0';
      pwVar4 = pwVar4 + 1;
    }
    *(undefined4 *)(*(int *)(this + 0x94) + 0xc) = *(undefined4 *)(this + 0xb0);
  }
  if (*(int *)(this + 0x98) == 1) {
    HVar5 = CoInitializeEx((LPVOID)0x0,2);
    if (-1 < HVar5) {
      *(undefined ***)(this + 0x340) = XFileDialogEvents::vftable;
      *(undefined ***)(this + 0x344) = XFileDialogControlEvents::vftable;
      if (*(int *)(this + 0xac) == 0) {
        rclsid = (IID *)&DAT_006966d4;
      }
      else {
        rclsid = (IID *)&DAT_006966c4;
      }
      HVar5 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,1,(IID *)&DAT_0065ea9c,&local_130);
      if (-1 < HVar5) {
        iVar6 = (**(code **)*local_130)(local_130,&DAT_0065e694,&local_13c);
        if (-1 < iVar6) {
          iVar6 = (**(code **)(*local_130 + 0x1c))(local_130,this + 0x340,this + 0xa0);
          if (-1 < iVar6) {
            *(int **)(this + 0xa4) = local_130;
            *(undefined4 *)(this + 0xa8) = local_13c;
            goto LAB_00474158;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0045349b();
      }
    }
    *(undefined4 *)(this + 0x98) = 0;
  }
LAB_00474158:
  FUN_005f3822();
  return;
}


//==== FUNC 0043dfd0  FUN_0043dfd0 ====

void FUN_0043dfd0(LPCWSTR param_1)

{
  HANDLE hFindFile;
  short *_DstBuf;
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined1 local_670 [4];
  FILE *local_66c;
  _WIN32_FIND_DATAW local_668;
  wchar_t local_418 [520];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  hFindFile = FindFirstFileW(param_1,&local_668);
  if (hFindFile == (HANDLE)0xffffffff) goto LAB_0043e16b;
  FindClose(hFindFile);
  local_66c = __wfopen(param_1,L"rb+");
  if ((((local_66c != (FILE *)0x0) && (local_668.nFileSizeHigh == 0)) &&
      (0x803f < local_668.nFileSizeLow)) &&
     (_DstBuf = _malloc(local_668.nFileSizeLow), _DstBuf != (short *)0x0)) {
    _fread(_DstBuf,local_668.nFileSizeLow,1,local_66c);
    if (((((*_DstBuf == 0x4446) && (_DstBuf[1] == 0x20)) &&
         ((_DstBuf[2] == 3 && ((_DstBuf[3] == 1 && (0x803f < *(uint *)(_DstBuf + 4))))))) &&
        (_DstBuf[6] == 0x800)) &&
       ((((ushort)_DstBuf[7] < 0x65 && (*(byte *)(_DstBuf + 0xf) < 2)) &&
        (*(uint *)(_DstBuf + 4) ==
         (uint)(ushort)_DstBuf[7] * 0x4080 + 0x8040 + *(int *)(_DstBuf + 8))))) {
      cVar5 = '\0';
      cVar4 = '\0';
      uVar1 = 0;
      cVar6 = '\0';
      do {
        cVar5 = cVar5 + *(char *)((int)_DstBuf + uVar1);
        cVar4 = cVar4 + *(char *)((int)_DstBuf + uVar1 + 1);
        uVar1 = uVar1 + 2;
      } while (uVar1 < 0x1e);
      if (uVar1 < 0x1f) {
        cVar6 = *(char *)(uVar1 + (int)_DstBuf);
      }
      if ((char)(cVar4 + cVar5 + cVar6) != *(char *)((int)_DstBuf + 0x1f)) goto LAB_0043e100;
    }
    else {
LAB_0043e100:
      uVar2 = FUN_004438e0();
      puVar3 = (undefined4 *)FUN_00443910(local_670,L"PROFILE_FORMAT_ERROR",uVar2);
      __swprintf(local_418,(wchar_t *)*puVar3,param_1);
      FUN_00403560();
      AfxMessageBox(local_418,0,0);
    }
    _free(_DstBuf);
  }
  _fclose(local_66c);
LAB_0043e16b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 0043d400  FUN_0043d400 ====

undefined4 FUN_0043d400(wchar_t *param_1,undefined4 param_2,FILE *param_3)

{
  FILE *_File;
  void *_Str;
  
  _File = param_3;
  if ((param_3 == (FILE *)0x0) && (_File = __wfopen(param_1,L"wb+"), _File == (FILE *)0x0)) {
    return 0;
  }
  _Str = _malloc(0x8040);
  if (_Str == (void *)0x0) {
    return 0;
  }
  FUN_0043d350(_Str,0,0,param_2);
  FUN_00436250((int)_Str + 0x20,1);
  FUN_00436290((int)_Str + 0x40,1);
  if (param_3 != (FILE *)0x0) {
    DAT_006e63e4 = _Str;
    return 1;
  }
  _fwrite(_Str,0x8040,1,_File);
  _free(_Str);
  _fclose(_File);
  return 1;
}


//==== FUNC 0043dc10  FUN_0043dc10 ====

void FUN_0043dc10(wchar_t *param_1)

{
  uint uVar1;
  int iVar2;
  void *_Memory;
  FILE *_File;
  void *_Str;
  undefined1 *puVar3;
  uint local_630;
  int local_628;
  int local_61c;
  uint local_618;
  uint local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined1 local_608 [1536];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_0043d970();
  if (3 < uVar1) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar1 = 0;
  puVar3 = local_608;
  do {
    iVar2 = FUN_004411c0(puVar3,uVar1);
    if (iVar2 != 1) goto LAB_0043de55;
    uVar1 = uVar1 + 1;
    puVar3 = puVar3 + 0x200;
  } while (uVar1 < 3);
  iVar2 = FUN_004414a0(&local_618,0x10);
  if (iVar2 != 1) {
LAB_0043de55:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((short)local_618 == 0x55aa) {
    local_630 = local_618 >> 0x10;
    local_628 = (local_614 & 0xffff) * 0x4080;
    _Memory = _malloc(local_630);
    if (_Memory == (void *)0x0) goto LAB_0043de2d;
    iVar2 = FUN_004414a0(_Memory,local_630);
    if (iVar2 == 1) goto LAB_0043dd1d;
  }
  else {
    local_618 = 0;
    local_614 = 0;
    local_610 = 0;
    local_60c = 0;
    local_628 = 0;
    _Memory = _malloc(1);
LAB_0043dd1d:
    _File = __wfopen(param_1,L"wb+");
    if (_File != (FILE *)0x0) {
      _Str = _malloc(local_628 + 0x8040U);
      if (_Str == (void *)0x0) {
        _fclose(_File);
      }
      else {
        FUN_0043d350(_Str,local_614,0,0);
        FUN_00436250((int)_Str + 0x20,1);
        puVar3 = local_608;
        iVar2 = (int)_Str + 0x40;
        local_61c = 3;
        do {
          FUN_00436460(iVar2,puVar3);
          puVar3 = puVar3 + 0x200;
          iVar2 = iVar2 + 0x2000;
          local_61c = local_61c + -1;
        } while (local_61c != 0);
        if (local_628 != 0) {
          FUN_004398a0((int)_Str + 0x8040,local_628,_Memory,local_630);
        }
        _fwrite(_Str,local_628 + 0x8040U,1,_File);
        _free(_Str);
      }
      _fclose(_File);
    }
  }
  _free(_Memory);
LAB_0043de2d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 0042d150  FUN_0042d150 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042d150(CWnd *param_1)

{
  LPCWSTR pWVar1;
  CWnd *this;
  HMENU pHVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  HANDLE pvVar10;
  HMODULE hModule;
  FARPROC pFVar11;
  LPCWSTR lpNewItem;
  CClientDC local_254 [20];
  undefined4 *local_240;
  undefined4 *local_23c;
  undefined4 *local_238;
  undefined4 *local_234;
  undefined4 *local_230;
  undefined4 *local_22c;
  LPCWSTR local_228;
  CMenu *local_224;
  undefined4 *local_220;
  wchar_t local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062639c;
  local_10 = ExceptionList;
  local_14 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0044b490();
  pHVar2 = GetSystemMenu(*(HWND *)(param_1 + 0x20),0);
  local_224 = CMenu::FromHandle(pHVar2);
  if (local_224 != (CMenu *)0x0) {
    piVar3 = (int *)FUN_00454eae();
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004029d0();
    }
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    local_8 = 0;
    local_228 = (LPCWSTR)(iVar4 + 0x10);
    iVar5 = FUN_00454d6d();
    lpNewItem = (LPCWSTR)(iVar4 + 0x10);
    if (iVar5 != 0) {
      FUN_00403660();
      lpNewItem = local_228;
    }
    if (*(int *)(lpNewItem + -6) != 0) {
      AppendMenuW(*(HMENU *)(local_224 + 4),0x800,0,(LPCWSTR)0x0);
      AppendMenuW(*(HMENU *)(local_224 + 4),0,0x10,lpNewItem);
    }
    local_8 = 0xffffffff;
    pWVar1 = lpNewItem + -2;
    LOCK();
    iVar4 = *(int *)pWVar1;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(lpNewItem + -8) + 4))();
    }
  }
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,1,*(LPARAM *)(param_1 + 0xee50));
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,0,*(LPARAM *)(param_1 + 0xee50));
  DAT_006e6398 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x13d24) = 0;
  DAT_006e63b8 = 0xffffffff;
  DAT_006e639c = param_1;
  DAT_006e621c = LoadLibraryW(L"Kernel32.dll");
  if (DAT_006e621c == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
    ExitProcess(0);
  }
  DAT_006e6220 = GetProcAddress(DAT_006e621c,"Wow64DisableWow64FsRedirection");
  _DAT_006e6224 = GetProcAddress(DAT_006e621c,"Wow64RevertWow64FsRedirection");
  if (DAT_006e6220 == (FARPROC)0x0) {
    DAT_006e6220 = (FARPROC)&LAB_00416f40;
  }
  if (_DAT_006e6224 == (FARPROC)0x0) {
    _DAT_006e6224 = (FARPROC)&LAB_00416f50;
  }
  _DAT_006e6368 = 0x205;
  _DAT_006e636c = 0;
  _DAT_006e6384 = 0;
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00436ee0,(LPVOID)0x0,0,(LPDWORD)0x0);
  _DAT_006e7ce0 = 0;
  _DAT_006e7ce4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00435c60,(LPVOID)0x0,0,(LPDWORD)0x0);
  _DAT_006e7cf4 = LoadLibraryW(L"User32.dll");
  if (_DAT_006e7cf4 == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
    ExitProcess(0);
  }
  _DAT_006e7cf8 = GetProcAddress(_DAT_006e7cf4,"SetLayeredWindowAttributes");
  if (_DAT_006e7cf8 == (FARPROC)0x0) {
                    /* WARNING: Subroutine does not return */
    ExitProcess(0);
  }
  DAT_006e63f0 = _malloc(0x4000);
  if (DAT_006e63f0 != (void *)0x0) {
    iVar4 = 0;
    do {
      *(undefined4 *)(iVar4 + (int)DAT_006e63f0) = 0;
      *(undefined4 *)(iVar4 + 4 + (int)DAT_006e63f0) = 0;
      iVar4 = iVar4 + 8;
    } while (iVar4 < 0x4000);
  }
  DAT_006e63f4 = 0;
  FUN_0043d400();
  FUN_004184e0();
  DAT_006e63f8 = 0;
  _DAT_006e6400 = 0;
  DAT_006e6408 = 0;
  DAT_006e6448 = &DAT_006e6444;
  DAT_006e6444 = &DAT_006e6444;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_006e644c);
  puVar6 = (undefined4 *)FUN_0041d880();
  puVar7 = (undefined4 *)FUN_0041d880();
  local_240 = (undefined4 *)FUN_0041d880();
  local_238 = (undefined4 *)FUN_0041d880();
  local_230 = (undefined4 *)FUN_0041d880();
  local_234 = (undefined4 *)FUN_0041d880();
  local_23c = (undefined4 *)FUN_0041d880();
  local_22c = (undefined4 *)FUN_0041d880();
  local_224 = (CMenu *)FUN_0041d880();
  local_228 = (LPCWSTR)FUN_0041d880();
  local_220 = (undefined4 *)FUN_0041d880();
  if ((((((puVar6 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0)) &&
        (local_240 != (undefined4 *)0x0)) &&
       ((local_238 != (undefined4 *)0x0 && (local_230 != (undefined4 *)0x0)))) &&
      ((local_234 != (undefined4 *)0x0 &&
       ((local_23c != (undefined4 *)0x0 && (local_22c != (undefined4 *)0x0)))))) &&
     ((local_224 != (CMenu *)0x0 &&
      ((local_228 != (LPCWSTR)0x0 && (local_220 != (undefined4 *)0x0)))))) {
    CClientDC::CClientDC(local_254,param_1);
    local_8 = 1;
    FUN_004290e0();
    FUN_004290e0();
    FUN_004290e0();
    FUN_004290e0();
    FUN_004290e0(&DAT_006e7d48,local_230);
    FUN_004290e0(&DAT_006e7d58,local_234,local_254);
    FUN_004290e0();
    FUN_004290e0();
    FUN_004290e0();
    FUN_004290e0();
    FUN_004290e0(&DAT_006e7da8,local_220);
    (**(code **)*puVar6)();
    (**(code **)*puVar7)();
    (**(code **)*local_240)();
    (**(code **)*local_238)();
    (**(code **)*local_230)();
    (**(code **)*local_234)();
    (**(code **)*local_23c)();
    (**(code **)*local_22c)();
    (*(code *)**(undefined4 **)local_224)();
    (*(code *)**(undefined4 **)local_228)();
    (**(code **)*local_220)();
    GetPrivateProfileStringW
              (L"SCREEN",L"Link",L"www.microsoft.com",(LPWSTR)&DAT_006e1f00,0x104,
               (LPCWSTR)&DAT_006e4390);
    FUN_00418120();
    FUN_004167c0(param_1 + 0x23b8,&DAT_006e4390,L"BUTTONINFO",L"DEARMO_LINK",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d38);
    local_220 = (undefined4 *)&stack0xfffffd68;
    FUN_00403ea0(&DAT_006e1f00);
    FUN_00451100();
    FUN_004167c0(param_1 + 0xaea8,&DAT_006e4390,L"BUTTONINFO",L"FUNC_PROFILES",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    FUN_004508c0();
    FUN_00450810(1,10,L"Arial Unicode MS",0xffffff,0xffffff,0xffffff,0xffffff);
    FUN_004167c0(param_1 + 0x1ef8,&DAT_006e4390,L"BUTTONINFO",L"FUNC_MACRO",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    FUN_004167c0(param_1 + 0x1c98,&DAT_006e4390,L"BUTTONINFO",L"CONTROL_OK",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28,&DAT_006e7d08,&DAT_006e7d08);
    FUN_004167c0(param_1 + 0x1dc8,&DAT_006e4390,L"BUTTONINFO",L"CONTROL_CANCEL",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    FUN_004167c0(param_1 + 0x2288,&DAT_006e4390,L"BUTTONINFO",L"CONTROL_HELP",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28,&DAT_006e7d08,&DAT_006e7d08);
    uVar8 = FUN_004438e0();
    local_220 = (undefined4 *)&stack0xfffffd68;
    FUN_00443910(&stack0xfffffd68,L"MAIN_HELP_PROMPT",uVar8);
    FUN_00451100();
    FUN_004167c0(param_1 + 0x2158,&DAT_006e4390,L"BUTTONINFO",L"CONTROL_CLOSE",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    uVar8 = FUN_004438e0();
    local_220 = (undefined4 *)&stack0xfffffd68;
    FUN_00443910(&stack0xfffffd68,L"MAIN_CLOSE_PROMPT",uVar8);
    FUN_00451100();
    FUN_004167c0(param_1 + 0x2028,&DAT_006e4390,L"BUTTONINFO",L"CONTROL_MINIMIZE",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    uVar8 = FUN_004438e0();
    local_220 = (undefined4 *)&stack0xfffffd68;
    FUN_00443910(&stack0xfffffd68,L"MAIN_MINIMIZE_PROMPT",uVar8);
    FUN_00451100();
    FUN_004167c0(param_1 + 0x6a4,&DAT_006e4390,L"BUTTONINFO",L"CONTROL_MENU",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    uVar8 = FUN_004438e0();
    local_220 = (undefined4 *)&stack0xfffffd68;
    FUN_00443910(&stack0xfffffd68,L"MAIN_MENU_PROMPT",uVar8);
    FUN_00451100();
    FUN_004167c0(param_1 + 0xafd8,&DAT_006e4390,L"BUTTONINFO",L"CONTROL2_APPLY",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    FUN_004167c0(param_1 + 0x1b68,&DAT_006e4390,L"BUTTONINFO",L"LOCK_CAPS",&DAT_006e7d08,
                 &DAT_006e7d08,&DAT_006e7d08,&DAT_006e7d08,&DAT_006e7d18);
    FUN_004167c0(param_1 + 0x1a38,&DAT_006e4390,L"BUTTONINFO",L"LOCK_NUM",&DAT_006e7d08,
                 &DAT_006e7d08,&DAT_006e7d08);
    FUN_004167c0(param_1 + 0x1908,&DAT_006e4390,L"BUTTONINFO",L"LOCK_SCROLL",&DAT_006e7d08,
                 &DAT_006e7d08,&DAT_006e7d08,&DAT_006e7d08,&DAT_006e7d18);
    FUN_004167c0(param_1 + 0x17d8,&DAT_006e4390,L"BUTTONINFO",L"LOCK_AB",&DAT_006e7d08,&DAT_006e7d08
                 ,&DAT_006e7d08);
    FUN_004501e0();
    FUN_004501e0();
    FUN_004167c0(param_1 + 0x1284,&DAT_006e4390,L"BUTTONINFO",L"FLIP_0",&DAT_006e7d08,&DAT_006e7d08,
                 &DAT_006e7d08);
    FUN_004501e0();
    FUN_004167c0(param_1 + 0x1154,&DAT_006e4390,L"BUTTONINFO",L"FLIP_1",&DAT_006e7d08,&DAT_006e7d18,
                 &DAT_006e7d28);
    FUN_004167c0(param_1 + 0x1024,&DAT_006e4390,L"BUTTONINFO",L"FLIP_2",&DAT_006e7d08,&DAT_006e7d18,
                 &DAT_006e7d28,&DAT_006e7d08,&DAT_006e7d38);
    FUN_004293c0();
    FUN_004501e0();
    FUN_004501e0();
    this = param_1 + 0xc94;
    FUN_004167c0(this,&DAT_006e4390,L"BUTTONINFO",L"DEARMO_VER",&DAT_006e7d08,&DAT_006e7d08,
                 &DAT_006e7d08);
    CWnd::SetWindowTextW(this,L"");
    FUN_00450810(1,8,L"Verdana Unicode MS",0xffffff,0xffffff,0xffffff,0xffffff);
    CWnd::EnableWindow(this,0);
    FUN_004167c0(param_1 + 0xb64,&DAT_006e4390,L"BUTTONINFO",L"FUNC_PROFILE1",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    FUN_004167c0(param_1 + 0xa34,&DAT_006e4390,L"BUTTONINFO",L"FUNC_PROFILE2",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28,&DAT_006e7d08,&DAT_006e7d38);
    FUN_004167c0(param_1 + 0x904,&DAT_006e4390,L"BUTTONINFO",L"FUNC_PROFILE3",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    FUN_004167c0(param_1 + 0x7d4,&DAT_006e4390,L"BUTTONINFO",L"FUNC_DEFAULT",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28,&DAT_006e7d08,&DAT_006e7d38);
    FUN_004167c0(param_1 + 0xb4,&DAT_006e4390,L"BUTTONINFO",L"FUNC_SWITCH",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    FUN_00416ad0(param_1 + 0x158a0,&DAT_006e4390,L"BUTTONINFO",L"COLOR_R");
    FUN_00416ad0(param_1 + 0x15914,&DAT_006e4390,L"BUTTONINFO",L"COLOR_G");
    FUN_00416ad0(param_1 + 0x15988,&DAT_006e4390);
    FUN_004167c0(param_1 + 0xe7e4,&DAT_006e4390,L"BUTTONINFO",L"FUNC_REPORT1",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28,&DAT_006e7d08,&DAT_006e7d38);
    FUN_004167c0(param_1 + 0xe914,&DAT_006e4390,L"BUTTONINFO",L"FUNC_REPORT2",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28,&DAT_006e7d08,&DAT_006e7d38);
    FUN_004167c0(param_1 + 0xea44,&DAT_006e4390,L"BUTTONINFO",L"FUNC_REPORT3",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28);
    FUN_004167c0(param_1 + 0xeb74,&DAT_006e4390,L"BUTTONINFO",L"FUNC_REPORT4",&DAT_006e7d08,
                 &DAT_006e7d18,&DAT_006e7d28,&DAT_006e7d08,&DAT_006e7d38);
    FUN_004167c0(param_1 + 0xeca4,&DAT_006e4390,L"BUTTONINFO",L"KEY_FN",&DAT_006e7d08,&DAT_006e7d18,
                 &DAT_006e7d28);
    FUN_00416520();
    FUN_0041eee0();
    FUN_004188b0();
    FUN_0041ed80();
    CWnd::ModifyStyleEx(param_1,0x40000,0x80,0);
    SetWindowLongW(*(HWND *)(param_1 + 0x20),-0x15,0x4d41494e);
    uVar9 = GetWindowLongW(*(HWND *)(param_1 + 0x20),-0x10);
    SetWindowLongW(*(HWND *)(param_1 + 0x20),-0x10,uVar9 | 0xa0000);
    FUN_004438e0();
    puVar6 = (undefined4 *)FUN_00443910(&local_220);
    local_8._0_1_ = 2;
    CWnd::SetWindowTextW(param_1,(wchar_t *)*puVar6);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00403560();
    puVar6 = (undefined4 *)0x0;
    do {
      local_220 = (undefined4 *)((int)puVar6 + 1);
      __swprintf(local_21c,L"%sMain_%02d");
      pvVar10 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,local_21c);
      (&DAT_006e647c)[(int)puVar6] = pvVar10;
      puVar6 = local_220;
    } while ((int)local_220 < 0xd0);
    DAT_006e63b0 = 0;
    FUN_00450810(1,10,L"Arial Unicode MS",0xffffff,0xffffff,0xffffff,0xffffff);
    FUN_00424370();
    FUN_004438e0();
    puVar6 = (undefined4 *)FUN_00443910(&local_220);
    local_8._0_1_ = 3;
    FUN_0044a3c0(param_1,0x6bd,*puVar6);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00403560();
    FUN_0044a1b0();
    FUN_0044a250();
    *(undefined4 *)(param_1 + 0xee58) = 0x80;
    PostMessageW(*(HWND *)(param_1 + 0x20),0x4d4e,0x494e4954,0);
    FUN_004438e0();
    FUN_00443500();
    hModule = LoadLibraryW(L"WtsApi32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar11 = GetProcAddress(hModule,"WTSRegisterSessionNotification");
      if (pFVar11 != (FARPROC)0x0) {
        (*pFVar11)();
      }
      FreeLibrary(hModule);
    }
    SetTimer(*(HWND *)(param_1 + 0x20),0x41c,100,(TIMERPROC)0x0);
    local_8 = 0xffffffff;
    CClientDC::~CClientDC(local_254);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}


//==== FUNC 00430720  FUN_00430720 ====

void __thiscall
FUN_00430720(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  WPARAM wParam;
  undefined4 *puVar4;
  DWORD DVar5;
  undefined4 uVar6;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_004460f0(1);
  if ((iVar1 < 2000) && (puVar2 = _malloc(8), puVar2 != (undefined4 *)0x0)) {
    if (1 < *(ushort *)((int)param_2 + 6)) {
      *(undefined2 *)((int)param_2 + 6) = 0;
    }
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    if ((param_5 != 0) && (iVar3 = FUN_00446150(2,0xffffffff), iVar3 != -1)) {
      iVar1 = iVar3 + 1;
    }
    wParam = FUN_00447010(iVar1,&DAT_0064f4fc);
    __swprintf(local_210,L"%d",*param_2);
    if (param_6 == 0) {
      if ((int)wParam < 1) {
        FUN_00447190(wParam,2,&DAT_0064bea0);
        *puVar2 = 0;
      }
      else {
        puVar4 = (undefined4 *)FUN_004445b0(wParam - 1);
        uVar6 = *puVar4;
        FUN_00447190(wParam - 1,2,local_210);
        *puVar4 = *param_2;
        __swprintf(local_210,L"%d",uVar6);
        FUN_00447190(wParam,2,local_210);
        *puVar2 = uVar6;
      }
    }
    else {
      FUN_00447190(wParam,2,local_210);
    }
    FUN_004039e0(*(undefined2 *)(param_2 + 1),local_210,0x104);
    FUN_00447190(wParam,0,local_210);
    FUN_00447190(wParam,1,(&PTR_DAT_006d891c)[*(ushort *)((int)param_2 + 6)]);
    FUN_00445630(wParam,puVar2);
    if (param_3 != 0) {
      uVar6 = 1;
      DVar5 = GetSysColor(0x11);
      FUN_00446570(wParam,0,DVar5,uVar6);
      uVar6 = 1;
      DVar5 = GetSysColor(0x11);
      FUN_00446570(wParam,1,DVar5,uVar6);
      SendMessageW(*(HWND *)(param_1 + 0xc84),0x1013,wParam,0);
      FUN_00446210(wParam,2);
    }
    if (param_4 != 0) {
      FUN_0042fba0(1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 004311a0  FUN_004311a0 ====

void __thiscall FUN_004311a0(int param_1,int param_2)

{
  void *_Dst;
  ushort uVar1;
  uint wParam;
  
  if (param_2 == 0) {
    FUN_004309b0();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  if ((DAT_006e63e4 != 0) && (uVar1 = 0, DAT_006e63ec != 0)) {
    do {
      _Dst = _malloc(0x4080);
      if (_Dst != (void *)0x0) {
        wParam = (uint)uVar1;
        FID_conflict__memcpy(_Dst,(void *)(wParam * 0x4080 + DAT_006e63e8),0x4080);
        *(undefined2 *)((int)_Dst + 0x1f6) = 0;
        SendMessageW(*(HWND *)(param_1 + 0xeb4),0x14a,wParam,(LPARAM)_Dst);
        SendMessageW(*(HWND *)(param_1 + 0xeb4),0x151,wParam,(LPARAM)_Dst);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_006e63ec);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  FUN_00430a50(param_2);
  return;
}


//==== FUNC 00431ab0  FUN_00431ab0 ====

void __fastcall FUN_00431ab0(int param_1)

{
  HWND hWnd;
  WPARAM wParam;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  LPWSTR pWVar5;
  int iVar6;
  WPARAM wParam_00;
  LPWSTR local_2e0;
  wchar_t local_2dc [260];
  short sStack_d4;
  undefined4 local_d2 [50];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  wParam = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x146,0,0);
  if (99 < (int)wParam) {
    uVar1 = FUN_004438e0();
    puVar2 = (undefined4 *)FUN_00443910(&local_2e0,L"MACRO_ERR_MAX",uVar1);
    __swprintf(local_2dc,(wchar_t *)*puVar2,100);
    pWVar5 = local_2e0 + -2;
    LOCK();
    iVar6 = *(int *)pWVar5;
    *(int *)pWVar5 = *(int *)pWVar5 + -1;
    UNLOCK();
    if (iVar6 == 1 || iVar6 + -1 < 0) {
      (**(code **)(**(int **)(local_2e0 + -8) + 4))(local_2e0 + -8);
    }
    AfxMessageBox(local_2dc,0,0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (wParam == 0) {
    *(undefined4 *)(param_1 + 0x20d4) = 0;
  }
  *(int *)(param_1 + 0x20d4) = *(int *)(param_1 + 0x20d4) + 1;
  uVar1 = *(undefined4 *)(param_1 + 0x20d4);
  uVar3 = FUN_004438e0();
  puVar2 = (undefined4 *)FUN_00443910(&local_2e0,L"MACRO_NEW_PREFIX",uVar3);
  __swprintf(local_2dc,L"%s%d",*puVar2,uVar1);
  pWVar5 = local_2e0 + -2;
  LOCK();
  iVar6 = *(int *)pWVar5;
  *(int *)pWVar5 = *(int *)pWVar5 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(**(int **)(local_2e0 + -8) + 4))(local_2e0 + -8);
  }
  LVar4 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x14c,0,(LPARAM)local_2dc);
  if (LVar4 != -1) {
    Sleep(0x10);
    FUN_00431ab0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pWVar5 = _malloc(0x4080);
  local_2e0 = pWVar5;
  _memset(pWVar5,0,0x4080);
  if (pWVar5 != (LPWSTR)0x0) {
    StrCpyW(pWVar5,local_2dc);
    *(undefined1 *)(pWVar5 + 0xfa) = 1;
    pWVar5[0xfb] = L'\x01';
    pWVar5[0xfc] = L'\0';
    puVar2 = local_d2;
    for (iVar6 = 0x32; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    wParam_00 = 0;
    LVar4 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x146,0,0);
    if (0 < LVar4) {
      do {
        LVar4 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x150,wParam_00,0);
        hWnd = *(HWND *)(param_1 + 0xeb4);
        (&sStack_d4)[*(ushort *)(LVar4 + 0x1fa)] = 1;
        wParam_00 = wParam_00 + 1;
        LVar4 = SendMessageW(hWnd,0x146,0,0);
      } while ((int)wParam_00 < LVar4);
    }
    iVar6 = 1;
    do {
      if ((&sStack_d4)[iVar6] == 0) {
        local_2e0[0xfd] = (WCHAR)iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x65);
    local_2e0[0xfe] = L'\0';
    FUN_00430cb0(*(undefined4 *)(param_1 + 0x20d0));
    *(undefined4 *)(param_1 + 0x20f0) = 1;
    SendMessageW(*(HWND *)(param_1 + 0xeb4),0x14a,wParam,(LPARAM)local_2dc);
    SendMessageW(*(HWND *)(param_1 + 0xeb4),0x151,wParam,(LPARAM)local_2e0);
    SendMessageW(*(HWND *)(param_1 + 0xeb4),0x14e,wParam,0);
    *(WPARAM *)(param_1 + 0x20d0) = wParam;
    *(undefined4 *)(param_1 + 0x20f0) = 0;
    FUN_00430a50(0);
    FUN_0042fba0(1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00433530  FUN_00433530 ====

void __fastcall FUN_00433530(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  LRESULT LVar6;
  void *_Src;
  int *piVar7;
  int iVar8;
  CWnd *pCVar9;
  uint *puVar10;
  WPARAM WVar11;
  HWND hWnd;
  undefined2 local_244 [2];
  uint local_240;
  short *local_23c;
  void *local_238;
  uint local_234;
  void *local_230;
  undefined4 local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  wchar_t local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062686b;
  local_10 = ExceptionList;
  uVar4 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  FUN_00446a20(1);
  local_238 = (void *)0x0;
  if (DAT_006e6408 != 0) {
    FUN_00431d80(uVar4);
  }
  uVar5 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x146,0,0);
  uVar4 = uVar5 & 0xffff;
  local_234 = uVar4;
  if (((short)uVar5 == 0) || (local_238 = _malloc(uVar4 * 0x4080), local_238 != (void *)0x0)) {
    FUN_00430cb0(*(undefined4 *)(param_1 + 0x20d0));
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
    local_23c = (short *)(DAT_006e63e4 + 0x40);
    local_230 = (void *)0x0;
    do {
      if (*local_23c == 4) {
        local_240 = (uint)(ushort)local_23c[2];
        if (local_23c[2] == 0) {
          if ((short)uVar4 == 0) goto LAB_004336c2;
          LVar6 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x150,0,0);
          *(uint *)(local_23c + 2) = (uint)*(ushort *)(LVar6 + 0x1fa);
        }
        else {
          WVar11 = 0;
          if ((short)local_234 != 0) {
            do {
              LVar6 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x150,WVar11,0);
              if ((short)local_240 == *(short *)(LVar6 + 0x1fa)) {
                if (*(short *)(LVar6 + 0x1f6) != 1) goto LAB_004336c2;
                break;
              }
              WVar11 = WVar11 + 1;
            } while ((int)WVar11 < (int)(local_234 & 0xffff));
          }
          *local_23c = 0;
          FUN_00438db0(local_230);
        }
        FUN_004184e0(1);
      }
LAB_004336c2:
      local_230 = (void *)((int)local_230 + 1);
      local_23c = local_23c + 8;
      uVar4 = local_234;
    } while ((int)local_230 < 0x800);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
    WVar11 = 0;
    if ((short)local_234 != 0) {
      local_230 = local_238;
      do {
        _Src = (void *)SendMessageW(*(HWND *)(param_1 + 0xeb4),0x150,WVar11,0);
        *(undefined2 *)((int)_Src + 0x1f6) = 0;
        FID_conflict__memcpy(local_230,_Src,0x4080);
        local_230 = (void *)((int)local_230 + 0x4080);
        WVar11 = WVar11 + 1;
      } while ((int)WVar11 < (int)(local_234 & 0xffff));
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
    _free(DAT_006e63e8);
    DAT_006e63ec = (short)local_234;
    DAT_006e63e8 = local_238;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  }
  piVar7 = (int *)FUN_00454eae();
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004029d0(0x80004005);
  }
  iVar8 = (**(code **)(*piVar7 + 0xc))();
  local_238 = (void *)(iVar8 + 0x10);
  uVar1 = *(ushort *)(param_1 + 0x2096);
  local_8 = 0;
  if ((uVar1 < 0x100) || (0x111 < uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined2 *)(&DAT_00654090 + (uint)uVar1 * 2);
  }
  local_22c = CONCAT22(uVar3,*(short *)(param_1 + 0x20e0));
  uVar4 = (uint)(ushort)(*(short *)(param_1 + 0x2094) * 0x200 + uVar1);
  local_228 = 0;
  sVar2 = *(short *)(param_1 + 0x20e0);
  local_240 = uVar4;
  if (*(int *)(DAT_006e63f0 + 4 + uVar4 * 8) != 0) {
    _free(*(void **)(DAT_006e63f0 + uVar4 * 8));
    DAT_006e63f4 = DAT_006e63f4 - *(int *)(DAT_006e63f0 + 4 + uVar4 * 8);
    *(undefined4 *)(DAT_006e63f0 + 4 + uVar4 * 8) = 0;
    sVar2 = (short)local_22c;
  }
  if (sVar2 == 2) {
    LVar6 = SendMessageW(*(HWND *)(param_1 + 0x218c),0xf0,0,0);
    if (LVar6 == 1) {
      local_228 = *(uint *)(param_1 + 0x20e4);
      sVar2 = FUN_00402380(local_228);
      if (*(short *)(param_1 + 0x2096) == sVar2) {
        local_22c = local_22c & 0xffff0000;
      }
      if (*(int *)(param_1 + 0x20e4) == 0) {
        local_22c = local_22c & 0xffff0000;
      }
    }
    else {
      LVar6 = SendMessageW(*(HWND *)(param_1 + 0x2118),0x147,0,0);
      if (LVar6 == 0) {
        local_228 = 0x171;
      }
      else {
        LVar6 = SendMessageW(*(HWND *)(param_1 + 0x2118),0x147,0,0);
        if (LVar6 == 1) {
          local_228 = 0x172;
        }
        else {
          LVar6 = SendMessageW(*(HWND *)(param_1 + 0x2118),0x147,0,0);
          if (LVar6 == 2) {
            local_228 = 0x173;
          }
          else {
            LVar6 = SendMessageW(*(HWND *)(param_1 + 0x2118),0x147,0,0);
            if (LVar6 == 3) {
              local_228 = 0x161;
            }
            else {
              LVar6 = SendMessageW(*(HWND *)(param_1 + 0x2118),0x147,0,0);
              if (LVar6 == 4) {
                local_228 = 0x162;
              }
            }
          }
        }
      }
    }
  }
  else if (sVar2 == 4) {
    LVar6 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x146,0,0);
    if (LVar6 == 0) {
      local_22c = local_22c & 0xffff0000;
    }
    else {
      local_228 = FUN_00439730(*(undefined4 *)(param_1 + 0x20d0));
      local_228 = local_228 & 0xffff;
      CWnd::GetWindowTextW((CWnd *)(param_1 + 0xd38),local_21c,0x104);
      _swscanf(local_21c,L"%d",local_244);
      local_22c = CONCAT22(local_244[0],(short)local_22c);
    }
  }
  else {
    if (sVar2 == 7) {
      hWnd = *(HWND *)(param_1 + 0xe40);
    }
    else {
      if (sVar2 != 8) goto LAB_00433a34;
      hWnd = *(HWND *)(param_1 + 0xf28);
    }
    local_228 = SendMessageW(hWnd,0x147,0,0);
  }
LAB_00433a34:
  pCVar9 = CWnd::GetDlgItem(DAT_006e639c,*(int *)(param_1 + 0x2098));
  FUN_00451c70((short)local_22c != 0,(short)local_22c != 0);
  if (local_22c._2_2_ == 0) {
    uVar3 = FUN_004023b0(local_240,&local_22c);
    FUN_00438520(pCVar9,uVar3);
  }
  else {
    FUN_004388d0(pCVar9,local_22c._2_2_,&local_22c);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  iVar8 = FUN_0043d970();
  puVar10 = (uint *)((iVar8 * 0x200 + 4 + uVar4) * 0x10 + DAT_006e63e4);
  *puVar10 = local_22c;
  puVar10[1] = local_228;
  puVar10[2] = local_224;
  puVar10[3] = local_220;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  FUN_00439360();
  FUN_0042fba0(0);
  FUN_004184e0(1);
  local_8 = 0xffffffff;
  piVar7 = (int *)((int)local_238 + -4);
  LOCK();
  iVar8 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar8 + -1 < 1) {
    (**(code **)(**(int **)((int)local_238 + -0x10) + 4))((undefined4 *)((int)local_238 + -0x10));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00433b60  FUN_00433b60 ====

void __fastcall FUN_00433b60(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  HWND hWnd;
  LRESULT LVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  LPWSTR pWVar8;
  int iVar9;
  WPARAM wParam;
  int local_2e4;
  LPWSTR local_2e0;
  short sStack_2dc;
  undefined4 local_2da [50];
  undefined2 local_210;
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  LVar4 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x146,0,0);
  if (LVar4 == 0) {
    *(undefined4 *)(param_1 + 0x20d0) = 0;
    CWnd::GetWindowTextW((CWnd *)(param_1 + 0xe94),&local_210,0x104);
    pcVar5 = (char *)&local_210;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if ((pcVar5 == (char *)((int)&local_210 + 1)) || (local_210 == L' ')) {
      *(int *)(param_1 + 0x20d4) = *(int *)(param_1 + 0x20d4) + 1;
      uVar3 = *(undefined4 *)(param_1 + 0x20d4);
      uVar6 = FUN_004438e0();
      puVar7 = (undefined4 *)FUN_00443910(&local_2e0,L"MACRO_NEW_PREFIX",uVar6);
      __swprintf(&local_210,L"%s%d",*puVar7,uVar3);
      pWVar8 = local_2e0 + -2;
      LOCK();
      iVar9 = *(int *)pWVar8;
      *(int *)pWVar8 = *(int *)pWVar8 + -1;
      UNLOCK();
      if (iVar9 == 1 || iVar9 + -1 < 0) {
        (**(code **)(**(int **)(local_2e0 + -8) + 4))(local_2e0 + -8);
      }
      LVar4 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x14c,0,(LPARAM)&local_210);
      if (LVar4 != -1) {
LAB_00433c52:
        Sleep(0x10);
        FUN_00431ab0();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    pWVar8 = _malloc(0x4080);
    local_2e0 = pWVar8;
    _memset(pWVar8,0,0x4080);
    StrCpyW(pWVar8,&local_210);
    *(undefined1 *)(pWVar8 + 0xfa) = 1;
    pWVar8[0xfb] = L'\x01';
    pWVar8[0xfc] = L'\0';
    puVar7 = local_2da;
    for (iVar9 = 0x32; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    wParam = 0;
    LVar4 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x146,0,0);
    if (0 < LVar4) {
      do {
        LVar4 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x150,wParam,0);
        hWnd = *(HWND *)(param_1 + 0xeb4);
        (&sStack_2dc)[*(ushort *)(LVar4 + 0x1fa)] = 1;
        wParam = wParam + 1;
        LVar4 = SendMessageW(hWnd,0x146,0,0);
      } while ((int)wParam < LVar4);
    }
    pWVar8 = local_2e0;
    iVar9 = 1;
    do {
      if ((&sStack_2dc)[iVar9] == 0) {
        local_2e0[0xfd] = (WCHAR)iVar9;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x65);
    local_2e0[0xfe] = L'\0';
    *(undefined4 *)(param_1 + 0x20f0) = 1;
    SendMessageW(*(HWND *)(param_1 + 0xeb4),0x14a,*(WPARAM *)(param_1 + 0x20d0),(LPARAM)&local_210);
    SendMessageW(*(HWND *)(param_1 + 0xeb4),0x151,*(WPARAM *)(param_1 + 0x20d0),(LPARAM)pWVar8);
    *(undefined4 *)(param_1 + 0x20f0) = 0;
    FUN_00430a50(0);
  }
  else {
    local_2e0 = (LPWSTR)SendMessageW(*(HWND *)(param_1 + 0xeb4),0x150,*(WPARAM *)(param_1 + 0x20d0),
                                     0);
    SendMessageW(*(HWND *)(param_1 + 0xeb4),0x144,*(WPARAM *)(param_1 + 0x20d0),0);
    CWnd::GetWindowTextW((CWnd *)(param_1 + 0xe94),&local_210,0x104);
    LVar4 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x14c,0,(LPARAM)&local_210);
    if (LVar4 != -1) {
      *(int *)(param_1 + 0x20d4) = *(int *)(param_1 + 0x20d4) + 1;
      uVar3 = *(undefined4 *)(param_1 + 0x20d4);
      uVar6 = FUN_004438e0();
      puVar7 = (undefined4 *)FUN_00443910(&local_2e4,L"MACRO_NEW_PREFIX",uVar6);
      __swprintf(&local_210,L"%s%d",*puVar7,uVar3);
      piVar1 = (int *)(local_2e4 + -4);
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1 || iVar9 + -1 < 0) {
        (**(code **)(**(int **)(local_2e4 + -0x10) + 4))((undefined4 *)(local_2e4 + -0x10));
      }
    }
    pcVar5 = (char *)&local_210;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if ((pcVar5 == (char *)((int)&local_210 + 1)) || (local_210 == L' ')) {
      *(int *)(param_1 + 0x20d4) = *(int *)(param_1 + 0x20d4) + 1;
      uVar3 = *(undefined4 *)(param_1 + 0x20d4);
      uVar6 = FUN_004438e0();
      puVar7 = (undefined4 *)FUN_00443910(&local_2e4,L"MACRO_NEW_PREFIX",uVar6);
      __swprintf(&local_210,L"%s%d",*puVar7,uVar3);
      piVar1 = (int *)(local_2e4 + -4);
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1 || iVar9 + -1 < 0) {
        (**(code **)(**(int **)(local_2e4 + -0x10) + 4))((undefined4 *)(local_2e4 + -0x10));
      }
      LVar4 = SendMessageW(*(HWND *)(param_1 + 0xeb4),0x14c,0,(LPARAM)&local_210);
      if (LVar4 != -1) goto LAB_00433c52;
    }
    SendMessageW(*(HWND *)(param_1 + 0xeb4),0x14a,*(WPARAM *)(param_1 + 0x20d0),(LPARAM)&local_210);
    pWVar8 = local_2e0;
    StrCpyW(local_2e0,&local_210);
    SendMessageW(*(HWND *)(param_1 + 0xeb4),0x151,*(WPARAM *)(param_1 + 0x20d0),(LPARAM)pWVar8);
  }
  FUN_0042fba0(1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00438eb0  FUN_00438eb0 ====

void __fastcall FUN_00438eb0(int param_1)

{
  LPCWSTR pWVar1;
  ushort uVar2;
  wchar_t wVar3;
  WCHAR WVar4;
  ushort uVar5;
  undefined2 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  LRESULT LVar12;
  wchar_t *pwVar13;
  void *pvVar14;
  LPCWSTR pWVar15;
  LPWSTR psz1;
  CWnd *pCVar16;
  uint *puVar17;
  size_t _Size;
  undefined8 uVar18;
  undefined4 local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  LPCWSTR local_220;
  wchar_t local_21c;
  undefined1 local_21a [518];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00626d76;
  local_10 = ExceptionList;
  local_14 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar7 = (int *)FUN_00454eae(local_14);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004029d0(0x80004005);
  }
  iVar8 = (**(code **)(*piVar7 + 0xc))();
  local_220 = (LPCWSTR)(iVar8 + 0x10);
  local_8 = 0;
  uVar18 = FUN_00436b00();
  pWVar15 = (LPCWSTR)((ulonglong)uVar18 >> 0x20);
  if ((int)uVar18 == 0) goto LAB_00439224;
  iVar8 = FUN_0043d970();
  if (iVar8 == -1) {
    uVar9 = FUN_004438e0();
    puVar10 = (undefined4 *)FUN_00443910(&local_224,L"APPLY_PROMPT",uVar9);
    local_8._0_1_ = 1;
    AfxMessageBox((wchar_t *)*puVar10,0,0);
    local_8 = (uint)local_8._1_3_ << 8;
    piVar7 = (int *)(local_224 - 4);
    LOCK();
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    pWVar15 = local_220;
    if (iVar8 == 1 || iVar8 + -1 < 0) {
      (**(code **)(**(int **)(local_224 - 0x10) + 4))((undefined4 *)(local_224 - 0x10));
      pWVar15 = local_220;
    }
    goto LAB_00439224;
  }
  uVar5 = FUN_00436ac0();
  uVar2 = *(ushort *)(param_1 + 0x7c2);
  if ((uVar2 < 0x100) || (0x111 < uVar2)) {
    local_234 = (uint)uVar5;
  }
  else {
    local_234 = CONCAT22(*(undefined2 *)(&DAT_00654090 + (uint)uVar2 * 2),uVar5);
  }
  uVar11 = (uint)(ushort)(*(short *)(param_1 + 0x7c0) * 0x200 + uVar2);
  local_230 = 0;
  local_224 = uVar11;
  if (*(int *)(DAT_006e63f0 + 4 + uVar11 * 8) != 0) {
    _free(*(void **)(DAT_006e63f0 + uVar11 * 8));
    DAT_006e63f4 = DAT_006e63f4 - *(int *)(DAT_006e63f0 + 4 + uVar11 * 8);
    *(undefined4 *)(DAT_006e63f0 + 4 + uVar11 * 8) = 0;
  }
  if (uVar5 == 2) {
    LVar12 = SendMessageW(*(HWND *)(param_1 + 0x764),0x147,0,0);
    local_230 = FUN_00402300(LVar12);
    local_230 = local_230 & 0xffff;
  }
  else if (uVar5 == 3) {
    CWnd::GetWindowTextW((CWnd *)(param_1 + 0x65c),&local_21c,0x104);
    pwVar13 = &local_21c;
    do {
      wVar3 = *pwVar13;
      pwVar13 = pwVar13 + 1;
    } while (wVar3 != L'\0');
    _Size = ((int)pwVar13 - (int)local_21a >> 1) * 2 + 2;
    pvVar14 = _malloc(_Size);
    *(void **)(DAT_006e63f0 + uVar11 * 8) = pvVar14;
    psz1 = *(LPWSTR *)(DAT_006e63f0 + uVar11 * 8);
    if (psz1 != (LPWSTR)0x0) {
      pWVar15 = &local_21c;
LAB_00439137:
      StrCpyW(psz1,pWVar15);
      *(size_t *)(DAT_006e63f0 + 4 + uVar11 * 8) = _Size;
      DAT_006e63f4 = DAT_006e63f4 + _Size;
    }
  }
  else if (uVar5 == 4) {
    uVar9 = FUN_0041c560();
    local_230 = FUN_00439730(uVar9);
    local_230 = local_230 & 0xffff;
  }
  else if (uVar5 == 6) {
    CWnd::GetWindowTextW
              ((CWnd *)(param_1 + 0x444),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_220);
    pWVar15 = local_220;
    do {
      WVar4 = *pWVar15;
      pWVar15 = pWVar15 + 1;
    } while (WVar4 != L'\0');
    _Size = ((int)pWVar15 - (int)(local_220 + 1) >> 1) * 2 + 2;
    pvVar14 = _malloc(_Size);
    *(void **)(DAT_006e63f0 + uVar11 * 8) = pvVar14;
    psz1 = *(LPWSTR *)(DAT_006e63f0 + uVar11 * 8);
    pWVar15 = local_220;
    if (psz1 != (LPWSTR)0x0) goto LAB_00439137;
  }
  pCVar16 = CWnd::GetDlgItem(DAT_006e639c,*(int *)(param_1 + 0x7c4));
  FUN_00451c70((short)local_234 != 0,0);
  if (local_234._2_2_ == 0) {
    uVar6 = FUN_004023b0(local_224);
    FUN_00438520(pCVar16,uVar6);
  }
  else {
    FUN_004388d0(pCVar16,local_234._2_2_,&local_234);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  iVar8 = FUN_0043d970();
  puVar17 = (uint *)((iVar8 * 0x200 + 4 + uVar11) * 0x10 + DAT_006e63e4);
  *puVar17 = local_234;
  puVar17[1] = local_230;
  puVar17[2] = local_22c;
  puVar17[3] = local_228;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  FUN_00436ad0(0);
  FUN_004184e0(1);
  pWVar15 = local_220;
LAB_00439224:
  local_8 = 0xffffffff;
  pWVar1 = pWVar15 + -2;
  LOCK();
  iVar8 = *(int *)pWVar1;
  *(int *)pWVar1 = *(int *)pWVar1 + -1;
  UNLOCK();
  if (iVar8 + -1 < 1) {
    (**(code **)(**(int **)(pWVar15 + -8) + 4))(pWVar15 + -8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 00439810  FUN_00439810 ====

void FUN_00439810(undefined4 param_1,ushort param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  puVar2 = _malloc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    else if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(short *)(puVar2 + 2) = (short)param_1;
    uVar1 = FUN_004396c0(param_1,param_3);
    *(undefined2 *)((int)puVar2 + 10) = uVar1;
    *(ushort *)(puVar2 + 3) = param_2;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e644c);
    *puVar2 = &DAT_006e6444;
    puVar2[1] = DAT_006e6448;
    *DAT_006e6448 = puVar2;
    DAT_006e6448 = puVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e644c);
  }
  return;
}


//==== FUNC 0043a860  FUN_0043a860 ====

void __thiscall FUN_0043a860(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  WPARAM wParam;
  DWORD DVar4;
  undefined4 uVar5;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_004460f0(1);
  if ((iVar1 < 2000) && (puVar2 = _malloc(8), puVar2 != (undefined4 *)0x0)) {
    if (1 < *(ushort *)((int)param_2 + 6)) {
      *(undefined2 *)((int)param_2 + 6) = 0;
    }
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    if ((param_5 != 0) && (iVar3 = FUN_00446150(2,0xffffffff), iVar3 != -1)) {
      iVar1 = iVar3 + 1;
    }
    wParam = FUN_00447010(iVar1,&DAT_0064f4fc);
    __swprintf(local_210,L"%d",*param_2);
    FUN_00447190(wParam,2,&DAT_0064bea0);
    if (0 < (int)wParam) {
      FUN_00447190(wParam - 1,2,local_210);
    }
    FUN_004039e0(*(undefined2 *)(param_2 + 1),local_210,0x104);
    FUN_00447190(wParam,0,local_210);
    FUN_00447190(wParam,1,(&PTR_DAT_006d891c)[*(ushort *)((int)param_2 + 6)]);
    FUN_00445630(wParam,puVar2);
    if (param_3 != 0) {
      uVar5 = 1;
      DVar4 = GetSysColor(0x11);
      FUN_00446570(wParam,0,DVar4,uVar5);
      uVar5 = 1;
      DVar4 = GetSysColor(0x11);
      FUN_00446570(wParam,1,DVar4,uVar5);
      SendMessageW(*(HWND *)(param_1 + 0xf88),0x1013,wParam,0);
      FUN_00446210(wParam,2);
      CWnd::SetFocus((CWnd *)(param_1 + 0xf68));
    }
    if (param_4 != 0) {
      FUN_0043a0b0(1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 0043baa0  FUN_0043baa0 ====

void __fastcall FUN_0043baa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  LPWSTR pWVar5;
  WPARAM wParam;
  int iVar6;
  LPWSTR local_2f0;
  _SYSTEMTIME local_2ec;
  wchar_t local_2dc [260];
  short sStack_d4;
  undefined4 local_d2 [50];
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_004460f0(1);
  if (99 < iVar1) {
    uVar2 = FUN_004438e0();
    puVar3 = (undefined4 *)FUN_00443910(&local_2f0,L"MACRO_ERR_MAX",uVar2);
    __swprintf(local_2dc,(wchar_t *)*puVar3,100);
    pWVar5 = local_2f0 + -2;
    LOCK();
    iVar1 = *(int *)pWVar5;
    *(int *)pWVar5 = *(int *)pWVar5 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(**(int **)(local_2f0 + -8) + 4))(local_2f0 + -8);
    }
    AfxMessageBox(local_2dc,0,0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  GetLocalTime(&local_2ec);
  uVar2 = FUN_004438e0();
  puVar3 = (undefined4 *)FUN_00443910(&local_2f0,L"MACRO_NEW_PREFIX",uVar2);
  __swprintf(local_2dc,L"%s%02d%02d%02d%03d",*puVar3,(uint)local_2ec.wHour,(uint)local_2ec.wMinute,
             (uint)local_2ec.wSecond,(uint)local_2ec.wMilliseconds);
  pWVar5 = local_2f0 + -2;
  LOCK();
  iVar4 = *(int *)pWVar5;
  *(int *)pWVar5 = *(int *)pWVar5 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(local_2f0 + -8) + 4))(local_2f0 + -8);
  }
  iVar4 = FUN_00446870(0,local_2dc);
  if (iVar4 != -1) {
    Sleep(0x10);
    FUN_0043baa0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pWVar5 = _malloc(0x4080);
  local_2f0 = pWVar5;
  _memset(pWVar5,0,0x4080);
  if (pWVar5 != (LPWSTR)0x0) {
    StrCpyW(pWVar5,local_2dc);
    pWVar5[0xfb] = L'\x01';
    pWVar5[0xfc] = L'\0';
    puVar3 = local_d2;
    for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar6 = 0;
    iVar4 = FUN_004460f0(1);
    if (0 < iVar4) {
      do {
        iVar4 = FUN_004445b0(iVar6);
        (&sStack_d4)[*(ushort *)(iVar4 + 0x1fa)] = 1;
        iVar6 = iVar6 + 1;
        iVar4 = FUN_004460f0(1);
      } while (iVar6 < iVar4);
    }
    iVar4 = 1;
    do {
      if ((&sStack_d4)[iVar4] == 0) {
        local_2f0[0xfd] = (WCHAR)iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x65);
    local_2f0[0xfe] = L'\0';
    uVar2 = FUN_00446150(2,0xffffffff);
    FUN_0043a0f0(uVar2);
    *(undefined4 *)(param_1 + 0x1114) = 1;
    wParam = FUN_00447010(iVar1,&DAT_0064e1e0);
    FUN_00447190(wParam,0,local_2dc);
    FUN_00447190(wParam,2,PTR_u_Play_macro_once_006d8910);
    FUN_00445630(wParam,local_2f0);
    SendMessageW(*(HWND *)(param_1 + 0x105c),0x1013,wParam,0);
    FUN_00446210(wParam,2);
    CWnd::SetFocus((CWnd *)(param_1 + 0x103c));
    *(undefined4 *)(param_1 + 0x1114) = 0;
    FUN_0043ace0(0);
    FUN_00447840(wParam,0);
    FUN_0043a0b0(1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== FUNC 0043c300  FUN_0043c300 ====

void FUN_0043c300(void)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  void *_Src;
  short *psVar8;
  undefined2 uVar9;
  uint uVar10;
  void *_Dst;
  void *local_20;
  uint local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00626fe8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((DAT_006e6408 == 0) ||
      (FUN_0043be40(DAT_006dfb80 ^ (uint)&stack0xfffffffc), DAT_006e6408 == 0)) &&
     (iVar4 = FUN_0043a0e0(), iVar4 != 0)) {
    iVar4 = FUN_0043d970();
    if (iVar4 == -1) {
      uVar5 = FUN_004438e0();
      puVar6 = (undefined4 *)FUN_00443910(&local_20,L"APPLY_PROMPT",uVar5);
      local_8 = 0;
      AfxMessageBox((wchar_t *)*puVar6,0,0);
      local_8 = 0xffffffff;
      piVar1 = (int *)((int)local_20 + -4);
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)((int)local_20 + -0x10) + 4))((undefined4 *)((int)local_20 + -0x10));
        ExceptionList = local_10;
        return;
      }
    }
    else {
      iVar4 = FUN_00444630();
      if ((-1 < iVar4) && (iVar4 = FUN_004460f0(1), iVar4 != 0)) {
        FUN_00446a20(1);
      }
      iVar4 = FUN_00444630();
      if ((-1 < iVar4) && (iVar4 = FUN_004460f0(1), iVar4 != 0)) {
        FUN_00446a20(1);
      }
      uVar3 = FUN_004460f0(1);
      uVar10 = (uint)uVar3;
      local_1c = uVar10;
      if ((uVar3 == 0) || (local_20 = _malloc(uVar10 * 0x4080), local_20 != (void *)0x0)) {
        uVar5 = FUN_00446150(2,0xffffffff);
        FUN_0043a0f0(uVar5);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
        psVar8 = (short *)(DAT_006e63e4 + 0x40);
        local_18 = 0;
        do {
          if (*psVar8 == 4) {
            sVar2 = psVar8[2];
            if (sVar2 == 0) {
              if ((short)uVar10 != 0) {
                iVar4 = FUN_004445b0(0);
                *(uint *)(psVar8 + 2) = (uint)*(ushort *)(iVar4 + 0x1fa);
                FUN_004184e0(1);
              }
            }
            else {
              iVar4 = 0;
              if ((uVar10 & 0xffff) != 0) {
                do {
                  iVar7 = FUN_004445b0(iVar4);
                  if (sVar2 == *(short *)(iVar7 + 0x1fa)) {
                    uVar10 = local_1c;
                    if (*(short *)(iVar7 + 0x1f6) != 1) goto LAB_0043c537;
                    break;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < (int)(uVar10 & 0xffff));
              }
              *psVar8 = 0;
              FUN_00438db0(local_18);
              FUN_004184e0(1);
              uVar10 = local_1c;
            }
          }
LAB_0043c537:
          uVar9 = (undefined2)uVar10;
          local_18 = local_18 + 1;
          psVar8 = psVar8 + 8;
        } while (local_18 < 0x800);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
        iVar4 = 0;
        _Dst = local_20;
        if ((uVar10 & 0xffff) != 0) {
          do {
            _Src = (void *)FUN_004445b0(iVar4);
            *(undefined2 *)((int)_Src + 0x1f6) = 0;
            FID_conflict__memcpy(_Dst,_Src,0x4080);
            iVar4 = iVar4 + 1;
            _Dst = (void *)((int)_Dst + 0x4080);
          } while (iVar4 < (int)(uVar10 & 0xffff));
          uVar9 = (undefined2)local_1c;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
        _free(DAT_006e63e8);
        DAT_006e63e8 = local_20;
        DAT_006e63ec = uVar9;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
      }
      FUN_0043a0b0(0);
      FUN_004184e0(1);
    }
  }
  ExceptionList = local_10;
  return;
}


//==== FUNC 0043c640  FUN_0043c640 ====

void FUN_0043c640(int param_1)

{
  void *_Dst;
  undefined4 uVar1;
  ushort uVar2;
  
  if (param_1 == 0) {
    FUN_0043a160();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  if ((DAT_006e63e4 != 0) && (uVar2 = 0, DAT_006e63ec != 0)) {
    do {
      _Dst = _malloc(0x4080);
      if (_Dst != (void *)0x0) {
        FID_conflict__memcpy(_Dst,(void *)((uint)uVar2 * 0x4080 + DAT_006e63e8),0x4080);
        *(undefined2 *)((int)_Dst + 0x1f6) = 0;
        uVar1 = FUN_00447010((uint)uVar2,&DAT_0064e1e0);
        FUN_00447190(uVar1,0,_Dst);
        FUN_00447190(uVar1,2,(&PTR_u_Play_macro_once_006d8910)[*(ushort *)((int)_Dst + 0x1f8)]);
        FUN_00445630(uVar1,_Dst);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_006e63ec);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006e63cc);
  FUN_0043ace0(param_1);
  return;
}


//==== FUNC 00454eb4  Allocate ====

/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall CAfxStringMgr::Allocate(int,int)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release */

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


//==== FUNC 004551f9  AllocateHeap ====

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall ATL::CTempBuffer<char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall AllocateHeap(undefined4 *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004029d0(0x8007000e);
  }
  *param_1 = pvVar1;
  return;
}


//==== FUNC 0045521f  AllocateHeap ====

/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall ATL::CTempBuffer<char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall AllocateHeap(undefined4 *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004029d0(0x8007000e);
  }
  *param_1 = pvVar1;
  return;
}


//==== FUNC 0061ed48  __crtCompareStringA_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *pcVar1;
  byte *pbVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  uint uVar5;
  undefined4 *puVar6;
  int *in_ECX;
  char *pcVar7;
  int iVar8;
  byte *in_EDX;
  LPWSTR lpWideCharStr;
  PCNZWCH local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)param_3;
  pcVar7 = param_4;
  if ((int)param_4 < 1) {
    if ((int)param_4 < -1) goto LAB_0061efa4;
  }
  else {
    do {
      pcVar7 = pcVar7 + -1;
      if (*pcVar1 == '\0') goto LAB_0061ed7f;
      pcVar1 = pcVar1 + 1;
    } while (pcVar7 != (char *)0x0);
    pcVar7 = (char *)0xffffffff;
LAB_0061ed7f:
    param_4 = param_4 + (-1 - (int)pcVar7);
  }
  pbVar2 = in_EDX;
  iVar8 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_0061efa4;
  }
  else {
    do {
      iVar8 = iVar8 + -1;
      if (*pbVar2 == 0) goto LAB_0061eda2;
      pbVar2 = pbVar2 + 1;
    } while (iVar8 != 0);
    iVar8 = -1;
LAB_0061eda2:
    param_5 = param_5 + (-1 - iVar8);
  }
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_4 == (char *)0x0) || (param_5 == 0)) {
    if ((param_4 == (char *)param_5) ||
       (((1 < param_5 || (1 < (int)param_4)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_0061efa4;
    if (0 < (int)param_4) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*(byte *)param_3 < *pBVar4 || (pBVar4[1] < *(byte *)param_3))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_0061efa4;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_0061efa4;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)param_3,(int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_0061efa4;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_20 = (PCNZWCH)0x0;
  }
  else {
    uVar5 = cchWideChar * 2 + 8;
    if (uVar5 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffc4;
      local_20 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_0061eeda:
        local_20 = (PCNZWCH)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar5);
      local_20 = (PCNZWCH)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_0061eeda;
      }
    }
  }
  if (local_20 == (PCNZWCH)0x0) goto LAB_0061efa4;
  iVar8 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)param_3,(int)param_4,local_20,cchWideChar);
  if ((iVar8 != 0) &&
     (uVar5 = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_5,(LPWSTR)0x0,0), uVar5 != 0)
     ) {
    if (((int)uVar5 < 1) || (0xffffffe0 / uVar5 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar5 * 2 + 8;
      if (_Size < 0x401) {
        puVar6 = (undefined4 *)&stack0xffffffc4;
        lpWideCharStr = (LPWSTR)&stack0xffffffc4;
        if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_0061ef5a:
          lpWideCharStr = (LPWSTR)(puVar6 + 2);
        }
      }
      else {
        puVar6 = _malloc(_Size);
        lpWideCharStr = (LPWSTR)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xdddd;
          goto LAB_0061ef5a;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar8 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_5,lpWideCharStr,uVar5);
      if (iVar8 != 0) {
        CompareStringW((LCID)param_1,param_2,local_20,cchWideChar,lpWideCharStr,uVar5);
      }
      __freea(lpWideCharStr);
    }
  }
  __freea(local_20);
LAB_0061efa4:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}


//==== FUNC 0061f5b1  __strdup ====

/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2010 Release */

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


//==== FUNC 005f70de  _wcsupr_s_l_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _wcsupr_s_l_stat(wchar_t *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2010 Release */

int __cdecl _wcsupr_s_l_stat(wchar_t *param_1,uint param_2,localeinfo_struct *param_3)

{
  uint _Size;
  wchar_t wVar1;
  uint uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  wchar_t *in_ECX;
  wchar_t *_LpDestStr;
  int iVar6;
  
  uVar2 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  _LpDestStr = (wchar_t *)0x0;
  if (in_ECX == (wchar_t *)0x0) {
LAB_005f70fa:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    pwVar4 = (wchar_t *)_wcsnlen(in_ECX,(size_t)param_1);
    if (param_1 <= pwVar4) {
      *in_ECX = L'\0';
      goto LAB_005f70fa;
    }
    if (*(LPCWSTR *)(*(int *)param_2 + 0x14) == (LPCWSTR)0x0) {
      wVar1 = *in_ECX;
      while (wVar1 != L'\0') {
        wVar1 = *in_ECX;
        if ((0x60 < (ushort)wVar1) && ((ushort)wVar1 < 0x7b)) {
          *in_ECX = wVar1 + L'￠';
        }
        in_ECX = in_ECX + 1;
        wVar1 = *in_ECX;
      }
      goto LAB_005f723c;
    }
    pwVar4 = (wchar_t *)
             ___crtLCMapStringW(*(LPCWSTR *)(*(int *)param_2 + 0x14),0x200,in_ECX,-1,(LPWSTR)0x0,0);
    if (pwVar4 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_005f7182:
      __errno();
      goto LAB_005f723c;
    }
    if (pwVar4 <= param_1) {
      if ((0 < (int)pwVar4) && (1 < 0xffffffe0U / (uint)pwVar4)) {
        _Size = (int)pwVar4 * 2 + 8;
        if (_Size < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffe8;
          _LpDestStr = (wchar_t *)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_005f71e3:
            _LpDestStr = (wchar_t *)(puVar5 + 2);
          }
        }
        else {
          puVar5 = _malloc(_Size);
          _LpDestStr = (wchar_t *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_005f71e3;
          }
        }
      }
      if (_LpDestStr != (wchar_t *)0x0) {
        iVar6 = ___crtLCMapStringW(*(LPCWSTR *)(*(int *)param_2 + 0x14),0x200,in_ECX,-1,_LpDestStr,
                                   (int)pwVar4);
        if (iVar6 == 0) {
          piVar3 = __errno();
          *piVar3 = 0x2a;
        }
        else {
          _wcscpy_s(in_ECX,(rsize_t)param_1,_LpDestStr);
        }
        __freea(_LpDestStr);
        goto LAB_005f723c;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_005f7182;
    }
    *in_ECX = L'\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  FUN_005fa769();
LAB_005f723c:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}


//==== FUNC 00498056  FUN_00498056 ====

void FUN_00498056(size_t param_1)

{
  _malloc(param_1);
  return;
}


//==== FUNC 004aa096  LoadFromResource ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    public: int __thiscall CTagManager::LoadFromResource(wchar_t const *,wchar_t const *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CTagManager::LoadFromResource(CTagManager *this,wchar_t *param_1,wchar_t *param_2)

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
  int iVar6;
  
  uVar1 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) goto LAB_004aa16f;
  pAVar2 = AfxGetModuleState();
  hModule = *(HMODULE *)(pAVar2 + 0xc);
  hResInfo = FindResourceW(hModule,param_1,param_2);
  if ((hResInfo == (HRSRC)0x0) ||
     (hResData = LoadResource(hModule,hResInfo), hResData == (HGLOBAL)0x0)) goto LAB_004aa16f;
  _Str = LockResource(hResData);
  if (_Str == (char *)0x0) goto LAB_004aa0f9;
  sVar3 = _strlen(_Str);
  _Size = sVar3 + 9 + sVar3 + 1;
  if ((int)_Size < 0x401) {
    puVar4 = (undefined4 *)&stack0xffffffe0;
    _Memory = (wchar_t *)&stack0xffffffe0;
    if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_004aa137:
      _Memory = (wchar_t *)(puVar4 + 2);
    }
  }
  else {
    puVar4 = _malloc(_Size);
    _Memory = (wchar_t *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xdddd;
      goto LAB_004aa137;
    }
  }
  if (_Memory == (wchar_t *)0x0) {
LAB_004aa0f9:
                    /* WARNING: Subroutine does not return */
    FUN_0045349b();
  }
  pwVar5 = AfxA2WHelper(_Memory,_Str,sVar3 + 1);
  if (pwVar5 != (wchar_t *)0x0) {
    SetBuffer(this,pwVar5);
  }
  FreeResource(hResData);
  __freea(_Memory);
LAB_004aa16f:
  iVar6 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar6;
}


//==== FUNC 005a6a70  BuildPropPageArray ====

/* Library Function - Single Match
    public: virtual void __thiscall CPropertySheet::BuildPropPageArray(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPropertySheet::BuildPropPageArray(CPropertySheet *this)

{
  uint uVar1;
  CPropertyPage *pCVar2;
  _PROPSHEETPAGEA *p_Var3;
  size_t _Size;
  _PROPSHEETPAGEA *p_Var4;
  int iVar5;
  _PROPSHEETPAGEA *p_Var6;
  int local_8;
  
  _free(*(void **)(this + 0x94));
  iVar5 = 0;
  _Size = 0;
  *(undefined4 *)(this + 0x94) = 0;
  if (0 < *(int *)(this + 0xb0)) {
    do {
      pCVar2 = GetPage(this,iVar5);
      _Size = _Size + **(int **)(pCVar2 + 0x94);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 0xb0));
  }
  p_Var3 = _malloc(_Size);
  if (p_Var3 == (_PROPSHEETPAGEA *)0x0) {
LAB_005a6ac4:
                    /* WARNING: Subroutine does not return */
    FUN_00453463();
  }
  p_Var4 = p_Var3 + _Size;
  if (p_Var4 < p_Var3) {
                    /* WARNING: Subroutine does not return */
    FUN_0045349b();
  }
  uVar1 = *(uint *)(this + 0x78);
  local_8 = 0;
  *(_PROPSHEETPAGEA **)(this + 0x94) = p_Var3;
  p_Var6 = p_Var3;
  if (0 < *(int *)(this + 0xb0)) {
    do {
      pCVar2 = GetPage(this,local_8);
      if ((p_Var6 < p_Var3) || (p_Var4 < p_Var6)) goto LAB_005a6ac4;
      FUN_00404620(p_Var6,(int)p_Var4 - (int)p_Var6,*(undefined4 **)(pCVar2 + 0x94),
                   **(undefined4 **)(pCVar2 + 0x94));
      iVar5 = *(int *)(pCVar2 + 0xa0);
      if (*(int *)(iVar5 + -0xc) != 0) {
        *(uint *)(p_Var6 + 4) = *(uint *)(p_Var6 + 4) | 0x1000;
        *(int *)(p_Var6 + 0x28) = iVar5;
      }
      iVar5 = *(int *)(pCVar2 + 0xa4);
      if (*(int *)(iVar5 + -0xc) != 0) {
        *(uint *)(p_Var6 + 4) = *(uint *)(p_Var6 + 4) | 0x2000;
        *(int *)(p_Var6 + 0x2c) = iVar5;
      }
      CPropertyPage::PreProcessPageTemplate(pCVar2,p_Var6,uVar1 & 0x1000020);
      p_Var6 = p_Var6 + *(int *)p_Var6;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(this + 0xb0));
  }
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(this + 0xb0);
  return;
}


//==== FUNC 005fe6c9  _Name_base ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static char const * __cdecl type_info::_Name_base(class type_info const *,struct
   __type_info_node *)
   
   Library: Visual Studio 2010 Release */

char * __cdecl type_info::_Name_base(type_info *param_1,__type_info_node *param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 *_Memory;
  char *_Dst;
  errno_t eVar2;
  size_t sVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    _Str = (char *)___unDName(0,param_1 + 9,0,_malloc,_free,0x2800);
    if (_Str == (char *)0x0) {
      return (char *)0x0;
    }
    sVar1 = _strlen(_Str);
    while ((sVar1 != 0 && (sVar3 = sVar1 - 1, _Str[sVar3] == ' '))) {
      _Str[sVar3] = '\0';
      sVar1 = sVar3;
    }
    __lock(0xe);
    if ((*(int *)(param_1 + 4) == 0) && (_Memory = _malloc(8), _Memory != (undefined4 *)0x0)) {
      _Dst = _malloc(sVar1 + 1);
      *(char **)(param_1 + 4) = _Dst;
      if (_Dst == (char *)0x0) {
        _free(_Memory);
      }
      else {
        eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Str);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *_Memory = *(undefined4 *)(param_1 + 4);
        _Memory[1] = *(undefined4 *)(param_2 + 4);
        *(undefined4 **)(param_2 + 4) = _Memory;
      }
    }
    _free(_Str);
    FUN_005fe7b2();
  }
  return *(char **)(param_1 + 4);
}


//==== FUNC 005fe85e  _Name_base_internal ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static char const * __cdecl type_info::_Name_base_internal(class type_info const
   *,struct __type_info_node *)
   
   Library: Visual Studio 2010 Release */

char * __cdecl type_info::_Name_base_internal(type_info *param_1,__type_info_node *param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 *_Memory;
  char *_Dst;
  errno_t eVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006d2fb0;
  uStack_c = 0x5fe86a;
  if (*(int *)(param_1 + 4) == 0) {
    __lock(0xe);
    local_8 = (undefined *)0x0;
    if (*(int *)(param_1 + 4) == 0) {
      _Str = (char *)___unDNameHelper(0,param_1 + 9,0,0x2800);
      if (_Str == (char *)0x0) {
        __local_unwind4(&DAT_006dfb80,local_14,0xfffffffe);
        return (char *)0x0;
      }
      sVar1 = _strlen(_Str);
      while ((sVar1 != 0 && (_Str[sVar1 - 1] == ' '))) {
        _Str[sVar1 - 1] = '\0';
        sVar1 = sVar1 - 1;
      }
      _Memory = _malloc(8);
      if (_Memory != (undefined4 *)0x0) {
        _Dst = _malloc(sVar1 + 1);
        if (_Dst == (char *)0x0) {
          _free(_Memory);
        }
        else {
          eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Str);
          if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(param_1 + 4) = _Dst;
          *_Memory = _Dst;
          _Memory[1] = *(undefined4 *)(param_2 + 4);
          *(undefined4 **)(param_2 + 4) = _Memory;
        }
      }
      _free(_Str);
    }
    local_8 = (undefined *)0xfffffffe;
    FUN_005fe961();
  }
  return *(char **)(param_1 + 4);
}


//==== FUNC 0061843b  __crtGetLocaleInfoA_stat ====

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   *,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtGetLocaleInfoA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5)

{
  uint _Size;
  UINT CodePage;
  uint uVar1;
  uint cchData;
  LPWSTR lpLCData;
  int iVar2;
  
  uVar1 = DAT_006dfb80 ^ (uint)&stack0xfffffffc;
  CodePage = param_1->locinfo->lc_codepage;
  cchData = GetLocaleInfoW(param_2,param_3,(LPWSTR)0x0,0);
  if (cchData != 0) {
    if (((int)cchData < 1) || (0xffffffe0 / cchData < 2)) {
      lpLCData = (LPWSTR)0x0;
    }
    else {
      _Size = cchData * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x1c) goto LAB_00618503;
        lpLCData = (LPWSTR)&stack0xffffffec;
      }
      else {
        lpLCData = _malloc(_Size);
        if (lpLCData != (LPWSTR)0x0) {
          lpLCData[0] = L'\xdddd';
          lpLCData[1] = L'\0';
          lpLCData = lpLCData + 4;
        }
      }
    }
    if (lpLCData != (LPWSTR)0x0) {
      iVar2 = GetLocaleInfoW(param_2,param_3,lpLCData,cchData);
      if (iVar2 != 0) {
        if (param_5 == 0) {
          param_5 = 0;
          param_4 = (LPSTR)0x0;
        }
        WideCharToMultiByte(CodePage,0,lpLCData,-1,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      __freea(lpLCData);
    }
  }
LAB_00618503:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


//==== FUNC 004043e0  FUN_004043e0 ====

void FUN_004043e0(size_t param_1)

{
  _malloc(param_1);
  return;
}


//==== FUNC 005fe82b  ___unDNameHelper ====

/* Library Function - Single Match
    ___unDNameHelper
   
   Library: Visual Studio 2010 Release */

void ___unDNameHelper(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((short)param_4 == 0) {
    param_4 = 0x2800;
  }
  ___unDName(param_1,param_2,param_3,_malloc,_free,param_4);
  return;
}


//==== FUNC 00404110  FUN_00404110 ====

undefined4 FUN_00404110(void)

{
  DWORD DVar1;
  LPOSVERSIONINFOW lpVersionInformation;
  undefined4 uVar2;
  
  DVar1 = GetVersion();
  if (DVar1 < 0x80000000) {
    uVar2 = 1;
    lpVersionInformation = _malloc(0x114);
    if (lpVersionInformation == (LPOSVERSIONINFOW)0x0) {
      return 1;
    }
    _memset(lpVersionInformation,0,0x114);
    lpVersionInformation->dwOSVersionInfoSize = 0x114;
    GetVersionExW(lpVersionInformation);
    if (lpVersionInformation->dwMajorVersion == 4) {
      _free(lpVersionInformation);
      return 5;
    }
    if (lpVersionInformation->dwMajorVersion == 5) {
      if (lpVersionInformation->dwMinorVersion == 0) {
        _free(lpVersionInformation);
        return 6;
      }
      if (lpVersionInformation->dwMinorVersion == 1) {
        _free(lpVersionInformation);
        return 7;
      }
    }
  }
  else {
    if ((byte)DVar1 < 4) {
      return 0;
    }
    uVar2 = 2;
    lpVersionInformation = _malloc(0x114);
    if (lpVersionInformation == (LPOSVERSIONINFOW)0x0) {
      return 2;
    }
    _memset(lpVersionInformation,0,0x114);
    lpVersionInformation->dwOSVersionInfoSize = 0x114;
    GetVersionExW(lpVersionInformation);
    if (lpVersionInformation->dwMajorVersion == 4) {
      if (lpVersionInformation->dwMinorVersion == 10) {
        _free(lpVersionInformation);
        return 3;
      }
      if (lpVersionInformation->dwMinorVersion == 0x5a) {
        uVar2 = 4;
      }
    }
  }
  _free(lpVersionInformation);
  return uVar2;
}


//==== FUNC 00606126  __lock ====

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2010 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_006e0838)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_006e0838)[_File * 2]);
  return;
}


//==== FUNC 005fa180  __getptd ====

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2010 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}


//==== FUNC 005fa9d5  ___updatetmbcinfo ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2010 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_006e0588) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_006e0490) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_006e0068)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_006e0490;
      lpAddend = (pthreadmbcinfo)PTR_DAT_006e0490;
      InterlockedIncrement((LONG *)PTR_DAT_006e0490);
    }
    FUN_005faa70();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}


//==== FUNC 005fb194  ___updatetlocinfo ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2010 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_006e0588) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    ptVar2 = (pthreadlocinfo)&p_Var1->ptlocinfo;
    __updatetlocinfoEx_nolock(ptVar2,PTR_DAT_006e07d0);
    FUN_005fb201();
  }
  else {
    p_Var1 = __getptd();
    ptVar2 = p_Var1->ptlocinfo;
  }
  if (ptVar2 == (pthreadlocinfo)0x0) {
    __amsg_exit(0x20);
  }
  return ptVar2;
}


//==== FUNC 005eda9b  ___tmainCRTStartup ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2010 Release */

int ___tmainCRTStartup(void)

{
  int iVar1;
  undefined4 uVar2;
  _STARTUPINFOW local_6c;
  int local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006d2718;
  uStack_c = 0x5edaa7;
  GetStartupInfoW(&local_6c);
  if (DAT_006f0d68 == 0) {
    HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  }
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
  local_8 = (undefined *)0x0;
  iVar1 = __ioinit();
  if (iVar1 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_006f0d64 = GetCommandLineW();
  DAT_006eebb8 = ___crtGetEnvironmentStringsW();
  iVar1 = __wsetargv();
  if (iVar1 < 0) {
    __amsg_exit(8);
  }
  iVar1 = FUN_005f9968();
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
  local_24 = FUN_0062215e(0x400000,0,uVar2,local_6c.wShowWindow);
  if (local_20 != 0) {
    __cexit();
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  _exit(local_24);
}


//==== FUNC 0061f15d  copy_environ ====

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2010 Release */

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
    if (puVar2 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar3 = (char *)*in_EAX;
    puVar5 = puVar2;
    if (pcVar3 != (char *)0x0) {
      do {
        pcVar3 = __strdup(pcVar3);
        *puVar5 = pcVar3;
        puVar5 = puVar5 + 1;
        pcVar3 = *(char **)(((int)in_EAX - (int)puVar2) + (int)puVar5);
      } while (pcVar3 != (char *)0x0);
    }
    *puVar5 = 0;
  }
  return puVar2;
}


//==== FUNC 006032c4  __getstream ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getstream
   
   Library: Visual Studio 2010 Release */

FILE * __cdecl __getstream(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  BOOL BVar5;
  int _Index;
  FILE *pFVar6;
  FILE *_File;
  
  pFVar6 = (FILE *)0x0;
  __lock(1);
  _Index = 0;
  do {
    _File = pFVar6;
    if (DAT_006f0d60 <= _Index) {
LAB_006033bd:
      if (_File != (FILE *)0x0) {
        _File->_flag = _File->_flag & 0x8000;
        _File->_cnt = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_006033ee();
      return _File;
    }
    piVar1 = (int *)(DAT_006efd54 + _Index * 4);
    if (*piVar1 == 0) {
      pvVar4 = __malloc_crt(0x38);
      *(void **)(DAT_006efd54 + _Index * 4) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        BVar5 = InitializeCriticalSectionAndSpinCount
                          ((LPCRITICAL_SECTION)(*(int *)(DAT_006efd54 + _Index * 4) + 0x20),4000);
        if (BVar5 == 0) {
          _free(*(void **)(DAT_006efd54 + _Index * 4));
          *(undefined4 *)(DAT_006efd54 + _Index * 4) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_006efd54 + _Index * 4) + 0x20));
          _File = *(FILE **)(DAT_006efd54 + _Index * 4);
          _File->_flag = 0;
        }
      }
      goto LAB_006033bd;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && ((uVar2 & 0x8000) == 0)) {
      if ((_Index - 3U < 0x11) && (iVar3 = __mtinitlocknum(_Index + 0x10), iVar3 == 0))
      goto LAB_006033bd;
      __lock_file2(_Index,*(void **)(DAT_006efd54 + _Index * 4));
      _File = *(FILE **)(DAT_006efd54 + _Index * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_006033bd;
      __unlock_file2(_Index,_File);
    }
    _Index = _Index + 1;
  } while( true );
}


//==== FUNC 005f8b6d  __alloc_osfhnd ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2010 Release */

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
      puVar4 = (undefined4 *)(&DAT_006efc40)[iVar5];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = __calloc_crt(0x20,0x40);
        if (puVar4 != (undefined4 *)0x0) {
          (&DAT_006efc40)[iVar5] = puVar4;
          DAT_006efc20 = DAT_006efc20 + 0x20;
          for (; puVar4 < (undefined4 *)((&DAT_006efc40)[iVar5] + 0x800); puVar4 = puVar4 + 0x10) {
            *(undefined1 *)(puVar4 + 1) = 0;
            *puVar4 = 0xffffffff;
            *(undefined1 *)((int)puVar4 + 5) = 10;
            puVar4[2] = 0;
          }
          local_20 = iVar5 << 5;
          *(undefined1 *)((&DAT_006efc40)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar4 < (undefined4 *)((&DAT_006efc40)[iVar5] + 0x800); puVar4 = puVar4 + 0x10) {
        if ((*(byte *)(puVar4 + 1) & 1) == 0) {
          if (puVar4[2] == 0) {
            __lock(10);
            if (puVar4[2] == 0) {
              BVar3 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar4 + 3),4000);
              if (BVar3 == 0) {
                bVar1 = true;
              }
              else {
                puVar4[2] = puVar4[2] + 1;
              }
            }
            FUN_005f8c3f();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar4 + 3));
            if ((*(byte *)(puVar4 + 1) & 1) == 0) {
              *(undefined1 *)(puVar4 + 1) = 1;
              *puVar4 = 0xffffffff;
              local_20 = ((int)puVar4 - (&DAT_006efc40)[iVar5] >> 6) + iVar5 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar4 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_005f8cfd();
  }
  return local_20;
}


//==== FUNC 00613572  ___unDName ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___unDName
   
   Library: Visual Studio 2010 Release */

char * ___unDName(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
                 ushort param_6)

{
  int iVar1;
  UnDecorator local_78 [88];
  char *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006d3330;
  uStack_c = 0x61357e;
  if ((param_4 != 0) && (iVar1 = __mtinitlocknum(5), iVar1 != 0)) {
    __lock(5);
    local_8 = (undefined *)0x0;
    DAT_006efa0c = param_4;
    _DAT_006efa10 = param_5;
    _DAT_006efa1c = 0;
    _DAT_006efa14 = 0;
    _DAT_006efa18 = 0;
    UnDecorator::UnDecorator
              (local_78,param_1,param_2,param_3,(_func_char_ptr_long *)0x0,(uint)param_6);
    local_20 = UnDecorator::operator_char_(local_78);
    Destructor();
    local_8 = (undefined *)0xfffffffe;
    FUN_00613603();
    return local_20;
  }
  return (char *)0x0;
}


//==== FUNC 005fc355  __flsbuf ====

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2010 Release */

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
LAB_005fc37b:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar5 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_005fc37b;
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
     (((iVar3 = FUN_005f1826(), _File_00 != (FILE *)(iVar3 + 0x20) &&
       (iVar3 = FUN_005f1826(), _File_00 != (FILE *)(iVar3 + 0x40))) ||
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
        puVar4 = &DAT_006e0020;
      }
      else {
        puVar4 = (undefined *)(((uint)_File & 0x1f) * 0x40 + (&DAT_006efc40)[(int)_File >> 5]);
      }
      if (((puVar4[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_005fc4a3;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar5);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar5) {
    return _Ch & 0xff;
  }
LAB_005fc4a3:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}


//==== FUNC 005f1d41  __flush ====

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2010 Release */

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


//==== FUNC 005f21b1  __fwrite_nolock ====

/* Library Function - Single Match
    __fwrite_nolock
   
   Library: Visual Studio 2010 Release */

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
            goto LAB_005f22f3;
          }
          _Size_00 = uVar5;
          if (uVar3 <= uVar5) {
            _Size_00 = uVar3;
          }
          FID_conflict__memcpy(_File->_ptr,_DstBuf,_Size_00);
          _File->_cnt = _File->_cnt - _Size_00;
          _File->_ptr = _File->_ptr + _Size_00;
          uVar5 = uVar5 - _Size_00;
LAB_005f22af:
          local_8 = (char *)((int)_DstBuf + _Size_00);
          _DstBuf = local_8;
        }
        if (local_c <= uVar5) {
          if ((uVar4 != 0) && (iVar2 = __flush(_File), iVar2 != 0)) goto LAB_005f22f3;
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
            if (uVar4 <= uVar3) goto LAB_005f22af;
          }
          _File->_flag = _File->_flag | 0x20;
LAB_005f22f3:
          return (uVar6 - uVar5) / _Size;
        }
        iVar2 = __flsbuf((int)*(char *)_DstBuf,_File);
        if (iVar2 == -1) goto LAB_005f22f3;
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
    FUN_005fa769();
  }
  return 0;
}


//==== FUNC 0061b0ea  __flswbuf ====

/* Library Function - Single Match
    __flswbuf
   
   Library: Visual Studio 2010 Release */

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
LAB_0061b110:
    _File->_flag = _File->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar1 & 0x40) != 0) {
    piVar3 = __errno();
    *piVar3 = 0x22;
    goto LAB_0061b110;
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
     (((iVar4 = FUN_005f1826(), _File != (FILE *)(iVar4 + 0x20) &&
       (iVar4 = FUN_005f1826(), _File != (FILE *)(iVar4 + 0x40))) ||
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
        puVar5 = &DAT_006e0020;
      }
      else {
        puVar5 = (undefined *)((_FileHandle & 0x1f) * 0x40 + (&DAT_006efc40)[(int)_FileHandle >> 5])
        ;
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_0061b247;
    }
    else {
      local_8 = __write(_FileHandle,_Buf,_MaxCharCount);
    }
    *(short *)_File->_base = (short)_Ch;
  }
  if (local_8 == _MaxCharCount) {
    return _Ch & 0xffff;
  }
LAB_0061b247:
  _File->_flag = _File->_flag | 0x20;
  return 0xffff;
}


//==== FUNC 0061de23  __chsize_s ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __chsize_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __chsize_s(int _FileHandle,longlong _Size)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  errno_t eVar4;
  undefined4 in_stack_ffffffcc;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    return 9;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_006efc20)) {
    iVar3 = (_FileHandle & 0x1fU) * 0x40;
    if ((*(byte *)((&DAT_006efc40)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      if ((0 < (int)_Size) || (-1 < (int)_Size)) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_006efc40)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          local_20 = 9;
        }
        else {
          local_20 = __chsize_nolock(_FileHandle,CONCAT44(in_stack_ffffffcc,(int)_Size));
        }
        FUN_0061df02();
        return local_20;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
      piVar2 = __errno();
      eVar4 = 0x16;
      *piVar2 = 0x16;
      goto LAB_0061de65;
    }
  }
  puVar1 = ___doserrno();
  *puVar1 = 0;
  piVar2 = __errno();
  eVar4 = 9;
  *piVar2 = 9;
LAB_0061de65:
  FUN_005fa769();
  return eVar4;
}


//==== FUNC 00616ee4  FID_conflict:__sopen_helper ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
FID_conflict___sopen_helper
          (char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  int *piVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006d3390;
  uStack_c = 0x616ef0;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    FUN_005fa769();
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_00616702(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_00616f7a();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


//==== FUNC 0061811a  FID_conflict:__sopen_helper ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
FID_conflict___sopen_helper
          (char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  int *piVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006d33f0;
  uStack_c = 0x618126;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    FUN_005fa769();
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_00617937(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_006181b0();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}


//==== FUNC 005f2ac5  __fread_nolock_s ====

/* Library Function - Single Match
    __fread_nolock_s
   
   Library: Visual Studio 2010 Release */

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
LAB_005f2b38:
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
        do {
          while( true ) {
            if (uVar7 == 0) {
              return _Count;
            }
            if ((_File->_flag & 0x10cU) != 0) break;
LAB_005f2bae:
            if (uVar7 < local_10) {
              iVar5 = __filbuf(_File);
              if (iVar5 == -1) goto LAB_005f2c6d;
              if (uVar1 == 0) goto LAB_005f2c43;
              *puVar2 = (char)iVar5;
              local_10 = _File->_bufsiz;
              uVar7 = uVar7 - 1;
              uVar1 = uVar1 - 1;
              puVar2 = puVar2 + 1;
            }
            else {
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
              if (uVar1 < uVar4) goto LAB_005f2c43;
              _DstBuf_00 = puVar2;
              iVar5 = __fileno(_File);
              iVar5 = __read(iVar5,_DstBuf_00,uVar4);
              if (iVar5 == 0) {
                _File->_flag = _File->_flag | 0x10;
                goto LAB_005f2c6d;
              }
              if (iVar5 == -1) goto LAB_005f2c69;
              uVar7 = uVar7 - iVar5;
              uVar1 = uVar1 - iVar5;
              puVar2 = puVar2 + iVar5;
            }
          }
          uVar4 = _File->_cnt;
          if (uVar4 == 0) goto LAB_005f2bae;
          if ((int)uVar4 < 0) {
LAB_005f2c69:
            _File->_flag = _File->_flag | 0x20;
LAB_005f2c6d:
            return (uVar8 - uVar7) / _ElementSize;
          }
          uVar6 = uVar7;
          if (uVar4 <= uVar7) {
            uVar6 = uVar4;
          }
          if (uVar1 < uVar6) {
LAB_005f2c43:
            if (_DstSize != 0xffffffff) {
              _memset(_DstBuf,0,_DstSize);
            }
            piVar3 = __errno();
            *piVar3 = 0x22;
            goto LAB_005f2af8;
          }
          _memcpy_s(puVar2,uVar1,_File->_ptr,uVar6);
          _File->_cnt = _File->_cnt - uVar6;
          _File->_ptr = _File->_ptr + uVar6;
          uVar7 = uVar7 - uVar6;
          uVar1 = uVar1 - uVar6;
          puVar2 = puVar2 + uVar6;
        } while( true );
      }
      if (_DstSize != 0xffffffff) {
        _memset(_DstBuf,0,_DstSize);
      }
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize)))
      goto LAB_005f2b38;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
LAB_005f2af8:
    FUN_005fa769();
  }
  return 0;
}


//==== FUNC 00605d8d  __filbuf ====

/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2010 Release */

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
    FUN_005fa769();
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
              puVar5 = &DAT_006e0020;
            }
            else {
              iVar3 = __fileno(_File);
              uVar4 = __fileno(_File);
              puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_006efc40)[iVar3 >> 5]);
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


//==== FUNC 0061b25e  __filwbuf ====

/* Library Function - Single Match
    __filwbuf
   
   Library: Visual Studio 2010 Release */

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
    FUN_005fa769();
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
              puVar5 = &DAT_006e0020;
            }
            else {
              iVar3 = __fileno(_File);
              uVar4 = __fileno(_File);
              puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_006efc40)[iVar3 >> 5]);
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


//==== FUNC 005f27e1  __fseeki64 ====

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fseeki64
   
   Library: Visual Studio 2010 Release */

int __cdecl __fseeki64(FILE *_File,longlong _Offset,int _Origin)

{
  int *piVar1;
  int iVar2;
  int in_stack_ffffffd0;
  
  if ((_File == (FILE *)0x0) ||
     (((_Offset._4_4_ != 0 && (_Offset._4_4_ != 1)) && (_Offset._4_4_ != 2)))) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_005fa769();
    iVar2 = -1;
  }
  else {
    __lock_file(_File);
    iVar2 = __fseeki64_nolock(_File,_Offset,in_stack_ffffffd0);
    FUN_005f2856();
  }
  return iVar2;
}


//==== FUNC 005f26ea  _fgetpos ====

/* Library Function - Single Match
    _fgetpos
   
   Library: Visual Studio 2010 Release */

int __cdecl _fgetpos(FILE *_File,fpos_t *_Pos)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_005fa769();
    return -1;
  }
  if (_Pos == (fpos_t *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_005fa769();
    iVar2 = -1;
  }
  else {
    lVar3 = __ftelli64(_File);
    iVar2 = -1;
    *_Pos = lVar3;
    if (lVar3 != -1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


//==== FUNC 0044b490  FUN_0044b490 ====

undefined4 __fastcall FUN_0044b490(CDialog *param_1)

{
  CDialog::OnInitDialog(param_1);
  FUN_0044b2d0();
  return 1;
}


