//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSHashTable.h"

__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable
{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _callBacks;	// 8 = 0x8
    struct __CFBasicHash *_ht;	// 48 = 0x30
}

- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;	// IMP=0x0000000000438c40
- (id)allObjects;	// IMP=0x0000000000438a42
- (id)description;	// IMP=0x0000000000438856
- (unsigned long long)count;	// IMP=0x0000000000438841
- (void)removeItem:(const void *)arg1;	// IMP=0x00000000004387f4
- (void)insertKnownAbsentItem:(const void *)arg1;	// IMP=0x00000000004386ee
- (void)addObject:(id)arg1;	// IMP=0x00000000004386a1
- (void)insertItem:(const void *)arg1;	// IMP=0x0000000000438654
- (void *)getItem:(const void *)arg1;	// IMP=0x00000000004385e7
- (id)copy;	// IMP=0x0000000000438517
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004384bc
- (unsigned long long)hash;	// IMP=0x00000000004384aa
- (void)removeAllItems;	// IMP=0x000000000043848b
- (void)dealloc;	// IMP=0x0000000000438427
- (id)init;	// IMP=0x000000000043841e

@end

