//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKMapItem, NSString, UIActivityIndicatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface MKPhotoBigAttributionView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    _Bool _needsImageLoad;	// 24 = 0x18
    UIActivityIndicatorView *_spinner;	// 32 = 0x20
    long long _context;	// 40 = 0x28
    long long _type;	// 48 = 0x30
    MKMapItem *_mapItem;	// 56 = 0x38
    UIView *_contentView;	// 64 = 0x40
}

+ (id)bigAttributionViewForMapItem:(id)arg1 attributionType:(long long)arg2 isFirstParty:(_Bool)arg3 context:(long long)arg4;	// IMP=0x00100000001e6666
- (void).cxx_destruct;	// IMP=0x00000000001e73fc
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)layoutSubviews;	// IMP=0x00000000001e7366
- (void)willStartAnimatingActivityIndicatorView;	// IMP=0x00000000001e7360
- (void)didUpdateMapItem;	// IMP=0x00000000001e735a
- (void)didUpdateAttributionViewType;	// IMP=0x00000000001e7354
- (void)didEndAnimatingActivityIndicatorView;	// IMP=0x00000000001e734e
- (void)updateBackgroundIfNeeded;	// IMP=0x00000000001e7052
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;	// IMP=0x00000000001e6f6d
- (void)beginAnimatingActivityIndicator;	// IMP=0x00000000001e6f20
- (id)initWithContext:(long long)arg1;	// IMP=0x00000000001e66ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
