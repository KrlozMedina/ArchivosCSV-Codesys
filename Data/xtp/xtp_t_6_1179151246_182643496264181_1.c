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
struct hkt_2147483648
{
	__int64 hkc_1;
	__int64 hkc_3;
	__int64 hkc_4;
	__int64 hkc_5;
	__int64 hkc_6;
	long hkc_2;
};
struct hkif_117915124600002
{
	__int64 hknc;
};
struct hkis_117915124600002
{
	__int64 hknc;
};
struct hkif_117915124600003
{
	long hknc;
};
struct hkis_117915124600003
{
	long hknc;
};
struct HkOffsetInfo const SearchKeyOffsetArray_117915124600002[];
struct HkOffsetInfo const SearchKeyOffsetArray_117915124600003[];
struct HkSearchKeyColsInfo const HkSearchKeyColsInfoArray_1179151246[] = 
{

	{
		sizeof(struct hkis_117915124600002),
		0,
		sizeof(struct hkis_117915124600002),
		sizeof(struct hkis_117915124600002),
	},

	{
		sizeof(struct hkis_117915124600003),
		0,
		sizeof(struct hkis_117915124600003),
		sizeof(struct hkis_117915124600003),
	},
};
struct HkFlatKeyColsInfo const HkFlatKeyColsInfoArray_1179151246[] = 
{

	{
		sizeof(struct hkif_117915124600002),
		0,
	},

	{
		sizeof(struct hkif_117915124600003),
		0,
	},
};
struct HkOffsetInfo const OffsetArray_1179151246[] = 
{

	{
		offsetof(struct hkt_2147483648, hkc_1),
		0,
		0,
		1,
	},

	{
		offsetof(struct hkt_2147483648, hkc_2),
		0,
		0,
		2,
	},

	{
		offsetof(struct hkt_2147483648, hkc_3),
		0,
		0,
		3,
	},

	{
		offsetof(struct hkt_2147483648, hkc_4),
		0,
		0,
		4,
	},

	{
		offsetof(struct hkt_2147483648, hkc_5),
		0,
		0,
		5,
	},

