//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncSnapshot;

@interface ADDeviceSyncCommandPullSnapshotResponse : NSObject
{
    ADDeviceSyncSnapshot *_snapshot;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001fe7e3
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fe574
- (void).cxx_destruct;	// IMP=0x00100000001fe8a5
@property(readonly, copy, nonatomic) ADDeviceSyncSnapshot *snapshot; // @synthesize snapshot=_snapshot;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001fe878
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001fe7eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001fe7d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001fe735
- (unsigned long long)hash;	// IMP=0x00100000001fe71f
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000001fe699
- (id)description;	// IMP=0x00100000001fe685
- (id)initWithSnapshot:(id)arg1;	// IMP=0x00100000001fe5d5
- (id)init;	// IMP=0x00100000001fe5c1
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fe47f
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fe9ab

@end

