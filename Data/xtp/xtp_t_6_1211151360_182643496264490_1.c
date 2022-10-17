#define __in
#define __out
#define __inout
#define __in_opt
#define __out_opt
#define __inout_opt
#define __in_ecount(x)
#define __out_ecount(x)
#define __deref_out_ecount(x)
#define __inout_ecount(x)
#define __in_bcount(x)
#define __out_bcount(x)
#define __out_bcount_part(x, y)
#define __deref_out_bcount(x)
#define __deref_out_range(x, y)
#define __deref_inout_bcount_part(x, y)
#define __success(x)
#define __inout_bcount(x)
#define __deref_opt_out
#define __deref_out_opt
#define __deref_out_ecount_opt(x)
#define __deref_out
#define __checkReturn
#define __callback
#define __nullterminated

typedef unsigned char bool;
typedef unsigned short wchar_t;
typedef long HRESULT;

typedef unsigned __int64 ULONG_PTR;

#define HKCODEGEN
#include "hkenggen.h"
#include "hkrtgen.h"
#include "hkgenlib.h"

#define ENABLE_INTSAFE_SIGNED_FUNCTIONS
#include "intsafe.h"

#ifndef HOTPATCH_BUFFER_SIZE
#define HOTPATCH_BUFFER_SIZE 256 

typedef struct _PATCH_BUFFER { 
   unsigned short PointerIndex; 
   unsigned short Fill1; 
   unsigned short BufferSize; 
   unsigned short Fill2; 
   unsigned __int64 Buffer[(HOTPATCH_BUFFER_SIZE - 8) / sizeof(__int64)]; 
} PATCH_BUFFER; 

PATCH_BUFFER HotPatchBuffer = {0, 0, HOTPATCH_BUFFER_SIZE, 0}; 
#endif

int memcmp(const void*, const void*, size_t);
void *memset(void*, int, size_t);

#pragma deprecated (memcpy)

#define offsetof(s,f)   ((size_t)&(((s*)0)->f))

struct HkCollationType HkCollationTypes[];
struct HkCollationCallback* HkCollationCallbacks[];
struct hkt_2147483650
{
	__int64 hkc_1;
	__int64 hkc_2;
	__int64 hkc_4;
	__int64 hkc_5;
	__int64 hkc_6;
	__int64 hkc_7;
	long hkc_3;
};
struct hkif_121115136000002
{
	struct HkInt256 hknc;
};
struct hkis_121115136000002
{
	struct HkInt256 hknc;
};
struct HkOffsetInfo const SearchKeyOffsetArray_121115136000002[];
struct HkSearchKeyColsInfo const HkSearchKeyColsInfoArray_1211151360[] = 
{

	{
		sizeof(struct hkis_121115136000002),
		0,
		sizeof(struct hkis_121115136000002),
		sizeof(struct hkis_121115136000002),
	},
};
struct HkFlatKeyColsInfo const HkFlatKeyColsInfoArray_1211151360[] = 
{

	{
		sizeof(struct hkif_121115136000002),
		0,
	},
};
struct HkOffsetInfo const OffsetArray_1211151360[] = 
{

	{
		offsetof(struct hkt_2147483650, hkc_1),
		0,
		0,
		1,
	},

	{
		offsetof(struct hkt_2147483650, hkc_2),
		0,
		0,
		2,
	},

	{
		offsetof(struct hkt_2147483650, hkc_3),
		0,
		0,
		3,
	},

	{
		offsetof(struct hkt_2147483650, hkc_4),
		0,
		0,
		4,
	},

	{
		offsetof(struct hkt_2147483650, hkc_5),
		0,
		0,
		5,
	},

	{
		offsetof(struct hkt_2147483650, hkc_6),
		0,
		0,
		6,
	},

