//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface TransitRouteSnapshotTransitionCell : UIView
{
    NSMutableArray *_updateHandlers;	// 8 = 0x8
}

+ (id)snapshotToTransitionFromCell:(id)arg1 toCell:(id)arg2 withBackgroundBlur:(_Bool)arg3;	// IMP=0x00400000006c6cb0
- (void).cxx_destruct;	// IMP=0x00200000006c6e4d
- (void)updateWithTransitionProgress:(double)arg1;	// IMP=0x00100000006c6d2b
- (id)initToTransitionFromCell:(id)arg1 toCell:(id)arg2 withBackgroundBlur:(_Bool)arg3;	// IMP=0x00100000006c5daf

@end
