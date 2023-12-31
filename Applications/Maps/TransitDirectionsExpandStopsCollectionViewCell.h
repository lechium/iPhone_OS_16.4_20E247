//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TransitDirectionsListItem, UIView;
@protocol TransitDirectionsExpandableCellDelegate;

@interface TransitDirectionsExpandStopsCollectionViewCell
{
    id <TransitDirectionsExpandableCellDelegate> _expandableCellDelegate;	// 16 = 0x10
}

+ (Class)stepViewClass;	// IMP=0x00200000009e0f31
- (void).cxx_destruct;	// IMP=0x00200000009e0fd4
@property(nonatomic) __weak id <TransitDirectionsExpandableCellDelegate> expandableCellDelegate; // @synthesize expandableCellDelegate=_expandableCellDelegate;
- (void)updateExpandCollapseStyling;	// IMP=0x00100000009e0f9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long displayOptions;
@property(readonly) unsigned long long hash;
@property(nonatomic) double leadingInstructionMargin;
@property(nonatomic) long long navigationState;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *trailingView;
@property(readonly, nonatomic) TransitDirectionsListItem *transitListItem;
@property(nonatomic) _Bool useNavigationMetrics;

@end

