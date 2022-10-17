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
struct NullBitsStruct_2147483652
{
	unsigned char hkc_isnull_6:1;
	unsigned char hkc_isnull_8:1;
};
struct hkt_2147483652
{
	__int64 hkc_1;
	__int64 hkc_4;
	__int64 hkc_5;
	unsigned __int64 hkc_8;
	long hkc_3;
	unsigned char hkc_7;
	struct NullBitsStruct_2147483652 null_bits;
	unsigned short hkvdo[3];
};
struct hkif_124315147400002
{
	__int64 hknc;
};
struct hkis_124315147400002
{
	__int64 hknc;
};
struct HkOffsetInfo const SearchKeyOffsetArray_124315147400002[];
struct HkSearchKeyColsInfo const HkSearchKeyColsInfoArray_1243151474[] = 
{

	{
		sizeof(struct hkis_124315147400002),
		0,
		sizeof(struct hkis_124315147400002),
		sizeof(struct hkis_124315147400002),
	},
};
struct HkFlatKeyColsInfo const HkFlatKeyColsInfoArray_1243151474[] = 
{

	{
		sizeof(struct hkif_124315147400002),
		0,
	},
};
struct HkOffsetInfo const OffsetArray_1243151474[] = 
{

	{
		offsetof(struct hkt_2147483652, hkc_1),
		0,
		0,
		1,
	},

	{
		(offsetof(struct hkt_2147483652, hkvdo) + 0),
		0,
		0,
		0,
	},

	{
		offsetof(struct hkt_2147483652, hkc_3),
		0,
		0,
		3,
	},

	{
		offsetof(struct hkt_2147483652, hkc_4),
		0,
		0,
		4,
	},

	{
		offsetof(struct hkt_2147483652, hkc_5),
		0,
		0,
		5,
	},

	{
		(offsetof(struct hkt_2147483652, hkvdo) + 2),
		(offsetof(struct hkt_2147483652, null_bits) + 0),
		1,
		0,
	},

	{
		offsetof(struct hkt_2147483652, hkc_7),
		0,
		0,
		7,
	},

