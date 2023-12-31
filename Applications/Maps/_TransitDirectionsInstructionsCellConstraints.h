//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint;

@interface _TransitDirectionsInstructionsCellConstraints : NSObject
{
    NSLayoutConstraint *_minimumCellHeightConstraint;	// 8 = 0x8
    NSLayoutConstraint *_topToPrimaryConstraint;	// 16 = 0x10
    NSLayoutConstraint *_contentLayoutGuideToPrimaryLeadingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_primaryBaselineToBottomConstraint;	// 32 = 0x20
    NSLayoutConstraint *_primaryAccessoryToSecondaryAccessoryConstraint;	// 40 = 0x28
    NSLayoutConstraint *_platformArtworkBottomToBottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_platformArtworkTrailingToTextStackLabelLeadingConstraint;	// 56 = 0x38
    NSLayoutConstraint *_textStackLeadingToPrimaryLabelLeadingConstraint;	// 64 = 0x40
    NSLayoutConstraint *_secondaryLabelFirstBaselineToPlatformArtworkBottomConstraint;	// 72 = 0x48
    NSLayoutConstraint *_primaryLabelTrailingToTrailingContentConstraint;	// 80 = 0x50
    NSLayoutConstraint *_secondaryLabelTrailingToTrailingContentConstraint;	// 88 = 0x58
    NSLayoutConstraint *_primaryAccessoryToTrailingConstraint;	// 96 = 0x60
    NSLayoutConstraint *_primaryAccessoryMaximumWidthFactorConstraint;	// 104 = 0x68
    NSArray *_initialConstraints;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000b02094
@property(copy, nonatomic) NSArray *initialConstraints; // @synthesize initialConstraints=_initialConstraints;
@property(retain, nonatomic) NSLayoutConstraint *primaryAccessoryMaximumWidthFactorConstraint; // @synthesize primaryAccessoryMaximumWidthFactorConstraint=_primaryAccessoryMaximumWidthFactorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryAccessoryToTrailingConstraint; // @synthesize primaryAccessoryToTrailingConstraint=_primaryAccessoryToTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondaryLabelTrailingToTrailingContentConstraint; // @synthesize secondaryLabelTrailingToTrailingContentConstraint=_secondaryLabelTrailingToTrailingContentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryLabelTrailingToTrailingContentConstraint; // @synthesize primaryLabelTrailingToTrailingContentConstraint=_primaryLabelTrailingToTrailingContentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondaryLabelFirstBaselineToPlatformArtworkBottomConstraint; // @synthesize secondaryLabelFirstBaselineToPlatformArtworkBottomConstraint=_secondaryLabelFirstBaselineToPlatformArtworkBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textStackLeadingToPrimaryLabelLeadingConstraint; // @synthesize textStackLeadingToPrimaryLabelLeadingConstraint=_textStackLeadingToPrimaryLabelLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *platformArtworkTrailingToTextStackLabelLeadingConstraint; // @synthesize platformArtworkTrailingToTextStackLabelLeadingConstraint=_platformArtworkTrailingToTextStackLabelLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *platformArtworkBottomToBottomConstraint; // @synthesize platformArtworkBottomToBottomConstraint=_platformArtworkBottomToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryAccessoryToSecondaryAccessoryConstraint; // @synthesize primaryAccessoryToSecondaryAccessoryConstraint=_primaryAccessoryToSecondaryAccessoryConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryBaselineToBottomConstraint; // @synthesize primaryBaselineToBottomConstraint=_primaryBaselineToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentLayoutGuideToPrimaryLeadingConstraint; // @synthesize contentLayoutGuideToPrimaryLeadingConstraint=_contentLayoutGuideToPrimaryLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topToPrimaryConstraint; // @synthesize topToPrimaryConstraint=_topToPrimaryConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumCellHeightConstraint; // @synthesize minimumCellHeightConstraint=_minimumCellHeightConstraint;
- (void)dealloc;	// IMP=0x0010000000b01ede
- (void)deactivateConstraints;	// IMP=0x0010000000b01978

@end

