//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditButtonCenteredToolbar
{
    UIView *_centerView;	// 216 = 0xd8
    NSArray *_leadingViews;	// 224 = 0xe0
    NSArray *_trailingViews;	// 232 = 0xe8
    NSArray *_leadingLayoutConstraints;	// 240 = 0xf0
    NSArray *_trailingLayoutConstraints;	// 248 = 0xf8
    NSArray *_centerLayoutConstraints;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x0000000000336bc5
- (void)_invalidateAllConstraints;	// IMP=0x0000000000336afc
- (void)_addCenterConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;	// IMP=0x00000000003363f0
- (void)_addTrailingConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;	// IMP=0x0000000000335734
- (void)_addLeadingConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;	// IMP=0x00000000003349e4
- (void)setCenterView:(id)arg1 leadingViews:(id)arg2 trailingViews:(id)arg3;	// IMP=0x000000000033441b
@property(readonly, nonatomic) double interItemSpacing;

@end
