//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SARAnalytics : NSObject
{
}

+ (void)captureResumePreviousNavigation;	// IMP=0x00400000005e4a3a
+ (void)captureListStartDetourToMapItem:(id)arg1 index:(long long)arg2;	// IMP=0x00100000005e48df
+ (void)captureMapTapToHideTray;	// IMP=0x00100000005e488e
+ (void)captureMapSelectMapItem:(id)arg1;	// IMP=0x00100000005e47de
+ (void)captureListTapToHideTray;	// IMP=0x00100000005e478d
+ (void)captureListTapToShowTray;	// IMP=0x00100000005e473c
+ (void)captureListScrollDown;	// IMP=0x00100000005e46eb
+ (void)captureListScrollUp;	// IMP=0x00100000005e469a
+ (void)captureCancelSearchResults;	// IMP=0x00100000005e4649
+ (void)captureShowSearchResults:(id)arg1;	// IMP=0x00100000005e43b7
+ (void)captureSelectCategory:(id)arg1 fromDisplayedCategories:(id)arg2 isAddStopTray:(_Bool)arg3;	// IMP=0x00100000005e42ea
+ (void)captureAddStopAnalyticsForTransportType:(int)arg1;	// IMP=0x00100000005e424e

@end

