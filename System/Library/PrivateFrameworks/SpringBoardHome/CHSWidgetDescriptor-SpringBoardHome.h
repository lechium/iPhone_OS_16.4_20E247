//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChronoServices/CHSWidgetDescriptor.h>

@class NSString, UIColor;
@protocol SBLeafIconDataSource;

@interface CHSWidgetDescriptor (SpringBoardHome)
- (void)_loadColorsFromShortcutsForBundleIdentifier:(id)arg1 backgroundColor:(id *)arg2 accentColor:(id *)arg3;	// IMP=0x002000000019517a
- (void)_loadColorsFromExtensionForBundleIdentifier:(id)arg1 backgroundColor:(id *)arg2 accentColor:(id *)arg3;	// IMP=0x0020000000194e74
- (void)_loadColorsBackgroundColor:(id *)arg1 accentColor:(id *)arg2;	// IMP=0x0020000000194d1c
@property(readonly, copy, nonatomic) UIColor *mostInterestingColor;
@property(readonly, copy, nonatomic) UIColor *accentColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor;
@property(readonly, copy, nonatomic) NSString *sbh_galleryItemIdentifier;
@property(readonly, nonatomic) id <SBLeafIconDataSource> sbh_iconDataSource;
@property(readonly, nonatomic) _Bool sbh_canBeAddedToStack;
@property(readonly, nonatomic) unsigned long long sbh_supportedSizeClasses;
@property(readonly, copy, nonatomic) NSString *sbh_widgetDescription;
@property(readonly, copy, nonatomic) NSString *sbh_widgetName;
@property(readonly, copy, nonatomic) NSString *sbh_appName;
- (id)sanitizedDescriptor;	// IMP=0x002000000023eb84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
