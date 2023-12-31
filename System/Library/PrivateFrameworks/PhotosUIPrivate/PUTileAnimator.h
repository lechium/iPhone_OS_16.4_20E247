//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PUTilingViewControllerTransition;

__attribute__((visibility("hidden")))
@interface PUTileAnimator : NSObject
{
    id <PUTilingViewControllerTransition> _currentTransition;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004a8c2d
@property(readonly, nonatomic) __weak id <PUTilingViewControllerTransition> currentTransition; // @synthesize currentTransition=_currentTransition;
- (void)transition:(id)arg1 didComplete:(_Bool)arg2;	// IMP=0x00000000004a8c11
- (void)transitionDidBeginAnimation:(id)arg1;	// IMP=0x00000000004a8b4a
- (void)transitionWillBeginAnimation:(id)arg1;	// IMP=0x00000000004a8a7f
- (id)freezeTileController:(id)arg1;	// IMP=0x00000000004a8a6a
- (void)updateAnimationForTileController:(id)arg1 withRepositionedTargetLayoutInfo:(id)arg2;	// IMP=0x00000000004a89f0
- (void)animateTileController:(id)arg1 toLayoutInfo:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000004a8976
- (void)prepareTileControllerForAnimation:(id)arg1 withInitialLayoutInfo:(id)arg2;	// IMP=0x00000000004a88fc

@end

