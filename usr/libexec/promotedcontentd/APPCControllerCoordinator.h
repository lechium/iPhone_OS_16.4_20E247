//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairRecursiveLock, NSMutableSet, NSString, NSUUID;

@interface APPCControllerCoordinator : NSObject
{
    _Bool _hasRunningLandingPageRequest;	// 8 = 0x8
    NSUUID *_requesterID;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    CDUnknownBlockType _deliveryBlock;	// 32 = 0x20
    NSMutableSet *_tokens;	// 40 = 0x28
    APUnfairRecursiveLock *_lock;	// 48 = 0x30
    id _mediaServiceSession;	// 56 = 0x38
    Class _mediaServiceRequestClass;	// 64 = 0x40
}

+ (void)_sendFirstRequestMetricIfRequiredForPlacement:(unsigned long long)arg1;	// IMP=0x00400000000f19aa
+ (id)_addToCacheContentData:(id)arg1 context:(id)arg2;	// IMP=0x00100000000f03fb
- (void).cxx_destruct;	// IMP=0x00200000000f22a5
@property(retain, nonatomic) Class mediaServiceRequestClass; // @synthesize mediaServiceRequestClass=_mediaServiceRequestClass;
@property(nonatomic) __weak id mediaServiceSession; // @synthesize mediaServiceSession=_mediaServiceSession;
@property(nonatomic) _Bool hasRunningLandingPageRequest; // @synthesize hasRunningLandingPageRequest=_hasRunningLandingPageRequest;
@property(readonly, nonatomic) APUnfairRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableSet *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) CDUnknownBlockType deliveryBlock; // @synthesize deliveryBlock=_deliveryBlock;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)createContentDatasFromContext:(id)arg1 unfilledReasonCode:(long long)arg2 types:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000f1dce
- (_Bool)isBlockedForNewsSubscriber:(id)arg1 bundleID:(id)arg2;	// IMP=0x00100000000f1b7c
- (unsigned long long)_getAppStorePlacement:(id)arg1;	// IMP=0x00100000000f18e1
- (void)_requestFromMediaApi:(id)arg1 params:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f1546
- (void)_requestFromMediaWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f149f
- (void)requestFromLegacyInterfaceForPromotedContents:(id)arg1 context:(id)arg2 withToken:(id)arg3 andBundleID:(id)arg4 clientInfo:(id)arg5 idAccount:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000f0fa2
- (id)queryCacheForRequests:(id)arg1 managedContext:(id)arg2;	// IMP=0x00100000000f0d5c
- (void)findQualifiedPlacementFromCachedData:(id)arg1 forRequests:(id)arg2;	// IMP=0x00100000000f0a04
- (void)handleNewPromotedContent:(id)arg1 adsReceived:(unsigned long long *)arg2 adsRequested:(unsigned long long)arg3 token:(id)arg4 context:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000f0617
- (void)dealloc;	// IMP=0x00100000000ef978

@end

