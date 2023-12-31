//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSString;

@interface UIScrollView (CRLAccessibility)
@property(nonatomic, setter=crlaxSetScrollingDisabled:) _Bool crlaxIsScrollingDisabled;
@property(nonatomic, setter=crlaxSetShouldIgnoreSiblingPageControl:) _Bool crlaxShouldIgnoreSiblingPageControl;
@property(nonatomic, setter=crlaxSetScrollStatusPrefersHorizontal:) _Bool crlaxScrollStatusPrefersHorizontal;
@property(nonatomic, setter=crlaxSetScrollAnnouncementDelay:) double crlaxScrollAnnouncementDelay;
- (double);	// IMP=0x00100000001e4d88
@property(nonatomic, setter=crlaxSetUseContentInset:) _Bool crlaxUseContentInset;
@property(copy, nonatomic, setter=crlaxSetScrollStatusFormatString:) NSString *crlaxScrollStatusFormatString;
@property(nonatomic, setter=crlaxSetContentOffsetWasChanged:) _Bool crlaxContentOffsetWasChanged;
@property(nonatomic, setter=crlaxSetAnimationEndedShouldHandleDelegateCallbacks:) _Bool crlaxAnimationEndedShouldHandleDelegateCallbacks;
@end

