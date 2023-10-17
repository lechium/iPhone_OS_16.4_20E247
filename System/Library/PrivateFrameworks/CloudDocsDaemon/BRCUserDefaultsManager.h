//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCUserDefaultsManager : NSObject
{
    NSURL *_serverConfigurationURL;	// 8 = 0x8
    NSDictionary *_serverConfigurationDict;	// 16 = 0x10
    NSMutableDictionary *_userDefaultsCache;	// 24 = 0x18
    CDUnknownBlockType _configurationPlistDidUpdateBlock;	// 32 = 0x20
    NSOperationQueue *_downloadQueue;	// 40 = 0x28
    NSURLSession *_urlSession;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
    id <NSObject> _defaultsDidChangeNotificationObserver;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002d7732
- (void)dealloc;	// IMP=0x00000000002d76bc
- (void)reset;	// IMP=0x00000000002d765b
- (void)_reset;	// IMP=0x00000000002d75c2
- (void)_loadServerConfigurationDictionary;	// IMP=0x00000000002d717d
- (void)_parsePlistWithURL:(id)arg1;	// IMP=0x00000000002d6d9a
- (void)loadCachedServerConfiguration;	// IMP=0x00000000002d6bba
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000002d68c3
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00000000002d6847
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00000000002d64da
- (void)setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d636c
- (void)_setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d5cce
- (id)defaultsForIdentifier:(id)arg1;	// IMP=0x00000000002d5a58
- (id)initWithPersonaID:(id)arg1;	// IMP=0x00000000002d51ca
- (void)_prepopulateGlobalUserDefaults;	// IMP=0x00000000002d50c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
