//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRDocument, NSString;

__attribute__((visibility("hidden")))
@interface CRRegister : NSObject
{
    CRDocument *_document;	// 8 = 0x8
}

+ (id)registerWithType:(unsigned long long)arg1 contents:(id)arg2 document:(id)arg3;	// IMP=0x001000000010e7e4
+ (id)registerWithType:(unsigned long long)arg1 contents:(id)arg2;	// IMP=0x001000000010e7c8
- (void).cxx_destruct;	// IMP=0x000000000010ead4
@property(nonatomic) __weak CRDocument *document; // @synthesize document=_document;
- (id)initWithCRCoder:(id)arg1;	// IMP=0x000000000010ea60
- (void)encodeWithCRCoder:(id)arg1;	// IMP=0x000000000010ea13
- (id)tombstone;	// IMP=0x000000000010e9cf
- (void)walkGraph:(CDUnknownBlockType)arg1;	// IMP=0x000000000010e982
- (void)realizeLocalChangesIn:(id)arg1;	// IMP=0x000000000010e97c
- (id)deltaSince:(id)arg1 in:(id)arg2;	// IMP=0x000000000010e91f
- (void)mergeWith:(id)arg1;	// IMP=0x000000000010e8d2
- (_Bool)isEqualContents:(id)arg1;	// IMP=0x000000000010e8ca
- (id)initWithDocument:(id)arg1;	// IMP=0x000000000010e866

// Remaining properties
@property(retain, nonatomic) id contents; // @dynamic contents;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
