//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SiriButtonIdentifier)
+ (id)stringWithSiriButtonIdentifier:(long long)arg1;	// IMP=0x0000000000005084
+ (id)stringWithSiriPresentationIdentifier:(long long)arg1;	// IMP=0x0000000000022888
+ (id)stringWithSiriPresentationActivationCancelReason:(unsigned long long)arg1;	// IMP=0x0000000000022a1f
+ (id)stringWithSiriHomeAffordanceSuppression:(long long)arg1;	// IMP=0x0000000000022c24
+ (id)stringWithSiriActivationEventType:(long long)arg1;	// IMP=0x0000000000022f40
+ (id)stringWithSiriSpotlightContextSource:(long long)arg1;	// IMP=0x00000000000352b5
- (long long)siriPresentationIdentifier;	// IMP=0x00100000000228d0
- (unsigned long long)cancelReason;	// IMP=0x0010000000022a43
@end

