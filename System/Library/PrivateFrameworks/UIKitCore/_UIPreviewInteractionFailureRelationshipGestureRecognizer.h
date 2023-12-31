//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIPreviewInteraction;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    UIPreviewInteraction *_previewInteraction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000dbc23a
@property(nonatomic) __weak UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000dbc1d9
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000dbc10f
- (void)setStateToRecognized;	// IMP=0x0000000000dbc0f8
- (void)setStateToFailed;	// IMP=0x0000000000dbc0e1
- (id)initWithPreviewInteraction:(id)arg1;	// IMP=0x0000000000dbc04c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

