//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CKForceLayoutAnimator, WFContentCoercionNodeView, WFContentItem;

__attribute__((visibility("hidden")))
@interface WFContentGraphViewController : UIViewController
{
    _Bool _coercing;	// 8 = 0x8
    WFContentItem *_contentItem;	// 16 = 0x10
    CKForceLayoutAnimator *_animator;	// 24 = 0x18
    WFContentCoercionNodeView *_rootNodeView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005b022
@property(nonatomic) _Bool coercing; // @synthesize coercing=_coercing;
@property(retain, nonatomic) WFContentCoercionNodeView *rootNodeView; // @synthesize rootNodeView=_rootNodeView;
@property(retain, nonatomic) CKForceLayoutAnimator *animator; // @synthesize animator=_animator;
@property(readonly, nonatomic) WFContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (void)panNode:(id)arg1;	// IMP=0x000000000005ad05
- (void)done;	// IMP=0x000000000005acec
- (void)tapNode:(id)arg1;	// IMP=0x000000000005ab05
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000005aabc
- (void)viewDidLayoutSubviews;	// IMP=0x000000000005a9d9
- (void)viewWillLayoutSubviews;	// IMP=0x000000000005a970
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005a927
- (void)loadView;	// IMP=0x000000000005a45c
- (_Bool)useSmallBubbles;	// IMP=0x000000000005a40d
- (id)initWithContentItem:(id)arg1;	// IMP=0x000000000005a2ed

@end
