//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface _EXConnectionActiveQueryObserver : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000187d4
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x0000000000018722
- (void)query:(id)arg1 resultDidUpdate:(id)arg2;	// IMP=0x0000000000018573
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000184a8
- (unsigned long long)hash;	// IMP=0x0000000000018464
- (id)initWitConnection:(id)arg1;	// IMP=0x000000000001837a

@end
