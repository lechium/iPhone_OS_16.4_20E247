//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PUParallaxLayerStackDebugPaletteView, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface PUParallaxLayerStackDebugPaletteViewController : UIViewController
{
    UISegmentedControl *_switchControl;	// 8 = 0x8
    PUParallaxLayerStackDebugPaletteView *_colorBGPaletteView;	// 16 = 0x10
    PUParallaxLayerStackDebugPaletteView *_colorWashSinglePaletteView;	// 24 = 0x18
    PUParallaxLayerStackDebugPaletteView *_colorWashDuotonePaletteView;	// 32 = 0x20
    PUParallaxLayerStackDebugPaletteView *_customPaletteView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002e104f
@property(retain, nonatomic) PUParallaxLayerStackDebugPaletteView *customPaletteView; // @synthesize customPaletteView=_customPaletteView;
@property(retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashDuotonePaletteView; // @synthesize colorWashDuotonePaletteView=_colorWashDuotonePaletteView;
@property(retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashSinglePaletteView; // @synthesize colorWashSinglePaletteView=_colorWashSinglePaletteView;
@property(retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorBGPaletteView; // @synthesize colorBGPaletteView=_colorBGPaletteView;
@property(retain, nonatomic) UISegmentedControl *switchControl; // @synthesize switchControl=_switchControl;
- (void)modeChanged:(id)arg1;	// IMP=0x00000000002e0e3b
- (void)viewDidLoad;	// IMP=0x00000000002e0819
- (void)addSwitchableView:(id)arg1;	// IMP=0x00000000002e0469
- (id)init;	// IMP=0x00000000002e0436

@end