	{
		offsetof(struct hkt_2147483652, hkc_8),
		(offsetof(struct hkt_2147483652, null_bits) + 0),
		2,
		8,
	},
};
struct HkColsInfo const ColsInfo_1243151474 = 
{
	sizeof(struct hkt_2147483652),
	OffsetArray_1243151474,
	65535,
	(offsetof(struct hkt_2147483652, hkvdo) + 4),
	HkSearchKeyColsInfoArray_1243151474,
	HkFlatKeyColsInfoArray_1243151474,
};
unsigned long GetSerializeSize_1243151474(
	struct HkRow const* hkRow)
{
	struct hkt_2147483652 const* row = ((struct hkt_2147483652 const*)hkRow);
	return ((row->hkvdo)[2]);
}
HRESULT Deserialize_1243151474(
	struct HkCallbackContext* hkContext,
	struct HkTable* table,
	unsigned char const* data,
	unsigned short datasize,
	unsigned long hkTableId,
	unsigned char calledFromCkptLoad,
	struct HkRow** hkrow)
{
	return (RowDeserialize((hkContext->Transaction), table, data, datasize, sizeof(struct hkt_2147483652), (sizeof(struct hkt_2147483652) + 2040), 0, hkrow));
}
HRESULT Serialize_1243151474(
	struct HkRow const* hkRow,
	unsigned char* buffer,
	unsigned short bufferSize,
	unsigned short* copySize)
{
	return (RowSerialize(hkRow, (GetSerializeSize_1243151474(hkRow)), buffer, bufferSize, copySize));
}
unsigned short GetSerializeRecKeySize_1243151474(
	struct HkRow const* hkRow)
{
	struct hkt_2147483652 const* row = ((struct hkt_2147483652 const*)hkRow);
	unsigned short size = sizeof(struct hkif_124315147400002);
	return size;
}
HRESULT SerializeRecKey_124315147400002(
	struct HkRow const* hkRow,
	unsigned char* hkKey,
	unsigned short bufferSize,
	unsigned short* keySize)
{
	{
		struct hkt_2147483652 const* row = ((struct hkt_2147483652 const*)hkRow);
		struct hkif_124315147400002* key = ((struct hkif_124315147400002*)hkKey);
		(*keySize) = sizeof(struct hkif_124315147400002);
		if ((bufferSize < (*keySize)))
		{
			return -2013265920;
		}
		(key->hknc) = (row->hkc_1);
		return 0;
	}
}
HRESULT DeserializeRecKey_1243151474(
	unsigned char const* data,
	unsigned short dataSize,
	struct HkSearchKey* key,
	unsigned short bufferSize)
{
	struct hkif_124315147400002 const* source = ((struct hkif_124315147400002 const*)data);
	struct hkis_124315147400002* target = ((struct hkis_124315147400002*)key);
	unsigned __int64 uInt64BufferSize = bufferSize;
	unsigned char* bufferPtr = (((unsigned char*)target) + sizeof(struct hkis_124315147400002));
	if ((sizeof(struct hkis_124315147400002) > uInt64BufferSize))
	{
		return -2013265920;
	}
	uInt64BufferSize = (uInt64BufferSize - sizeof(struct hkis_124315147400002));
	(target->hknc) = (source->hknc);
	return 0;
}
HRESULT DeserializeRecKeyToRow_124315147400002(
	unsigned char const* keyBuffer,
	unsigned short keyBufferSize,
	struct HkRow* rowBuffer,
	unsigned short rowBufferSize,
	unsigned short* rowSize)
{
	{
		struct hkt_2147483652* target = ((struct hkt_2147483652*)rowBuffer);
		struct hkif_124315147400002 const* source = ((struct hkif_124315147400002 const*)keyBuffer);
		if ((sizeof(struct hkt_2147483652) > rowBufferSize))
		{
			return -2013265920;
		}
		(target->hkc_1) = (((__int64)(source->hknc)) & ((__int64)-1));
		return 0;
	}
}
HRESULT PostCheckpointLoad_1243151474(
	struct HkDatabase* db,
	struct HkTable* table,
	struct HkTransaction* tx)
{
	HRESULT hr = 0;
	{
		hr = (HkTableRefreshInternalTableMapping(table, tx));
		if ((FAILED(hr)))
		{
			{
			}
			goto l_9;
		}
	}
	goto l_9;
l_9:;
	return hr;
}
struct hkif_124315147400002 infinity_124315147400002 = 
{
	9223372036854775807LL,
};
__int64 CompareRowToRow_124315147400002(
	struct HkRow const* hkArg0,
	struct HkRow const* hkArg1)
{
	struct hkt_2147483652* arg0 = ((struct hkt_2147483652*)hkArg0);
	struct hkt_2147483652* arg1 = ((struct hkt_2147483652*)hkArg1);
	__int64 ret;
	ret = (Compare64And64((arg0->hkc_1), (arg1->hkc_1)));
	goto l_0;
l_0:;
	return ret;
}
HRESULT ExtractFlatKey_124315147400002(
	struct HkRow const* hkRow,
	struct HkFlatKey* hkKey,
	unsigned short bufferSize,
	unsigned short* keySize)
{
	{
		struct hkt_2147483652 const* row = ((struct hkt_2147483652 const*)hkRow);
		struct hkif_124315147400002* key = ((struct hkif_124315147400002*)hkKey);
		(*keySize) = sizeof(struct hkif_124315147400002);
		if ((bufferSize < (*keySize)))
		{
			return -2013265920;
		}
		(key->hknc) = (row->hkc_1);
		return 0;
	}
}
struct HkRangeIndexMD RangeIndexMD_1243151474[] = 
{

	{
		2,
		7,
		sizeof(struct hkif_124315147400002),
		sizeof(struct hkis_124315147400002),
		((struct HkFlatKey const*)(&infinity_124315147400002)),
		sizeof(struct hkif_124315147400002),
		0,
		0,
		0,
		CompareRowToRow_124315147400002,
		0,
		ExtractFlatKey_124315147400002,
		0,
	},
};
struct HkTableMD TableMD = 
{
	sizeof(struct hkt_2147483652),
	(sizeof(struct hkt_2147483652) + 2040),
	1,
	0,
	0,
	1,
	RangeIndexMD_1243151474,
	0,
	(&ColsInfo_1243151474),
	1243151474,
	0,
	0,
	0,
	GetSerializeSize_1243151474,
	Serialize_1243151474,
	Deserialize_1243151474,
	0,
	0,
	GetSerializeRecKeySize_1243151474,
	SerializeRecKey_124315147400002,
	DeserializeRecKey_1243151474,
	DeserializeRecKeyToRow_124315147400002,
	0,
	PostCheckpointLoad_1243151474,
};
__declspec(dllexport)
struct HkTableBindings g_Bindings = 
{
	182643496265976,
	(&TableMD),

	{
		0,
		0,
		0,
	},
};
