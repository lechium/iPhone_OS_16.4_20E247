//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDReference, EDTable;

__attribute__((visibility("hidden")))
@interface EFTableData : NSObject
{
    struct EFRefTok mRefTok;	// 8 = 0x8
    EDTable *mTable;	// 32 = 0x20
    EDReference *mReference;	// 40 = 0x28
    int mMakeups;	// 48 = 0x30
}

- (void)makeup:(id)arg1 with:(int)arg2;	// IMP=0x00000000003aa643
- (id)reference;	// IMP=0x00000000003aa639
- (id)table;	// IMP=0x00000000003aa62f
- (unsigned short *)ptgData;	// IMP=0x00000000003aa625
- (const struct EFRefTok *)refTok;	// IMP=0x00000000003aa61b
- (void)dealloc;	// IMP=0x00000000003aa5d1
- (id)initWith:(struct EFStrTok *)arg1;	// IMP=0x00000000003aa535

@end
