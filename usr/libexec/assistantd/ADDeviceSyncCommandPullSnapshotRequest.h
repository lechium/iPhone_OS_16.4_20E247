//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADDeviceSyncCommandPullSnapshotRequest : NSObject
{
    NSString *_dataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000008c54a
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000008c2db
- (void).cxx_destruct;	// IMP=0x001000000008c60c
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000008c5df
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000008c552
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008c53f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008c49c
- (unsigned long long)hash;	// IMP=0x001000000008c486
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000008c400
- (id)description;	// IMP=0x001000000008c3ec
- (id)initWithDataType:(id)arg1;	// IMP=0x001000000008c33c
- (id)init;	// IMP=0x001000000008c328
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000008c1e6
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000008c712

@end

