//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, SearchResult, UIViewController;
@protocol MarkedLocationRefinementDelegate;

@interface MarkedLocationRefinementViewController
{
    NSLayoutConstraint *_heightBarConstraint;	// 8 = 0x8
    UIViewController *_originalPresenterViewController;	// 16 = 0x10
    SearchResult *_originalMarkedLocation;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004f2708
@property(readonly, nonatomic) SearchResult *originalMarkedLocation; // @synthesize originalMarkedLocation=_originalMarkedLocation;
@property(nonatomic) __weak UIViewController *originalPresenterViewController; // @synthesize originalPresenterViewController=_originalPresenterViewController;
- (void)_removeMarkedLocation:(id)arg1;	// IMP=0x00100000004f263c
- (void)_cancel:(id)arg1;	// IMP=0x00100000004f25ae
- (void)_done:(id)arg1;	// IMP=0x00100000004f2514
- (double)footerHeight;	// IMP=0x00100000004f2497
- (void)viewLayoutMarginsDidChange;	// IMP=0x00100000004f2439
- (void)viewDidLoad;	// IMP=0x00100000004f1812
- (id)initWithMarkedLocation:(id)arg1;	// IMP=0x00100000004f174b
- (id)initWithCamera:(id)arg1 crosshairType:(unsigned long long)arg2;	// IMP=0x00100000004f1709

// Remaining properties
@property(nonatomic) __weak id <MarkedLocationRefinementDelegate> delegate; // @dynamic delegate;

@end

