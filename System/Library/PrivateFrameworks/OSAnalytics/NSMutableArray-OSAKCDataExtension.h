//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (OSAKCDataExtension)
- (id)parent;	// IMP=0x0090000000002a84
- (id)top;	// IMP=0x0090000000002a72
- (id)pop;	// IMP=0x0090000000002a2a
- (void)push:(id)arg1;	// IMP=0x0090000000002a18
- (void)addPart:(id)arg1;	// IMP=0x0090000000018699
- (id)section_pop;	// IMP=0x0090000000023564
- (void)section_push:(id)arg1;	// IMP=0x0090000000023552
- (void)sortByAddressAndSetInferredSizes;	// IMP=0x009000000002755c
- (void)addImageLegacy:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 name:(const char *)arg4 path:(const char *)arg5 arch:(const char *)arg6;	// IMP=0x009000000002735a
- (void)addImage:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x00900000000272ed
@end

