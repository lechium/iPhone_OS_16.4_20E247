//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAStateController, NSDictionary, NSString;

@interface SBCAAutoPlayingPackageView : UIView
{
    CAStateController *_stateController;	// 8 = 0x8
    CALayer *_rootLayer;	// 16 = 0x10
    struct CGSize _originalSize;	// 24 = 0x18
    NSString *_pendingCompletionToState;	// 40 = 0x28
    NSString *_pendingCompletionFromState;	// 48 = 0x30
    CDUnknownBlockType _pendingCompletion;	// 56 = 0x38
    NSDictionary *_publishedObjectMap;	// 64 = 0x40
    NSString *_startingState;	// 72 = 0x48
    NSString *_endingState;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000006bd7
- (void)_clearPendingCompletion;	// IMP=0x0010000000006bbe
- (void)_setPendingCompletion:(CDUnknownBlockType)arg1 fromState:(id)arg2 toState:(id)arg3;	// IMP=0x0010000000006ada
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;	// IMP=0x0010000000006917
- (void)layoutSubviews;	// IMP=0x00100000000067f0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000067d8
- (_Bool)setState:(id)arg1 onLayer:(id)arg2 animated:(_Bool)arg3 transitionSpeed:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000006629
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2 transitionSpeed:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006603
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000065e6
- (_Bool)setState:(id)arg1;	// IMP=0x00100000000065cf
- (id)publishedObjectNames;	// IMP=0x00100000000065b2
- (id)publishedObjectWithName:(id)arg1;	// IMP=0x0010000000006595
- (void)dealloc;	// IMP=0x0010000000006534
- (id)initWithURL:(id)arg1 startingState:(id)arg2 endingState:(id)arg3;	// IMP=0x001000000000602d

@end

