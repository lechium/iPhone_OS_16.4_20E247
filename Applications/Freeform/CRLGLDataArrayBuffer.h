//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CRLGLDataArrayBuffer : NSObject
{
    NSMutableArray *_vertexAttributes;	// 8 = 0x8
    unsigned long long _vertexCount;	// 16 = 0x10
    unsigned long long _dataTypeSizeInBytes;	// 24 = 0x18
    unsigned int _bufferUsage;	// 32 = 0x20
    _Bool _usesMetalBuffer;	// 36 = 0x24
    long long *_needsUpdateFirstIndex;	// 40 = 0x28
    long long *_needsUpdateLastIndex;	// 48 = 0x30
    char *_gLData;	// 56 = 0x38
    _Bool _dataBufferHasBeenSetup;	// 64 = 0x40
    unsigned int *_gLDataBuffers;	// 72 = 0x48
    NSMutableDictionary *_attributeOffsetsDictionary;	// 80 = 0x50
    NSArray *_metalDataBuffers;	// 88 = 0x58
    unsigned long long _bufferIndex;	// 96 = 0x60
    unsigned long long _dataBufferEntrySize;	// 104 = 0x68
    unsigned long long _bufferCount;	// 112 = 0x70
    unsigned long long _currentBufferIndex;	// 120 = 0x78
}

@property(nonatomic) unsigned long long currentBufferIndex; // @synthesize currentBufferIndex=_currentBufferIndex;
@property(readonly, nonatomic) unsigned long long bufferCount; // @synthesize bufferCount=_bufferCount;
@property(readonly, nonatomic) unsigned long long dataBufferEntrySize; // @synthesize dataBufferEntrySize=_dataBufferEntrySize;
@property(readonly, copy) NSString *description;
- (void)setGLPoint4D:(CDStruct_818bb265)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00100000000ddfdb
- (CDStruct_818bb265)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000000ddf7c
- (void)setGLPoint3D:(CDStruct_869f9c67)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00100000000ddee4
- (CDStruct_869f9c67)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000000dde85
- (void)setGLPoint2D:(CDStruct_b2fbf00d)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00100000000dddf7
- (CDStruct_b2fbf00d)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000000ddd98
- (MISSING_TYPE *)setCGFloat:forAttribute:atIndex: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000ddd82
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00100000000ddcf5
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000000ddc96
- (unsigned long long)vertexCount;	// IMP=0x00100000000ddc8c
@property(readonly, nonatomic) _Bool hasUpdatedData;
- (char *)dataPointer;	// IMP=0x00100000000ddbdd
- (void)swapGPUDataBuffers;	// IMP=0x00100000000dda8f
- (void)encodeArrayBufferWithEncoder:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00100000000dda05
- (void)enableArrayBufferWithDevice:(id)arg1;	// IMP=0x00100000000dd9f3
- (void)addIndexNeedsUpdate:(long long)arg1;	// IMP=0x00100000000dd9a9
- (void)addIndexRangeNeedsUpdate:(struct _NSRange)arg1;	// IMP=0x00100000000dd95e
- (void)addAllIndexesNeedUpdate;	// IMP=0x00100000000dd946
- (void)dealloc;	// IMP=0x00100000000dd892
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 bufferCount:(unsigned long long)arg3;	// IMP=0x00100000000dd105
- (unsigned long long)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned long long)arg2 component:(unsigned long long)arg3;	// IMP=0x00100000000dd08d
- (void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)arg1;	// IMP=0x00100000000dcf39
- (void)updateDataBufferIfNecessary;	// IMP=0x00100000000dcd62
- (void)p_setupGLDataBufferIfNecessary;	// IMP=0x00100000000dcb1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
