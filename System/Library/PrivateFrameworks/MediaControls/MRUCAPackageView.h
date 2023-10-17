//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAPackage, CAStateController, MRUCAPackageAsset, NSString;

__attribute__((visibility("hidden")))
@interface MRUCAPackageView : UIView
{
    MRUCAPackageAsset *_asset;	// 8 = 0x8
    NSString *_glyphState;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    CAStateController *_stateController;	// 32 = 0x20
    CAPackage *_package;	// 40 = 0x28
    CALayer *_packageLayer;	// 48 = 0x30
    struct CATransform3D _permanentTransform;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000007e89f
@property(nonatomic) struct CATransform3D permanentTransform; // @synthesize permanentTransform=_permanentTransform;
@property(retain, nonatomic) CALayer *packageLayer; // @synthesize packageLayer=_packageLayer;
@property(retain, nonatomic) CAPackage *package; // @synthesize package=_package;
@property(retain, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) MRUCAPackageAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) NSString *packageName;
- (void)updateFilter;	// IMP=0x000000000007e524
- (void)clear;	// IMP=0x000000000007e30e
- (void)setTintColor:(id)arg1;	// IMP=0x000000000007e2cd
- (void)layoutSubviews;	// IMP=0x000000000007dcfb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007dc87
- (void)mru_applyVisualStylingWithColor:(id)arg1 alpha:(double)arg2 blendMode:(long long)arg3;	// IMP=0x0000000000056ef2
- (void)mt_applyVisualStyling:(id)arg1;	// IMP=0x0000000000056e84

@end
