//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ADDeviceSyncCommandPullDeltaResponse : NSObject
{
    NSArray *_incrementalChanges;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000b26ea
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b247b
- (void).cxx_destruct;	// IMP=0x00100000000b27ed
@property(readonly, copy, nonatomic) NSArray *incrementalChanges; // @synthesize incrementalChanges=_incrementalChanges;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000b27c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000b26f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b26df
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b263c
- (unsigned long long)hash;	// IMP=0x00100000000b2626
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000b25a0
- (id)description;	// IMP=0x00100000000b258c
- (id)initWithIncrementalChanges:(id)arg1;	// IMP=0x00100000000b24dc
- (id)init;	// IMP=0x00100000000b24c8
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b2386
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b28f3

@end

