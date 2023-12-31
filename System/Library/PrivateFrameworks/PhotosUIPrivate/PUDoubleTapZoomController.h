//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITapGestureRecognizer;
@protocol PUDoubleTapZoomControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUDoubleTapZoomController : NSObject
{
    struct {
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToTilingView;
        _Bool respondsToDelegateForGestureRecognizer;
        _Bool respondsToCanDoubleTapBeginAtLocationFromProvider;
    } _delegateFlags;	// 8 = 0x8
    _Bool __needsUpdateGestureRecognizers;	// 12 = 0xc
    id <PUDoubleTapZoomControllerDelegate> _delegate;	// 16 = 0x10
    UITapGestureRecognizer *__doubleTapGestureRecognizer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014a4a2
@property(retain, nonatomic, setter=_setDoubleTapGestureRecognizer:) UITapGestureRecognizer *_doubleTapGestureRecognizer; // @synthesize _doubleTapGestureRecognizer=__doubleTapGestureRecognizer;
@property(nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers; // @synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers;
@property(nonatomic) __weak id <PUDoubleTapZoomControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000014a44d
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000014a438
- (id)_userTransformViewAtLocationFromProvider:(id)arg1;	// IMP=0x000000000014a292
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;	// IMP=0x000000000014a215
- (void)_updateGestureRecognizersIfNeeded;	// IMP=0x0000000000149fae
- (void)_invalidateGestureRecognizers;	// IMP=0x0000000000149f97
- (_Bool)shouldDoubleTapBeginAtLocationFromProvider:(id)arg1;	// IMP=0x0000000000149e46
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
- (void)invalidateViewHostingGestureRecognizers;	// IMP=0x0000000000149dea
- (id)init;	// IMP=0x0000000000149cec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

