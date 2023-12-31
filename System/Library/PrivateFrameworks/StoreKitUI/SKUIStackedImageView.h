//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPUBorderConfiguration, MPUBorderDrawingCache, MPUStackView, NSString, UIView;

__attribute__((visibility("hidden")))
@interface SKUIStackedImageView
{
    MPUBorderConfiguration *_borderConfiguration;	// 8 = 0x8
    long long _stackDepth;	// 16 = 0x10
    MPUStackView *_stackView;	// 24 = 0x18
    MPUBorderDrawingCache *_borderDrawingCache;	// 32 = 0x20
}

+ (struct SKUIStackedImageConfiguration)_configurationForSize:(struct CGSize)arg1;	// IMP=0x0010000000139d8e
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x001000000013922c
- (void).cxx_destruct;	// IMP=0x0000000000139e7b
@property(retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache; // @synthesize borderDrawingCache=_borderDrawingCache;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;	// IMP=0x0000000000139d6e
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000001399b7
- (long long)numberOfItemsInStackView:(id)arg1;	// IMP=0x00000000001399a6
- (void)layoutSubviews;	// IMP=0x000000000013987e
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x0000000000139804
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000013976a
@property(nonatomic) struct CGPoint vanishingPoint;
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x0000000000139730
@property(nonatomic) __weak UIView *perspectiveTargetView;
- (void)setImageSize:(struct CGSize)arg1;	// IMP=0x00000000001395d8
- (void)setImage:(id)arg1;	// IMP=0x000000000013943a
- (void)performCompressionAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001392a3
- (void)dealloc;	// IMP=0x00000000001391e1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001390af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

