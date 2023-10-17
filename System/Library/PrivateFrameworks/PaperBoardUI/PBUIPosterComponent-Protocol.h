//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperBoardUI/PBUIWallpaperVariantIdentifying-Protocol.h>

@class UIColor, _UILegibilitySettings;
@protocol PBUIPosterComponentDelegate;

@protocol PBUIPosterComponent <PBUIWallpaperVariantIdentifying>
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) double averageContrast;
@property(readonly, nonatomic) UIColor *averageColor;
@property(readonly, nonatomic) long long variant;
@property(nonatomic) __weak id <PBUIPosterComponentDelegate> delegate;
@end
