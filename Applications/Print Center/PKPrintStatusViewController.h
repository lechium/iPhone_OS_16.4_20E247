//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class UIPopoverController;
@protocol PKPrintStatusDelegate;

@interface PKPrintStatusViewController : UINavigationController
{
    UIPopoverController *_poverController;	// 8 = 0x8
    id <PKPrintStatusDelegate> _printStatusDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000007eda
@property(nonatomic) id <PKPrintStatusDelegate> printStatusDelegate; // @synthesize printStatusDelegate=_printStatusDelegate;
- (void)jobDidCancel;	// IMP=0x0010000000007e68
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x0010000000007e16
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x0010000000007df9
- (void)presentPrintStatusFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000007d3a
- (id)printStatusView;	// IMP=0x0010000000007cf0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000007bc8
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0010000000007b1d

@end

