//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface COBallot : NSObject
{
    NSOrderedSet *_candidates;	// 8 = 0x8
    NSDictionary *_discovery;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000008815d
- (void).cxx_destruct;	// IMP=0x00000000000882d3
@property(copy, nonatomic) NSDictionary *discovery; // @synthesize discovery=_discovery;
@property(copy, nonatomic) NSOrderedSet *candidates; // @synthesize candidates=_candidates;
- (_Bool)isEqualToBallot:(id)arg1;	// IMP=0x0000000000088210
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000881a9
- (unsigned long long)hash;	// IMP=0x0000000000088165
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008812f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000088124
- (id)description;	// IMP=0x000000000008805f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000087f98
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000087a4b
- (id)initWithCandidate:(id)arg1;	// IMP=0x00000000000879cd
- (id)initWithBallot:(id)arg1;	// IMP=0x00000000000878f2
- (id)init;	// IMP=0x000000000008787d

@end

