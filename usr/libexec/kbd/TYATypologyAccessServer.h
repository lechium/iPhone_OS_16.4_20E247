//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface TYATypologyAccessServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
}

+ (id)sharedServer;	// IMP=0x002000000000b0ad
- (void).cxx_destruct;	// IMP=0x002000000000b5c4
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_checkEntitlementForAddEntryStringWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x001000000000b4aa
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000b26c
- (void)dealloc;	// IMP=0x001000000000b212
- (MISSING_TYPE *)init;	// IMP=0x001000000000b102

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

