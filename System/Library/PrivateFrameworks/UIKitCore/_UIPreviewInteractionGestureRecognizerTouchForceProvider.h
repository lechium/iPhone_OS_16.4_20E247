//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITouchForceGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _active;	// 8 = 0x8
    UITouchForceGestureRecognizer *_gestureRecognizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000dc2c92
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)_handleGestureRecognizer:(id)arg1;	// IMP=0x0000000000dc2bc3
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000dc2b47
- (void)cancelInteraction;	// IMP=0x0000000000dc2b05
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;	// IMP=0x0000000000dc2a67
@property(readonly, nonatomic) double touchForce;
- (void)dealloc;	// IMP=0x0000000000dc29de
- (id)initWithView:(id)arg1 configuration:(CDUnknownBlockType)arg2;	// IMP=0x0000000000dc28af
- (id)initWithGestureRecognizer:(id)arg1;	// IMP=0x0000000000dc273e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
