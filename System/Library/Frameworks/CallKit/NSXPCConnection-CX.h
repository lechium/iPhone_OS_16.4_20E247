//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class NSSet, NSString;

@interface NSXPCConnection (CX)
- (_Bool)cx_clientSandboxCanAccessFileURL:(id)arg1;	// IMP=0x003000000005b43b
@property(readonly, copy, nonatomic) NSSet *cx_capabilities;
@property(readonly, nonatomic, getter=cx_isProcessOnDemandInstallCapable) _Bool cx_processOnDemandInstallCapable;
@property(readonly, copy, nonatomic) NSString *cx_processName;
@property(readonly, copy, nonatomic) NSString *cx_developerTeamIdentifier;
@property(readonly, copy, nonatomic) NSString *cx_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *cx_applicationIdentifier;
@end
