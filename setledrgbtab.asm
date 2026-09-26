|sub    esp,0xc0c
|mov    eax,ds:0x5d4690
|xor    eax,esp
|mov    DWORD PTR [esp+0xc08],eax
|push   ebp
|mov    ebp,DWORD PTR [esp+0xc14]
|push   esi
|mov    esi,ecx
|cmp    esi,0x3eb
|jle    0x445d0e
|xor    eax,eax
|jmp    0x445da2
|push   ebx
|xor    ebx,ebx
|push   0x400
|lea    eax,[esp+0x17]
|push   ebx
|push   eax
|mov    BYTE PTR [esp+0x18],0x8
|mov    BYTE PTR [esp+0x1a],bl
|mov    BYTE PTR [esp+0x1b],0x40
|mov    BYTE PTR [esp+0x1c],bl
|mov    BYTE PTR [esp+0x1d],bl
|mov    BYTE PTR [esp+0x1e],bl
|call   0x54de80
|mov    cl,BYTE PTR ds:0x5e0274
|xor    eax,eax
|push   esi
|lea    edx,[esp+0x38]
|push   ebp
|push   edx
|mov    BYTE PTR [esp+0x25],cl
|mov    DWORD PTR [esp+0x2b],eax
|mov    DWORD PTR [esp+0x2f],eax
|mov    DWORD PTR [esp+0x33],eax
|mov    DWORD PTR [esp+0x37],eax
|mov    DWORD PTR [esp+0x3b],eax
|mov    BYTE PTR [esp+0x3f],al
|call   0x5514c0
|push   0x7ff
|lea    eax,[esp+0x431]
|push   ebx
|push   eax
|call   0x54de80
|add    esp,0x24
|lea    ecx,[esp+0xc]
|push   ecx
|push   edi
|lea    esi,[esp+0x41c]
|mov    ecx,0x407
|call   0x445460
|xor    edx,edx
|cmp    eax,ebx
|setne  dl
|pop    ebx
|mov    eax,edx
|mov    ecx,DWORD PTR [esp+0xc10]
|pop    esi
|pop    ebp
|xor    ecx,esp
|call   0x54adab
|add    esp,0xc0c
