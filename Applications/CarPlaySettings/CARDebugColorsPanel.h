//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, NSArray, NSString, UIView;

@interface CARDebugColorsPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    UIView *_phoneView;	// 16 = 0x10
    NSArray *_cellSpecifiers;	// 24 = 0x18
    NSArray *_colorModels;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000ab98
@property(readonly) NSArray *colorModels; // @synthesize colorModels=_colorModels;
- (void)colorViewWasTapped:(id)arg1;	// IMP=0x001000000000ab10
- (unsigned long long)numberOfColumns;	// IMP=0x001000000000ab05
- (id)cellSpecifiers;	// IMP=0x001000000000a763
- (void)viewDidLoad;	// IMP=0x001000000000a734
- (id)initWithPanelController:(id)arg1;	// IMP=0x0010000000009ee1
- (void)_phoneButtonPressed:(id)arg1;	// IMP=0x0010000000009ded
- (id)phoneView;	// IMP=0x001000000000967a
- (id)cellSpecifier;	// IMP=0x0010000000009523

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
