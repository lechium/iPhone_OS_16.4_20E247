//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKThirdPartyPhotoBigAttributionView
{
    _MKUILabel *_firstLineLabel;	// 8 = 0x8
    _MKUILabel *_secondLineLabel;	// 16 = 0x10
    UIView *_labelsView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000993b8
- (void)didEndAnimatingActivityIndicatorView;	// IMP=0x0000000000099393
- (void)willStartAnimatingActivityIndicatorView;	// IMP=0x0000000000099373
- (void)didUpdateAttributionViewType;	// IMP=0x0000000000099361
- (void)didUpdateMapItem;	// IMP=0x000000000009934f
- (id)secondLineLabelFont;	// IMP=0x00000000000992fc
- (id)firstLineLabelFont;	// IMP=0x000000000009929e
- (void)updateInfoAttributionString;	// IMP=0x0000000000098e6a
- (id)initWithContext:(long long)arg1;	// IMP=0x0000000000098344

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

