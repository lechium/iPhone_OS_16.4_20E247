//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSString;

@interface UITableViewController (FBKDocumentPresenter)
- (id)documentInteractionControllerViewForPreview:(id)arg1;	// IMP=0x00200000000b171c
- (struct CGRect)documentInteractionControllerRectForPreview:(id)arg1;	// IMP=0x00200000000b1605
- (void)documentInteractionControllerDidEndPreview:(id)arg1;	// IMP=0x00200000000b1570
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;	// IMP=0x00200000000b1567
- (void)presentAttachment:(id)arg1 fromIndexPath:(id)arg2;	// IMP=0x00200000000b13d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