	{
		offsetof(struct hkt_2147483648, hkc_6),
		0,
		0,
		6,
	},
};
struct HkColsInfo const ColsInfo_1179151246 = 
{
	sizeof(struct hkt_2147483648),
	OffsetArray_1179151246,
	65535,
	65535,
	HkSearchKeyColsInfoArray_1179151246,
	HkFlatKeyColsInfoArray_1179151246,
};
unsigned long GetSerializeSize_1179151246(
	struct HkRow const* hkRow)
{
	return sizeof(struct hkt_2147483648);
}
HRESULT Deserialize_1179151246(
	struct HkCallbackContext* hkContext,
	struct HkTable* table,
	unsigned char const* data,
	unsigned short datasize,
	unsigned long hkTableId,
	unsigned char calledFromCkptLoad,
	struct HkRow** hkrow)
{
	return (RowDeserialize((hkContext->Transaction), table, data, datasize, sizeof(struct hkt_2147483648), (sizeof(struct hkt_2147483648) + 0), 0, hkrow));
}
HRESULT Serialize_1179151246(
	struct HkRow const* hkRow,
	unsigned char* buffer,
	unsigned short bufferSize,
	unsigned short* copySize)
{
	return (RowSerialize(hkRow, (GetSerializeSize_1179151246(hkRow)), buffer, bufferSize, copySize));
}
unsigned short GetSerializeRecKeySize_1179151246(
	struct HkRow const* hkRow)
{
	struct hkt_2147483648 const* row = ((struct hkt_2147483648 const*)hkRow);
	unsigned short size = sizeof(struct hkif_117915124600002);
	return size;
}
HRESULT SerializeRecKey_117915124600002(
	struct HkRow const* hkRow,
	unsigned char* hkKey,
	unsigned short bufferSize,
	unsigned short* keySize)
{
	{
		struct hkt_2147483648 const* row = ((struct hkt_2147483648 const*)hkRow);
		struct hkif_117915124600002* key = ((struct hkif_117915124600002*)hkKey);
		(*keySize) = sizeof(struct hkif_117915124600002);
		if ((bufferSize < (*keySize)))
		{
			return -2013265920;
		}
		(key->hknc) = (row->hkc_1);
		return 0;
	}
}
HRESULT DeserializeRecKey_1179151246(
	unsigned char const* data,
	unsigned short dataSize,
	struct HkSearchKey* key,
	unsigned short bufferSize)
{
	struct hkif_117915124600002 const* source = ((struct hkif_117915124600002 const*)data);
	struct hkis_117915124600002* target = ((struct hkis_117915124600002*)key);
	unsigned __int64 uInt64BufferSize = bufferSize;
	unsigned char* bufferPtr = (((unsigned char*)target) + sizeof(struct hkis_117915124600002));
	if ((sizeof(struct hkis_117915124600002) > uInt64BufferSize))
	{
		return -2013265920;
	}
	uInt64BufferSize = (uInt64BufferSize - sizeof(struct hkis_117915124600002));
	(target->hknc) = (source->hknc);
	return 0;
}
HRESULT DeserializeRecKeyToRow_117915124600002(
	unsigned char const* keyBuffer,
	unsigned short keyBufferSize,
	struct HkRow* rowBuffer,
	unsigned short rowBufferSize,
	unsigned short* rowSize)
{
	{
		struct hkt_2147483648* target = ((struct hkt_2147483648*)rowBuffer);
		struct hkif_117915124600002 const* source = ((struct hkif_117915124600002 const*)keyBuffer);
		if ((sizeof(struct hkt_2147483648) > rowBufferSize))
		{
			return -2013265920;
		}
		(target->hkc_1) = (((__int64)(source->hknc)) & ((__int64)-1));
		return 0;
	}
}
struct hkif_117915124600002 infinity_117915124600002 = 
{
	9223372036854775807LL,
};
__int64 CompareRowToRow_117915124600002(
	struct HkRow const* hkArg0,
	struct HkRow const* hkArg1)
{
	struct hkt_2147483648* arg0 = ((struct hkt_2147483648*)hkArg0);
	struct hkt_2147483648* arg1 = ((struct hkt_2147483648*)hkArg1);
	__int64 ret;
	ret = (Compare64And64((arg0->hkc_1), (arg1->hkc_1)));
	goto l_0;
l_0:;
	return ret;
}
HRESULT ExtractFlatKey_117915124600002(
	struct HkRow const* hkRow,
	struct HkFlatKey* hkKey,
	unsigned short bufferSize,
	unsigned short* keySize)
{
	{
		struct hkt_2147483648 const* row = ((struct hkt_2147483648 const*)hkRow);
		struct hkif_117915124600002* key = ((struct hkif_117915124600002*)hkKey);
		(*keySize) = sizeof(struct hkif_117915124600002);
		if ((bufferSize < (*keySize)))
		{
			return -2013265920;
		}
		(key->hknc) = (row->hkc_1);
		return 0;
	}
}
struct hkif_117915124600003 infinity_117915124600003 = 
{
	2147483647,
};
__int64 CompareRowToRow_117915124600003(
	struct HkRow const* hkArg0,
	struct HkRow const* hkArg1)
{
	struct hkt_2147483648* arg0 = ((struct hkt_2147483648*)hkArg0);
	struct hkt_2147483648* arg1 = ((struct hkt_2147483648*)hkArg1);
	__int64 ret;
	ret = (CompareKeys_int((arg0->hkc_2), (arg1->hkc_2)));
	goto l_0;
l_0:;
	return ret;
}
HRESULT ExtractFlatKey_117915124600003(
	struct HkRow const* hkRow,
	struct HkFlatKey* hkKey,
	unsigned short bufferSize,
	unsigned short* keySize)
{
	{
		struct hkt_2147483648 const* row = ((struct hkt_2147483648 const*)hkRow);
		struct hkif_117915124600003* key = ((struct hkif_117915124600003*)hkKey);
		(*keySize) = sizeof(struct hkif_117915124600003);
		if ((bufferSize < (*keySize)))
		{
			return -2013265920;
		}
		(key->hknc) = (row->hkc_2);
		return 0;
	}
}
struct HkRangeIndexMD RangeIndexMD_1179151246[] = 
{

	{
		2,
		7,
		sizeof(struct hkif_117915124600002),
		sizeof(struct hkis_117915124600002),
		((struct HkFlatKey const*)(&infinity_117915124600002)),
		sizeof(struct hkif_117915124600002),
		0,
		0,
		0,
		CompareRowToRow_117915124600002,
		0,
		ExtractFlatKey_117915124600002,
		0,
	},

	{
		3,
		6,
		sizeof(struct hkif_117915124600003),
		sizeof(struct hkis_117915124600003),
		((struct HkFlatKey const*)(&infinity_117915124600003)),
		sizeof(struct hkif_117915124600003),
		0,
		0,
		0,
		CompareRowToRow_117915124600003,
		0,
		ExtractFlatKey_117915124600003,
		0,
	},
};
struct HkTableMD TableMD = 
{
	sizeof(struct hkt_2147483648),
	(sizeof(struct hkt_2147483648) + 0),
	1,
	0,
	0,
	2,
	RangeIndexMD_1179151246,
	0,
	(&ColsInfo_1179151246),
	1179151246,
	0,
	0,
	0,
	GetSerializeSize_1179151246,
	Serialize_1179151246,
	Deserialize_1179151246,
	0,
	0,
	GetSerializeRecKeySize_1179151246,
	SerializeRecKey_117915124600002,
	DeserializeRecKey_1179151246,
	DeserializeRecKeyToRow_117915124600002,
	0,
	0,
};
__declspec(dllexport)
struct HkTableBindings g_Bindings = 
{
	182643496264181,
	(&TableMD),

	{
		0,
		0,
		0,
	},
};
