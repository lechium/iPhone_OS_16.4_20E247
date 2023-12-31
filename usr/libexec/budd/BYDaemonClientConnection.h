//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BYDaemonContext, NSXPCConnection;

@interface BYDaemonClientConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    BYDaemonContext *_context;	// 16 = 0x10
}

+ (id)daemonProtocolInterface;	// IMP=0x0040000000001843
- (void).cxx_destruct;	// IMP=0x002000000000188d
@property(retain, nonatomic) BYDaemonContext *context; // @synthesize context=_context;
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000017db

@end

