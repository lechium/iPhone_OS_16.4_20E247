//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UILegibilitySettings;

@interface LUILegibilityObserver : NSObject
{
    id mWallpaperObserver;	// 8 = 0x8
    _UILegibilitySettings *mLockScreenWallpaperLegibilitySettings;	// 16 = 0x10
    _UILegibilitySettings *mHomeScreenWallpaperLegibilitySettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x004000000000883b
- (void).cxx_destruct;	// IMP=0x0020000000008b6b
- (void)_refreshLegibilitySettings;	// IMP=0x0010000000008b1d
@property(readonly, nonatomic) _UILegibilitySettings *homeScreenWallpaperLegibilitySettings;
@property(readonly, nonatomic) _UILegibilitySettings *lockScreenWallpaperLegibilitySettings;
- (void)dealloc;	// IMP=0x0010000000008a32
- (id)init;	// IMP=0x0010000000008890

@end
