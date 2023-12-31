//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class UIDragEvent, _UIDropSessionImpl, _UIInternalDraggingSessionDestination;
@protocol UIDragGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIDragGestureRecognizer : UIGestureRecognizer
{
    UIDragEvent *_dragEvent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000631743
@property(readonly, nonatomic, getter=_dragEvent) __weak UIDragEvent *dragEvent; // @synthesize dragEvent=_dragEvent;
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x00000000006316a2
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x00000000006315fd
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000631558
- (_Bool)_shouldReceivePress:(id)arg1;	// IMP=0x0000000000631550
- (_Bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;	// IMP=0x0000000000631548
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x00000000006313f5
@property(readonly, nonatomic) _UIDropSessionImpl *dropSession;
@property(readonly, nonatomic) _UIInternalDraggingSessionDestination *sessionDestination;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000006312a9

// Remaining properties
@property(nonatomic) __weak id <UIDragGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

