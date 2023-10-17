//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSURL, NSURLAuthenticationChallenge, WKSecurityOrigin, WKWebsiteDataStore, _WKNotificationData;

@protocol _WKWebsiteDataStoreDelegate <NSObject>

@optional
- (void)websiteDataStore:(WKWebsiteDataStore *)arg1 workerOrigin:(WKSecurityOrigin *)arg2 updatedAppBadge:(NSNumber *)arg3;
- (void)websiteDataStore:(WKWebsiteDataStore *)arg1 showNotification:(_WKNotificationData *)arg2;
- (NSDictionary *)notificationPermissionsForWebsiteDataStore:(WKWebsiteDataStore *)arg1;
- (void)websiteDataStore:(WKWebsiteDataStore *)arg1 openWindow:(NSURL *)arg2 fromServiceWorkerOrigin:(WKSecurityOrigin *)arg3 completionHandler:(void (^)(WKWebView *))arg4;
- (void)didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1 completionHandler:(void (^)(long long, NSURLCredential *))arg2;
- (void)requestStorageSpace:(NSURL *)arg1 frameOrigin:(NSURL *)arg2 quota:(unsigned long long)arg3 currentSize:(unsigned long long)arg4 spaceRequired:(unsigned long long)arg5 decisionHandler:(void (^)(unsigned long long))arg6;
@end
