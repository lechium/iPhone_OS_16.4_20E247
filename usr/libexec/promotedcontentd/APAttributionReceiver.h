//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APAttributionAnalytics, APXPCConnection, NSString, Protocol;

@interface APAttributionReceiver : NSObject
{
    APXPCConnection *_connection;	// 8 = 0x8
    APAttributionAnalytics *_analytics;	// 16 = 0x10
    double _responseTime;	// 24 = 0x18
    unsigned long long _serverRetries;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001e50e
@property(nonatomic) unsigned long long serverRetries; // @synthesize serverRetries=_serverRetries;
@property double responseTime; // @synthesize responseTime=_responseTime;
@property(retain, nonatomic) APAttributionAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) APXPCConnection *connection; // @synthesize connection=_connection;
- (void)terminateConnection;	// IMP=0x001000000001e424
- (void)connectionInvalidated;	// IMP=0x001000000001e412
- (void)connectionInterrupted;	// IMP=0x001000000001e400
- (id)remoteObjectInterface;	// IMP=0x001000000001e3ef
@property(readonly) Protocol *exportedInterface;
@property(readonly) id exportedObject;
- (void)attributionAnalytics:(unsigned long long)arg1 end:(unsigned long long)arg2 Handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e29b
- (void)_continueAttribution:(id)arg1 token:(id)arg2 error:(id)arg3 constructionWithCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001d394
- (void)attributionTokenCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c996
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000001c911

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
