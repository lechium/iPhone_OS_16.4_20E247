//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UITargetedPreview, _UIGravityWellEffectBody;
@protocol _UIContentEffectDescriptor;

__attribute__((visibility("hidden")))
@interface _UIGravityWellEffect : NSObject
{
    id <_UIContentEffectDescriptor> _descriptor;	// 8 = 0x8
    UITargetedPreview *_continuationPreview;	// 16 = 0x10
    _UIGravityWellEffectBody *_primaryBody;	// 24 = 0x18
    NSArray *_secondaryBodies;	// 32 = 0x20
    NSMutableArray *_completions;	// 40 = 0x28
    unsigned long long _animationCount;	// 48 = 0x30
    double _effectProgress;	// 56 = 0x38
    long long _state;	// 64 = 0x40
}

+ (id)effectWithDescriptor:(id)arg1 continuationPreview:(id)arg2;	// IMP=0x00100000003f9cd9
- (void).cxx_destruct;	// IMP=0x00000000003fc904
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double effectProgress; // @synthesize effectProgress=_effectProgress;
@property(nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSArray *secondaryBodies; // @synthesize secondaryBodies=_secondaryBodies;
@property(retain, nonatomic) _UIGravityWellEffectBody *primaryBody; // @synthesize primaryBody=_primaryBody;
@property(retain, nonatomic) UITargetedPreview *continuationPreview; // @synthesize continuationPreview=_continuationPreview;
@property(readonly, nonatomic) id <_UIContentEffectDescriptor> descriptor; // @synthesize descriptor=_descriptor;
- (id)_effectSpringBehavior;	// IMP=0x00000000003fc804
- (void)_performAllCompletions;	// IMP=0x00000000003fc6eb
- (void)_tearDownEffectViews;	// IMP=0x00000000003fc544
- (void)_updateToProgress:(double)arg1 state:(long long)arg2;	// IMP=0x00000000003fbcec
- (void)_installEffectViews;	// IMP=0x00000000003fac0f
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003fab83
- (id)previewForContinuingToEffectWithPreview:(id)arg1;	// IMP=0x00000000003fa7b2
- (void)setDescriptor:(id)arg1 andKey:(id)arg2;	// IMP=0x00000000003fa7a1
- (void)endForHandOff;	// IMP=0x00000000003fa6fc
- (void)end;	// IMP=0x00000000003fa67b
- (void)updateWithProgress:(double)arg1;	// IMP=0x00000000003fa638
- (void)begin;	// IMP=0x00000000003fa578
@property(readonly, nonatomic) NSArray *secondaryBodyPreviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
