//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@class NSString;

@interface NSNumber (CRDT_Additions)
- (id)tombstone;	// IMP=0x00200000000fff8b
- (void)realizeLocalChangesIn:(id)arg1;	// IMP=0x00200000000fff85
- (void)setDocument:(id)arg1;	// IMP=0x00200000000fff7f
- (void)walkGraph:(CDUnknownBlockType)arg1;	// IMP=0x00200000000fff79
- (id)deltaSince:(id)arg1 in:(id)arg2;	// IMP=0x00200000000fff71
- (void)encodeWithCRCoder:(id)arg1;	// IMP=0x00200000000ffecc
- (id)initWithCRCoder:(id)arg1;	// IMP=0x00200000000ffe01
- (void)mergeWith:(id)arg1;	// IMP=0x00200000000ffd87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

