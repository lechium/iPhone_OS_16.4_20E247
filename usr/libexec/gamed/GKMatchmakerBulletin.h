//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKMatchmakerBulletin
{
    NSString *_matchID;	// 16 = 0x10
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00400000001fa7a1
- (void).cxx_destruct;	// IMP=0x00200000001fb14e
@property(retain, nonatomic) NSString *matchID; // @synthesize matchID=_matchID;
- (void)executeBulletinWithBulletinController:(id)arg1;	// IMP=0x00100000001fac91

@end
