//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDSharingRelayServerCreateMailboxResponse
{
    _Bool _supportsPushNotifications;	// 8 = 0x8
    NSString *_mailboxURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000026b2a7
@property(retain, nonatomic) NSString *mailboxURL; // @synthesize mailboxURL=_mailboxURL;
@property(nonatomic) _Bool supportsPushNotifications; // @synthesize supportsPushNotifications=_supportsPushNotifications;
- (id)initWithData:(id)arg1;	// IMP=0x001000000026afb8

@end
