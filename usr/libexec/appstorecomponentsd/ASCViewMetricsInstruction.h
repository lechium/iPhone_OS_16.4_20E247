//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCMetricsData, NSSet;

@interface ASCViewMetricsInstruction : NSObject
{
    ASCMetricsData *_data;	// 8 = 0x8
    NSSet *_invocationPoints;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001e3e6
- (void).cxx_destruct;	// IMP=0x002000000001e95c
@property(readonly, copy, nonatomic) NSSet *invocationPoints; // @synthesize invocationPoints=_invocationPoints;
@property(readonly, copy, nonatomic) ASCMetricsData *data; // @synthesize data=_data;
- (id)description;	// IMP=0x001000000001e86c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001e6d9
- (unsigned long long)hash;	// IMP=0x001000000001e627
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001e61c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001e56e
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001e3ee
- (id)initWithData:(id)arg1 invocationPoints:(id)arg2;	// IMP=0x001000000001e321

@end
