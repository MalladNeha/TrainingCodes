; Listing generated by Microsoft (R) Optimizing Compiler Version 19.00.23026.0 

	TITLE	C:\Users\neha.mallad\Documents\Visual Studio 2015\Projects\ComplexClass\ComplexClass\main.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	?__empty_global_delete@@YAXPAX@Z		; __empty_global_delete
PUBLIC	?__empty_global_delete@@YAXPAXI@Z		; __empty_global_delete
PUBLIC	_main
EXTRN	??0ComplexClass@@QAE@HH@Z:PROC			; ComplexClass::ComplexClass
EXTRN	?display@ComplexClass@@QBEXXZ:PROC		; ComplexClass::display
EXTRN	??HComplexClass@@QAE?AV0@ABV0@@Z:PROC		; ComplexClass::operator+
EXTRN	@_RTC_CheckStackVars@8:PROC
EXTRN	@__security_check_cookie@4:PROC
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_InitBase:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	___security_cookie:DWORD
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
rtc$IMZ	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File c:\users\neha.mallad\documents\visual studio 2015\projects\complexclass\complexclass\main.cpp
;	COMDAT _main
_TEXT	SEGMENT
_cc$ = -48						; size = 8
_c2$ = -32						; size = 8
_c1$ = -16						; size = 8
__$ArrayPad$ = -4					; size = 4
_main	PROC						; COMDAT

; 11   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 244				; 000000f4H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-244]
	mov	ecx, 61					; 0000003dH
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	mov	DWORD PTR __$ArrayPad$[ebp], eax

; 12   : 
; 13   : 	ComplexClass c1(100,200);

	push	200					; 000000c8H
	push	100					; 00000064H
	lea	ecx, DWORD PTR _c1$[ebp]
	call	??0ComplexClass@@QAE@HH@Z		; ComplexClass::ComplexClass

; 14   : 	ComplexClass c2(50, -100);

	push	-100					; ffffff9cH
	push	50					; 00000032H
	lea	ecx, DWORD PTR _c2$[ebp]
	call	??0ComplexClass@@QAE@HH@Z		; ComplexClass::ComplexClass

; 15   : 
; 16   : 	ComplexClass cc = c1 + c2;

	lea	eax, DWORD PTR _c2$[ebp]
	push	eax
	lea	ecx, DWORD PTR _cc$[ebp]
	push	ecx
	lea	ecx, DWORD PTR _c1$[ebp]
	call	??HComplexClass@@QAE?AV0@ABV0@@Z	; ComplexClass::operator+

; 17   : 	cc.display();

	lea	ecx, DWORD PTR _cc$[ebp]
	call	?display@ComplexClass@@QBEXXZ		; ComplexClass::display

