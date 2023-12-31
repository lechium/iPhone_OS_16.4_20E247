//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, VUIAppContext;

@protocol VUIRootSplitViewController <NSObject>
- (void)handleDeepLinkURL:(NSURL *)arg1 forBarItemIdentifier:(NSString *)arg2;
- (void)updateWithBarItems:(NSArray *)arg1 setSelectedIndexFromDefaults:(_Bool)arg2 appContext:(VUIAppContext *)arg3;

@optional
- (double)containerWidth;
@end