	{
		offsetof(struct hkt_2147483650, hkc_7),
		0,
		0,
		7,
	},
};
struct HkColsInfo const ColsInfo_1211151360 = 
{
	sizeof(struct hkt_2147483650),
	OffsetArray_1211151360,
	65535,
	65535,
	HkSearchKeyColsInfoArray_1211151360,
	HkFlatKeyColsInfoArray_1211151360,
};
unsigned long GetSerializeSize_1211151360(
	struct HkRow const* hkRow)
{
	return sizeof(struct hkt_2147483650);
}
HRESULT Deserialize_1211151360(
	struct HkCallbackContext* hkContext,
	struct HkTable* table,
	unsigned char const* data,
	unsigned short datasize,
	unsigned long hkTableId,
	unsigned char calledFromCkptLoad,
	struct HkRow** hkrow)
{
	return (RowDeserialize((hkContext->Transaction), table, data, datasize, sizeof(struct hkt_2147483650), (sizeof(struct hkt_2147483650) + 0), 0, hkrow));
}
HRESULT Serialize_1211151360(
	struct HkRow const* hkRow,
	unsigned char* buffer,
	unsigned short bufferSize,
	unsigned short* copySize)
{
	return (RowSerialize(hkRow, (GetSerializeSize_1211151360(hkRow)), buffer, bufferSize, copySize));
}
unsigned short GetSerializeRecKeySize_1211151360(
	struct HkRow const* hkRow)
{
	struct hkt_2147483650 const* row = ((struct hkt_2147483650 const*)hkRow);
	unsigned short size = sizeof(struct hkif_121115136000002);
	return size;
}
HRESULT SerializeRecKey_121115136000002(
	struct HkRow const* hkRow,
	unsigned char* hkKey,
	unsigned short bufferSize,
	unsigned short* keySize)
{
	struct HkInt128 temp_6;
	struct HkInt128 temp_9;
	struct HkInt256 temp_11;
	struct HkInt256 temp_14;
	{
		struct hkt_2147483650 const* row = ((struct hkt_2147483650 const*)hkRow);
		struct hkif_121115136000002* key = ((struct hkif_121115136000002*)hkKey);
		static struct HkInt128 const hkl_7 = 
		{
			(-9223372036854775807i64 - 1),
			0,
		};
		struct HkInt128 temp_8;
		static struct HkInt256 const hkl_12 = 
		{
			(-9223372036854775807i64 - 1),
			0,
			0,
			0,
		};
		struct HkInt256 temp_13;
		static struct HkInt256 const hkl_16 = 
		{
			(-9223372036854775807i64 - 1),
			0,
			0,
			0,
		};
		(*keySize) = sizeof(struct hkif_121115136000002);
		if ((bufferSize < (*keySize)))
		{
			return -2013265920;
		}
		ShiftLeft64To128Unsafe((row->hkc_7), 64, (&temp_6));
		Add128And64((&hkl_7), (row->hkc_6), (&temp_8));
		Or128And128((&temp_6), (&temp_8), (&temp_9));
		ShiftLeft128To256Unsafe((&temp_9), 64, (&temp_11));
		Add256And64Unsafe((&hkl_12), (row->hkc_2), (&temp_13));
		Or256And256((&temp_11), (&temp_13), (&temp_14));
		ShiftLeft256To256Unsafe((&temp_14), 64, (&temp_11));
		Add256And64Unsafe((&hkl_16), (row->hkc_1), (&temp_13));
		Or256And256((&temp_11), (&temp_13), (&temp_14));
		(key->hknc) = temp_14;
		return 0;
	}
}
HRESULT DeserializeRecKey_1211151360(
	unsigned char const* data,
	unsigned short dataSize,
	struct HkSearchKey* key,
	unsigned short bufferSize)
{
	struct hkif_121115136000002 const* source = ((struct hkif_121115136000002 const*)data);
	struct hkis_121115136000002* target = ((struct hkis_121115136000002*)key);
	unsigned __int64 uInt64BufferSize = bufferSize;
	unsigned char* bufferPtr = (((unsigned char*)target) + sizeof(struct hkis_121115136000002));
	if ((sizeof(struct hkis_121115136000002) > uInt64BufferSize))
	{
		return -2013265920;
	}
	uInt64BufferSize = (uInt64BufferSize - sizeof(struct hkis_121115136000002));
	(target->hknc) = (source->hknc);
	return 0;
}
HRESULT DeserializeRecKeyToRow_121115136000002(
	unsigned char const* keyBuffer,
	unsigned short keyBufferSize,
	struct HkRow* rowBuffer,
	unsigned short rowBufferSize,
	unsigned short* rowSize)
{
	__int64 temp_23;
	{
		struct hkt_2147483650* target = ((struct hkt_2147483650*)rowBuffer);
		struct hkif_121115136000002 const* source = ((struct hkif_121115136000002 const*)keyBuffer);
		struct HkInt256 temp_21;
		struct HkInt256 temp_24;
		struct HkInt128 temp_28;
		struct HkInt128 temp_31;
		__int64 temp_33;
		if ((sizeof(struct hkt_2147483650) > rowBufferSize))
		{
			return -2013265920;
		}
		Subtract256And64((&(source->hknc)), (-9223372036854775807i64 - 1), (&temp_21));
		And256And64((&temp_21), -1, (&temp_23));
		(target->hkc_1) = temp_23;
		ShiftRight256To256((&(source->hknc)), 64, (&temp_24));
		Subtract256And64((&temp_24), (-9223372036854775807i64 - 1), (&temp_21));
		And256And64((&temp_21), -1, (&temp_23));
		(target->hkc_2) = temp_23;
		ShiftRight256To128Unsafe((&temp_24), 64, (&temp_28));
		Subtract128And64((&temp_28), (-9223372036854775807i64 - 1), (&temp_31));
		And128And64((&temp_31), -1, (&temp_23));
		(target->hkc_6) = temp_23;
		ShiftRight128To64Unsafe((&temp_28), 64, (&temp_33));
		(target->hkc_7) = (((__int64)temp_33) & ((__int64)-1));
		return 0;
	}
}
struct hkif_121115136000002 infinity_121115136000002 = 
{

