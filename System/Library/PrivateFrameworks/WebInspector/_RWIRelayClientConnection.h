//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _RWIRelayClientConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _RWIRelayClientConnection : NSObject
{
    _Bool _closed;	// 8 = 0x8
    _Bool _sleeping;	// 9 = 0x9
    id <_RWIRelayClientConnectionDelegate> _delegate;	// 16 = 0x10
    NSString *_tag;	// 24 = 0x18
}

@property(nonatomic) _Bool sleeping; // @synthesize sleeping=_sleeping;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) id <_RWIRelayClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000032c7
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000003176
- (void)dispatchRelayMessage:(id)arg1;	// IMP=0x0000000000002f40
- (void)closeInternal;	// IMP=0x0000000000002f0c
- (void)sendMessage:(id)arg1;	// IMP=0x0000000000002ed8
- (void)closeFromConnection;	// IMP=0x0000000000002ec1
- (void)close;	// IMP=0x0000000000002ead
- (void)_closeAndNotifyDelegate:(_Bool)arg1;	// IMP=0x0000000000002e63
- (void)dealloc;	// IMP=0x0000000000002e1b
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000002dde

@end
