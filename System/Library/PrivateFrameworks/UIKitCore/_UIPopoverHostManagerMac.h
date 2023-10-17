//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverHostManagerMac : NSObject
{
}

- (id)popoverSceneForPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c57515
- (_Bool)useDefaultPreferredAnimationControllerForDismissalWithPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c5750d
- (_Bool)useDefaultPreferredAnimationControllerForPresentationWithPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c57505
- (_Bool)useDefaultPresentationViewForPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c574fd
- (_Bool)shouldOccludeDuringPresentationForPopoverWithIdentifier:(id)arg1;	// IMP=0x0000000000c574f5
- (void)detachPopoverWithIdentifier:(id)arg1 fromPoint:(struct CGPoint)arg2 withCompletionCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c574ef
- (void)updateSupportsDetach:(_Bool)arg1 forPopoverWithIdentifier:(id)arg2;	// IMP=0x0000000000c574e9
- (void)updateUserInterfaceStyle:(long long)arg1 forPopoverWithIdentifier:(id)arg2;	// IMP=0x0000000000c574e3
- (void)updatePopoverWithIdentifier:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000c574dd
- (void)closePopoverWithIdentifier:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000c574d7
- (id)createPopoverWithConfiguration:(id)arg1;	// IMP=0x0000000000c574cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
