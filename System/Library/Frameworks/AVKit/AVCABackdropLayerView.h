//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, NSHashTable, UIColor;

__attribute__((visibility("hidden")))
@interface AVCABackdropLayerView : UIView
{
    _Bool _forceLowQualityEffect;	// 8 = 0x8
    UIColor *_customBackgroundColor;	// 16 = 0x10
    AVCABackdropLayerView *_groupLeader;	// 24 = 0x18
    NSHashTable *_dependents;	// 32 = 0x20
    long long _activeBackdropEffect;	// 40 = 0x28
}

+ (id)reducedTransparencyColor;	// IMP=0x00600000000a5c8b
+ (id)colorMatrixFilter;	// IMP=0x00600000000a5c5b
+ (id)averageFilter;	// IMP=0x00600000000a5c2b
+ (id)blurFilter;	// IMP=0x00600000000a5bfb
+ (Class)layerClass;	// IMP=0x00600000000a5bea
- (void).cxx_destruct;	// IMP=0x00000000000a5b3e
@property(nonatomic) long long activeBackdropEffect; // @synthesize activeBackdropEffect=_activeBackdropEffect;
@property(readonly, nonatomic) NSHashTable *dependents; // @synthesize dependents=_dependents;
@property(nonatomic) __weak AVCABackdropLayerView *groupLeader; // @synthesize groupLeader=_groupLeader;
@property(copy, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) _Bool forceLowQualityEffect; // @synthesize forceLowQualityEffect=_forceLowQualityEffect;
- (void)_enumerateDependents:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a597b
- (void)_ensureDependents;	// IMP=0x00000000000a5930
- (void)_updateFilters;	// IMP=0x00000000000a4dd7
- (void)removeDependent:(id)arg1;	// IMP=0x00000000000a4d05
- (void)addDependent:(id)arg1;	// IMP=0x00000000000a4c33
- (void)updateGroupLeader;	// IMP=0x00000000000a4b6e
@property(nonatomic, getter=isCaptureOnly) _Bool captureOnly;
- (void)updateActiveBackdropEffectIfGroupLeader;	// IMP=0x00000000000a4752
- (void)didMoveToSuperview;	// IMP=0x00000000000a4711
- (void)didMoveToWindow;	// IMP=0x00000000000a46d0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000a46c8
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000a46c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a4661

// Remaining properties
@property(readonly, nonatomic) CABackdropLayer *layer; // @dynamic layer;

@end
