//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSString, UITabBarItem;

@protocol PXTabBarItemKeyCommandDelegate <NSObject>
- (NSString *)localizedDiscoverabilityTitleForTabBarItem:(UITabBarItem *)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)shouldExposeShortcutForTabBarItem:(UITabBarItem *)arg1 atIndex:(unsigned long long)arg2;
@end

