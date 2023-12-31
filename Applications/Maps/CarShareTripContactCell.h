//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CarSharingRingView, NSString, SharedTripCapabilityBadgeView, UIImage, UIImageView, UILabel;
@protocol CarShareTripContactCellDelegate;

@interface CarShareTripContactCell : UITableViewCell
{
    UIImageView *_contactImageView;	// 8 = 0x8
    long long _monogrammerStyle;	// 16 = 0x10
    CarSharingRingView *_sharingRingView;	// 24 = 0x18
    struct CGSize _lastKnownSize;	// 32 = 0x20
    UILabel *_contactNameLabel;	// 48 = 0x30
    UILabel *_subtitleLabel;	// 56 = 0x38
    SharedTripCapabilityBadgeView *_capabilityBadgeView;	// 64 = 0x40
    NSString *_contactIdentifier;	// 72 = 0x48
    id <CarShareTripContactCellDelegate> _delegate;	// 80 = 0x50
    unsigned long long _sharingState;	// 88 = 0x58
    unsigned long long _capabilityType;	// 96 = 0x60
    NSString *_sharingHandle;	// 104 = 0x68
}

+ (id)reuseIdentifier;	// IMP=0x002000000076a608
- (void).cxx_destruct;	// IMP=0x001000000076c37c
@property(copy, nonatomic) NSString *sharingHandle; // @synthesize sharingHandle=_sharingHandle;
@property(nonatomic) unsigned long long capabilityType; // @synthesize capabilityType=_capabilityType;
@property(nonatomic) unsigned long long sharingState; // @synthesize sharingState=_sharingState;
@property(nonatomic) __weak id <CarShareTripContactCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x001000000076c2b0
- (void)_setSharingState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000076c1ff
- (void)setSharingState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000076c1db
- (_Bool)isSharing;	// IMP=0x001000000076c1af
@property(copy, nonatomic) NSString *contactName;
@property(retain, nonatomic) UIImage *contactImage;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000076c0fa
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000076c02d
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000076bfec
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000076bfab
- (id)_sharingRingColor:(_Bool)arg1;	// IMP=0x001000000076bf72
- (id)_sharingLabelColor:(_Bool)arg1;	// IMP=0x001000000076bef5
- (void)_redrawContactImage;	// IMP=0x001000000076bc58
- (void)_setContactIdentifier:(id)arg1;	// IMP=0x001000000076bbe3
- (id)_subtitleString;	// IMP=0x001000000076ba75
- (void)_updateSubtitleLabel;	// IMP=0x001000000076b9b6
- (void)_updateAppearance;	// IMP=0x001000000076b7ba
- (void)_updateSharingRingAnimated:(_Bool)arg1;	// IMP=0x001000000076b72a
- (void)prepareForReuse;	// IMP=0x001000000076b68e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000076a612
- (void)configureWithSharedTrip:(id)arg1;	// IMP=0x001000000076c51e
- (void)configureWithMSPSharedTripContact:(id)arg1;	// IMP=0x001000000076c426
- (id)_contactNameStringFromContact:(id)arg1;	// IMP=0x001000000076c411

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

