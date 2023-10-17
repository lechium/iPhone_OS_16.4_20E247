//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMPOSIXUser, MCMUserIdentityCache, NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MCMClientConnectionContext : NSObject
{
    NSString *_personaUniqueString;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    MCMUserIdentityCache *_userIdentityCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008e83c
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic) MCMPOSIXUser *posixUser;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e5a6
- (id)clientConnectionContextForCurrentThread;	// IMP=0x000000000008e509
- (id)initForCurrentThreadContextWithXPCConnection:(id)arg1 userIdentityCache:(id)arg2;	// IMP=0x000000000008e427

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
