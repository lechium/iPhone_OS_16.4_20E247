//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AKColorPaletteView, AKController, NSString, UIColor;

@interface AKColorPickerViewController : UIViewController
{
    UIColor *_color;	// 8 = 0x8
    long long _colorAttributeTag;	// 16 = 0x10
    AKController *_controller;	// 24 = 0x18
    AKColorPaletteView *_colorPalette;	// 32 = 0x20
    long long _tag;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000050d5
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) AKColorPaletteView *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long colorAttributeTag; // @synthesize colorAttributeTag=_colorAttributeTag;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)syncTextAttributesToUI:(id)arg1;	// IMP=0x0000000000005025
- (id)convertTextAttributes:(id)arg1;	// IMP=0x0000000000004edf
- (void)valueChanged:(id)arg1;	// IMP=0x0000000000004d3b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000004ca8
- (void)viewDidLoad;	// IMP=0x0000000000004a1c
- (id)initWithController:(id)arg1;	// IMP=0x000000000000498b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