; 18   : 
; 19   : 
; 20   : 	//function(c1);
; 21   : 
; 22   : 	//ComplexClass cc(c1);
; 23   : 	//cc.display();
; 24   : 	/*ComplexClass cc1;
; 25   : 	cc1 = c1;
; 26   : 	cc1.display();*/
; 27   : 	/*
; 28   : 	int *ptr = new int[3];
; 29   : 	//cin >> *ptr;
; 30   : 
; 31   : 	//int *ptr = new int(3);
; 32   : 	//ptr[0] = 10;
; 33   : 	//ptr[1] = 20;
; 34   : 	//*(ptr + 2) = 30;
; 35   : 	cout << *ptr<<endl;
; 36   : 	delete ptr;
; 37   : 	ptr = nullptr;
; 38   : 
; 39   : 	
; 40   : 	char* mystring = new char[8];
; 41   : 	//cin >> mystring;
; 42   : 	cin.getline(mystring, 8);
; 43   : 	cout << mystring<<endl;
; 44   : 	delete[]mystring;
; 45   : 	mystring = nullptr;
; 46   : 
; 47   : 
; 48   : 
; 49   : 	//ComplexClass* cptr = (ComplexClass*)malloc(sizeof(ComplexClass));
; 50   : 	//ComplexClass* cptr = new ComplexClass(1000, -99);
; 51   : 	//cptr->accept();
; 52   : 	//cptr->display();
; 53   : 	//free(cptr);
; 54   : 	//delete cptr;
; 55   : 	//cptr = NULL;
; 56   : 	
; 57   : 
; 58   : 
; 59   : 	ComplexClass* cptr = new ComplexClass[3];
; 60   : 	for (int i = 0; i < 3; ++i)
; 61   : 		cptr[i].accept();
; 62   : 
; 63   : 	//for (int i = 0; i < 3; ++i)
; 64   : 		//(cptr + i)->display();
; 65   : 	 //delete[]cptr;
; 66   :     //cptr = nullptr;
; 67   : 
; 68   : 	cout << "leaks" << _CrtDumpMemoryLeaks() << endl;
; 69   : 
; 70   : 
; 71   : 	//ComplexClass s1;
; 72   : 	//cout << s1.count << endl;
; 73   : 
; 74   : 
; 75   : 
; 76   : 	ComplexClass* cptr1[3] = { new ComplexClass(1000,-99), new ComplexClass(100,-97),new ComplexClass(10,-9) };
; 77   : 	for (int i = 0; i < 3; ++i) {
; 78   : 		cptr1[i]->display();
; 79   : 		delete cptr1[i];
; 80   : 	}
; 81   : 	//free(cptr);
; 82   : 	//delete cptr;
; 83   : 	//cptr = NULL;
; 84   : 		
; 85   : 
; 86   : 	cout << sizeof(ComplexClass) << endl;
; 87   : 
; 88   : 
; 89   : 	//c1.count_objects();
; 90   : 	//ComplexClass::count_objects();
; 91   : 	//static fun using class name*/
; 92   : 
; 93   : 	//ComplexClass c1(100,-200);
; 94   : 	//c1.setreal(10);
; 95   : 	//c1.setimg(-20);
; 96   : 	//c1.display();
; 97   : 
; 98   : 	//ComplexClass c2(20, -30);
; 99   : 	//c2.display();
; 100  : 
; 101  : 	/*ComplexClass c2(20,-30);
; 102  : 	c2.display();
; 103  : 	cout << "real is" << c2.getreal() << endl;
; 104  : 	cout << "img is" << c2.getimg() << endl;
; 105  : 	*/
; 106  : 
; 107  : 
; 108  : 
; 109  : 	/*ComplexClass c1();
; 110  : 	cout << "Address of" << &c1 << endl;
; 111  : 
; 112  : 	ComplexClass c2();
; 113  : 	cout << "Address of" << &c2 << endl;*/
; 114  : 
; 115  : 	//non const obj can aslo call const mem func
; 116  : 	//ComplexClass c1();
; 117  : 	//c2.accept();
; 118  : 	//c2.display();
; 119  : 
; 120  : 
; 121  : 	//const obj can  call only const mem func
; 122  : 	//const ComplexClass c2(20, -30);
; 123  : 	//c2.display();
; 124  : 
; 125  : 	return 0;

	xor	eax, eax

; 126  : 	
; 127  : }

	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN7@main
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	mov	ecx, DWORD PTR __$ArrayPad$[ebp]
	xor	ecx, ebp
	call	@__security_check_cookie@4
	add	esp, 244				; 000000f4H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
$LN7@main:
	DD	3
	DD	$LN6@main
$LN6@main:
	DD	-16					; fffffff0H
	DD	8
	DD	$LN3@main
	DD	-32					; ffffffe0H
	DD	8
	DD	$LN4@main
	DD	-48					; ffffffd0H
	DD	8
	DD	$LN5@main
$LN5@main:
	DB	99					; 00000063H
	DB	99					; 00000063H
	DB	0
$LN4@main:
	DB	99					; 00000063H
	DB	50					; 00000032H
	DB	0
$LN3@main:
	DB	99					; 00000063H
	DB	49					; 00000031H
	DB	0
_main	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File c:\users\neha.mallad\documents\visual studio 2015\projects\complexclass\complexclass\main.cpp
;	COMDAT ?__empty_global_delete@@YAXPAXI@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
___formal$ = 12						; size = 4
?__empty_global_delete@@YAXPAXI@Z PROC			; __empty_global_delete, COMDAT

; 128  : }

	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?__empty_global_delete@@YAXPAXI@Z ENDP			; __empty_global_delete
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File c:\users\neha.mallad\documents\visual studio 2015\projects\complexclass\complexclass\main.cpp
;	COMDAT ?__empty_global_delete@@YAXPAX@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
?__empty_global_delete@@YAXPAX@Z PROC			; __empty_global_delete, COMDAT

; 128  : }

	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?__empty_global_delete@@YAXPAX@Z ENDP			; __empty_global_delete
_TEXT	ENDS
END