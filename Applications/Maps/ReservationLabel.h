//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@protocol ReservationLabelLayoutDelegate;

@interface ReservationLabel : UILabel
{
    id <ReservationLabelLayoutDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000005dba8f
@property(nonatomic) __weak id <ReservationLabelLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool textFits;
- (void)layoutSubviews;	// IMP=0x00100000005db7c6

@end
