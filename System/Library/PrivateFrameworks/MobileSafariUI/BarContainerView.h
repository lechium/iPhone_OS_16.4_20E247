//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface BarContainerView : UIView
{
    NSMutableSet *_barViews;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013b2a8
@property(readonly, copy, nonatomic) NSSet *barViews; // @synthesize barViews=_barViews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000013af75
- (void)unregisterBarView:(id)arg1;	// IMP=0x000000000013af58
- (void)registerBarView:(id)arg1;	// IMP=0x000000000013af3b
- (void)didMoveToSuperview;	// IMP=0x000000000013af0c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000013ae7c

@end

