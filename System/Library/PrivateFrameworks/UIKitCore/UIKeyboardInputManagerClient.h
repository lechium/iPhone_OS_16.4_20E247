//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0060000000c1b571
- (void).cxx_destruct;	// IMP=0x0000000000c1bb72
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleError:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000c1b9bd
- (void)handleRequest:(id)arg1;	// IMP=0x0000000000c1b80b
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000c1b74d
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000c1b6e6
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000c1b675
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000c1b61a
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000c1b5c7
- (id)init;	// IMP=0x0000000000c1b396
- (void)dealloc;	// IMP=0x0000000000c1b354

@end

