//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class UIViewController;

@interface UIWindow (VideosUI)
+ (double)_OSXNumColumnsForGridStyle:(long long)arg1 gridType:(long long)arg2 sizeClass:(long long)arg3;	// IMP=0x002000000012023b
+ (double)_newNumColumnsForGridStyle:(long long)arg1 gridType:(long long)arg2 sizeClass:(long long)arg3;	// IMP=0x002000000011e2ac
+ (double)_numColumnsForGridStyle:(long long)arg1 gridType:(long long)arg2 sizeClass:(long long)arg3;	// IMP=0x002000000011c38b
+ (struct UIEdgeInsets)_safeAreaInsetsForDeviceWithWindowWidth:(double)arg1;	// IMP=0x002000000011c339
+ (long long)vui_interfaceOrientation;	// IMP=0x002000000011c27d
+ (id)vui_keyWindow;	// IMP=0x002000000011c193
+ (double)_vui_interitemSpaceForSizeClass:(long long)arg1 gridType:(long long)arg2;	// IMP=0x002000000011c173
+ (long long)_vui_currentSizeClassForWindowWidth:(double)arg1 safeArea:(struct UIEdgeInsets)arg2;	// IMP=0x002000000011c088
+ (long long)vui_currentSizeClassForWindowWidth:(double)arg1;	// IMP=0x002000000011c008
+ (long long)vui_currentSizeClass;	// IMP=0x002000000011bf70
+ (double)vui_collectionInteritemSpace:(long long)arg1 gridType:(long long)arg2 windowWidth:(double)arg3;	// IMP=0x002000000011bf0c
+ (double)vui_collectionInteritemSpace:(long long)arg1 gridType:(long long)arg2;	// IMP=0x002000000011be60
+ (double)_vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2 numGridColumns:(unsigned long long)arg3 windowWidth:(double)arg4 sizeClass:(long long)arg5 padding:(struct UIEdgeInsets)arg6;	// IMP=0x002000000011bcc5
+ (double)vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2 numGridColumns:(unsigned long long)arg3 windowWidth:(double)arg4;	// IMP=0x002000000011bbe6
+ (double)vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2 numGridColumns:(unsigned long long)arg3;	// IMP=0x002000000011bb30
+ (double)vui_itemWidthForGridStyle:(long long)arg1 gridType:(long long)arg2;	// IMP=0x002000000011bafe
+ (double)vui_numColumnsForGridStyle:(long long)arg1 gridType:(long long)arg2 sizeClass:(long long)arg3;	// IMP=0x002000000011bac3
+ (struct UIEdgeInsets)_paddingForSizeClass:(long long)arg1 safeArea:(struct UIEdgeInsets)arg2;	// IMP=0x002000000011ba65
+ (struct UIEdgeInsets)vui_paddingForSizeClass:(long long)arg1;	// IMP=0x002000000011ba03
+ (struct UIEdgeInsets)vui_paddingForWindowWidth:(double)arg1;	// IMP=0x002000000011b933
+ (struct UIEdgeInsets)vui_padding;	// IMP=0x002000000011b883
@property(nonatomic, getter=isVuiHidden) _Bool vuiHidden;
@property(retain) UIViewController *vuiRootViewController;
@end

