//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSDate;

@interface UIApplication (UIAccessibilityElementTraversal)
- (id)_accessibilityElementWindowsWithOptions:(id)arg1 referenceWindow:(id)arg2 allWindows:(id)arg3;	// IMP=0x003000000001d8a0
- (id)_accessibilityElementWindowsWithOptions:(id)arg1 referenceWindow:(id)arg2;	// IMP=0x003000000001d620
- (id)_accessibilityTraversalWindows;	// IMP=0x003000000001d320
- (void)_accessibilityAddKeyboardWindowToArray:(id)arg1 forModalWindow:(id)arg2;	// IMP=0x003000000001ce80
- (id)_accessibilityViewChildrenWithOptions:(id)arg1 referenceWindow:(id)arg2;	// IMP=0x003000000001c800
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;	// IMP=0x003000000001c780
- (_Bool)_accessibilityEnumerateSiblingsWithParent:(id *)arg1 options:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x003000000001c6f0
- (_Bool)_accessibilitySystemAppServerIsReady;	// IMP=0x0030000000098490
- (void)_accessibilityUpdateIsSystemAppServer;	// IMP=0x0030000000098460
- (_Bool)_accessibilityIsSystemAppServer;	// IMP=0x0030000000098360
- (_Bool)_accessibilityIsAppReadyToBeProbed;	// IMP=0x00300000000a7b60
- (double)_accessibilityMaximumAllowedOutOfBoundsPercent;	// IMP=0x00300000000a7b10
@property(copy, nonatomic) CDUnknownBlockType accessibilityKeyboardKeyDispatchOverride;
@property(retain, nonatomic) NSDate *accessibilityLastGesturedTextInputStatusChange;
- (id)accessibilityPresentingViewController;	// IMP=0x00300000000c8050
@end
