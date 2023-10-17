//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FigMetalUtils;
@protocol MTLHeap;

__attribute__((visibility("hidden")))
@interface FigMetalHeapAllocator : NSObject
{
    id <MTLHeap> _heap;	// 8 = 0x8
    unsigned long long _alignment;	// 16 = 0x10
    FigMetalUtils *_utils;	// 24 = 0x18
    unsigned long long _memSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000cd26
@property(readonly, nonatomic) unsigned long long memSize; // @synthesize memSize=_memSize;
@property(readonly, nonatomic) FigMetalUtils *utils; // @synthesize utils=_utils;
@property(readonly, nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (unsigned long long)bufferOffset:(id)arg1;	// IMP=0x000000000000ccf3
- (unsigned long long)textureOffset:(id)arg1;	// IMP=0x000000000000cc3f
- (_Bool)hasCreatedBuffer:(id)arg1;	// IMP=0x000000000000cbfc
- (_Bool)hasCreatedTexture:(id)arg1;	// IMP=0x000000000000cbb9
- (void)purgeResources;	// IMP=0x000000000000cb9f
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000000c8e4
- (id)newBufferWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000000c868
- (CDStruct_4bcfbbae)getSizeAndAlignForBufferDescriptor:(id)arg1;	// IMP=0x000000000000c7c4
- (CDStruct_4bcfbbae)getSizeAndAlignForDescriptor:(id)arg1;	// IMP=0x000000000000c67b
- (int)setupWithDescriptor:(id)arg1;	// IMP=0x000000000000c504
- (id)description;	// IMP=0x000000000000c4f7
- (id)initWithMetalUtils:(id)arg1;	// IMP=0x000000000000c440

@end