	{
		-1,
		-1,
		-1,
		9223372036854775807LL,
	},
};
__int64 CompareRowToRow_121115136000002(
	struct HkRow const* hkArg0,
	struct HkRow const* hkArg1)
{
	struct hkt_2147483650* arg0 = ((struct hkt_2147483650*)hkArg0);
	struct hkt_2147483650* arg1 = ((struct hkt_2147483650*)hkArg1);
	__int64 ret;
	ret = (Compare64And64Fast((arg0->hkc_7), (arg1->hkc_7)));
	if ((ret != 0))
	{
		goto l_0;
	}
	ret = (Compare64And64Fast((arg0->hkc_6), (arg1->hkc_6)));
	if ((ret != 0))
	{
		goto l_0;
	}
	ret = (Compare64And64((arg0->hkc_2), (arg1->hkc_2)));
	if ((ret != 0))
	{
		goto l_0;
	}
	ret = (Compare64And64((arg0->hkc_1), (arg1->hkc_1)));
	goto l_0;
l_0:;
	return ret;
}
HRESULT ExtractFlatKey_121115136000002(
	struct HkRow const* hkRow,
	struct HkFlatKey* hkKey,
	unsigned short bufferSize,
	unsigned short* keySize)
{
	struct HkInt128 temp_40;
	struct HkInt128 temp_43;
	struct HkInt256 temp_45;
	struct HkInt256 temp_48;
	{
		struct hkt_2147483650 const* row = ((struct hkt_2147483650 const*)hkRow);
		struct hkif_121115136000002* key = ((struct hkif_121115136000002*)hkKey);
		static struct HkInt128 const hkl_41 = 
		{
			(-9223372036854775807i64 - 1),
			0,
		};
		struct HkInt128 temp_42;
		static struct HkInt256 const hkl_46 = 
		{
			(-9223372036854775807i64 - 1),
			0,
			0,
			0,
		};
		struct HkInt256 temp_47;
		static struct HkInt256 const hkl_50 = 
		{
			(-9223372036854775807i64 - 1),
			0,
			0,
			0,
		};
		(*keySize) = sizeof(struct hkif_121115136000002);
		if ((bufferSize < (*keySize)))
		{
			return -2013265920;
		}
		ShiftLeft64To128Unsafe((row->hkc_7), 64, (&temp_40));
		Add128And64((&hkl_41), (row->hkc_6), (&temp_42));
		Or128And128((&temp_40), (&temp_42), (&temp_43));
		ShiftLeft128To256Unsafe((&temp_43), 64, (&temp_45));
		Add256And64Unsafe((&hkl_46), (row->hkc_2), (&temp_47));
		Or256And256((&temp_45), (&temp_47), (&temp_48));
		ShiftLeft256To256Unsafe((&temp_48), 64, (&temp_45));
		Add256And64Unsafe((&hkl_50), (row->hkc_1), (&temp_47));
		Or256And256((&temp_45), (&temp_47), (&temp_48));
		(key->hknc) = temp_48;
		return 0;
	}
}
struct HkRangeIndexMD RangeIndexMD_1211151360[] = 
{

	{
		2,
		7,
		sizeof(struct hkif_121115136000002),
		sizeof(struct hkis_121115136000002),
		((struct HkFlatKey const*)(&infinity_121115136000002)),
		sizeof(struct hkif_121115136000002),
		0,
		0,
		0,
		CompareRowToRow_121115136000002,
		0,
		ExtractFlatKey_121115136000002,
		0,
	},
};
struct HkTableMD TableMD = 
{
	sizeof(struct hkt_2147483650),
	(sizeof(struct hkt_2147483650) + 0),
	1,
	0,
	0,
	1,
	RangeIndexMD_1211151360,
	0,
	(&ColsInfo_1211151360),
	1211151360,
	0,
	0,
	0,
	GetSerializeSize_1211151360,
	Serialize_1211151360,
	Deserialize_1211151360,
	0,
	0,
	GetSerializeRecKeySize_1211151360,
	SerializeRecKey_121115136000002,
	DeserializeRecKey_1211151360,
	DeserializeRecKeyToRow_121115136000002,
	0,
	0,
};
__declspec(dllexport)
struct HkTableBindings g_Bindings = 
{
	182643496264490,
	(&TableMD),

	{
		0,
		0,
		0,
	},
};
