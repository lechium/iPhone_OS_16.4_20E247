//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class HFItem, NSString;

@interface UIViewController (HUPresentation)
- (id)hu_dismissViewControllerAnimated:(_Bool)arg1;	// IMP=0x0020000000150003
- (id)hu_performDismissalRequest:(id)arg1;	// IMP=0x002000000014fbe8
- (id)hu_performPresentationRequest:(id)arg1;	// IMP=0x002000000014f89c
- (id)hu_presentPreloadableViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x002000000018983e
@property(readonly, nonatomic) HFItem *hu_topmostPresentedItem;
@property(readonly, nonatomic) HFItem *hu_presentedItem;
- (id)hu_pocketedContainerViewController;	// IMP=0x00200000003b389b
- (id)hu_delegateForModalPresentation;	// IMP=0x002000000040ef8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
