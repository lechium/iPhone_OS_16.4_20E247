//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackgroundColorButton, MKETAProvider, NSString, UIButton;
@protocol SARSearchResultTableViewCellDelegate;

@interface SARSearchResultTableViewCell
{
    id <SARSearchResultTableViewCellDelegate> _delegate;	// 232 = 0xe8
    BackgroundColorButton *_actionButton;	// 240 = 0xf0
    MKETAProvider *_etaProvider;	// 248 = 0xf8
    double _travelTime;	// 256 = 0x100
    UIButton *_addStopButton;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0020000000777cb8
@property(retain, nonatomic) UIButton *addStopButton; // @synthesize addStopButton=_addStopButton;
@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(retain, nonatomic) MKETAProvider *etaProvider; // @synthesize etaProvider=_etaProvider;
@property(readonly, nonatomic) BackgroundColorButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <SARSearchResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;	// IMP=0x0010000000777b44
- (void)_buttonAction;	// IMP=0x0010000000777aa7
- (id)attributedSecondPartDetailString;	// IMP=0x00100000007777d8
- (id)attributedFirstPartDetailString;	// IMP=0x00100000007776e7
- (void)updateTheme;	// IMP=0x00100000007774aa
- (void)setupPlaceContextContent:(id)arg1;	// IMP=0x0010000000777470
- (double)trailingMargin;	// IMP=0x0010000000777462
- (id)titleRegularFont;	// IMP=0x0010000000777449
- (id)titleFont;	// IMP=0x0010000000777430
- (void)ETAProviderUpdated:(id)arg1;	// IMP=0x001000000077736b
- (id)attributedTitleString;	// IMP=0x0010000000777203
- (void)didUpdateMapItem;	// IMP=0x001000000077701b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000007767b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
