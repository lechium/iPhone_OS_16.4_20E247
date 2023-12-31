//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MRURoutingAccessoryView, MRURoutingSubtitleController, MRURoutingSubtitleView, MRUVisualStylingProvider, NSString, UIImage, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface MRUVendorSpecificSubrouteTableViewCell : UITableViewCell
{
    UIImage *_protocolIcon;	// 8 = 0x8
    NSString *_protocolName;	// 16 = 0x10
    MRURoutingAccessoryView *_routingAccessoryView;	// 24 = 0x18
    MRURoutingSubtitleController *_subtitleStateController;	// 32 = 0x20
    MRUVisualStylingProvider *_stylingProvider;	// 40 = 0x28
    UIImageView *_protocolIconView;	// 48 = 0x30
    UILabel *_protocolNameLabel;	// 56 = 0x38
    UIView *_separatorView;	// 64 = 0x40
    MRURoutingSubtitleView *_subtitleView;	// 72 = 0x48
    struct UIEdgeInsets _contentEdgeInsets;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000cb302
@property(retain, nonatomic) MRURoutingSubtitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *protocolNameLabel; // @synthesize protocolNameLabel=_protocolNameLabel;
@property(retain, nonatomic) UIImageView *protocolIconView; // @synthesize protocolIconView=_protocolIconView;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController; // @synthesize subtitleStateController=_subtitleStateController;
@property(readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView; // @synthesize routingAccessoryView=_routingAccessoryView;
@property(copy, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
@property(retain, nonatomic) UIImage *protocolIcon; // @synthesize protocolIcon=_protocolIcon;
- (void)updateVisualStyling;	// IMP=0x00000000000cb166
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x00000000000cb154
- (void)routingSubtitleStateController:(id)arg1 didUpdateText:(id)arg2 icon:(id)arg3 accessory:(long long)arg4;	// IMP=0x00000000000cb0e1
- (void)prepareForReuse;	// IMP=0x00000000000cb05f
- (void)updateContentSizeCategory;	// IMP=0x00000000000cb004
- (void)setSubtitleAccessory:(long long)arg1;	// IMP=0x00000000000caf12
- (void)setIcon:(id)arg1;	// IMP=0x00000000000caed9
- (void)setSubtitle:(id)arg1;	// IMP=0x00000000000caea0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000caccf
- (void)layoutSubviews;	// IMP=0x00000000000ca234
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000c9e3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

