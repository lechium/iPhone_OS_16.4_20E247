//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDragAutoScrollGestureRecognizer
{
}

- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000000631d40
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000631d38
- (void)_draggingEndedWithEvent:(id)arg1;	// IMP=0x0000000000631cfa
- (void)_draggingExitedWithEvent:(id)arg1;	// IMP=0x0000000000631cbc
- (void)_draggingUpdatedWithEvent:(id)arg1;	// IMP=0x0000000000631ca5
- (void)_draggingEnteredWithEvent:(id)arg1;	// IMP=0x0000000000631c8e
- (_Bool)shouldReceiveEvent:(id)arg1;	// IMP=0x0000000000631c0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
