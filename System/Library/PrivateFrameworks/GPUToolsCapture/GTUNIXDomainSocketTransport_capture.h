//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSURL;
@protocol OS_dispatch_source;

@interface GTUNIXDomainSocketTransport_capture
{
    int _mode;	// 260 = 0x104
    NSObject<OS_dispatch_source> *_connSource;	// 264 = 0x108
}

- (void)_invalidate;	// IMP=0x000000000000d3a3
- (id)connect;	// IMP=0x000000000000d334
- (void)_connectClient:(id)arg1 future:(id)arg2;	// IMP=0x000000000000d03d
- (void)_connectServer:(id)arg1 future:(id)arg2;	// IMP=0x000000000000cc16
@property(retain, nonatomic) NSURL *url; // @dynamic url;
- (id)initWithMode:(int)arg1;	// IMP=0x000000000000ca78

@end
