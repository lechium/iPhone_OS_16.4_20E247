//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, NSString, UIView;
@protocol UIInputViewSetPlacementOwner;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacement_GenericApplicator : NSObject
{
    NSLayoutConstraint *_horizontalConstraint;	// 8 = 0x8
    NSLayoutConstraint *_verticalConstraint;	// 16 = 0x10
    NSLayoutConstraint *_widthConstraint;	// 24 = 0x18
    id <UIInputViewSetPlacementOwner> _owner;	// 32 = 0x20
}

+ (id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;	// IMP=0x0010000000b624fa
- (void).cxx_destruct;	// IMP=0x0000000000b630d2
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b62f87
- (_Bool)allConstraintsActive;	// IMP=0x0000000000b62f3c
- (void)invalidate;	// IMP=0x0000000000b62f36
- (void)prepare;	// IMP=0x0000000000b62f30
- (void)applyChanges:(id)arg1;	// IMP=0x0000000000b62c43
- (void)checkVerticalConstraint;	// IMP=0x0000000000b62c2a
@property(readonly) struct UIEdgeInsets inputAccessoryPadding;
@property(readonly) struct UIEdgeInsets inputAssistantPadding;
@property(readonly) struct CGRect popoverFrame;
@property(readonly) struct UIEdgeInsets contentInsets;
- (_Bool)isGesture:(id)arg1 inDraggableView:(struct CGPoint)arg2;	// IMP=0x0000000000b628e2
- (_Bool)preBeginGesture:(id)arg1 shouldBegin:(_Bool *)arg2;	// IMP=0x0000000000b62855
- (struct CGRect)targetRect;	// IMP=0x0000000000b62678
@property(readonly) UIView *twoFingerDraggableView;
@property(readonly) UIView *draggableView;
@property(readonly) NSArray *constraints;
@property(readonly) struct CGPoint origin;
- (id)initForOwner:(id)arg1 withPlacement:(id)arg2;	// IMP=0x0000000000b620bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

