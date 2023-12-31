//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BNBannerSource, DRPasteAnnouncement, NSString, PLPillView;
@protocol BNPresentableContext;

@interface _DRPasteAnnouncementViewController : UIViewController
{
    NSString *_requestID;	// 8 = 0x8
    PLPillView *_pillView;	// 16 = 0x10
    BNBannerSource *_bannerSource;	// 24 = 0x18
    double _announcementDuration;	// 32 = 0x20
    _Bool _isPasteDeniedAnnouncement;	// 40 = 0x28
    DRPasteAnnouncement *_announcement;	// 48 = 0x30
    CDUnknownBlockType _authorizationReplyBlock;	// 56 = 0x38
}

+ (_Bool)shouldCoalesce:(id)arg1;	// IMP=0x00200000000088d3
- (void).cxx_destruct;	// IMP=0x0020000000008da6
@property(copy) CDUnknownBlockType authorizationReplyBlock; // @synthesize authorizationReplyBlock=_authorizationReplyBlock;
@property(retain) DRPasteAnnouncement *announcement; // @synthesize announcement=_announcement;
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000008c43
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000008b6a
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x0010000000008990
- (struct UIEdgeInsets)bannerContentOutsets;	// IMP=0x0010000000008895
- (struct CGSize)preferredContentSizeWithPresentationSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x001000000000882b
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, copy, nonatomic) NSString *requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000087f8
- (void)viewDidLoad;	// IMP=0x0010000000008715
- (id)authorizationDecisionView;	// IMP=0x0010000000007e5d
- (void)dismissBanner;	// IMP=0x0010000000007e09
- (void)denyPaste:(id)arg1;	// IMP=0x0010000000007da7
- (void)allowPaste:(id)arg1;	// IMP=0x0010000000007d42
- (id)initForDeniedPasteWithBannerSource:(id)arg1;	// IMP=0x0010000000007a5f
- (id)initWithAnnouncement:(id)arg1 reply:(CDUnknownBlockType)arg2 bannerSource:(id)arg3;	// IMP=0x00100000000075fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long presentableBehavior;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableType;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;

@end

