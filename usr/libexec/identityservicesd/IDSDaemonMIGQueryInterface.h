//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol IDSDaemonMIGQueryInterfaceDelegate, IDSXPCConnectionProtocol;

@interface IDSDaemonMIGQueryInterface : NSObject
{
    id <IDSXPCConnectionProtocol> _server;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    MISSING_TYPE *_shuttingDown;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000005ac3e0
- (void).cxx_destruct;	// IMP=0x00200000005ae490
@property __weak id <IDSDaemonMIGQueryInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)denyIncomingGrantRequests;	// IMP=0x00100000005ae3d0
- (void)acceptIncomingGrantRequests;	// IMP=0x00100000005ae2e0
- (void)__setupServer;	// IMP=0x00100000005ac4a0

@end

