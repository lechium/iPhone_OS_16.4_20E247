//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKChallengeReceivedBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0040000000223087
- (void)handleDeclineAction;	// IMP=0x0040000000224b15
- (void)handleAction:(id)arg1;	// IMP=0x00100000002247c2
- (unsigned long long)launchEventType;	// IMP=0x00100000002247ba
- (void)assembleBulletin;	// IMP=0x0010000000224198
- (void)notifyClient:(id)arg1;	// IMP=0x0010000000223fc3
- (id)init;	// IMP=0x0000000000223058

@end

