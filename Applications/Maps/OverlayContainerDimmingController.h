//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DimmingBehaviour, NSMapTable;

@interface OverlayContainerDimmingController : NSObject
{
    DimmingBehaviour *_behaviour;	// 8 = 0x8
    NSMapTable *_customBehaviours;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000068e79e
@property(readonly, copy, nonatomic) NSMapTable *customBehaviours; // @synthesize customBehaviours=_customBehaviours;
@property(readonly, copy, nonatomic) DimmingBehaviour *behaviour; // @synthesize behaviour=_behaviour;
- (id)_dimmingBehaviourForContainee:(id)arg1;	// IMP=0x001000000068e64c
- (unsigned long long)overlayContainerLayoutForContaineeDimmingDismissal:(id)arg1;	// IMP=0x001000000068e5b4
- (double)overlayContainer:(id)arg1 dimmingPercentageForCurrentContaineeWithNewHeight:(double)arg2;	// IMP=0x001000000068e50e
- (id)initWithDimmingBehaviour:(id)arg1 customBehaviours:(id)arg2;	// IMP=0x001000000068e463

@end

