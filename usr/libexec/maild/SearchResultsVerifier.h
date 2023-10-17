//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessageCriterion;

@interface SearchResultsVerifier : NSObject
{
    _Bool _verifySkeletonMessage;	// 8 = 0x8
    _Bool _verifyIndexedBySpotlight;	// 9 = 0x9
    MFMessageCriterion *_criterion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000d9831
@property(retain, nonatomic) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
@property(nonatomic) _Bool verifyIndexedBySpotlight; // @synthesize verifyIndexedBySpotlight=_verifyIndexedBySpotlight;
@property(nonatomic) _Bool verifySkeletonMessage; // @synthesize verifySkeletonMessage=_verifySkeletonMessage;
- (_Bool)_containsSpotlightCriterion:(id)arg1;	// IMP=0x00100000000d95c8
- (_Bool)_walkCriterion:(id)arg1 mode:(long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d91e0
- (void)_parseFlagsFromCriterion:(id)arg1;	// IMP=0x00100000000d908f
- (_Bool)_passesSpotlightVerification:(id)arg1;	// IMP=0x00100000000d9027
- (_Bool)_passesSkeletonVerification:(id)arg1;	// IMP=0x00100000000d8eb6
- (id)description;	// IMP=0x00100000000d8da3
- (id)filterRemoteSearchResults:(id)arg1;	// IMP=0x00100000000d8b05
- (id)initWithCriterion:(id)arg1;	// IMP=0x00100000000d8a5f

@end
